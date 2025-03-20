SELECT
    M.id,
    M.name
FROM
    movies M JOIN prices P ON
    M.id_prices = P.id
WHERE
    P.value < 2.00;