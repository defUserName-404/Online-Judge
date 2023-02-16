/**
 * @param {number} celsius
 * @return {number[]}
 */
var convertTemperature = function (celsius) {
	const fahrenheit = celsius * 1.8 + 32.0;
	const kelvin = celsius - 273.15;

	return new Array(kelvin, fahrenheit);
};
