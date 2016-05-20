global _ft_memset

section .text

_ft_memset:
	mov r11, rdi
	mov rcx, rdx
	mov rax, rsi
	cld
	rep stosb

end:
	mov rax, r11
	ret