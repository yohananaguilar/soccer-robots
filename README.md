# soccer-robots

Repositório central do projeto de futebol de robôs autônomos desenvolvido na extensão universitária de robótica. A base concentra a documentação principal do ecossistema e os módulos físicos e lógicos da frota tática formada por goleiro, zagueiro e atacante.

## Visão geral

O projeto organiza cada robô como um módulo coeso e independente. Em cada pasta ficam lado a lado:

- o firmware em C++ responsável pela lógica embarcada do microcontrolador;
- o arquivo .brd com o desenho da placa eletrônica correspondente;
- a identificação tática do robô dentro da estratégia da equipe.

Essa estrutura reduz ambiguidade entre software e hardware, facilita manutenção e preserva a rastreabilidade das entregas de cada integrante da equipe.

## Arquitetura do repositório

```text
soccer-robots/
|-- LICENSE
|-- README.md
`-- robos/
		|-- Knuckles - goleiro/
		|   |-- knuckles.brd
		|   `-- knuckles.cpp
		|-- Shadow - atacante/
		|   |-- shadow.brd
		|   `-- shadow.cpp
		`-- Sonic - zagueiro/
				|-- sonic.brd
				`-- sonic.cpp
```

## Frota de robôs

| Robô | Papel tático | Firmware | Placa |
| --- | --- | --- | --- |
| Knuckles | Goleiro | [knuckles.cpp](robos/Knuckles%20-%20goleiro/knuckles.cpp) | [knuckles.brd](robos/Knuckles%20-%20goleiro/knuckles.brd) |
| Shadow | Atacante | [shadow.cpp](robos/Shadow%20-%20atacante/shadow.cpp) | [shadow.brd](robos/Shadow%20-%20atacante/shadow.brd) |
| Sonic | Zagueiro | [sonic.cpp](robos/Sonic%20-%20zagueiro/sonic.cpp) | [sonic.brd](robos/Sonic%20-%20zagueiro/sonic.brd) |

## Organização dos módulos

### Firmware embarcado

Os arquivos .cpp registram o comportamento principal de cada robô, incluindo rotinas de deslocamento, acionamento de buzzer e identidade funcional de cada integrante da frota.

### Hardware físico

Os arquivos .brd documentam o desenho das placas eletrônicas utilizadas no projeto. Isso permite que o hardware acompanhe a evolução do firmware dentro do mesmo módulo, sem dispersar artefatos técnicos em múltiplos diretórios.

### Documentação viva

O README principal atua como ponto de entrada da main. Sempre que a arquitetura da frota for expandida ou reorganizada, a documentação central deve refletir a mudança para manter o repositório compreensível para toda a equipe.

## Diretriz de integração

A branch main deve concentrar versões consolidadas do projeto. Alterações experimentais ou evoluções isoladas de módulos podem acontecer em branches temáticas, mas a integração final deve manter firmware, hardware e documentação alinhados.

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
