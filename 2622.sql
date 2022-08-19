/* 2622 - Legal Person */

select customers.name
from customers
where customers.id IN(
    select id_customers
    from legal_person
    )
