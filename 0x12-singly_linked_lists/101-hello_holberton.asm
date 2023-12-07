global main
extern printf

section .data
    format db "Hello, Holberton", 0

section .text

main:
    mov edi, format
    xor eax, eax
    call printf

    ret
