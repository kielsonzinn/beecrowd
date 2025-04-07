SELECT
    SUBSTRING(cpf FROM 1 FOR 3) || '.' ||
    SUBSTRING(cpf FROM 4 FOR 3) || '.' ||
    SUBSTRING(cpf FROM 7 FOR 3) || '-' ||
    SUBSTRING(cpf FROM 10 FOR 2) AS cpf
FROM
    customers C
        JOIN natural_person NP ON NP.id_customers = C.id;