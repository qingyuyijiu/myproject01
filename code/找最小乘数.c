#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int func(char *input);

int main()
{
  char buf[1024];
  scanf("%s", buf);
  printf("%d\n", func(buf));
  return 0;
}

int func(char *input)
{
  // Please fill this blank
  int t = 1;
  int num = atoi(input);
  int ans = 0;
  if (num == 1)
    return 1;
  t = 1;
  for (int i = 9; i >= 2; i--)
  {
    while (num % i == 0)
    {

      ans += t * i;
      t *= 10;
      num /= i;
    }
  }
  if (num > 1 || ans == 0)
    return -1;
  return ans;
}