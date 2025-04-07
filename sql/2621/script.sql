SELECT
    P.name
FROM
    products P
        JOIN providers PV ON PV.id = P.id_providers
WHERE
    PV.name LIKE 'P%' AND
    amount >= 10 AND
    amount <= 20;