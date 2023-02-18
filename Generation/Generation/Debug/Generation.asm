.586
.model flat, stdcall
includelib libucrt.lib
includelib kernel32.lib
includelib "D:\Заметки\ZAM-2022\ZAM-2022\Generation\Generation\GenerationLib\Debug\GenerationLib.lib
ExitProcess PROTO:DWORD 
.stack 4096


 outnum PROTO : DWORD

 outstr PROTO : DWORD

 strcopy PROTO : DWORD, : DWORD

 lenght PROTO : DWORD, : DWORD

 atoii  PROTO : DWORD,  : DWORD

 strcomp  PROTO : DWORD,  : DWORD

.const
		newline byte 13, 10, 0
		LTRL1 sdword 5
		LTRL2 byte 'Length + 5:          ', 0
		LTRL3 byte 'String compare:         ', 0
		LTRL4 sdword 8
		LTRL5 sdword 3
		LTRL6 byte '8 module 3:         ', 0
		LTRL7 byte 'ZAM-2022', 0
		LTRL8 byte 'Course Project Test', 0
		LTRL9 byte '24', 0
		LTRL10 byte 'Number from string:  ', 0
		LTRL11 sdword 2
		LTRL12 sdword 6
		LTRL13 byte 'Left shift 2 on 6:   ', 0
		LTRL14 sdword 21
		LTRL15 sdword 13
		LTRL16 byte 'Minimal number:      ', 0
		LTRL17 byte 'Cycle:               ', 0
		LTRL18 sdword 135
		LTRL19 sdword 1
		LTRL20 byte '; ', 0
		LTRL21 sdword 4
		LTRL22 byte 'Number after cycle:  ', 0
.data
		temp sdword ?
		buffer byte 256 dup(0)
		minres sdword 0
		standk sdword 0
		standstr sdword 0
		mainx sdword 0
		mainy sdword 0
		mainstrx dword ?
		mainstry dword ?
		mainstrz dword ?
		maine sdword 0
		mainshiftnum sdword 0
		mainshiftres sdword 0
		mainminone sdword 0
		mainmintwo sdword 0
		mainresmin sdword 0
		mainab sdword 0
.code

;------------- min --------------
min PROC,
	minx : sdword, miny : sdword  
; -------- save registers -------
push ebx
push edx
; -------------------------------
mov edx, minx
cmp edx, miny

jl right1
jg wrong1
right1:
push minx

pop ebx
mov minres, ebx

jmp next1
wrong1:
push miny

pop ebx
mov minres, ebx

next1:
; ------ restore registers ------
pop edx
pop ebx
; -------------------------------
mov eax, minres
ret
min ENDP
;---------------


;------------- stand --------------
stand PROC,
	standa : dword, standb : dword  
; -------- save registers -------
push ebx
push edx
; -------------------------------

push standa
push offset buffer
call lenght
push eax
push LTRL1
pop ebx
pop eax
add eax, ebx
push eax

pop ebx
mov standk, ebx


push offset LTRL2
call outstr


push standk
call outnum

push offset newline
call outstr


push standb
push standa
push offset buffer
call strcomp
push eax

pop ebx
mov standstr, ebx


push offset LTRL3
call outstr


push standstr
call outnum

push offset newline
call outstr

; ------ restore registers ------
pop edx
pop ebx
; -------------------------------
ret
stand ENDP
;---------------


;------------- MAIN --------------
main PROC
push LTRL4

pop ebx
mov mainx, ebx

push LTRL5

pop ebx
mov mainy, ebx

push mainx
push mainy
pop ebx 
mov edx, 0 
pop eax 
idiv ebx 
push edx 
mov eax, edx

pop ebx
mov mainx, ebx


push offset LTRL6
call outstr


push mainx
call outnum

push offset newline
call outstr

mov mainstrx, offset LTRL7
mov mainstry, offset LTRL8
mov mainstrz, offset LTRL9

push offset LTRL10
call outstr


push mainstrz
push offset buffer
call atoii
push eax

pop ebx
mov maine, ebx


push maine
call outnum

push offset newline
call outstr

push LTRL11

pop ebx
mov mainshiftnum, ebx

push mainx
push LTRL12
pop ebx 
pop eax 
mov cl, bl 
shl eax, cl
push eax

pop ebx
mov mainshiftres, ebx


push offset LTRL13
call outstr


push mainshiftres
call outnum

push offset newline
call outstr

push LTRL14

pop ebx
mov mainminone, ebx

push LTRL15

pop ebx
mov mainmintwo, ebx


push mainmintwo
push mainminone
call min
push eax

pop ebx
mov mainresmin, ebx


push offset LTRL16
call outstr


push mainresmin
call outnum

push offset newline
call outstr


push offset LTRL17
call outstr

push LTRL18

pop ebx
mov mainab, ebx

mov edx, mainab
cmp edx, LTRL19

jg cycle2
jmp cyclenext2
cycle2:

push mainab
call outnum


push offset LTRL20
call outstr

push mainab
push LTRL21
pop ebx
pop eax
cdq
idiv ebx
push eax

pop ebx
mov mainab, ebx

mov edx, mainab
cmp edx, LTRL19

jg cycle2
cyclenext2:
push offset newline
call outstr


push offset LTRL22
call outstr


push mainab
call outnum

push offset newline
call outstr


push mainstry
push mainstrx
call stand

push 0
call ExitProcess
main ENDP
end main
