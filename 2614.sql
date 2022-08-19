/* 2614 - September Rentals */
select c.name,r.rentals_date
from customers as c
INNER JOIN rentals as r
ON r.id_customers=c.id
where r.rentals_date between '2016-09-01' AND '2016-09-30'
