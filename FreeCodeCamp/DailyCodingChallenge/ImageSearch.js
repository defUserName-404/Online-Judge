// ! 2025-11-04
function imageSearch(images, term) {
    return images.filter(image => image.toLowerCase().includes(term.toLowerCase()));
}

module.exports = imageSearch;