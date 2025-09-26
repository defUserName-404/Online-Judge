const mask = require('./CreditCardMasker');

describe('mask', () => {
  test('should mask card with hyphens', () => {
    expect(mask('4012-8888-8888-1881')).toBe('****-****-****-1881');
  });

  test('should mask card with spaces', () => {
    expect(mask('4012 8888 8888 1881')).toBe('**** **** **** 1881');
  });

  test('should leave the last four digits unmasked', () => {
    expect(mask('1111-2222-3333-4444')).toBe('****-****-****-4444');
  });

  test('should handle another card number', () => {
    expect(mask('9876-5432-1098-7654')).toBe('****-****-****-7654');
  });

  test('should preserve spaces', () => {
    expect(mask('1234 5678 9012 3456')).toBe('**** **** **** 3456');
  });
});
