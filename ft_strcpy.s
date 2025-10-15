global ft_strcpy


ft_strcpy:
	xor rdx, rdx	
	.loop:
		mov r10b, [rsi + rdx] ; src r10b
		mov BYTE [rdi + rdx], r10b ; to dst
		mov al, [rsi + rdx] 
		cmp al, 0
		je .return
		inc rdx
		jmp .loop
	.return:
		mov rax, rdi
		ret

section .note.GNU-stack
