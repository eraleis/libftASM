section .bss
	buffer REST 100

section .text
	global _ft_cat

_ft_cat:
	mov r14, rdi

_read:
	mov		rax, 0x2000003
	mov		rdi, r14
	lea		rsi, [rel buffer]
	mov		rdx, 100
	syscall
	jc _endoffile

	cmp rax, 0
	je _endreturn

	mov 	r12, rax
	mov		rax, 0x2000004
	mov		rdi, 1
	lea		rsi, [rel buffer]
	mov		rdx, r12
	syscall
	jmp _read

_endoffile:
	mov 	r12, rax
	mov		rax, 0x2000004
	mov		rdi, 1
	lea		rsi, [rel buffer]
	mov		rdx, r12
	syscall
	ret

_endreturn:
	ret