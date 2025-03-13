SELECT
    P.id,
    P.name
FROM
    products P JOIN
    categories C ON P.id_categories = C.id
WHERE
    C.name LIKE 'super%';