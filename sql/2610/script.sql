SELECT
    ROUND(SUM(price) / COUNT(1), 2)
FROM
    products;