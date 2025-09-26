// ! 2025-10-17
// ? Given a string of credit card numbers, return a masked version of it using the following constraints:
// ? The string will contain four sets of four digits (0-9), with all sets being separated by a single space, or a single hyphen (-).
// ? Replace all numbers, except the last four, with an asterisk (*).
// ? Leave the remaining characters unchanged.
// ? For example, given "4012-8888-8888-1881" return "****-****-****-1881".
//

// * Approach 1
// function mask(card) {
//     let result = '';
//     for (let i = 0; i < card.length - 4; i++) {
//         const ch = card.charAt(i);
//         if (ch !== ' ' && ch !== '-') {
//             result += '*';
//         } else {
//             result += ch;
//         }
//     }
//     result += card.slice(-4);
//     return result;
// }

// Approach 2
function mask(card) {
    return card
        .split('')
        .map((ch, i) =>
            i < card.length - 4 && /\d/.test(ch) ? '*' : ch
        )
        .join('');
}

module.exports = mask;