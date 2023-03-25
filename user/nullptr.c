#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  printf("*(int *)0 = %x\n", *(volatile int *)(0));
  exit(0);
}
