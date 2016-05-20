global _ft_isblank

section .text

_ft_isblank:
	cmp rdi, 32
	je true
	cmp rdi, 9
	je true
	jmp false

true:
	mov rax, 1
	jmp end

false:
	mov rax, 0

end:
	ret
