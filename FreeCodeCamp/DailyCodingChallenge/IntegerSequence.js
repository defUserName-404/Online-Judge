//! 2025-10-27
function sequence(n) {
    let result = "";
    for (let i = 1; i <= parseInt(n); i++) {
        result += i.toString();
    }
    return result;
}