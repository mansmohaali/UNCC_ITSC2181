	.arch armv8.4-a+fp16+sb+ssbs
	.build_version macos,  15, 0
	.text
	.cstring
	.align	3
lC0:
	.ascii "Usage: %s <filename>\12\0"
	.align	3
lC1:
	.ascii "r\0"
	.align	3
lC2:
	.ascii "Unable to open the input file.\0"
	.align	3
lC3:
	.ascii "%s %d %f\0"
	.align	3
lC4:
	.ascii "\12-----------------------------------------------------\0"
	.align	3
lC5:
	.ascii "Total Items: %d\11\11Total Cost: $%.2f\12\0"
	.text
	.align	2
	.globl _main
_main:
LFB10:
	sub	sp, sp, #416
LCFI0:
	stp	x29, x30, [sp, 32]
LCFI1:
	add	x29, sp, 32
LCFI2:
	str	w0, [x29, 28]
	str	x1, [x29, 16]
	ldr	w0, [x29, 28]
	cmp	w0, 2
	beq	L2
	ldr	x0, [x29, 16]
	ldr	x0, [x0]
	str	x0, [sp]
	adrp	x0, lC0@PAGE
	add	x0, x0, lC0@PAGEOFF;
	bl	_printf
	mov	w0, 1
	b	L7
L2:
	ldr	x0, [x29, 16]
	add	x0, x0, 8
	ldr	x2, [x0]
	adrp	x0, lC1@PAGE
	add	x1, x0, lC1@PAGEOFF;
	mov	x0, x2
	bl	_fopen
	str	x0, [x29, 368]
	ldr	x0, [x29, 368]
	cmp	x0, 0
	bne	L4
	adrp	x0, lC2@PAGE
	add	x0, x0, lC2@PAGEOFF;
	bl	_puts
	mov	w0, 1
	b	L7
L4:
	str	wzr, [x29, 380]
	str	wzr, [x29, 376]
	b	L5
L6:
	add	x0, x29, 104
	bl	_parse_data
	fmov	s31, s0
	str	s31, [x29, 96]
	add	x2, x29, 104
	add	x0, x29, 96
	str	x0, [sp, 16]
	add	x0, x29, 100
	str	x0, [sp, 8]
	add	x0, x29, 40
	str	x0, [sp]
	adrp	x0, lC3@PAGE
	add	x1, x0, lC3@PAGEOFF;
	mov	x0, x2
	bl	_sscanf
	ldr	s31, [x29, 100]
	scvtf	s30, s31
	ldr	s31, [x29, 96]
	fmul	s31, s30, s31
	str	s31, [x29, 364]
	ldr	w0, [x29, 380]
	add	w0, w0, 1
	str	w0, [x29, 380]
	ldr	s30, [x29, 376]
	ldr	s31, [x29, 364]
	fadd	s31, s30, s31
	str	s31, [x29, 376]
	ldr	w1, [x29, 100]
	ldr	s31, [x29, 96]
	add	x0, x29, 40
	fmov	s0, s31
	bl	_pretty_print
L5:
	add	x0, x29, 104
	ldr	x2, [x29, 368]
	mov	w1, 256
	bl	_fgets
	cmp	x0, 0
	bne	L6
	ldr	x0, [x29, 368]
	bl	_fclose
	adrp	x0, lC4@PAGE
	add	x0, x0, lC4@PAGEOFF;
	bl	_puts
	ldr	s31, [x29, 376]
	fcvt	d31, s31
	str	d31, [sp, 8]
	ldr	w0, [x29, 380]
	str	w0, [sp]
	adrp	x0, lC5@PAGE
	add	x0, x0, lC5@PAGEOFF;
	bl	_printf
	mov	w0, 0
L7:
	ldp	x29, x30, [sp, 32]
	add	sp, sp, 416
LCFI3:
	ret
LFE10:
	.align	2
	.globl _parse_data
_parse_data:
LFB11:
	sub	sp, sp, #128
LCFI4:
	stp	x29, x30, [sp, 32]
LCFI5:
	add	x29, sp, 32
LCFI6:
	str	x0, [x29, 24]
	add	x0, x29, 36
	str	x0, [sp, 16]
	add	x0, x29, 32
	str	x0, [sp, 8]
	add	x0, x29, 40
	str	x0, [sp]
	adrp	x0, lC3@PAGE
	add	x1, x0, lC3@PAGEOFF;
	ldr	x0, [x29, 24]
	bl	_sscanf
	ldr	s31, [x29, 36]
	fmov	s0, s31
	ldp	x29, x30, [sp, 32]
	add	sp, sp, 128
LCFI7:
	ret
LFE11:
	.cstring
	.align	3
lC6:
	.ascii "Item: %-10s\11Quantity: %2d\11Item Cost: $%5.2f\11Subtotal: $%6.2f\11\12\0"
	.text
	.align	2
	.globl _pretty_print
_pretty_print:
LFB12:
	sub	sp, sp, #80
