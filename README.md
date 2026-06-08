# soccer-robots

Repositório público da extensão universitária de robótica da UNA voltado ao desenvolvimento do Emerald Strikers FC, um time de pequenos robôs móveis que jogam futebol e combinam firmware embarcado, eletrônica, navegação, design de placas e identidade sonora.

O projeto une formação técnica e execução prática. As trilhas de aula estruturam o aprendizado em sistemas embarcados, enquanto a frota de robôs consolida esse conhecimento em um produto acadêmico real, documentado e visível para quem vem de fora.

## O que é o Emerald Strikers FC

O Emerald Strikers FC é a identidade do time desenvolvido dentro do projeto prático de robótica móvel. A ideia central é criar três robôs, uma missão e uma linguagem própria de comportamento em campo.

Os materiais-base do projeto deixam claro que a proposta trabalha sobre três pilares:

- hardware, software e mecânica como partes do mesmo sistema;
- formação progressiva em eletrônica e programação embarcada;
- construção de robôs mais expressivos, imersivos e tecnicamente consistentes.

## Por que este repositório importa

Para estudantes, o repositório funciona como trilha prática de aprendizado. Para recrutadores, docentes e pessoas interessadas em tecnologia, ele mostra um recorte concreto de:

- firmware em C++ para microcontroladores;
- integração entre código, PCB e comportamento físico;
- documentação técnica legível e versionada;
- prototipação de robôs móveis com foco em navegação, atuação e resposta sonora;
- evolução de um projeto acadêmico para uma vitrine técnica pública.

## Diferenciais do projeto

### Robôs com papel tático e persona

Cada robô foi pensado como um agente de campo com função específica, traços de personalidade e comportamento coerente com sua identidade.

### Expressões sonoras embarcadas

O material interno do Emerald Strikers FC mostra que os sons foram escolhidos para dar personalidade aos robôs. A apresentação do projeto também registra o uso de inteligência artificial como apoio à criação de sons únicos, alinhados às características de cada personagem.

### Integração entre movimento e som

A lógica descrita para o projeto organiza movimento primeiro e expressões sonoras depois. Isso facilita sincronização, clareza de comportamento e testes de bancada.

## Competências técnicas exploradas

- programação embarcada com C++;
- uso de pinMode, digitalWrite, tone, noTone e comunicação serial;
- controle de motores e direção com ponte H;
- leitura e construção de esquemas de hardware em EAGLE;
- modularização de funções para movimento, teste e interação;
- documentação técnica orientada a ensino, manutenção e evolução incremental.

## Arquitetura do repositório

```text
soccer-robots/
|-- LICENSE
|-- README.md
|-- aulas_scripts/
|   |-- 2026-03-21-introducao-esp32/
|   |-- 2026-03-28-interacao-buzzer/
|   |-- 2026-04-11-direcao-robo/
|   |-- 2026-05-23-comunicacao-serial/
|   `-- 2026-05-23-configuracao-comunicacao-serial/
|-- docs/
|   |-- materiais/
|   `-- visao-do-projeto.md
`-- robos/
        |-- Knuckles - goleiro/
        |-- Shadow - atacante/
        `-- Sonic - zagueiro/
```

## Frota tática

Cada robô concentra firmware e hardware no mesmo módulo, preservando a ligação entre lógica embarcada e desenho físico da placa.

| Robô | Papel em campo | Persona | Arquivos principais |
| --- | --- | --- | --- |
| Knuckles | Goleiro | Equidna crossfiteira, associada a força, impacto e vitória | [knuckles.cpp](robos/Knuckles%20-%20goleiro/knuckles.cpp) e [knuckles.brd](robos/Knuckles%20-%20goleiro/knuckles.brd) |
| Sonic | Zagueiro | Azulão supersônico, veloz, acelerado e eufórico | [sonic.cpp](robos/Sonic%20-%20zagueiro/sonic.cpp) e [sonic.brd](robos/Sonic%20-%20zagueiro/sonic.brd) |
| Shadow | Atacante | Emo veloz, frio, sombrio e preciso | [shadow.cpp](robos/Shadow%20-%20atacante/shadow.cpp) e [shadow.brd](robos/Shadow%20-%20atacante/shadow.brd) |

