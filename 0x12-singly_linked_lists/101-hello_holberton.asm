global main
extern printf

section .data
	format db "Hello, Holberton", 0
	newline db 10, 0

section .text

main:
	mov edi, format
	xor eax, eax
	call printf
	
	mov edi, newline
	xor eax, eax
	call printf
	ret
