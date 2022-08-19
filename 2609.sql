/* 2609 - Products by Categories */
select categories.name,sum(amount) AS sum
from products
inner join categories ON products.id_categories=categories.id
group by categories.name
