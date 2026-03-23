DROP TABLE IF EXISTS locacao;
DROP TABLE IF EXISTS cliente;
DROP TABLE IF EXISTS veiculo;

CREATE TABLE cliente (
    id_cliente INTEGER PRIMARY KEY,
    nome VARCHAR(100),
    cpf VARCHAR(14)
);

CREATE TABLE veiculo (
    placa VARCHAR(7) PRIMARY KEY,
    modelo TEXT,
    marca VARCHAR(15),
    situacao VARCHAR(10)
);

CREATE TABLE locacao (
    id_registro INTEGER PRIMARY KEY,
    id_cliente INTEGER,
    placa VARCHAR(7),
    data_retirada DATE,
    data_prevista_devolucao DATE,
    forma_pagamento VARCHAR(20),

    FOREIGN KEY (id_cliente) REFERENCES cliente(id_cliente),
    FOREIGN KEY (placa) REFERENCES veiculo(placa)
);

COMMIT;