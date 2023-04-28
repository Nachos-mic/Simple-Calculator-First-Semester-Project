#include "math_fun.h"

#include <iostream>
#include <vector>

using namespace std;
void b_sort(vector<int>& p,int SIZE)
{
    int temp;
    loop(i,SIZE)
    {
        for (int j=i+1;j<SIZE;j++)
        {
            if(p[j]< p[i])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    loop(i,SIZE)
    {
        cout << p[i] + "/";
    }

}