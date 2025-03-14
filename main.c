#include <stdio.h>
#include <stdint.h>
#include <unistd.h>

#include "user/lib/my_lib.h"

uint32_t u32_timer = 0;

int main(void)
{
  uint8_t buff[128];
  _memset(buff, 0, sizeof(buff));

  while(1)
  {
    u32_timer++;
    sleep(1);
  }

  printf("Hello world\n");
}