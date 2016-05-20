global _ft_isdigit

section .text

_ft_isdigit:
	mov rcx, 48
	jmp loop

loop:
	cmp rdi, rcx
	je true
	inc rcx
	cmp rcx, 58
	je false
	jmp loop

true:
	mov rax, 1
	jmp end

false:
	mov rax, 0

end:
	ret
