SELECT
    M.id,
    M.name
FROM
    movies M JOIN genres G ON
    M.id_genres = G.id
WHERE
    G.description = 'Action';