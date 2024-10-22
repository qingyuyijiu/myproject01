#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals)
  {
    int size = intervals.size();
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    int min = intervals.at(0).at(0);
    int max = intervals.at(0).at(1);
    for (int i = 1; i < size; i++)
    {
      if (intervals.at(i).at(0) <= max || intervals.at(i).at(1) <= max)
      {
        max = max > intervals.at(i).at(1) ? max : intervals.at(i).at(1);
      }
      else
      {
        ans.push_back({min, max});
        min = intervals.at(i).at(0);
        max = intervals.at(i).at(1);
      }
    }
    ans.push_back({min, max});
    return ans;
  }
};

int main()
{
  Solution s;
  vector<vector<int>> intervals = {{4, 5}, {1, 4}, {0, 1}};
  vector<vector<int>> ans = s.merge(intervals);
  for (auto i : ans)
  {
    cout << "[" << i[0] << ", " << i[1] << "]" << endl;
  }
  return 0;
}