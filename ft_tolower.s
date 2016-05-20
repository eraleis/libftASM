global	_ft_tolower

section .text

_ft_tolower:
	cmp rdi, 'A'
	jl false
	cmp rdi, 'Z'
	jg false
	mov rax, rdi
	add rax, 32
	ret

false:
	mov rax, rdi
	ret
