/* 2611 - Action Movies */

select id,name
from movies
where id_genres IN(
    select id
    from genres
    where description='Action'
    )
