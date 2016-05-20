global	_ft_power

section .text

_ft_power:
	mov rax, 1 
	cmp rsi, 0
	je end
	mov rcx, 0
	mov r12, rdi

loop:
	cmp rcx, rsi
	je end
	inc rcx
	mul rdi
	jmp loop

end:
	ret