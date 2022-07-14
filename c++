Check 1 < 9 no and print string output? 
If 1<n<9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    string s[10] = {"zero", "one", "two", "three", "four",\
        "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        
        if(i > 9) {
            if(i % 2 == 0)
                cout << "even\n";
            else cout << "odd\n";
        }
        else {
            cout << s[i]<<endl;
        }
    }
    return 0;
}

Input:
8
11
Output:
eight
nine
even
odd
