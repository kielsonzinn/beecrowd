SELECT
    P.name,
    C.name
FROM
    products P
        JOIN categories C ON C.id = P.id_categories
WHERE
    C.id IN ( 1, 2, 3, 6, 9 ) AND
    P.amount > 100
ORDER BY
    C.id;