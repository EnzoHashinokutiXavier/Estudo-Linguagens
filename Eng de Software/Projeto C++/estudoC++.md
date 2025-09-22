
!x  verdadeiro somente se x for falso
x&&y verdadeiro somente se x e y forem verdade
x||y verdadeiro se x ou y for verdade

# String
```
#include <cstdio> 
```
### Receber
```
#include <cstdio>
```
```
gets(variavel)
```


### Cópia
Copia o valor de uma string
```
#include <cstring> 
```
```
strcpy(str2, str1)
```
### Contatenação
Juntar duas ou mais strings em uma string
```
#include <cstring> 
```
```
strcat(str1, str2)
```
### Comparação
0 : as duas strings são iguais
\<0 : str1 é menor que str2
\>0: str2 é menor que str1
≠0 : as strings sao diferentes
```
#include <cstring> 
```
```
strcmp(str1, str2)
```
### Tamanho
Tamanho da string
```
#include <cstring> 
```
```
strlen(str)
```
### Conversão para maiúsculo
Converte tudo para maiúsculo
```
#include <cstring> 
```
```
strupr(str)
```
Converte um para maiúsculo
```
str[i] = toupper(str[i]);
```
### Conversão para minúsculo
Converte tudo para maiúsculo
```
#include <cstring> 
```
```
strlwr(str)
```
Converte um para minúsculo
```
str[i] = tolower(str[i]);
```

# Structure
```
structure Data{
    int dia;
    char mes[10];
    int ano;
};
structure Venda {
    int pecas;
    float preco;
    Data diavenda;
};
```
```
Venda A = {20,110.0, {7, "Agosto", 2025}};
cout<<"Dia : "<< A.diavenda.dia;
```

