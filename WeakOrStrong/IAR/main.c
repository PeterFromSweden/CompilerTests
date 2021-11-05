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

int main()
{
  puts(foo());
  return 0;
}
