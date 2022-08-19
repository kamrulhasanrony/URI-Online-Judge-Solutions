/* 2620 - Orders in First Half */

select customers.name,orders.id
from customers,orders
where customers.id=orders.id_customers and (orders.orders_date between '2016-01-01' and '2016-06-30')
