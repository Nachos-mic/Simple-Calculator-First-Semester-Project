#include "math_fun.h"
#include "sort_fun.h"

#include <iostream>
#include <vector>



using namespace std;

void type(vector<int>& p,int S)
{
    int x;
    cout << "Please type in the numbers: " << endl;
    for(int i=0;i<S;i++)
    {
        cin >> x;
        p.push_back(x);
    }
}

int switcher_printer(vector<int>& p,int S)
{
    int m;
    cout << "Choose an option: " << endl;
    cout << "Calculate average - 1" << endl;
    cout << "Calculate median - 2 " << endl;
    cout << "Sort the numbers - 3" << endl;
    cout << "Sum all numbers - 4 " << endl;
    cin >> m;
    cout << "\n";
    switch(m)
    {
        case 1:
            cout << "Result: " + aver(p,S);
            break;

        case 2:
            cout << med(p,S);
            break;

        case 3:
            b_sort(p,S);
            break;

        case 4:
            cout << "Result: " + dod(p,S);
            break;
    }
    return m;

}

int main()
{
    cout << "Welcome" << endl;

    char choice = 'Y';

    while(choice == 'Y'){

        int S;
    cout << "Write in the amount of numbers you want to operate on:";
    cin >> S;
    cout << "\n";

    std::vector< int > Tab;
    type(Tab,S);

    switcher_printer(Tab,S);

    cout << "Do you want to continue ? [Y/N] ";
    cin >> choice;
    if(choice == 'N'){break;}
    system("cls");

    }
    return 0;
}