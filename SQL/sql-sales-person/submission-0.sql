-- Write your query below
SELECT s.name
FROM sales_person s
LEFT JOIN orders o
    ON s.sales_id = o.sales_id
LEFT JOIN company c
    ON o.com_id = c.com_id
    AND c.name = 'CRIMSON'
GROUP BY s.sales_id, s.name
HAVING COUNT(c.com_id) = 0
;