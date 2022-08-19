/* 2621 - Amounts Between 10 and 20 */

select products.name
from products
inner join providers on products.id_providers=providers.id
where providers.name like 'P%' and(products.amount between 10 and 20);
