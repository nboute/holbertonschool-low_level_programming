section .data
msg: DB `Hello, World\n`
size: EQU $ - msg

global main

section .text
	main:
	mov edx, size
	mov ecx, msg
	mov ebx, 1
	mov eax, 4
	int 0x80
