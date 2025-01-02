# Sistema de Reservas

Este projeto é um programa simples em C para gerenciar reservas, desenvolvido como parte de um trabalho de faculdade. O sistema permite ao usuário cadastrar reservas, listar reservas existentes e consultar o total de pessoas reservadas para um dia específico.


## Funcionalidades

- Fazer Reserva:
    - Permite cadastrar o nome do responsável, CPF, dia e quantidade de pessoas para uma nova reserva.
    - O limite é de 30 reservas.
- Listar Reservas:
    - Exibe todas as reservas cadastradas, mostrando nome, CPF, dia e quantidade de pessoas.
- Total de Pessoas por Dia:
    - Permite consultar o total de pessoas reservadas para um dia específico (quinta, sexta, sábado ou domingo).

## Estrutura de Dados

As reservas são armazenadas em um array de estruturas do tipo Reserva, que possui os seguintes campos:

- nome: Nome do responsável (limite de 60 caracteres).
- cpf: CPF do responsável (limite de 14 caracteres).
- dia: Dia da reserva (1 para quinta, 2 para sexta, 3 para sábado e 4 para domingo).
- pessoas: Quantidade de pessoas na reserva.

## Melhorias Possíveis

- Melhorar a interface para mostrar os dias em formato de texto em vez de números.
- Substituir o array estático por uma estrutura dinâmica para suportar mais reservas.
- Permitir edição e exclusão de reservas.
- Implementar validação de dados, como verificação do formato do CPF e limites para a quantidade de pessoas.

Este programa foi desenvolvido como parte de um trabalho acadêmico. 
