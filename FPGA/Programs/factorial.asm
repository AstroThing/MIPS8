main:
	li r1, 5
	li r3, 1

factorial:
	li r0, 0
	cmp r1, r0
	jz stop

	li r0, 1
	cmp r1, r0
	jz stop

	li r0, 0
	li r2, 0
	sw r1, r0

result_multiply:
	cmp r1, r0
	jnz multiply
	mov r3, r2
	li r0, 0
	lw r1, r0
	subi r1, 1
	jmp factorial

multiply:
	add r2, r3
	subi r1, 1
	jmp result_multiply

stop:
	nop