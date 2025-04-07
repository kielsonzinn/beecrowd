SELECT
    C.name,
    O.id
FROM
    customers C
        JOIN orders O ON O.id_customers = C.id
WHERE
    O.orders_date >= '2016-01-01' AND O.orders_date <= '2016-06-30';