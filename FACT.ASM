.model small
.data
a dw 6
.code
mov ax,@data
mov ds,ax
mov cx,a
mov ax,1
l1:mul cx
   dec cx
   jnz l1
   jmp last
last:mov bx,ax
     mov ah,4ch
     int 21h
     end
