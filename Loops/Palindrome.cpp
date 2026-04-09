#include<iostream>
using namespace std;

int main(){

    string s = "madam";

    int left = 0;
    int right = s.length()-1;

    bool palindrome = true;

    while(left < right){
        if(s[left] != s[right]){
            palindrome = false;
            break;
        }
        left++;
        right--;
    }

    if(palindrome)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}
