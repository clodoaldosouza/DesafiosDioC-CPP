Desafio II - Conhecimentos Avançados em Linguagem C
---------------------------------------------------
4 / 5 - Biblioteca Virtual com Ajuda de Robôs Organizadores
-----------------------------------------------------------

* * *

Desafio
-------

Neste desafio, você deve desenvolver um programa que simule uma biblioteca virtual que utiliza robôs para organizar seus
livros. O programa receberá como entrada o número total de livros existentes na biblioteca e as informações de cada
livro, incluindo o título, autor e ano de publicação.

Entrada
-------

O programa deve receber como entrada o número de livros presentes na biblioteca e as informações de cada livro. A
primeira linha da entrada contém um número inteiro `N (1 ≤ N ≤ 100)` que representa o número de livros na biblioteca. As
próximas `N` linhas contêm as informações de cada livro, na seguinte sequência (cada dado em uma nova linha):

* `titulo (string)`
* `autor (string)`
* `anoDePublicacao (int)`

As strings de título e autor não contêm espaços, e o ano de publicação é um número inteiro de quatro dígitos.

Saída
-----

O programa deve identificar o livro mais antigo da lista de livros que o usuário informou, armazenar suas informações em
variáveis e imprimí-las no seguinte formato:

`biblioteca[indiceLivroMaisAntigo].titulo   biblioteca[indiceLivroMaisAntigo].autor   biblioteca[indiceLivroMaisAntigo].ano`

Dica: Você pode explorar uma estrutura de dados (struct, classe etc) para definir os atributos de cada livro. Com isso,
sua lógica de impressão ficará parecida com a sintaxe acima, onde a `biblioteca` é um array de `Livro`.

Exemplos
--------

A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de
testar seu programa com esses exemplos e com outros casos possíveis.

| Entrada                                                                      | Saída                                 |
|:-----------------------------------------------------------------------------|:--------------------------------------|
| 2<br>Moby-Dick<br>Herman Melville<br>1851<br>Emma<br>Jane Austen<br>1815     | Emma<br>Jane Austen<br>1815           |
| 2<br>Hamlet<br>Willian Shakespeare<br>1603<br>Dracula<br>Bran Stoker<br>1897 | Hamlet<br>Willian Shakespeare<br>1603 |
| 2<br>Dao de Jing<br>Laozi<br>742<br>Frankenstein<br>Mary Shelley<br>1818     | Dao de Jing<br>Laozi<br>742           |
