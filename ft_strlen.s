global	_ft_strlen

section .text

_ft_strlen:
	cmp rdi, 0
	je empty
	push rbp
	mov rbp, rsp
	mov al, 0
	mov rcx, -1
	repne scasb
	not rcx
	sub rcx, 1

	mov rax, rcx
	mov rsp, rbp
	pop rbp
	ret

empty:
	mov rax, 0
	ret
