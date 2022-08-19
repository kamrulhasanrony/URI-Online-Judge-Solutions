/* 2605 - Executive Representatives */
select products.name,providers.name
from products,providers
where id_categories=6 and products.id_providers=providers.id
