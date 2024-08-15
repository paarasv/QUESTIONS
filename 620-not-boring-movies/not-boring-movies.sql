SELECT *
FROM Cinema s
WHERE s.id % 2 != 0 
  AND s.description <> 'boring'
  ORDER BY s.rating DESC;
