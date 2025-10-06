-- ? We should note that while most database implementations are quite efficient when using these operators,
-- ? full-text search is best left to dedicated libraries like Apache Lucene or Sphinx.
-- ? These libraries are designed specifically to do full text search, and as a result are more efficient
-- ? and can support a wider variety of search features including internationalization and advanced queries.
-- ! EXERCISE
-- ! Find all the Toy Story movies
SELECT *
FROM movies
WHERE title LIKE 'Toy Story%';
-- ! Find all the movies directed by John Lasseter
SELECT *
FROM movies
WHERE director = 'John Lasseter';
-- ! Find all the movies (and director) not directed by John Lasseter
SELECT *
FROM movies
WHERE director != 'John Lasseter';
-- ! Find all the WALL-* movies
SELECT *
FROM movies
WHERE title LIKE 'WALL-%';
