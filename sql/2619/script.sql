SELECT
    P.name,
    PV.name,
    P.price
FROM
    products P
        JOIN categories C ON C.id = P.id_categories
        JOIN providers PV ON PV.id = P.id_providers
WHERE
    C.name = 'Super Luxury' AND
    P.price > 1000.00;