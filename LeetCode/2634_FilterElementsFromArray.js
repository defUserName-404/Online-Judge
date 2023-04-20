/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
const filter = function (arr, fn) {
	return arr.filter((x, i) => fn(x, i));
};
