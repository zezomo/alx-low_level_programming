section		.text
	extern	printf
	global	main

main:
	mov		edi, msg
	mov		eax, 0
	call	printf

section		.date
	msg db 'Hello, Holberton', 0xa, 0
