#include <zephyr/kernel.h>

int main(void)
{
  while(true)
  {
    k_sleep(K_MSEC(100));
  }

  return 0;
}