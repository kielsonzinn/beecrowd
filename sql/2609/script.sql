SELECT
    C.name,
    SUM(P.amount)
FROM
    products P JOIN
    categories C ON P.id_categories = C.id
GROUP BY
    C.name;