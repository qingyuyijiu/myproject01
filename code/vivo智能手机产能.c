#include <stdio.h>
#include <stdlib.h>

int func(char *input)
{
  int ans = 0;
  int num = atoi(input);
  for (int i = 1; num > 0; i++)
  {
    if (num - i >= 0)
      ans += i * i;
    else
      ans += i * num;
    num -= i;
  }

  return ans;
  // Please fill this blank
}

int main()
{
  char buf[1024];
  scanf("%s", buf);
  printf("%d\n", func(buf));
  return 0;
}
