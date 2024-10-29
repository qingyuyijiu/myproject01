#include <iostream>
#include <vector>
using namespace std;

// Ҫ������ҳ�����a�У�������k��x�ĸ�����������ĸ�������[1,2,3],k=1,x=1,ans=3,[1],[1,2],[1,2,3];
class Person
{
public:
  int function(const vector<int> &a, int x, int k)
  {
    int len = a.size();
    int winwidth = k; // ���ڿ�ȴ��ڵ���k
    int left = 0;     // ���ڵ���߽�
    int ans = 0;      // �������������
    while (winwidth <= len)
    {
      left = 0;                                                           // ��ʼ������
      for (int right = left + winwidth - 1; right < len; right++, left++) // �ƶ�����ֱ�������ڱ߽���������߽�ֹͣ
      {
        if (functino2(a, left, right, k, x))
        {
          cout << "ans:" << "[" << left << "," << right << "]" << endl;
          ans++;
        }
      }
      winwidth++; // ���ڿ�ȼ�1
    }
    return ans;
  }
  int functino2(const vector<int> &a, int left, int right, int k, int x) // ���Ҹ������Ƿ���������,���㷵��1�������㷵��0
  {
    int count = 0;
    for (int i = left; i <= right; i++)
    {
      if (a[i] == x)
        count++;
    }
    if (count == k)
      return 1;
    else
      return 0;
  }

private:
};

int main()
{
  Person p;
  const vector<int> a = {1, 2, 3, 1, 2, 3, 1, 2, 3};
  int x = 1, k = 1;
  cout << p.function(a, x, k) << endl;
  return 0;
}