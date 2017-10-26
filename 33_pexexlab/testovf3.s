testovf:
	movq	big(%rip), %rdx
	movabsq	$9223372036854775807, %rax
	addq	%rdx, %rax
	cmpq	%rax, %rdx
	setg	%al
	ret



















.LFE0:
	.size	testovf, .-testovf
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	movl	$testovf, %eax
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.globl	big
	.data
	.align 8
	.type	big, @object
	.size	big, 8
big:
	.quad	9223372036854775807
	.ident	"GCC: (GNU) 6.2.0"
	.section	.note.GNU-stack,"",@progbits
