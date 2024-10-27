li t0, 5
li t1, 43
bne t0, t1, EQUAL
EQUAL:
sub t2, t1, t0
j END
NEQUAL:
add t2, t1, t0
END: