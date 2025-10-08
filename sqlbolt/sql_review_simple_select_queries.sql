-- ! EXERCISE
-- ! List all the Canadian cities and their populations
SELECT City, Population
FROM North_american_cities
WHERE Country = 'Canada';
-- ! Order all the cities in the United States by their latitude from north to south
-- * IN LATITUDE VALUE INCREASE INDICATE FURTHER NORTH
SELECT City, Latitude
FROM North_american_cities
WHERE Country = 'United States'
ORDER BY Latitude DESC;
-- ! List all the cities west of Chicago, ordered from west to east
-- * IN LONGITUDE VALUE INCREASE INDICATE FURTHER EAST
SELECT City, Longitude
FROM North_american_cities
WHERE Longitude < (SELECT Longitude FROM North_american_cities WHERE City = 'Chicago')
ORDER BY Longitude ASC;
-- ! List the two largest cities in Mexico (by population)
SELECT City
FROM North_american_cities
WHERE Country = 'Mexico DESC '
ORDER BY Population DESC LIMIT 2;
-- ! List the third and fourth largest cities (by population) in the United States and their population
SELECT City, Population
FROM North_american_cities
WHERE Country = 'United States'
ORDER BY Population DESC LIMIT 2
OFFSET 2;