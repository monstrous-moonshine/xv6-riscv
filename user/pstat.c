#include "kernel/types.h"
#include "kernel/pstat.h"
#include "user/user.h"

int
main(int argc, char *argv[]) {
  struct pstat st;
  if (getpinfo(&st) < 0) {
    printf("pstat: error in getpinfo\n");
    exit(1);
  }
  for (int i = 0; i < NPROC; i++) {
    if (st.inuse[i])
      printf("[%d] %d %d\n", st.pid[i], st.tickets[i], st.ticks[i]);
  }
  exit(0);
}
