SELECT
    P.name,
    PV.name,
    C.name
FROM
    products P
        JOIN providers PV ON PV.id = P.id_providers
        JOIN categories C ON C.id = P.id_categories 
WHERE
    PV.name = 'Sansul SA' AND
    C.name = 'Imported';