main:
	li r0, 0
	li r1, 6
	li r2, 3
	li r3, 0

multiply:
	cmp r2, r0
	jz stop
	add r3, r1
	subi r2, 1
	jmp multiply

stop:
	nop