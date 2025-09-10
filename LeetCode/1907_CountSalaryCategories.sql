-- SQL SCHEMA
-- Create table If Not Exists Accounts (account_id int, income int)
--     Truncate table Accounts
--     insert into Accounts (account_id, income) values ('3', '108939')
--     insert into Accounts (account_id, income) values ('2', '12747')
--     insert into Accounts (account_id, income) values ('8', '87709')
--     insert into Accounts (account_id, income) values ('6', '91796')
SELECT 'Low Salary'                               AS category,
       COUNT(CASE WHEN income < 20000 THEN 1 END) AS accounts_count
FROM accounts
UNION ALL
SELECT 'Average Salary'                                           AS category,
       COUNT(CASE WHEN income BETWEEN 20000 AND 50000 THEN 1 END) AS accounts_count
FROM accounts
UNION ALL
SELECT 'High Salary'                              AS category,
       COUNT(CASE WHEN income > 50000 THEN 1 END) AS accounts_count
FROM accounts