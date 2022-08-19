/* 2742 - Richard's Multiverse*/

SELECT L.name as name,round(L.omega*1.618,3)"The N Factor"
FROM life_registry AS L
INNER JOIN dimensions AS d ON d.id=L.dimensions_id
WHERE d.name IN('C774','C875') AND L.name LIKE 'Richard %'
ORDER BY L.omega
