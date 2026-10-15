-- Write your query below
SELECT p.first_name AS first_name,
p.last_name AS last_name,
a.city AS city,
a.state AS state
FROM person p
LEFT JOIN address a
ON p.person_id = a.person_id
;
