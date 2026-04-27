global ft_strcpy



ft_strcpy:
	xor rdx, rdx	
	.loop:
		movzx r10, byte [rsi + rdx] ; from src 
		mov byte [rdi + rdx], r10b ; to dest
		movzx rax, byte [rsi + rdx]
		cmp al, 0
		je .return
		inc rdx
		jmp .loop
	.return:
		mov rax, rdi
		ret

