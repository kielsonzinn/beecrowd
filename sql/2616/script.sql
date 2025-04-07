SELECT
    C.id,
    C.name
FROM
    customers C LEFT JOIN locations L ON L.id_customers = C.id
WHERE
    L.id IS NULL
ORDER BY
    C.id;