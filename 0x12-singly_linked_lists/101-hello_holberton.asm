section .data
    hello db "Hello, Holberton",0
    format db "%s",10,0

section .text
    global main
    extern printf

main:
    push rdi
    push rsi

    lea rdi, [format]
    lea rsi, [hello]
    call printf

    pop rsi
    pop rdi

    ret
