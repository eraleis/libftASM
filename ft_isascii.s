global _ft_isascii

section .text

_ft_isascii:
	mov rcx, 0
	jmp loop

loop:
	cmp rdi, rcx
	je true
	inc rcx
	cmp rcx, 128
	je false
	jmp loop

true:
	mov rax, 1
	jmp end

false:
	mov rax, 0

end:
	ret
