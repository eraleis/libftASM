global _ft_isalnum

section .text

_ft_isalnum:
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
	je initloopnum
	jmp loopmin

initloopnum:
	mov rcx, 48
	jmp loopnum

loopnum:
	cmp rdi, rcx
	je true
	inc rcx
	cmp rcx, 58
	je false
	jmp loopnum

true:
	mov rax, 1
	jmp end

false:
	mov rax, 0

end:
	ret