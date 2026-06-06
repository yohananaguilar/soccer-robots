# soccer-robots

Repositório central da extensão universitária de robótica, dedicado ao estudo de microcontroladores e ao desenvolvimento de um time de robôs de futebol autônomos. A branch main reúne a documentação principal do projeto, os módulos físicos e lógicos da frota tática e os materiais didáticos utilizados nas aulas.

## Visão geral

O repositório foi consolidado para manter, em um único ponto de entrada:

- os firmwares e diagramas de placa dos robôs da equipe;
- os roteiros práticos das aulas com exemplos de firmware e hardware;
- a documentação viva usada para orientar manutenção, estudo e evolução do projeto.

Essa estrutura reduz ambiguidade entre software, hardware e material pedagógico, preservando a rastreabilidade das entregas técnicas do grupo.

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
|   `-- materiais/
`-- robos/
    |-- Knuckles - goleiro/
    |-- Shadow - atacante/
    `-- Sonic - zagueiro/
```

## Frota de robôs

Cada robô é tratado como um módulo coeso e independente, reunindo o firmware em C++ e o diagrama da placa correspondente.

| Robô | Papel tático | Firmware | Placa |
| --- | --- | --- | --- |
| Knuckles | Goleiro | [knuckles.cpp](robos/Knuckles%20-%20goleiro/knuckles.cpp) | [knuckles.brd](robos/Knuckles%20-%20goleiro/knuckles.brd) |
| Shadow | Atacante | [shadow.cpp](robos/Shadow%20-%20atacante/shadow.cpp) | [shadow.brd](robos/Shadow%20-%20atacante/shadow.brd) |
| Sonic | Zagueiro | [sonic.cpp](robos/Sonic%20-%20zagueiro/sonic.cpp) | [sonic.brd](robos/Sonic%20-%20zagueiro/sonic.brd) |

## Trilhas de aula

As aulas estão organizadas por data e tema. Cada pasta dentro de aulas_scripts concentra um README próprio, um firmware de referência e o respectivo diagrama de hardware em formato EAGLE.

| Aula | Data | Tema | Pasta |
| --- | --- | --- | --- |
| 01 | 21/03/2026 | Introdução ao ESP32 | [2026-03-21-introducao-esp32](aulas_scripts/2026-03-21-introducao-esp32/README.md) |
| 02 | 28/03/2026 | Interação com buzzer | [2026-03-28-interacao-buzzer](aulas_scripts/2026-03-28-interacao-buzzer/README.MD) |
| 03 | 11/04/2026 | Controle de motores com ponte H | [2026-04-11-direcao-robo](aulas_scripts/2026-04-11-direcao-robo/README.md) |
| 04 | 23/05/2026 | Configuração da comunicação serial | [2026-05-23-configuracao-comunicacao-serial](aulas_scripts/2026-05-23-configuracao-comunicacao-serial/README.md) |
| 05 | 23/05/2026 | Comunicação serial com controle de LED | [2026-05-23-comunicacao-serial](aulas_scripts/2026-05-23-comunicacao-serial/README.md) |

## Documentação e materiais de apoio

O diretório docs concentra materiais auxiliares do projeto. A pasta [docs/materiais](docs/materiais) está reservada para insumos de apoio e organização documental complementar.

## Organização dos módulos

### Firmware embarcado

Os arquivos .cpp presentes em robos e aulas_scripts registram a lógica trabalhada no microcontrolador, cobrindo tanto o comportamento da frota quanto os exemplos didáticos usados em aula.

### Hardware físico

Os arquivos .brd documentam o desenho das placas eletrônicas do projeto. A proximidade entre firmware e hardware dentro de cada pasta reduz dispersão de contexto e facilita manutenção.

### Documentação viva

O README principal e os READMEs locais das aulas atuam como documentação operacional do projeto. Sempre que a arquitetura do repositório for ampliada ou reorganizada, a documentação deve acompanhar a mudança.

## Diretriz de integração

A branch main deve concentrar versões consolidadas do projeto. Mudanças experimentais ou evoluções temáticas podem nascer em outras branches, mas a integração final deve preservar alinhamento entre firmware, hardware e documentação.

## Quem fez acontecer

Este projeto saiu do papel graças à união de muita dedicação, técnica e trabalho em equipe.

<table>
  <tr>
    <td align="center">
      <a href="https://github.com/yohananaguilar">
        <img src="https://github.com/yohananaguilar.png?size=120" width="96" alt="Yohanan Aguilar"><br>
        <sub><b>Yohanan Aguilar</b></sub><br>
        <sub>@yohananaguilar</sub>
      </a>
    </td>
    <td align="center">
      <a href="https://github.com/rodrebas">
        <img src="https://github.com/rodrebas.png?size=120" width="96" alt="Rodrigo (Rodrebas)"><br>
        <sub><b>Rodrigo (Rodrebas)</b></sub><br>
        <sub>@rodrebas</sub>
      </a>
    </td>
    <td align="center">
      <a href="https://github.com/Augusto-Silva-dev">
        <img src="https://github.com/Augusto-Silva-dev.png?size=120" width="96" alt="Augusto Silva"><br>
        <sub><b>Augusto Silva</b></sub><br>
        <sub>@Augusto-Silva-dev</sub>
      </a>
    </td>
    <td align="center">
      <a href="https://github.com/genialine">
        <img src="https://github.com/genialine.png?size=120" width="96" alt="Aline Rocha"><br>
        <sub><b>Aline Rocha</b></sub><br>
        <sub>@genialine</sub>
      </a>
    </td>
    <td align="center">
      <a href="https://github.com/huanygabriellegm-art">
        <img src="https://github.com/huanygabriellegm-art.png?size=120" width="96" alt="huanygabriellegm-art"><br>
        <sub><b>huanygabriellegm-art</b></sub><br>
        <sub>@huanygabriellegm-art</sub>
      </a>
    </td>
  </tr>
  <tr>
    <td align="center">
      <a href="https://github.com/jp4inbr">
        <img src="https://github.com/jp4inbr.png?size=120" width="96" alt="jp4inbr"><br>
        <sub><b>jp4inbr</b></sub><br>
        <sub>@jp4inbr</sub>
      </a>
    </td>
    <td align="center">
      <a href="https://github.com/mariajneves">
        <img src="https://github.com/mariajneves.png?size=120" width="96" alt="Maria Júlia Neves"><br>
        <sub><b>Maria Júlia Neves</b></sub><br>
        <sub>@mariajneves</sub>
      </a>
    </td>
    <td align="center">
      <a href="https://github.com/marialuisa-porfirio">
        <img src="https://github.com/marialuisa-porfirio.png?size=120" width="96" alt="marialuisa_porfirio"><br>
        <sub><b>marialuisa_porfirio</b></sub><br>
        <sub>@marialuisa-porfirio</sub>
      </a>
    </td>
    <td align="center">
      <a href="https://github.com/MatheusBMorgado">
        <img src="https://github.com/MatheusBMorgado.png?size=120" width="96" alt="Matheus Barreto Morgado"><br>
        <sub><b>Matheus Barreto Morgado</b></sub><br>
        <sub>@MatheusBMorgado</sub>
      </a>
    </td>
    <td align="center">
      <a href="https://github.com/MatheusDama">
        <img src="https://github.com/MatheusDama.png?size=120" width="96" alt="Matheus Santos Damasceno"><br>
        <sub><b>Matheus Santos Damasceno</b></sub><br>
        <sub>@MatheusDama</sub>
      </a>
    </td>
  </tr>
</table>
