global ft_read
extern __errno_location

ft_read:
	mov rax, 0
	syscall
	test rax, rax
	js .err
	ret
	.err:
		neg rax
		mov ecx, eax
		call __errno_location wrt ..plt
		mov dword [rax], ecx
		mov rax, -1
	ret
