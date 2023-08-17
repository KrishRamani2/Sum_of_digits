#include <bits/stdc++.h> 
using namespace std;  
int sum_of_digit(int n) 
{ 
    int res =0;
    while(n>=0)
    {
        res=res+n%10;
        n=n/10;
    }
    return res;
}
int main() 
{ 
    int num = 25634; 
    int result = sum_of_digit(num); 
    cout << "Sum of digits in "<< num <<" is "<<result << endl; 
    return 0; 
} 