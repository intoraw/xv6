#include "types.h"
#include "stat.h"
#include "user.h"

int
halt(void) 
{
  int ret;
  __asm__(
    "movl $22, %%eax;"
    "int $0x40"
    : "=a" (ret)
  );
  return ret;
}

int
main(int argc, char *argv[])
{
  return halt();
}
