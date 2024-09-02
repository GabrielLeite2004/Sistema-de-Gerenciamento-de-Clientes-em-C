# Sistema de Gerenciamento de Clientes em C

## Descrição
Este projeto em C implementa um sistema de gerenciamento de clientes, utilizando listas como estrutura de dados para armazenar informações sobre os clientes, incluindo código, nome e pontuação (score). O sistema permite ao usuário incluir, alterar, excluir e listar clientes, com persistência de dados entre execuções.

## Funcionalidades
- **Listar Clientes**: Exibe todos os clientes armazenados na lista.
- **Incluir Cliente**: Adiciona um novo cliente à lista.
- **Alterar Cliente**: Modifica as informações de um cliente existente.
- **Excluir Cliente**: Remove um cliente da lista.
- **Persistência de Dados**: Carrega a lista de clientes de um arquivo ao iniciar o programa e salva ao sair.

## Como Usar
1. Compile o código utilizando um compilador C. Exemplo:
   ```bash
   gcc -o gerencia_clientes gerencia_clientes.c tad_lst1.c persistencia.c
   ```
2. Execute o programa:
   ```bash
   ./gerencia_clientes
   ```
3. Utilize as opções do menu para gerenciar os clientes.

## Estrutura de Dados
O projeto utiliza uma estrutura `cliente` para armazenar as informações de cada cliente:
- **codigo**: Código numérico do cliente.
- **nome**: Nome do cliente.
- **score**: Pontuação do cliente.

A lista de clientes é gerenciada pela biblioteca `tad_lst1.h`, que oferece funções para incluir, alterar, excluir e obter elementos da lista.

## Funções Principais
- **inicializa_lista(tipo_lista *lista)**: Inicializa a lista de clientes.
- **carregar_lista(tipo_lista *lista)**: Carrega os dados dos clientes de um arquivo.
- **gravar_lista(tipo_lista lista)**: Salva a lista de clientes em um arquivo ao sair do programa.
- **incluir_elemento(tipo_lista *lista, int pos, elemento elem)**: Inclui um novo cliente na lista.
- **alterar_elemento(tipo_lista *lista, int pos, elemento elem)**: Altera os dados de um cliente existente.
- **excluir_elemento(tipo_lista *lista, int pos)**: Exclui um cliente da lista.

## Persistência de Dados
Os dados dos clientes são carregados automaticamente ao iniciar o programa e salvos ao sair, garantindo que todas as alterações feitas durante a execução sejam mantidas.

## Exemplo de Uso
O usuário pode listar os clientes, incluir novos, alterar as informações existentes, ou excluir clientes através de um menu interativo:

```plaintext
0 - listar
1 - incluir
2 - alterar
3 - excluir
9 - sair
```

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
