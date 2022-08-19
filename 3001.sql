/* 3001	Update sem Where */

select name,
   CASE
   WHEN type='A'  THEN 20.0
   WHEN type='B'  THEN 70.0
   WHEN type='C'  THEN 530.5
   END as price
FROM products
ORDER BY type ASC,id DESC

