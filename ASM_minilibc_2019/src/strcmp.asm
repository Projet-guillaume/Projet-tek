global strcmp:

    section .text

strcmp:
    xor rcx, rcx
    xor rax, rax

strcmp_loop:
    mov byte al, [rdi + rcx]
    mov byte ah, [rsi + rcx]
    cmp byte al, ah
    jne strcmp_end_loop
    cmp al, 0
    je strcmp_end_loop
    inc rcx
    jmp strcmp_loop

strcmp_end_loop:
    cmp al, 0
    jle strcmp_unsigned

strcmp_end_loop_check_sign2:
    cmp ah, 0
    jg strcmp_signed

strcmp_unsigned:
    xor rcx, rcx
    movzx rcx, al
    mov al, ah
    xor ah, ah
    sub rcx, rax
    mov rax, rcx
    ret

strcmp_signed:
    sub byte al, ah
    movsx rax, al
    ret