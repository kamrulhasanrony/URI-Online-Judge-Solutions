/* 2617 - Provider Ajax SA */

select p.name,v.name
from products AS p
INNER JOIN providers AS v ON p.id_providers=v.id
where v.name='Ajax SA'
