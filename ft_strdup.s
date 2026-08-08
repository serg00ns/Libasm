global ft_strdup
extern malloc
extern ft_strlen
extern ft_strcpy
extern __errno_location

ft_strdup:
	push rdi ; store val
	call ft_strlen
	mov rdi, rax
	inc rdi
	call malloc wrt ..plt
	cmp rax, 0
	je .err
	mov rdi, rax
	pop rsi
	call ft_strcpy
	ret
	.err:
		mov ecx, 0x12
		call __errno_location wrt ..plt
		mov dword [rax], ecx
	ret
