#include "find_min_max.h"

#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
  printf("Будет выполнена программа %s...\n\n",
         argv[0]);
  printf("Выполняется %s", argv[0]);
  int pid=fork();
  if(pid==0)
  execl("sequential_min_max","sequential_min_max","10","10",NULL);
  return 0;
}