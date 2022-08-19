/* 2618 - Imported Products */

select p.name,v.name,c.name
from products p,providers v,categories c
where p.id_providers=v.id AND p.id_categories=c.id and v.name='Sansul SA' and c.name='Imported'
