SELECT name AS name, customers_number as customers_number
FROM lawyers
WHERE register = (SELECT register FROM lawyers order by customers_number desc limit 1)

UNION ALL

SELECT name AS name, customers_number as customers_number
FROM lawyers
WHERE register = (SELECT register FROM lawyers order by customers_number asc limit 1)

UNION ALL

SELECT 'Average' AS name, cast(AVG(customers_number) as INTEGER) AS customers_number
FROM lawyers;
