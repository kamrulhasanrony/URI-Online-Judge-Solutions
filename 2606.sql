/* 2606 - Categories */
select id,name
from products
where id_categories IN(
    select id
    from categories
    where name LIKE 'super%'
    )
