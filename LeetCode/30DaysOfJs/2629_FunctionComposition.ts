type F = (x: number) => number;

/**
 * Original Solution using `reduceRight`.
 * This is a very concise and functional way to solve the problem.
 * `reduceRight` iterates the array from right to left, which is exactly
 * the order of operations needed for function composition f(g(h(x))).
 *
 * - `functions.reduceRight((acc, fn) => fn(acc), x)`
 *   - `acc` (accumulator): The value returned from the previous function call.
 *   - `fn` (currentValue): The current function from the array.
 *   - `x` (initialValue): The starting value for the accumulator.
 */
function compose(functions: F[]): F {
  return function (x: number) {
    return functions.reduceRight((acc, fn) => fn(acc), x);
  };
}

/**
 * Alternative 1: Using a simple `for` loop.
 * This approach is often more readable for developers who are less familiar
 * with functional programming concepts like `reduce`. It explicitly shows
 * the step-by-step application of each function.
 */
function compose1(functions: F[]): F {
  return function (x: number) {
    if (functions.length === 0) {
      return x;
    }
    let result = x;
    for (let i = functions.length - 1; i >= 0; i--) {
      result = functions[i](result);
    }
    return result;
  };
}

/**
 * Alternative 2: One-liner using arrow functions (omitting `return`).
 * It's functionally identical to the original `compose` function.
 */
const compose2: (functions: F[]) => F = (functions) => (x) =>
    functions.reduceRight((acc, fn) => fn(acc), x);

/**
 * Example Usage:
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */
