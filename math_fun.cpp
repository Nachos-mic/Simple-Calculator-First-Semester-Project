#include "math_fun.h"
#include "sort_fun.h"

#include <iostream>
#include <vector>

using namespace std;

int dod(vector<int>& p,int SIZE)
{
    int tmp;
    tmp=0;
    loop(i,SIZE)
    {
        tmp+=p[i];
    }
    return tmp;
}

int aver(vector<int>& p,int SIZE)
{
    double average;
    average=(double)dod(p,SIZE)/SIZE;
    return average;
}

int med(vector<int>& p,int SIZE)
{
    int tab[SIZE];
    b_sort(p,SIZE);
    loop(i,SIZE) {
        tab[i] = p[i];
    }
    int med = tab[SIZE/2];
    return med;
}//
// Created by Michał on 29.03.2023.
//
