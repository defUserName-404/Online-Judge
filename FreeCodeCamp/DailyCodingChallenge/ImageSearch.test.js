const imageSearch = require('./ImageSearch');

describe('imageSearch', () => {
    test('should return images matching the search term (case-insensitive)', () => {
        const images = ["dog.png", "cat.jpg", "parrot.jpeg"];
        const term = "dog";
        expect(imageSearch(images, term)).toEqual(["dog.png"]);
    });

    test('should return images matching the search term (case-insensitive) with partial matches', () => {
        const images = ["Sunset.jpg", "Beach.png", "sunflower.jpeg"];
        const term = "sun";
        expect(imageSearch(images, term)).toEqual(["Sunset.jpg", "sunflower.jpeg"]);
    });

    test('should return images matching the search term (case-insensitive) even if the term is uppercase', () => {
        const images = ["Moon.png", "sun.jpeg", "stars.png"];
        const term = "PNG";
        expect(imageSearch(images, term)).toEqual(["Moon.png", "stars.png"]);
    });

    test('should return multiple matches for a given term', () => {
        const images = ["cat.jpg", "dogToy.jpeg", "kitty-cat.png", "catNip.jpeg", "franken_cat.gif"];
        const term = "Cat";
        expect(imageSearch(images, term)).toEqual(["cat.jpg", "kitty-cat.png", "catNip.jpeg", "franken_cat.gif"]);
    });

    test('should return an empty array if no images match the search term', () => {
        const images = ["apple.png", "banana.jpg"];
        const term = "orange";
        expect(imageSearch(images, term)).toEqual([]);
    });

    test('should handle empty image array', () => {
        const images = [];
        const term = "test";
        expect(imageSearch(images, term)).toEqual([]);
    });

    test('should handle empty search term', () => {
        const images = ["image1.png", "image2.jpg"];
        const term = "";
        expect(imageSearch(images, term)).toEqual(["image1.png", "image2.jpg"]);
    });
});
