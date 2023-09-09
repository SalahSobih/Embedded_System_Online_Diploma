	.file	"macros.c"
	.section .rdata,"dr"
LC0:
	.ascii ".\\macros.c\0"
	.align 4
LC1:
	.ascii "@ Function : %s , File : %s , Line : %d\0"
LC2:
	.ascii "\11>> \0"
LC3:
	.ascii "...\0"
LC4:
	.ascii "sum is : %d\12\0"
	.text
	.globl	_CAN_init
	.def	_CAN_init;	.scl	2;	.type	32;	.endef
_CAN_init:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$15, 12(%esp)
	movl	$LC0, 8(%esp)
	movl	$___func__.1882, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$LC2, (%esp)
	call	_printf
	movl	$LC3, (%esp)
	call	_puts
	movl	$11, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.section .rdata,"dr"
LC5:
	.ascii "example 4 = %d\12\0"
	.text
	.globl	_CAN_Send
	.def	_CAN_Send;	.scl	2;	.type	32;	.endef
_CAN_Send:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$12, -12(%ebp)
	movl	$22, 12(%esp)
	movl	$LC0, 8(%esp)
	movl	$___func__.1886, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$LC2, (%esp)
	call	_printf
	movl	$LC3, (%esp)
	call	_puts
	movl	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC6:
	.ascii "Start Main \0"
LC7:
	.ascii "example1 = %d\12\0"
LC8:
	.ascii "salah soliman \0"
LC9:
	.ascii "End Main \0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB12:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$16, %esp
	call	___main
	movl	$28, 12(%esp)
	movl	$LC0, 8(%esp)
	movl	$___func__.1889, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$LC2, (%esp)
	call	_printf
	movl	$LC6, (%esp)
	call	_puts
	movl	$10, 4(%esp)
	movl	$LC7, (%esp)
	call	_printf
	movl	$LC8, (%esp)
	call	_puts
	call	_CAN_init
	call	_CAN_Send
	movl	$33, 12(%esp)
	movl	$LC0, 8(%esp)
	movl	$___func__.1889, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$LC2, (%esp)
	call	_printf
	movl	$LC9, (%esp)
	call	_puts
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE12:
	.section .rdata,"dr"
	.align 4
___func__.1882:
	.ascii "CAN_init\0"
	.align 4
___func__.1886:
	.ascii "CAN_Send\0"
	.align 4
___func__.1889:
	.ascii "main\0"
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
