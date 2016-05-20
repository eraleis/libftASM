global _ft_memcpy

section .text

_ft_memcpy:
	mov rcx, rdx
	mov r11, rdi
	cld
	rep movsb

end:
	mov rax, r11
	ret