/* 2613 - Cheap Movies */


select id,name
from movies
where id_prices IN(
    select id
    from prices
    where value<2.00
    )
