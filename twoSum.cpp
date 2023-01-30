#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int>ans;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
    
};
int main()
{
    int t = 3;
    while (t--)
    {
        Solution A;
        vector<int>v;
        vector<int> nums;
        int n;
        cout << "nhap size mang: ";
        cin >> n;

        cout << "nhap mang: ";
        for (int i = 0; i < n; i++)
        {
            cout << "nums[" << i << "]= ";
            int x; cin >> x;

            nums.push_back(x);
        }
        int target;
        cout << "nhap target: ";
        cin >> target;

        v = A.twoSum(nums, target);
        int j = 0;
        for (int i = 0; i < v.size(); i++)
        {

            cout << v[i] << " ";

            if ((i+1) % 2 == 0)
            {
                cout << endl;
            }
        }
         
        
    }

}