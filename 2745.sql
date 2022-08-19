/*	2745	Taxes */
select name,round(salary*10/100,2)as tax
from people
where salary>3000
