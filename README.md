# Jogo de Adivinhação em C

Jogo de terminal desenvolvido em **linguagem C**, no qual a máquina escolhe um número secreto e o jogador tenta descobri-lo.

##  Objetivo

Praticar a lógica de programação e os fundamentos da linguagem C: variáveis, laços de repetição, condicionais, entrada e saída de dados e geração de números aleatórios.

##  Como o jogo funciona

1. A máquina sorteia um número secreto.
2. O jogador tem **3 tentativas** para acertar.
3. A cada erro, o jogo informa se o número secreto é **maior** ou **menor** que o chute.
4. Quanto mais cedo o jogador acertar, **mais pontos ganha**.

##  Funcionalidades

- Sorteio de número secreto [informe o intervalo, ex.: 0 a 100]
- Limite de tentativas
- Dicas de "maior" ou "menor" após cada chute
- Sistema de pontuação baseado no número de tentativas usadas

## 🛠️ Tecnologias utilizadas


- Biblioteca padrão: `stdio.h`, `stdlib.h`, `time.h` [ajuste conforme seus `#include`]

##  Estrutura do projeto

```
Jogo-de-Adivinha-o/
├── Adivinhacao.c   # Código-fonte do jogo
└── README.md
```

##  Como compilar e executar

Pré-requisito: ter um compilador C instalado (por exemplo, GCC).

```bash
git clone https://github.com/YagoMarcal/Jogo-de-Adivinha-o.git
cd Jogo-de-Adivinha-o
gcc Adivinhacao.c -o adivinhacao
./adivinhacao        # No Windows: adivinhacao.exe
```

##  Exemplo de execução

```
[Cole aqui um exemplo da saída do seu jogo no terminal]
```

##  Melhorias futuras

- Níveis de dificuldade (fácil, médio, difícil)
- Opção de jogar novamente sem reiniciar o programa
- Ranking de pontuações

## 👤 Autor

**Yago Marcal** — [GitHub](https://github.com/YagoMarcal)
