#include <stdio.h>

int beishu(int a, int b) // �ж�a�Ƿ���b�ı���
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
  printf("����һ�����ж��Ƿ�������:");
  fflush(stdout);
  scanf("%d", &num);
  if (juskzhisu(num) == 1)
  {
    printf("%d��һ������\n", num);
  }
  else
    printf("%d����������\n", num);
  return 0;
}