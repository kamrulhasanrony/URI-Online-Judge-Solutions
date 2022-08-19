/* 2619 - Super Luxury */

select products.name,providers.name,products.price
from products,providers,categories
where ((products.id_providers=providers.id)and(products.id_categories=categories.id)and(products.price>1000)and(categories.name='Super Luxury'))
