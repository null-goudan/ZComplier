; ==== begin function `zcomplier_main` ====
%define zcomplier_main.argc 0

%MACRO $zcomplier_main 0
   CALL @zcomplier_main
   ADD ESP, 4*zcomplier_main.argc
   PUSH EAX
%ENDMACRO

%define zcomplier_main.varc 3

%MACRO zcomplier_main.var zcomplier_main.varc
	%define a [EBP - 4*1]
	%define b [EBP - 4*2]
	%define c [EBP - 4*3]
	SUB ESP, 4*zcomplier_main.varc
%ENDMACRO

%MACRO ENDFUNC@zcomplier_main 0
	LEAVE
	RET
	%undef a
	%undef b
	%undef c
%ENDMACRO
; ==== end function `zcomplier_main`   ====

; ==== begin function `inputaint` ====
%define inputaint.argc 0

%MACRO $inputaint 0
   CALL @inputaint
   ADD ESP, 4*inputaint.argc
   PUSH EAX
%ENDMACRO

%MACRO ENDFUNC@inputaint 0
	LEAVE
	RET
%ENDMACRO
; ==== end function `inputaint`   ====

