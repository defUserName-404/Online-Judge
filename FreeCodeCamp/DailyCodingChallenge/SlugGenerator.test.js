const generateSlug = require('./SlugGenerator');

describe('generateSlug', () => {
  test('should handle basic string without spaces or special characters', () => {
    expect(generateSlug('HelloWorld')).toBe('helloworld');
  });

  test('should convert string to lowercase', () => {
    expect(generateSlug('HeLLoWoRLD')).toBe('helloworld');
  });

  test('should replace spaces with %20', () => {
    expect(generateSlug('Hello World')).toBe('hello%20world');
  });

  test('should remove leading and trailing spaces', () => {
    expect(generateSlug('  hello world  ')).toBe('hello%20world');
  });

  test('should remove special characters', () => {
    expect(generateSlug('h#e@l$l%o w^o*r(l)d!')).toBe('hello%20world');
  });

  test('should replace multiple spaces with single %20', () => {
    expect(generateSlug('hello   world')).toBe('hello%20world');
  });

  test('should handle mixed case and special characters', () => {
    expect(generateSlug('  ?H^3-1*1]0! W[0%R#1]D  ')).toBe('h3110%20w0r1d');
  });

  test('should handle string with only special characters', () => {
    expect(generateSlug('!@#$%^&*()')).toBe('');
  });

  test('should handle empty string', () => {
    expect(generateSlug('')).toBe('');
  });

  test('should handle string with only spaces', () => {
    expect(generateSlug('    ')).toBe('');
  });
});