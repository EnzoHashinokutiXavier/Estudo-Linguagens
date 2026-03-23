-- =========================
-- RESPOSTAS - ENZO HASHINOKUTI XAVIER 
-- =========================

-- =========================
-- 1 Liste todos os produtos ordenados pelo preço crescente.
-- =========================
select * from produtos order by preco;

-- =========================
-- 2 Liste todos os produtos ordenados pelo nome em ordem decrescente.
-- =========================
select * from produtos order by nome desc;

-- =========================
-- 3 Mostre os nomes distintos das categorias cadastradas.
-- =========================
select distinct nome from categorias;

-- =========================
-- 4 Liste todos os fornecedores sem repetir nomes.
-- =========================
select distinct nome from fornecedores;

-- =========================
-- 5 Liste os produtos com preço maior que 100.
-- =========================
select * from produtos where preco > 100;

-- =========================
-- 6 Liste os produtos com quantidade diferente de 0.
-- =========================
select * from produtos where quantidade != 0;

-- =========================
-- 7 Liste os clientes cujo nome seja igual a 'Cliente 1'.
-- =========================
select * from clientes where nome = 'Cliente 1';

-- =========================
-- 8 Liste os produtos com preço entre 50 e 500.
-- =========================
select * from produtos where preco between 50 and 500;

-- =========================
-- 9 Liste os funcionários com salário entre 1800 e 3000.
-- =========================
select * from funcionarios where salario between 1800 and 3000;

-- =========================
-- 10 Liste os produtos cujo nome comece com a letra 'C'.
-- =========================
select * from produtos where nome like 'C%';

-- =========================
-- 11 Liste os clientes cujo nome contenha a palavra 'Cliente'.
-- =========================
select * from clientes where nome like '%Cliente%';

-- =========================
-- 12 Liste os produtos que pertencem às categorias 1, 2 ou 3.
-- =========================
select * from produtos where categoria_id in (1, 2, 3);

-- =========================
-- 13 Liste os produtos que NÃO pertencem às categorias 4 e 5.
-- =========================
select * from produtos where categoria_id not in (4, 5);

-- =========================
-- 14 Liste as vendas realizadas por funcionários com ID 1, 2 ou 3.
-- =========================
select * from vendas where funcionario_id in (1, 2, 3);

-- =========================
-- 15 Liste as movimentações do tipo diferente de 'entrada'.
-- =========================
select * from movimentacoes where tipo != 'entrada';

-- =========================
-- 16 Insira um novo produto chamado 'Monitor', com preço 900, quantidade 25, categoria 1 e fornecedor 1.
-- =========================
insert into produtos (nome, preco, quantidade, categoria_id, fornecedor_id) values ('Monitor', 900, 25, 1, 1);

-- =========================
-- 17 Insira um novo cliente com nome 'Cliente Novo', telefone '67988889999' e email 'novo@email.com'.
-- =========================
insert into clientes (nome, telefone, email) values ('Cliente Novo', '67988889999', 'novo@email.com');

-- =========================
-- 18 Atualize o preço de todos os produtos para aumentar em 10% onde o preço for menor que 100.
-- =========================
update produtos set preco = preco * 1.10 where preco < 100;

-- =========================
-- 19 Atualize o salário dos funcionários para 2500 onde o cargo seja igual a 'Vendedor'.
-- =========================
update funcionarios set salario = 2500 where cargo = 'vendedor';

-- =========================
-- 20 Exclua os clientes cujo nome seja diferente de 'Cliente 1'.
-- =========================
-- tem que deletar das tabelas que referenciam 
delete from itens_venda where venda_id in (select id from vendas where cliente_id != 1);
delete from vendas where cliente_id != 1;
delete from clientes where nome != 'Cliente 1';


