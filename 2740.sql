/* 2740 - League */
(select concat('Podium: ',team)as team
from league
LIMIT 3)
union all
(SELECT concat('Demoted: ',team)as team
 FROM league
 where position in(
           SELECT position
           FROM league
           ORDER BY position DESC
           LIMIT 2)
 ORDER BY position)
