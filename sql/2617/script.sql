SELECT 
    products.name AS product_name,
    providers.name AS provider_name
FROM 
    products
JOIN 
    providers ON products.id_providers = providers.id
WHERE 
    providers.name = 'Ajax SA';