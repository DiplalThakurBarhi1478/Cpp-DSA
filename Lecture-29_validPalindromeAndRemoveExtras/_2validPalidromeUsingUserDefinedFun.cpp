#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

bool isAlphaNum(char c){
    if( (c >= 0 && c <= 9) || (tolower(c) >= 'a' && tolower(c) <= 'z')){
        return true;
    }
    return false;
}


bool isPalindrom(string str){
    int st = 0;
    int end = str.length() - 1;

    while(st <= end){
        if(!isAlphaNum(str[st])){
            st++;
            continue;
        }

        if(!isAlphaNum(str[end])){
            end--;
            continue;
        }

        if(tolower(str[st]) != tolower(str[end])){
            return false;
        }

        st++;
        end--;
    }

    return true;
}


int main(){
    string str = "a@b*a";

   bool result = isPalindrom(str);

   cout << result;
}