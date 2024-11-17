# 🖨️ **ft_printf**: Uma implementação customizada da função `printf`

## 📋 Descrição

O projeto **ft_printf** é uma implementação personalizada da famosa função `printf`, que é amplamente usada em C para formatação e impressão de dados no terminal. Com essa função, você será capaz de imprimir variáveis de tipos diversos, como inteiros, strings, ponteiros e números em bases diferentes, tudo de forma flexível e eficiente.

### ✨ Funcionalidades:
- Impressão de **inteiros**, **strings**, **números unsigned**, **ponteiros** e **bases customizadas**.
- Suporta a formatação de saída com diferentes especificadores.
- Função feita **do zero**, sem utilizar a `printf` original, para treinar habilidades de manipulação de argumentos variáveis e formatação de strings.

---

## 🧰 Funções Implementadas

Aqui estão as funções implementadas no projeto:

1. **`ft_strlen`**  
   Calcula o comprimento de uma string.

2. **`ft_putnbr`**  
   Imprime um número inteiro.

3. **`ft_putunbr`**  
   Imprime um número inteiro sem sinal (unsigned).

4. **`ft_putstr`**  
   Imprime uma string de caracteres.

5. **`ft_putchar`**  
   Imprime um único caractere.

6. **`ft_putnbr_base`**  
   Imprime um número em uma base personalizada (hexadecimal, binária, etc.).

7. **`ft_putpointer`**  
   Imprime um ponteiro no formato hexadecimal.

8. **`ft_printf`**  
   Função principal, que recebe um formato com especificadores e imprime os valores passados de acordo com esse formato.

---

## 🚀 Como Usar

### 1. **Clone o repositório:**

```bash
git clone https://github.com/kpierroti/ft_printf.git
cd ft_printf
```

### 2. Compilação:
Use o `make` para compilar o projeto. Isso irá gerar a biblioteca ou o arquivo de objeto necessário.

```bash
make
```
### 3. Exemplo de Uso:

Aqui está um exemplo simples de como usar a função `ft_printf`:

```c
#include "ft_printf.h"

int main() {
    int num = 42;
    char *str = "Hello, World!";
    
    ft_printf("Inteiro: %d\n", num);
    ft_printf("String: %s\n", str);
    ft_printf("Ponteiro: %p\n", &num);
    ft_printf("Hexadecimal: %x\n", num);

    return 0;
}
```
### **Saída esperada:**
```bash
Inteiro: 42
String: Hello, World!
Ponteiro: 0x7fffe90a0b7c
Hexadecimal: 2a
```
## **🧠 Como Funciona?**
O ft_printf funciona processando os especificadores de formato presentes na string e, em seguida, invocando as funções apropriadas para imprimir os valores passados. Ele suporta diversos tipos, como:

%d para inteiros
%s para strings
%p para ponteiros
%x para números em hexadecimal
E muitos outros!
## **⚙️ Como Contribuir**
Se você gostaria de melhorar este projeto ou adicionar novos recursos, sinta-se à vontade para abrir uma issue ou pull request. As contribuições são sempre bem-vindas! 🚀

1. Fork o repositório.
2. Crie uma branch para a sua feature (git checkout -b feature/nova-funcionalidade).
3. Faça commit das suas mudanças (git commit -am 'Adicionando nova funcionalidade').
4. Envie para o repositório remoto (git push origin feature/nova-funcionalidade).
5. Abra uma Pull Request.
   
## **🔗 Licença**
Este projeto está licenciado sob a MIT License. Veja o arquivo LICENSE para mais detalhes.

## **🤖 Autor**
Criado por kpierroti.


