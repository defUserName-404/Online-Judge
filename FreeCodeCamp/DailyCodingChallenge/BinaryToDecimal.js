// ! 2025-10-01
// ? Given a binary string, return the decimal equivalent.
// ? The string will contain only 0s and 1s.
// ? For example, given "1101" return 13.

// * Approach 1
function toDecimal(binary) {
    return parseInt(binary, 2);
}

module.exports = toDecimal;