
#include <bits/stdc++.h>
using namespace std;

    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> res;

        // for (int i = 1; i <= n; i++) {
        //     bool found = false;

        //     for (int j = 0; j < n; j++) {
        //         if (nums[j] == i) {
        //             found = true;
        //             break;
        //         }
        //     }

        //     if (!found) {
        //         res.push_back(i);
        //     }
        // }

        for(int i=0; i<n;i++){
            int idx = abs(nums[i]) - 1;
            if (nums[idx]>0) {
                nums[idx]=-nums[idx];
            }
        }

        for (int i=0 ; i<n ; i++){
            if(nums[i]>0){
                res.push_back(i+1);
            }
        }

        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i];
        }
        
        // return res;
        
    }

int main()
{
    vector<int> v;
    int i;
    cout<<"Enter size : ";
    cin >> i;
    cout<<"Enter elements : ";
    for (int j = 0; j < i; j++)
    {
        int k;
        cin >> k ;
        v.push_back(k);
    }

    findDisappearedNumbers(v);

    // return 0;
}