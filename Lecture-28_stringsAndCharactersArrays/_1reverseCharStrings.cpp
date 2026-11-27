#include<iostream>
#include<cstring>  

using namespace std;



int main(){
    char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    
    int st = 0;
    int end = strlen(str) - 1;

    while(st <= end){
        swap(str[st++], str[end--]);
    }

    cout << str;

    return 0;
}

