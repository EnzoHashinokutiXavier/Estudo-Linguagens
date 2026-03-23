SELECT 
    l.id_registro,
    c.nome AS cliente,
    c.cpf,
    v.placa,
    v.modelo,
    v.marca,
    l.data_retirada,
    l.data_prevista_devolucao,
    l.forma_pagamento
FROM locacao l
JOIN cliente c ON l.id_cliente = c.id_cliente
JOIN veiculo v ON l.placa = v.placa;