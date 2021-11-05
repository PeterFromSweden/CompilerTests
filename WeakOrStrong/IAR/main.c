#include <stdio.h>

char* foodata = "weak";

extern void foocaller(void);

// Do a project | batch build (F8) and Download and debug (Ctrl-D)
// Observe output in Terminal I/O
int main()
{
  foocaller();
  puts(foodata); // Expeted output: WeakAndStrongLib:strong
  return 0;
}
