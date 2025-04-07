const hexToDecimal = require('./HexToDecimal');

describe('hexToDecimal', () => {
    test('should convert a simple hexadecimal string to decimal', () => {
        expect(hexToDecimal('1A')).toBe(26);
    });

    test('should convert another hexadecimal string to decimal', () => {
        expect(hexToDecimal('F')).toBe(15);
    });

    test('should handle hexadecimal string with only zeros', () => {
        expect(hexToDecimal('00')).toBe(0);
    });

    test('should handle a longer hexadecimal string', () => {
        expect(hexToDecimal('FF')).toBe(255);
    });

    test('should handle mixed case hexadecimal string', () => {
        expect(hexToDecimal('aB')).toBe(171);
    });

    test('should handle an empty string', () => {
        expect(hexToDecimal('')).toBe(NaN);
    });
});