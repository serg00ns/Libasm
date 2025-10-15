global ft_strcmp

ft_strcmp:
	xor rdx, rdx
	
	.loop:
		mov al, [rdi + rdx]
		mov cl, [rsi + rdx]
		cmp al, cl
		jne .return
		jmp .nullcheck

	.nullcheck:
		cmp al, 0
		je .return
		inc rdx
		jmp .loop
		
	.return:
		sub al, cl
		movsx rax, al
		ret

section .note.GNU-stack
