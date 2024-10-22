#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int function(char *ptr)
{
  char *p = ptr;
  int ans = 0;
  printf("%s\n", p);
  if (*p != ' ') // 第一个不是空格则标记为一个单词
  {
    ans++;
    p++;
  }
  while (*p != '\0' && p)
  {
    if (*p == ' ') // 遍历到空格
    {
      while (*p == ' ')
      {
        p++;
      }
      if (p && *p) // 没有空格且未到字符串结尾就标记为一个单词
        ans++;
    }
    else
      p++;
  }
  return ans;
}

int main()
{
  char str[1024] = {0};
  gets(str);

  printf("%d\n", function(str));

  return 0;
}
