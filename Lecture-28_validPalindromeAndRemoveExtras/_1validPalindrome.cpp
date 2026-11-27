#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;


bool isPalindrom(string &str){
    int st = 0;
    int end = str.length() - 1;

    while(st <= end){
        if(!isalnum(static_cast<unsigned char>(str[st]))){
            st++;
            continue;
        }

        if(!isalnum(static_cast<unsigned char>(str[end]))){
            end--;
            continue;
        }

        if(tolower(static_cast<unsigned char>(str[st])) != tolower(static_cast<unsigned char>(str[end]))){
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