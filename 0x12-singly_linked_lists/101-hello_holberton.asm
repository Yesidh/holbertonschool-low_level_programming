section .data
	msg db 'Hello, Holberton',0xa ;defines bytes and labels for memory address "text"
	msglen equ $ - msg

	section .text
	global main

main:				;this line es called label
	mov rax,1		;this block is for sys_write(1,text,17)
	mov rdi,1
	mov rsi,msg
	mov rdx,msglen
	syscall

	mov rax,60 		;in this line start the sys_exit(0)
	mov rdi,0
	syscall
