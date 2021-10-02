global strchr:

	section .text

strchr:
    mov rax, rdi 

loop:
    cmp byte [rax], 0
    jz end
    cmp byte [rax], sil
    jz return_pointer
    inc rax
    jmp loop

end:
    cmp sil, 0
    jz return_pointer
    xor rax, rax

return_pointer:
    ret