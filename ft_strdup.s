global _ft_strdup

section .text

extern _malloc
extern _ft_strlen

_ft_strdup:
	enter 0, 0
	push rdi
	call _ft_strlen
	mov rcx, rax
	push rcx
	mov rdi, rax
	inc rdi
	call _malloc
	jc end
	pop rcx
	pop rsi
	mov rdi, rax
	cld
	rep movsb

end:
	leave
	ret