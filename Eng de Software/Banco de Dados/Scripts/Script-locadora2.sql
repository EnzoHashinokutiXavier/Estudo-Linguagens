INSERT INTO cliente (id_cliente, nome, cpf)
VALUES (1, 'João Silva', '123.456.789-00');

INSERT INTO veiculo (placa, modelo, marca, situacao)
VALUES ('ABC1234', 'Civic', 'Honda', 'disponivel');

INSERT INTO locacao (
    id_registro,
    id_cliente,
    placa,
    data_retirada,
    data_prevista_devolucao,
    forma_pagamento
)
VALUES (
    1,
    1,
    'ABC1234',
    '2026-03-22',
    '2026-03-25',
    'cartao'
);

COMMIT;