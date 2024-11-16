addi t0, zero, 4   
addi t1, zero, 4
addi t2, zero, 0
addi t3, zero, 0

bne t0, t1, ELSE
addi t1, t1, -4
add t3, t3, t1

ELSE:
addi t0, t0, 4
add t2, t2, t0