# 🏢 Simulador de Elevador de 6 Andares com Arduino

  **Platforma:** https://www.tinkercad.com/dashboard)

Este projeto simula o funcionamento lógico e físico de um elevador de seis níveis. Ele utiliza LEDs para indicar a posição e o trajeto do elevador, e botões de pressão (push-buttons) para realizar as chamadas de cada andar.

## 🚀 Funcionalidades

- **Identificação de Posicionamento:** O sistema sempre sabe em qual andar o elevador está parado.
- **Simulação de Trajeto:** Ao ser chamado, o elevador acende os LEDs dos andares intermediários sequencialmente, simulando o deslocamento real.
- **Prioridade de Comando:** Utiliza uma estrutura de controle `switch case` para gerenciar as requisições.
- **Lógica Inteligente:** O elevador ignora chamadas para o andar onde ele já se encontra.

## 🛠️ Hardware Utilizado

| Componente | Quantidade |
| :--- | :--- |
| Arduino Uno  | 1 |
| Placa de ensaio | 1 |
| LEDs  | 6 |
| Botões de Pressão | 6 |
| Resistores (para LEDs e Botões) | 12 |


## 📌 Elevador

### LEDs (Indicadores)
- **1º ao 6º Andar:** Pinos Digitais `3, 5, 6, 9, 11, 12`

### Botões (Chamadas)
- **1º ao 6º Andar:** Pinos Digitais `2, 4, 7, 8, 10, 13`

## 💻 Como Funciona o Código?

O código é baseado em três pilares principais:
1. **Varredura de Entradas:** O Arduino verifica constantemente se algum botão foi pressionado (`digitalRead`).
2. **Máquina de Estados:** A variável `atual` armazena a posição atual e a variável `andar` armazena o destino.
3. **Bloqueio de Movimento:** O uso de `delay()` garante que o elevador complete a viagem antes de aceitar um novo comando, simulando o tempo de deslocamento físico.

   **Alunos:**
   
   *Eduardo Farias 🍓🍓🍓
   
   *Marcelo Barbosa 🫡🎶✨
   
   *Sarah Mendonça 💗☆*: .｡. o(≧▽≦)o .｡.:*☆
