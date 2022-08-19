/*2743	Number of Characters  */

select name,length(name)as length
from people
order by length desc
