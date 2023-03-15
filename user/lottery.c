#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int num_ticket;
  if (argc < 2)
    num_ticket = 10;
  else
    num_ticket = atoi(argv[1]);
  if (settickets(num_ticket) < 0)
    exit(1);
  for (;;) {
    // spin
  }
}
