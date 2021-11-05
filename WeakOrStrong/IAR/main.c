#include <stdio.h>

extern char* foo(void);

// Tested combinations of foo implementation by exclude in project
// Exe    Lib1            Lib2 Result
// =================================
// strong -               -      OK, strong
// -      weak            -      OK, weak
// strong weak            -      OK, strong
// -      strong          -      OK, strong
// -      weak and strong -      OK, strong
// -      weak            strong OK, strong
// strong weak            strong OK?, strong (main)

// Do a project | batch build (F8) and Download and debug (Ctrl-D)
// Observe output in Terminal I/O
int main()
{
  puts(foo());
  return 0;
}
