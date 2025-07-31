const toDecimal = require('./BinaryToDecimal');

describe('toDecimal', () => {
    test('should convert a simple binary string to decimal', () => {
        expect(toDecimal('1101')).toBe(13);
    });

    test('should convert another binary string to decimal', () => {
        expect(toDecimal('101')).toBe(5);
    });

    test('should handle binary string with only zeros', () => {
        expect(toDecimal('000')).toBe(0);
    });

    test('should handle binary string with only ones', () => {
        expect(toDecimal('111')).toBe(7);
    });

    test('should handle a longer binary string', () => {
        expect(toDecimal('10000000')).toBe(128);
    });

    test('should handle an empty string', () => {
        expect(toDecimal('')).toBe(NaN);
    });
});