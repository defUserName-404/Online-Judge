// ! 2025-10-28

function navigate(commands) {
    let backStack = ['Home'];
    let forwardStack = [];
    for (const command of commands) {
        if (command.startsWith('Visit')) {
            // start from index 7 since "Visit" is 5 characters long and there is one space
            const page = command.slice(6);
            backStack.push(page);
            forwardStack = [];
        } else if (command === 'Back' && backStack.length > 1) {
            const page = backStack.pop();
            forwardStack.push(page);
        } else if (command === 'Forward' && forwardStack.length > 0) {
            const page = forwardStack.pop();
            backStack.push(page);
        }
    }
    return backStack[backStack.length - 1];
}
