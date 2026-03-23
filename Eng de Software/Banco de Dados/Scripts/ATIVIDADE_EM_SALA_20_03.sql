-- Crie 5 insert

insert into clientes (nome, telefone, email) values ('enzo', '67999999999', 'enzo@email.com');

insert into fornecedores (nome, telefone, email) values ('serjao', '679999999', 'sejao@email.com');

insert into produtos (nome, preco, quantidade, categoria_id, fornecedor_id) values ('livro', 43, 20, 5, 11);

insert into funcionarios (nome, cargo, salario) values ('anthony', 'faxineiro', 250);

insert into vendas (cliente_id, funcionario_id, total) values (12, 11, 200);

-- 2 update

update funcionarios set cargo = 'gerente' where nome = 'anthony';

update funcionarios set salario = 8000 where nome = 'anthony';

-- 1 delete

delete from produtos where nome = 'Óleo de motor';

