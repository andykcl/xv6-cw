#include "types.h"
#include "user.h"

int *p;
int main(void)
{
 	p = (int *) sbrk(1);
 	mprotect((void *)p, sizeof(int));
	printf(1,"About to read. should get memfault\n");
	*p =100;
  printf(1,"p = %d",*p);
 	printf(1, "COMPLETED: value is %d, expecting 100!\n", *p);

 	exit();
}