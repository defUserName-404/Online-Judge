// ! 2025-11-05
function buildMatrix(rows, cols) {
    return Array.from({length: rows}, () => new Array(cols).fill(0));
}