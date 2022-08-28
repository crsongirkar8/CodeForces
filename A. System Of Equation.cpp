//Que :- 241 System Of Equation's codeforces

                                   // time limit per test2 seconds
                                   // memory limit per test256 megabytes
                                   // inputstandard input
                                   // outputstandard output

// -----------------------------------------------------------------------------------------------------------

// Furik loves math lessons very much, so he doesn't attend them, unlike Rubik. But now Furik wants to get a good mark for math. 
// For that Ms. Ivanova, his math teacher, gave him a new task. Furik solved the task immediately. Can you?
// You are given a system of equations:
// You should count, how many there are pairs of integers (a, b) (0 ≤ a, b) which satisfy the system.
// -----------------------------------------------------------------------------------------------------------
// Input
// A single line contains two integers n, m (1 ≤ n, m ≤ 1000) — the parameters of the system. The numbers on the line are separated by a space.

// Output
// On a single line print the answer to the problem.




#include <iostream>
 using namespace std;
 
int main()
{
    int n, m, answer(0);
    cin >> n >> m;
 
    for (int a = 0; a * a <= n && a <= m; ++a)
    {
        int b = n - a * a;
        if (a + b * b == m)
        {
            answer += 1;
        }
    }
 
    cout << answer << endl;
    return 0;
}

// 
