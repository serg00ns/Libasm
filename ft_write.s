global ft_write
extern __errno_location

ft_write:
	mov rax, 1
	syscall
	test rax, rax
	js .err
	ret
	.err:
		neg rax
		mov ecx, eax
		call __errno_location wrt ..plt
		mov dword [rax], ecx
	ret
