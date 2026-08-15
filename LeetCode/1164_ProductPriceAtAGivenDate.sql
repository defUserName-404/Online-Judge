-- Schema
Create table If Not Exists Products (product_id int, new_price int, change_date date)
Truncate table Products
insert into Products (product_id, new_price, change_date) values ('1', '20', '2019-08-14')
insert into Products (product_id, new_price, change_date) values ('2', '50', '2019-08-14')
insert into Products (product_id, new_price, change_date) values ('1', '30', '2019-08-15')
insert into Products (product_id, new_price, change_date) values ('1', '35', '2019-08-16')
insert into Products (product_id, new_price, change_date) values ('2', '65', '2019-08-17')
insert into Products (product_id, new_price, change_date) values ('3', '20', '2019-08-18')

-- Solution
SELECT
    p1.product_id,
    COALESCE(p2.new_price, 10) AS price
FROM (
    SELECT product_id, MAX(change_date) AS max_date
    FROM Products
    WHERE change_date <= '2019-08-16'
    GROUP BY product_id
) latest_dates
RIGHT JOIN (
    SELECT DISTINCT product_id FROM Products
) p1 ON latest_dates.product_id = p1.product_id
LEFT JOIN Products p2
    ON latest_dates.product_id = p2.product_id
   AND latest_dates.max_date = p2.change_date;

