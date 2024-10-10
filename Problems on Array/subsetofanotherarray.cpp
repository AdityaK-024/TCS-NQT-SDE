#include<iostream>
using namespace std;

bool isSubset(int arr1[], int m, int arr2[], int n)
{
    if(m > n) return false;
    
    for(int i = 0; i < m; i++)
    {
        bool present = false;
        for(int j = 0; j < n; j++)
        {
            if(arr2[j] == arr1[i])
            {
                present = true;
                break;
            }
        }
        if(present == false)
            return false;
    }
    return true;
}

int main()
{
    int arr1[] = {1, 3, 4, 5, 2};
    int arr2[] = {2, 3, 5, 6, 7, 1, 4, 10, 12};
    
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    
    bool ans = isSubset(arr1, m, arr2, n);
    
    if(ans)
        cout << "First array is Subset of Second Array";
    else 
        cout << "First array is Not Subset of Second Array";
        
    return 0;
}
