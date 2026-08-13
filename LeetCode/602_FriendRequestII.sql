-- SQL SCEHMA
Create table If Not Exists RequestAccepted
(
    requester_id
    int
    not
    null,
    accepter_id
    int
    null,
    accept_date
    date
    null
)
    Truncate table RequestAccepted
    insert into RequestAccepted
(
    requester_id,
    accepter_id,
    accept_date
) values
(
    '1',
    '2',
    '2016/06/03'
)
    insert into RequestAccepted
(
    requester_id,
    accepter_id,
    accept_date
) values
(
    '1',
    '3',
    '2016/06/08'
)
    insert into RequestAccepted
(
    requester_id,
    accepter_id,
    accept_date
) values
(
    '2',
    '3',
    '2016/06/08'
)
    insert into RequestAccepted
(
    requester_id,
    accepter_id,
    accept_date
) values
(
    '3',
    '4',
    '2016/06/09'
)
    -- Solution
-- 1. Combine both columns into a single column stream
    WITH AllConnections AS (
        SELECT requester_id AS id FROM RequestAccepted
        UNION ALL
        SELECT accepter_id AS id FROM RequestAccepted
        )

-- 2. Count occurences per user and sort to get the columns
SELECT id, COUNT(*) AS num
FROM AllConnections
GROUP BY id
ORDER BY num DESC LIMIT 1;


-- Solution 2 to remove CTE usage
SELECT id, COUNT(*) AS num
FROM (SELECT requester_id AS id
      FROM RequestAccepted
      UNION ALL
      SELECT accepter_id AS id
      FROM RequestAccepted) AS TotalFriends
GROUP BY id
ORDER BY num DESC LIMIT 1;


-- Solution 3: follow up to make sure it works for multiple values
SELECT id, num
FROM (SELECT id,
             COUNT(*) AS  num,
             DENSE_RANK() OVER (ORDER BY COUNT(*) DESC) AS rank
      FROM (
          SELECT requester_id AS id FROM RequestAccepted
          UNION ALL
          SELECT accepter_id AS id FROM RequestAccepted
          ) as total_friends
      GROUP BY id) AS ranked_users
WHERE rank = 1;
