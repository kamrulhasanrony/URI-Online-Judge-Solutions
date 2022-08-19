/* 2994	How much earn a Doctor?  */

SELECT d.name,round(sum((a.hours*150.0)+(((a.hours*150.0)*w.bonus)/100.0)),1)as salary
from doctors d inner join attendances as a ON a.id_doctor=d.id
               inner join work_shifts as w ON w.id=a.id_work_shift
group by d.id
order by salary desc
