global _ft_puts

section .data
	line db 10

section .text

_ft_puts :
	mov r8, rdi

while:
	cmp rdi, byte 0
	je null
	cmp [r8], byte 0
	je end
	mov rdi, 1
	mov rsi, r8
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	inc r8
	jmp while

end:
	push 10
	mov rsi, rsp
	mov rdi, 1
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	pop rax
	ret

null:
	mov rdi, 1
	mov [rsi], byte 40
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	mov rdi, 1
	mov [rsi], byte 110
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	mov rdi, 1
	mov [rsi], byte 117
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	mov rdi, 1
	mov [rsi], byte 108
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	mov rdi, 1
	mov [rsi], byte 108
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	mov rdi, 1
	mov [rsi], byte 41
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	mov rdi, 1
	mov [rsi], byte 10
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	ret