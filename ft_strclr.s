global _ft_strclr

section .text

_ft_strclr:
	mov rcx, 0

loop:
	cmp [rdi + rcx], byte 0
	je end
	mov [rdi + rcx], byte 0
	inc rcx

end:
	
	ret