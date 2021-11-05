#include <stdio.h>

extern char* foo(void);

int main()
{
  puts(foo());
  return 0;
}
