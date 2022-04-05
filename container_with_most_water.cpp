// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &a)
    {
        int n = a.size();

        int maxi = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int mini = min(a[i], a[j]);
                int ar = mini * a[i];
                maxi = max(maxi, ar);
            }
        }

        return maxi;
    }
};

class Solution
{
public:
    int maxArea(vector<int> &a)
    {
        int n = a.size();

        int i = 0, j = n - 1;

        int max_area = 0;
        while (i < j)
        {
            int mini = min(a[i], a[j]);
            max_area = max(max_area, mini * (j - i));
            if (a[i] <= a[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        return max_area;
    }
};