global ft_strlen

ft_strlen:
	xor rsi, rsi
	.loop:
		movzx rax, byte [rdi + rsi]
		cmp rax, 0
		je	.return
		inc rsi
		jmp .loop
	.return:
		mov rax, rsi
		ret

