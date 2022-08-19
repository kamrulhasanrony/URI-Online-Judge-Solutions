/* 2738 - Contest */



select c.name,round((s.math*2+s.specific*3+s.project_plan*5)/10,2) AS avg
from score s,candidate c
where c.id=s.candidate_id
order by avg desc
