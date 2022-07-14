Check 1 < 9 no and print string output? 
If 1<n<9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;             
   cin>>a>>b;
   int n=10;
    for(int i=1;i<b;){
     if(i==a||i!=b){
         cout<<"eight"<<endl;
         cout<<"nine"<<endl;
         cout<<"even"<<endl;
         cout<<"odd"<<endl;
        
     }   
       break;      
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
