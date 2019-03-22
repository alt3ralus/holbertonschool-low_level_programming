section .text
   global main

main:
    mov eax, 4
    mov ebx, 1
    mov ecx, string
    mov edx, strlen
    int 0x80

    mov eax, 1
    mov ebx, 0
    int 0x80

section .data
    string  db 'Hello, Holberton',10
    strlen equ $ -  string
