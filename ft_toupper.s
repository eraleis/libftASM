global	_ft_toupper

section .text

_ft_toupper:
	cmp rdi, 'a'
	jl false
	cmp rdi, 'z'
	jg false
	mov rax, rdi
	sub rax, 32
	ret

false:
	mov rax, rdi
	ret
