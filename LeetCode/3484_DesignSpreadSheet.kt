class Spreadsheet(rows: Int) {
    private val data = Array(rows + 1) { IntArray(26) }

    fun setCell(cell: String, value: Int) {
        val (row, col) = parseCell(cell)
        data[row][col] = value
    }

    fun resetCell(cell: String) {
        val (row, col) = parseCell(cell)
        data[row][col] = 0
    }

    fun getValue(formula: String): Int {
        val expr = formula.removePrefix("=")
        val plusIndex = expr.indexOf('+')
        val left = expr.substring(0, plusIndex)
        val right = expr.substring(plusIndex + 1)
        return getOperandValue(left) + getOperandValue(right)
    }

    private fun getOperandValue(token: String): Int {
        return if (token[0] in 'A'..'Z') {
            val (row, col) = parseCell(token)
            data[row][col]
        } else {
            token.toInt()
        }
    }

    private fun parseCell(cell: String): Pair<Int, Int> {
        val col = cell[0] - 'A'
        val row = cell.substring(1).toInt()
        return row to col
    }
}

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * var obj = Spreadsheet(rows)
 * obj.setCell(cell,value)
 * obj.resetCell(cell)
 * var param_3 = obj.getValue(formula)
 */
