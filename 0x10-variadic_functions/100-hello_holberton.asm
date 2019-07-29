section .data
	text db "Hello, Holberton",10 	;defines bytes and labels for memory address "text"

section .text
	global _start

_start:				;this line es called label
	mov rax, 1		;this block is for sys_write(1,text,17)
	mov rdi, 1
	mov rsi, text
	mov rdx, 17
	syscall

	mov rax, 60 		;in this line start the sys_exit(0)
	mov rdi, 0
	syscall
