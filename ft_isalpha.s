global _ft_isalpha

section .text

_ft_isalpha:
	mov rcx, 65
	jmp loopmaj

loopmaj:
	cmp rdi, rcx
	je true
	inc rcx
	cmp rcx, 91
	je initloopmin
	jmp loopmaj

initloopmin:
	mov rcx, 97
	jmp loopmin

loopmin:
	cmp rdi, rcx
	je true
	inc rcx
	cmp rcx, 123
	je false
	jmp loopmin

true:
	mov rax, 1
	jmp end

false:
	mov rax, 0

end:
	ret
