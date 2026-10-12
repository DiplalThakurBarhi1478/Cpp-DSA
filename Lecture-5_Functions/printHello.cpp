#include<iostream>

using namespace std;

// without return and no parameter
void printHello(){              
    cout << "without return and no parameter";
    cout << endl;
}

// without return but with parameters
void printHello(int a, int b){              
    cout <<  a + b << endl;
}

//with return and without parameters
int printHello2(){
    string a = "With return and without parameters";
    return a.size();
}

//wiht return and with parameters
int printHello2(int a , int b){
    return a + b;
}

int main(){

    printHello();  // calling the function without parameters and without return type.
    printHello(2, 4); // calling the function with parameters and wihtout return type.

    cout << printHello2() << endl; // calling the function without parameters and with return type
    cout << printHello2(2, 6); // calling the function with parameters and with return type

    return 0;
}