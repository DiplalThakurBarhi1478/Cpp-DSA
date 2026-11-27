#include<iostream>
#include<string>  
#include<algorithm>

using namespace std;

int main(){
    string str = "hello";
    
    reverse(str.begin(), str.end()); //iterators

    cout << str;

    return 0;
}

