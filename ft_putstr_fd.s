global _ft_putstr_fd

section .data
	line db 10

section .text

_ft_putstr_fd :
	mov r8, rdi
	mov r9, rsi

while:
	cmp [r8], byte 0
	je end
	mov rdi, r9
	mov rsi, r8
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	inc r8
	jmp while

end:
	ret