/**
 * main - assembly code to print Hello, Holberton
 *
 * Return: nothing
 */
int main(void) {
  register int    syscall_no  asm("rax") = 1
  register int    arg1        asm("rdi") = 1
  register char*  arg2        asm("rsi") = "Hello, Holberton\n"
  register int    arg3        asm("rdx") = 14
  asm("syscall")
  return 0
}
