/* 2616 - No Rental */
select id,name
from customers
where id NOT IN(
    select id_customers
    from locations
    )
