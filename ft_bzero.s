global _ft_bzero

section .text

_ft_bzero:
	cmp rdi, 0
	jz end
	mov rbx, rdi
	mov rax, rsi

bzero_loop:
	cmp rax, 0
	jle end
	mov byte[rbx], 0
	inc rbx
	dec rax
	jmp bzero_loop

end:
	ret
