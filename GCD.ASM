.model small
.data
a dw 36
b dw 60
.code
mov ax,@data
mov ds,ax
xor ax,ax
mov ax,a
mov bx,b
call gcd
xor dx,dx
aam
mov dx,ax
add dx,3030h
xchg dl,dh
mov ah,02h
int 21h
xchg dl,dh
int 21h
mov ah,4ch
int 21h



gcd proc near
cmp bx,0000h
je final
div bl
mov al,bl
mov bl,ah
mov ah,00h
call gcd
final:ret
      gcd endp
      end
 
