#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    void merge( int low, int high, int mid, vector<int>& arr, int& ans)
    {
        for( int l=low; l<=mid; l++)
        {
            for( int r=high; r>mid; r--)
            {
                if( arr[l]>2*arr[r] )
                {                    
                    cout << arr[l] << " " << arr[r] << "------------------->" ;
                    ans+=r-mid;
                    cout << ans << endl;
                    break;
                }
            }
        }

        vector<int> temp;
        int i=low, j=mid+1;
        while( i<=mid && j<=high)
        {
            if( arr[i]<arr[j] )
            {
                temp.push_back(arr[i]);
                i++;
            }
            else
            {
                temp.push_back(arr[j]);
                j++;
            }
        }

        while(i<=mid)
        {
            temp.push_back(arr[i]);
            i++;
        }

        while(j<=high)
        {
            temp.push_back(arr[j]);
            j++;
        }

        for( i=low, j=0; i<=high; i++, j++)
            arr[i]=temp[j];
    }

    void mergeSort( int low, int high, vector<int>& arr, int& ans)
    {
        if( low==high )
            return;

        int mid=(low+high)/2;

        mergeSort( low, mid, arr, ans);
        mergeSort( mid+1, high, arr, ans);
        merge( low, high, mid, arr, ans);
    }

    int reversePairs(vector<int>& nums) {

        int ans=0;
        mergeSort(0, nums.size()-1, nums, ans);

        return ans;
    }
};

int main()
{
    vector<int> nums={2,4,3,5,1};

    Solution s;
    cout << s.reversePairs(nums) << endl;
}