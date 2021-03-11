# Arduino-ProgrammingDeck com Keypad

Projeto de um teclado para automatizar a utilização de atalhos de teclado na IDE Visual Studio Code baseado no [StreamDeck criado pelo Project Juan](https://github.com/juansduarte02/Arduino-Streamdeck-Keypad).

## Comandos disponíveis nesta versão (segundo as teclas no keypad):

- 1 - Seleciona todas as occorências de uma palavra ou seleção de palavras;
- 2 - Move o código de uma linha para a linha superior;
- 3 - Transforma uma seleção de código em um comentário em bloco;
- 4 -
- 5 - Move o código de uma linha para a linha inferior;
- 6 -
- 7 - Mostra sugestões de código;
- 8 - Mostra sugestões de parâmetros de funções;
- 9 -
- \* - Fechar o VS Code;
- 0 -
- \# - Fechar a pasta em aberto.

### Materiais utilizados

- Teclado de Membrana 4X3;
- Arduino Leonardo (IMPORTANTE: O projeto deve ser realizado com o Arduino Leonardo ou o Arduino Leonardo Pro-Micro pois o micro processador da placa precisa ser compatível com a biblioteca Keybord.h);
- Jumpers macho-macho;
- [Tabela com atalhos do VS Code](https://code.visualstudio.com/shortcuts/keyboard-shortcuts-linux.pdf).

## Bibliotecas Usadas:

- Keyboard.h
- Keypad.h
  As bibliotecas se encontram na pasta lib no repositorio.
