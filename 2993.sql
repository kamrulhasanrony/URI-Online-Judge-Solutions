/*	2993	Most Frequent */
select amount
FROM value_table
GROUP BY amount
ORDER BY COUNT(amount) DESC
LIMIT 1
