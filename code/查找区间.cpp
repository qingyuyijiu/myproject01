#include <iostream>
#include <vector>
using namespace std;

// 要求就是找出数组a中，满足有k个x的个数的子区间的个数比如[1,2,3],k=1,x=1,ans=3,[1],[1,2],[1,2,3];
class Person
{
public:
  int function(const vector<int> &a, int x, int k)
  {
    int len = a.size();
    int winwidth = k; // 窗口宽度大于等于k
    int left = 0;     // 窗口的左边界
    int ans = 0;      // 符合区间的数量
    while (winwidth <= len)
    {
      left = 0;                                                           // 初始化窗口
      for (int right = left + winwidth - 1; right < len; right++, left++) // 移动窗口直到，窗口边界碰到数组边界停止
      {
        if (functino2(a, left, right, k, x))
        {
          cout << "ans:" << "[" << left << "," << right << "]" << endl;
          ans++;
        }
      }
      winwidth++; // 窗口宽度加1
    }
    return ans;
  }
  int functino2(const vector<int> &a, int left, int right, int k, int x) // 查找该区间是否满足条件,满足返回1，不满足返回0
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