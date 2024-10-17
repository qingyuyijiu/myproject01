#include <stdio.h>
#include <stdlib.h>

int func(char *input)
{
  int ans = 0;
  while (input)
  {
    if (*input == '(')
      ans++;
    else if (*input == ')')
      ans--;
    if (*input == '0')
      return ans;
    input++;
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
