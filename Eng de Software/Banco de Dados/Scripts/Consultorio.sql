
create table bairro(
	id serial primary key,
	nome varchar(150)
);

create table endereco(
	id serial primary key,
	rua varchar(150),
	cep varchar(8),
	bairro_id int references bairro(id)
);

create table tipo(
	id serial primary key,
	descricao varchar(50)
);

create table contato(
	id serial primary key,
	descricao varchar(100),
	tipo_id INT references tipo(id)
);

create table paciente(
	id serial primary key,
	cpf varchar(11) unique,
	nome varchar(100),
	endereco_id int references endereco(id)
);

create table contato_paciente(
	contato_id int references contato(id),
	paciente_id int references paciente(id),
	primary key (contato_id, paciente_id)
);

create table plano(
	id serial primary key,
	nome varchar(100)
);

create table plano_paciente(
	paciente_id int references paciente(id),
	plano_id int references plano(id),
	primary key (paciente_id, plano_id)
);

create table especialidade(
	id serial primary key,
	nome varchar(100)
);

create table medico(
	crm varchar(10) primary key,
	nome varchar(100),
	endereco_id int references endereco(id),
	especialidade_id int references especialidade(id)
);

create table contato_medico(
	contato_id int references contato(id),
	medico_crm varchar(10) references medico(crm),
	primary key (contato_id, medico_crm)
);

create table consultorio(
	id serial primary key,
	descricao varchar(100)
);

create table consulta(
	id serial primary key,
	horario time,
	data date,
	consultorio_id int references consultorio(id),
	paciente_id int references paciente(id),
	medico_crm varchar(10) references medico(crm)
);

--- create table historico( 
---		paciente_id int references paciente(id), 
---		prontuario_id int references prontuario(id), 
---		primary key (paciente_id, prontuario_id), 
---		descricao varchar(100) 
--- );

--- Historico é redundante pois paciente já é acessado em : prontuario → consulta → paciente

create table pedido_exame(
	id serial primary key,
	data date,
	descricao varchar(100),
	status varchar(50)
);

create table exame(
	id serial primary key,
	descricao varchar(100),
	pedido_id int references pedido_exame(id)
);

create table prontuario(
	id serial primary key,
	medico_crm varchar(10) references medico(crm),
	consulta_id int unique references consulta(id),
	pedido_id int references pedido_exame(id)
);

create table medicamento(
	id serial primary key,
	descricao varchar(100)
);

create table receita(
	id serial primary key,
	data date,
	prontuario_id int references prontuario(id)
);

create table receita_medicamento(
	receita_id int references receita(id),
	medicamento_id int references medicamento(id),
	primary key (receita_id, medicamento_id)
);

