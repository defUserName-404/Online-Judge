-- SQL Schema
-- Create table If Not Exists orders (order_number int, customer_number int)
-- Truncate table orders
-- insert into orders (order_number, customer_number) values ('1', '1')
-- insert into orders (order_number, customer_number) values ('2', '2')
-- insert into orders (order_number, customer_number) values ('3', '3')
-- insert into orders (order_number, customer_number) values ('4', '3')

-- PostgreSQL Query

-- ? This Solution only works when exactly one customer will have placed more orders than any other customer.
SELECT customer_number
FROM Orders
GROUP BY customer_number
ORDER BY COUNT(*) DESC
LIMIT 1;

-- ? More General Solution
SELECT customer_number
FROM Orders
GROUP BY customer_number
HAVING COUNT(order_number) = (
	SELECT COUNT(order_number) "count"
	FROM Orders
	GROUP BY customer_number
	ORDER BY "count" DESC
	LIMIT 1
)

-- ? Solution with CTE
WITH cte AS (
    SELECT customer_number,
    DENSE_RANK() OVER(ORDER BY COUNT(order_number) DESC) AS order_rank
    FROM Orders
    GROUP BY customer_number
)
SELECT customer_number
FROM cte
WHERE order_rank = 1;