## Expressão sonora e comportamento

O material do Emerald Strikers FC descreve uma lógica comum para os personagens:

- cada robô possui três funções centrais de interação: intro, raiva e felicidade;
- as rotinas sonoras usam o buzzer como mecanismo de expressão emocional;
- cada som reforça as características do personagem;
- som, movimento e personalidade ajudam a transformar o robô em um personagem de fato, não apenas em um mecanismo funcional.

## Trilha formativa das aulas

As aulas do repositório mostram a progressão didática que sustenta o projeto. Cada trilha reúne README, firmware e hardware em um mesmo diretório.

| Aula | Data | Foco | Pasta |
| --- | --- | --- | --- |
| 01 | 21/03/2026 | Introdução à programação embarcada com LED, pinMode, digitalWrite e delay | [2026-03-21-introducao-esp32](aulas_scripts/2026-03-21-introducao-esp32/README.md) |
| 02 | 28/03/2026 | Interação com buzzer, estrutura sequencial e melodia com tone | [2026-03-28-interacao-buzzer](aulas_scripts/2026-03-28-interacao-buzzer/README.MD) |
| 03 | 11/04/2026 | Controle de motores, deslocamento do robô e ponte H | [2026-04-11-direcao-robo](aulas_scripts/2026-04-11-direcao-robo/README.md) |
| 04 | 23/05/2026 | Configuração da comunicação serial e monitoramento | [2026-05-23-configuracao-comunicacao-serial](aulas_scripts/2026-05-23-configuracao-comunicacao-serial/README.md) |
| 05 | 23/05/2026 | Comunicação serial interativa com controle de LED | [2026-05-23-comunicacao-serial](aulas_scripts/2026-05-23-comunicacao-serial/README.md) |

## Base conceitual do projeto

Os materiais usados na formação reforçam uma linha clara de aprendizagem:

- definição e aplicações de robôs móveis;
- navegação e direção a partir de motores e ponte H;
- integração entre entradas digitais, saídas digitais e periféricos;
- programação estruturada com setup, loop, sequência, seleção e repetição;
- interação sonora como camada de comportamento embarcado.

## Documentação complementar

- [docs/visao-do-projeto.md](docs/visao-do-projeto.md): síntese pública do contexto técnico e pedagógico do Emerald Strikers FC.
- [docs/materiais](docs/materiais): área reservada para apoio documental e organização complementar.

## Pessoas por trás do projeto

A lista abaixo reúne perfis públicos confirmados da equipe e das pessoas diretamente associadas à execução técnica mostrada neste repositório.

| Integrante | GitHub |
| --- | --- |
| Yohanan Aguilar Amaral | [@yohananaguilar](https://github.com/yohananaguilar) |
| Augusto Alves da Silva | [@Augusto-Silva-dev](https://github.com/Augusto-Silva-dev) |
| Elza Koeler de Barros Ribeiro | [@ElzaKoeler](https://github.com/ElzaKoeler) |
| Huany Gabrielle Gonçalves Machado | [@huanygabriellegm-art](https://github.com/huanygabriellegm-art) |
| João Vitor Paim Nicacio | [@jp4inbr](https://github.com/jp4inbr) |
| Maria Júlia Castro Neves | [@mariajneves](https://github.com/mariajneves) |
| Maria Luisa Pinto Porfírio | [@marialuisa-porfirio](https://github.com/marialuisa-porfirio) |
| Matheus Santos Damasceno | [@MatheusDama](https://github.com/MatheusDama) |

## Diretriz de evolução

A main deve continuar como vitrine técnica do projeto. Novos avanços devem preservar a relação entre documentação, firmware, hardware e contexto pedagógico para que o repositório siga útil tanto para a equipe quanto para quem o visita de fora.
