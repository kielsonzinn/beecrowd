SELECT 
    id,
    password,
    md5(password) AS md5
FROM 
    account;