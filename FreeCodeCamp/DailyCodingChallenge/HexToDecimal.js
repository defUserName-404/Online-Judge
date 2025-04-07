// ! 2025-10-11
// ! Given a hexadecimal string, return the decimal equivalent.
// ! The string will contain only 0-9 and A-F.
// ! For example, given "1A" return 26.

function hexToDecimal(hex) {
    return parseInt(hex, 16);
}

module.exports = hexToDecimal;