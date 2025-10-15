

global ft_strlen

ft_strlen:
	xor rsi, rsi
	.loop:
		mov al, [rdi + rsi]
		cmp al, 0
		je	.return
		inc rsi
		jmp .loop
	.return:
		mov rax, rsi
		ret

section .note.GNU-stack
