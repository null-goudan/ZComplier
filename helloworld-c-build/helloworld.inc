; ==== begin function `yyxnb` ====
%define yyxnb.argc 0

%MACRO $yyxnb 0
   CALL @yyxnb
   ADD ESP, 4*yyxnb.argc
   PUSH EAX
%ENDMACRO

%define yyxnb.varc 1

%MACRO yyxnb.var yyxnb.varc
	%define a [EBP - 4*1]
	SUB ESP, 4*yyxnb.varc
%ENDMACRO

%MACRO ENDFUNC@yyxnb 0
	LEAVE
	RET
	%undef a
%ENDMACRO
; ==== end function `yyxnb`   ====

; ==== begin function `ZComplier` ====
%define ZComplier.argc 0

%MACRO $ZComplier 0
   CALL @ZComplier
   ADD ESP, 4*ZComplier.argc
   PUSH EAX
%ENDMACRO

%MACRO ENDFUNC@ZComplier 0
	LEAVE
	RET
%ENDMACRO
; ==== end function `ZComplier`   ====

