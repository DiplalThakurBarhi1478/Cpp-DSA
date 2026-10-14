#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;

    
    if(n != 0 && n != 1){
        for(int i{2}; i < n/2 ; i++){
        if(n%i == 0){
            count = count + 1;
        }
        }

        if(count == 0){
            cout << "It is Prime Number";
        }
        else{
            cout << "It is a composite Number";
        }
    }else{
        cout << "It is a composite Number";
    }
   

    return 0;
}