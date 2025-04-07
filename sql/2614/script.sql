SELECT
    C.name,
    R.rentals_date
FROM
    rentals R
JOIN
    customers C ON C.id = R.id_customers
WHERE
    R.rentals_date >= '2016-09-01' AND R.rentals_date <= '2016-09-30';