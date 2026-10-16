#include<iostream>

using namespace std;

int reverseInt(int num){
     int rem;
    int sum = 0; 

    while(num != 0){
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }
    return sum;

}

int main(){
    int num;
    cout << "Number : ";
    cin >> num;

   cout << reverseInt(num) << endl;

   return 0;
}