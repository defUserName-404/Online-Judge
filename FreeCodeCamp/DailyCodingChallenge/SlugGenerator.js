//// ! 2025-09-17
//*
// ? Given a string, return a URL-friendly version of the string using the following constraints:
// * - All letters should be lowercase.
// * - All characters that are not letters, numbers, or spaces should be removed.
// * - All spaces should be replaced with the URL-encoded space code %20.
// * - Consecutive spaces should be replaced with a single %20.
// * - The returned string should not have leading or trailing %20.
//*
function generateSlug(str) {
    return str
        .trim()
        .toLowerCase()
        .replace(/[^a-z0-9\s]/g, '')
        .replace(/\s+/g, '%20');
}

module.exports = generateSlug;

console.log(generateSlug("HelloWorld"));
console.log(generateSlug("Hello World!"));
console.log(generateSlug(" hello-world "));
console.log(generateSlug("hello  world"));
console.log(generateSlug("  ?H^3-1*1]0! W[0%R#1]D  "));