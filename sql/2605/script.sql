SELECT
    P.name,
    PR.name
FROM
    products P JOIN
    providers PR ON P.id_providers = PR.id
WHERE
    P.id_categories = 6;