/* 2739 - Payday */
select name,cast(extract(day from payday)as integer) AS day
from loan
