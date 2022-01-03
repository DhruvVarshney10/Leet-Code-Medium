// Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int lastindex = 0;
        int sum = triangle[0][0];
 
        for (int i = 1; i < triangle.size(); i++) {   
            
            if (triangle[i][lastindex] < triangle[i][lastindex+1]) {
                sum += triangle[i][lastindex];
                
            }
            else if (triangle[i][lastindex] > triangle[i][lastindex + 1]) {
                sum += triangle[i][lastindex+1];
                lastindex++;
            }

        }
        return sum;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> t = {{2},{3,4},{6,5,7},{4,1,8,3}};
    int a = s.minimumTotal(t);
    cout << a;
}
/*
output - 
11
*/

