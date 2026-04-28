global ft_read
extern __errno_location

ft_read:
    mov rax, 0
    syscall
    cmp rax, 0
    jl set_error
    ret

set_error:
    neg rax
    mov rdi, rax
    call __errno_location WRT ..plt
    mov [rax], rdi
    mov rax, -1
    ret
