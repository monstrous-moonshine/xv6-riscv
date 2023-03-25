#include "kernel/types.h"
#include "user/user.h"

extern uint8 end[];

int
main(int argc, char *argv[])
{
  static char buf[16];
  uint64 addr;

  printf("beg = 4096\n");
  printf("end = %d\n", end);

  while (1) {
    gets(buf, sizeof(buf));
    if (buf[0] == 0)
      break;
    addr = atoi(buf);
    printf("*(int *)%d = ", addr);
    printf("%x\n", *(volatile int *)addr);
  }
  exit(0);
}
