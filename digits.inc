;----------------------------------------------
;DIGITS
;
; Storage of digits 0-9 for the score
; Digits are stored in a 2 x 8 x 8 format for fast access
; A digit is 5 x 8 coloured pixels + 1 pixel space
; A digit has a left- and a right byte 
; Because a character is 1.5 bytes width a digit
; can be plotted aligned left or right
;----------------------------------------------
digits

digits_l					; left digit left aligned
	.db $55,$6a,$6a,$69,$69,$69,$55,$aa ; 0
	.db $a6,$a6,$a6,$96,$96,$96,$96,$aa ; 1
	.db $55,$aa,$aa,$55,$5a,$5a,$55,$aa ; 2
	.db $55,$69,$a9,$95,$a9,$69,$55,$aa ; 3
	.db $55,$69,$69,$69,$55,$a5,$a5,$aa ; 4
	.db $55,$6a,$6a,$55,$a9,$69,$55,$aa ; 5
	.db $55,$6a,$6a,$55,$6a,$6a,$55,$aa ; 6
	.db $55,$aa,$aa,$a9,$a9,$a9,$a9,$aa ; 7
	.db $95,$99,$99,$55,$69,$69,$55,$aa ; 8
	.db $55,$6a,$6a,$55,$a9,$a9,$a9,$aa ; 9
digits_r					; left digit right aligned
	.db $05,$06,$06,$06,$06,$06,$05,$0a ; 0
	.db $0a,$0a,$0a,$09,$09,$09,$09,$0a ; 1
	.db $05,$0a,$0a,$05,$05,$05,$05,$0a ; 2
	.db $05,$06,$0a,$09,$0a,$06,$05,$0a ; 3
	.db $05,$06,$06,$06,$05,$0a,$0a,$0a ; 4
	.db $05,$06,$06,$05,$0a,$06,$05,$0a ; 5
	.db $05,$06,$06,$05,$06,$06,$05,$0a ; 6
	.db $05,$0a,$0a,$0a,$0a,$0a,$0a,$0a ; 7
	.db $09,$09,$09,$05,$06,$06,$05,$0a ; 8
	.db $05,$06,$06,$05,$0a,$0a,$0a,$0a ; 9
end_digits_r
	.blkb (256-end_digits_r+digits_l),0

digits1_l					; right digit left aligned
	.db $60,$60,$60,$60,$60,$60,$60,$a0 ; 0
	.db $a0,$a0,$a0,$a0,$a0,$a0,$a0,$a0 ; 1
	.db $60,$60,$60,$60,$a0,$a0,$60,$a0 ; 2
	.db $a0,$a0,$a0,$60,$60,$60,$60,$a0 ; 3
	.db $a0,$a0,$a0,$a0,$60,$a0,$a0,$a0 ; 4
	.db $60,$a0,$a0,$60,$60,$60,$60,$a0 ; 5
	.db $60,$60,$a0,$60,$60,$60,$60,$a0 ; 6
	.db $60,$60,$60,$60,$60,$60,$60,$a0 ; 7
	.db $a0,$a0,$a0,$60,$60,$60,$60,$a0 ; 8
	.db $60,$60,$60,$60,$60,$60,$60,$a0 ; 9
digits1_r					; right digit right aligned
	.db $56,$a6,$a6,$96,$96,$96,$56,$aa ; 0
	.db $6a,$6a,$6a,$6a,$6a,$6a,$6a,$aa ; 1
	.db $56,$a6,$a6,$56,$aa,$aa,$56,$aa ; 2
	.db $5a,$9a,$9a,$56,$96,$96,$56,$aa ; 3
	.db $5a,$9a,$9a,$9a,$56,$5a,$5a,$aa ; 4
	.db $56,$aa,$aa,$56,$96,$96,$56,$aa ; 5
	.db $56,$a6,$aa,$56,$a6,$a6,$56,$aa ; 6
	.db $56,$a6,$a6,$96,$96,$96,$96,$aa ; 7
	.db $5a,$9a,$9a,$56,$96,$96,$56,$aa ; 8
	.db $56,$a6,$a6,$56,$96,$96,$96,$aa ; 9




