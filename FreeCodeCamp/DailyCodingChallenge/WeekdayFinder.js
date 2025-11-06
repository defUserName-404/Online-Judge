// ! 2025-11-06
function getWeekday(dateString) {
    const dayNames = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'];
    return dayNames.at(new Date(dateString).getDay());
}

console.log(getWeekday("2025-11-06"));