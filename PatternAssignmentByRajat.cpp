// PatternAssignmentByRajat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// BossCoderAssignmentPatternProblems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Give the number of lines to print the pattern: ";
    cin >> n;
    //Question1
    cout << "Question1" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    //Question2
    cout << "Question2" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    //Question3
    cout << "Question3" << endl;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    //Question4
    cout << "Question4" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    //Question5
    cout << "Question5" << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                cout << " ";
            }
            else
                cout << "*";
        }
        cout << endl;
    }

    //Question6
    cout << "Question6" << endl;
    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > 0; j--)
        {
            if (j > i)
            {
                cout << " ";
            }
            else
                cout << "*";
        }
        cout << endl;
    }

    //Question7
    cout << "Question7" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    //Question8
    cout << "Question8" << endl;
    for (int i = n; i>= 1; i--)
    {
        for (int j = n; j>=1; j--)
        {
            if (i>=j)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    //Question9
    cout << "Question9" << endl;
    for (int i = n; i >0; i--)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    //Question10
    cout << "Question10" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j>i; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    //Question11
    cout << "Question11" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 0; j < (2*i+1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    //Question12
    cout << "Question12" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    //Question13
    cout << "Question13" << endl;
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if(i<j)
                cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    //Question14
    cout << "Question14" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j>i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    //Question15
    cout << "Question15" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == (n/2 + 1) || j == (n/2+1))
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
