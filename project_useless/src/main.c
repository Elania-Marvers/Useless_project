#include "lib.h"

int main (void)
{
  while (1)
    {
      for (int i = 0; i < 100000; ++i)
	{
	  printf("%c", rand()%127);
	}
      sleep(1);
    }
  return 0;
}
