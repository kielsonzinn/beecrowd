SELECT
    id,
    name
FROM
    products
WHERE
    price < 10.00 OR
    price > 100.00;