global _ft_isprint

section .text

_ft_isprint:
	mov rcx, 32
	jmp loop

loop:
	cmp rdi, rcx
	je true
	inc rcx
	cmp rcx, 127
	je false
	jmp loop

true:
	mov rax, 1
	jmp end

false:
	mov rax, 0

end:
	ret
