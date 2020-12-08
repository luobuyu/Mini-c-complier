.data
_Prompt: .asciiz "Enter an integer:  "
_ret: .asciiz "\n"
.globl main
.text
j main
read:
  li $v0,4
  la $a0,_Prompt
  syscall
  li $v0,5
  syscall
  jr $ra
write:
  li $v0,1
  syscall
  li $v0,4
  la $a0,_ret
  syscall
  move $v0,$0
  jr $ra

sum:
  li $t3, 1
  sw $t3, 16($sp)
  lw $t1, 12($sp)
  lw $t2, 16($sp)
  beq $t1,$t2,label3
  j label2
label3:
  li $t3, 1
  sw $t3, 20($sp)
  lw $v0,20($sp)
  jr $ra
label2:
  li $t3, 1
  sw $t3, 24($sp)
  lw $t1, 12($sp)
  lw $t2, 24($sp)
  sub $t3, $t1, $t2
  sw $t3, 28($sp)
  move $t0,$sp
  addi $sp, $sp, -40
  sw $ra,0($sp)
  lw $t1, 28($t0)
  move $t3,$t1
  sw $t3,12($sp)
  jal sum
  lw $ra,0($sp)
  addi $sp,$sp,40
  sw $v0,32($sp)
  lw $t1, 32($sp)
  lw $t2, 12($sp)
  add $t3, $t1, $t2
  sw $t3, 36($sp)
  lw $v0,36($sp)
  jr $ra
label1:

main:
  addi $sp, $sp, -52
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal read
  lw $ra,0($sp)
  addi $sp, $sp, 4
  sw $v0, 24($sp)
  lw $t1, 24($sp)
  move $t3, $t1
  sw $t3, 12($sp)
  li $t3, 1
  sw $t3, 28($sp)
  lw $t1, 28($sp)
  move $t3, $t1
  sw $t3, 20($sp)
label9:
  lw $t1, 20($sp)
  lw $t2, 12($sp)
  ble $t1,$t2,label8
  j label7
label8:
  move $t0,$sp
  addi $sp, $sp, -40
  sw $ra,0($sp)
  lw $t1, 20($t0)
  move $t3,$t1
  sw $t3,12($sp)
  jal sum
  lw $ra,0($sp)
  addi $sp,$sp,40
  sw $v0,32($sp)
  lw $t1, 32($sp)
  move $t3, $t1
  sw $t3, 16($sp)
  lw $a0, 16($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
  li $t3, 1
  sw $t3, 40($sp)
  lw $t1, 20($sp)
  lw $t2, 40($sp)
  add $t3, $t1, $t2
  sw $t3, 44($sp)
  lw $t1, 44($sp)
  move $t3, $t1
  sw $t3, 20($sp)
  j label9
label7:
  li $t3, 0
  sw $t3, 48($sp)
  li $v0, 10
  syscall
label4:
