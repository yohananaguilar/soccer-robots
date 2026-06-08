# Visão do Projeto

Este documento sintetiza o contexto técnico e pedagógico do projeto a partir dos materiais-base da extensão e da apresentação interna do Emerald Strikers FC.

## Contexto

O Emerald Strikers FC é o braço prático da extensão universitária de robótica voltado à construção de robôs móveis que jogam futebol. O projeto combina ensino, experimentação e entrega técnica em torno de três frentes inseparáveis:

- firmware embarcado;
- eletrônica e desenho de placas;
- navegação e comportamento físico dos robôs.

Os materiais-base usados pelo professor e pelo time mostram que a proposta não é apenas montar um robô funcional, mas construir um sistema coerente, documentado e capaz de expressar comportamento em campo.

## Missão do projeto

O mote do time pode ser resumido como três robôs, uma missão. Na prática, isso significa desenvolver uma frota enxuta, com papéis táticos bem definidos e integração entre movimento, som e identidade visual.

O material interno do Emerald Strikers FC descreve explicitamente o objetivo de criar robôs mais expressivos e imersivos. Essa escolha diferencia o projeto de iniciativas que tratam o hardware apenas como exercício de acionamento básico.

## Fundamentos técnicos extraídos dos materiais

### Robótica móvel

Os slides de projeto prático apresentam robôs móveis como sistemas de navegação autônoma sem trilhos ou fitas no solo, enfatizando versatilidade, integração a processos e mobilidade orientada por software.

### Hardware, software e mecânica

O curso trabalha a ideia de que um robô funcional depende do alinhamento entre chassi, motores, alimentação, eletrônica, lógica de controle e montagem física. Por isso o repositório preserva a proximidade entre firmware e arquivo de placa.

### Programação embarcada

Os materiais de Arduíno reforçam o ciclo clássico de aprendizagem:

- algoritmo;
- fluxograma;
- programa;
- prática de programação.

Também consolidam o uso de setup, loop, pinMode, digitalWrite, tone, Serial.begin e Serial.println como base de construção dos experimentos presentes no repositório.

### Navegação e controle de motores

As aulas sobre direção de robô e ponte H detalham o controle de movimento com L293D e L298, além da lógica de frente, parada, retrocesso e viradas. Isso aparece de forma direta nos firmwares usados pela frota e nas trilhas de aula.

### Interação sonora

Os materiais de buzzer e a apresentação do Emerald Strikers FC mostram que o som foi tratado como elemento de design embarcado. Cada personagem usa expressões sonoras para reforçar apresentação, emoção e identidade em campo.

## Como isso aparece no repositório

### Robôs

As pastas em robos representam a aplicação integrada do conhecimento do curso em três agentes táticos:

- Knuckles, o goleiro;
- Sonic, o zagueiro;
- Shadow, o atacante.

Cada um reúne firmware e PCB na mesma pasta para facilitar rastreabilidade e manutenção.

### Aulas

As pastas em aulas_scripts funcionam como trilha de formação técnica. Elas documentam os passos que sustentam o projeto prático, desde o acionamento de LED até comunicação serial e controle de motores.

### Documentação pública

O README da raiz atua como porta de entrada para pessoas externas, enquanto este documento organiza o pano de fundo técnico e pedagógico do projeto sem depender do acesso aos materiais internos do time.

## Valor para recrutadores e interessados

Quem avalia este repositório encontra um conjunto de sinais importantes:

- trabalho em equipe com produto técnico real;
- documentação organizada e alinhada ao código;
- integração entre firmware, PCB e comportamento físico;
- preocupação com clareza, manutenção e apresentação pública;
- aplicação prática de conceitos de robótica móvel e sistemas embarcados.

## Direção futura

Conforme o projeto evoluir, o ideal é manter três compromissos:

- refletir no repositório a arquitetura real dos robôs;
- documentar decisões com linguagem acessível para público externo;
- preservar a ligação entre material didático, prototipação e entrega técnica.