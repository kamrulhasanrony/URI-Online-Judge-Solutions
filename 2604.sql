/* 2604 - Under 10 or Greater Than 100 */
select id,name
from products
where products.price<10 or products.price>100
