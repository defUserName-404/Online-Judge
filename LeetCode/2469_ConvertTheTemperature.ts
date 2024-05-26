/**
 * @param {number} celsius
 * @return {number[]}
 */
const convertTemperature = function (celsius: number): number[] {
    const fahrenheit = celsius * 1.8 + 32.0;
    const kelvin = celsius - 273.15;
    return [kelvin, fahrenheit];
};
