#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  set_affinity_mask(0b010);
  for(int i=0; i< 10000000000; i++){
  }
  exit(0, "");
}
