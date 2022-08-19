/*2623 - Categories with Various Products */

select products.name as name,categories.name as name
from products,categories
where ((products.id_categories=categories.id) and (products.amount>100) and categories.id IN(1,2,3,6,9))
order by products.name