LCFI8:
	stp	x29, x30, [sp, 32]
LCFI9:
	add	x29, sp, 32
LCFI10:
	str	x0, [x29, 24]
	str	w1, [x29, 20]
	str	s0, [x29, 16]
	ldr	s31, [x29, 20]
	scvtf	s31, s31
	ldr	s30, [x29, 16]
	fmul	s31, s30, s31
	str	s31, [x29, 44]
	ldr	s31, [x29, 16]
	fcvt	d30, s31
	ldr	s31, [x29, 44]
	fcvt	d31, s31
	str	d31, [sp, 24]
	str	d30, [sp, 16]
	ldr	w0, [x29, 20]
	str	w0, [sp, 8]
	ldr	x0, [x29, 24]
	str	x0, [sp]
	adrp	x0, lC6@PAGE
	add	x0, x0, lC6@PAGEOFF;
	bl	_printf
	nop
	ldp	x29, x30, [sp, 32]
	add	sp, sp, 80
LCFI11:
	ret
LFE12:
	.section __TEXT,__eh_frame,coalesced,no_toc+strip_static_syms+live_support
EH_frame1:
	.set L$set$0,LECIE1-LSCIE1
	.long L$set$0
LSCIE1:
	.long	0
	.byte	0x3
	.ascii "zR\0"
	.uleb128 0x1
	.sleb128 -8
	.uleb128 0x1e
	.uleb128 0x1
	.byte	0x10
	.byte	0xc
	.uleb128 0x1f
	.uleb128 0
	.align	3
LECIE1:
LSFDE1:
	.set L$set$1,LEFDE1-LASFDE1
	.long L$set$1
LASFDE1:
	.long	LASFDE1-EH_frame1
	.quad	LFB10-.
	.set L$set$2,LFE10-LFB10
	.quad L$set$2
	.uleb128 0
	.byte	0x4
	.set L$set$3,LCFI0-LFB10
	.long L$set$3
	.byte	0xe
	.uleb128 0x1a0
	.byte	0x4
	.set L$set$4,LCFI1-LCFI0
	.long L$set$4
	.byte	0x9d
	.uleb128 0x30
	.byte	0x9e
	.uleb128 0x2f
	.byte	0x4
	.set L$set$5,LCFI2-LCFI1
	.long L$set$5
	.byte	0xc
	.uleb128 0x1d
	.uleb128 0x180
	.byte	0x4
	.set L$set$6,LCFI3-LCFI2
	.long L$set$6
	.byte	0xdd
	.byte	0xde
	.byte	0xc
	.uleb128 0x1f
	.uleb128 0
	.align	3
LEFDE1:
LSFDE3:
	.set L$set$7,LEFDE3-LASFDE3
	.long L$set$7
LASFDE3:
	.long	LASFDE3-EH_frame1
	.quad	LFB11-.
	.set L$set$8,LFE11-LFB11
	.quad L$set$8
	.uleb128 0
	.byte	0x4
	.set L$set$9,LCFI4-LFB11
	.long L$set$9
	.byte	0xe
	.uleb128 0x80
	.byte	0x4
	.set L$set$10,LCFI5-LCFI4
	.long L$set$10
	.byte	0x9d
	.uleb128 0xc
	.byte	0x9e
	.uleb128 0xb
	.byte	0x4
	.set L$set$11,LCFI6-LCFI5
	.long L$set$11
	.byte	0xc
	.uleb128 0x1d
	.uleb128 0x60
	.byte	0x4
	.set L$set$12,LCFI7-LCFI6
	.long L$set$12
	.byte	0xdd
	.byte	0xde
	.byte	0xc
	.uleb128 0x1f
	.uleb128 0
	.align	3
LEFDE3:
LSFDE5:
	.set L$set$13,LEFDE5-LASFDE5
	.long L$set$13
LASFDE5:
	.long	LASFDE5-EH_frame1
	.quad	LFB12-.
	.set L$set$14,LFE12-LFB12
	.quad L$set$14
	.uleb128 0
	.byte	0x4
	.set L$set$15,LCFI8-LFB12
	.long L$set$15
	.byte	0xe
	.uleb128 0x50
	.byte	0x4
	.set L$set$16,LCFI9-LCFI8
	.long L$set$16
	.byte	0x9d
	.uleb128 0x6
	.byte	0x9e
	.uleb128 0x5
	.byte	0x4
	.set L$set$17,LCFI10-LCFI9
	.long L$set$17
	.byte	0xc
	.uleb128 0x1d
	.uleb128 0x30
	.byte	0x4
	.set L$set$18,LCFI11-LCFI10
	.long L$set$18
	.byte	0xdd
	.byte	0xde
	.byte	0xc
	.uleb128 0x1f
	.uleb128 0
	.align	3
LEFDE5:
	.ident	"GCC: (Homebrew GCC 14.2.0) 14.2.0"
	.subsections_via_symbols
