#Questões abertas

#1. No item 2, o que muda se você usar / em vez de / no Python? E em C, como fica?
Em python, resultara na saída da parte inteira do resultado. Em C, não existe uma operação lógica para ele, as // servem para fazer comentários no código.

#2. No item 4, teste c * (9/5) no seu programa em C e explique o resultado.
Há a alteração do valor devido a ordem de prioridade que foi mudada com a adição dos parênteses

#3. No item 9, por que o C imprime 1 e o Python imprime True ? O que isso revela sobre como C
representa "verdadeiro" e "falso"?

Por se tratar de uma linguagem compilada True ou False é representado por 1 e 0, respectivamente, devido a sua composição binária

#4.Escolha um dos programas e rode gcc -S no seu .c . Abra o .s e localize onde acontece uma das
operações (uma soma, por exemplo).

  movl	-8(%rbp), %eax    1. Carrega o valor digitado ('ano') no registrador %eax
	movl	$2026, %edx     
	subl	%eax, %edx        3. Executa a SUBTRAÇÃO: %edx = %edx - %eax (2026 - ano)
	movl	%edx, -4(%rbp)
