#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int 
main(int argc, char *argv[]) {
    printf("Before allocation, the current process is using %d bytes\n",memsize());
    char *mem = malloc(20*1024);
    printf("After allocation, the current process is using %d bytes\n",memsize());
    free(mem);
    printf("After release, the current process is using %d bytes\n",memsize());
    exit(0, "");
}