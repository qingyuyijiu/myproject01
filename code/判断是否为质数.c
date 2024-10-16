#include <stdio.h>

int beishu(int a, int b) // 判读a是否是b的倍数
{
  while (a >= b)
  {
    if (a == b)
    {
      return 1;
    }
    else
      a -= b;
  }
  return 0;
}

int juskzhisu(int num)
{
  for (int i = 2; i <= num / 2; i++)
  {
    if (beishu(num, i))
      return 0;
  }
  return 1;
}

int main()
{
  int num;
  printf("输入一个数判断是否是质数:");
  fflush(stdout);
  scanf("%d", &num);
  if (juskzhisu(num) == 1)
  {
    printf("%d是一个质数\n", num);
  }
  else
    printf("%d不是是质数\n", num);
  return 0;
}