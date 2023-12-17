#include <iostream>
#include <unordered_map>
using namespace std;
void printMAXSubarrays(int nums[],  int sum,int len_array)
{
int n = 0;
int  ending_index = -1;
int start =0;
    for (int i = 0; i < len_array; i++)
    {
        int sum = 0;
        for (int j = i; j < len_array; j++)
        {
            // sum of elements so far
        sum += nums[j];
        if (sum == 0) {
             if (n < j - i + 1) // +1 as strat from --> i =0
        {
                n = j - i + 1;
                ending_index = j;
                start= ending_index - n + 1  ;    }
        }
       }
}  cout << "[" << start<<", " << ending_index << "]";

}
int main( )
{
    int len_array =9;
    int nums[len_array] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
//    int sum=8;
    printMAXSubarrays(nums,8,len_array);
    return 0;
}
