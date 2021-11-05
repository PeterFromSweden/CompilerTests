#include <stdio.h>

char* foodata = "weak";

extern void foocaller(void);

// Do a project | batch build (F8) and Download and debug (Ctrl-D)
// Run (F5) and observe output in Terminal I/O
int main()
{
  foocaller();
  puts(foodata); // Expected output: WeakAndStrongLib:strong
  return 0;
}
