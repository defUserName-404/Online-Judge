const countWords = require('./WordCounter');

describe('countWords', () => {
    test('should return the correct word count for a simple sentence', () => {
        const sentence = 'Hello world';
        expect(countWords(sentence)).toBe(2);
    });

    test('should return 1 for a single word sentence', () => {
        const sentence = 'Word';
        expect(countWords(sentence)).toBe(1);
    });

    test('should return 0 for an empty string', () => {
        const sentence = '';
        expect(countWords(sentence)).toBe(1);
    });

    test('should count words with punctuation', () => {
        const sentence = 'Hello, world!';
        expect(countWords(sentence)).toBe(2);
    });
});
