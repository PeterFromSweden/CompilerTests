void foo(void);

void foocaller(void)
{
  foo();
}

__weak void foo(void)
{
}