# Infraestrutura da AWS

- 39 regiões lançadas, cada uma com várias zonas de disponibilidade

- 123 zonas de disponibilidade

- mais de 750 POPs do CloudFront

- 33 zonas locais e zonas do Wavelength para aplicações de baixa latência

Uma **Region** tem alguns data centers interconectados que formam as **Availability Zones**. Um data center menor conectado a um maior é chamado de **Local Zone** 

- Wavelength : infraestrutura otimizada para aplicações móveis, bom para desenvolvedores criarem suas aplicações

- Outposts : aws tem equipamento dentro de cliente ou dentro de datacenter de cidade pequena que alimenta pequena comunidade, setor, seguimento, mas a aws nao coloca um data center dela, ou seja, menor que uma zona local

A rede que a AWS criou entre regiões e data centers tem velocidade de link entre as maiores se nao a maior do planeta, latencia muito baixa

# AWS Share Responsibility Model

Você como empresa tem responsabilidade de parte da estrutura cloud e a aws tem outra responsabilidade por outra parte da estrutura da aws

![alt text](image.png)

