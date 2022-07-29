#include<iostream>
using namespace std;

void Num_String(int n){

    string name[10] = {"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};

    if(n>9){
        cout << name[0] << endl;
    }
    else{
        cout << name[n] << endl;
    }
}

void NumToString(int n){

    if(1<=n<=9){
        switch(n){
            case 1: cout << "one" << endl;
                    break;
            
            case 2: cout << "two" << endl;
                    break;

            case 3: cout << "three" << endl;
                    break;

            case 4: cout << "four" << endl;
                    break;

            case 5: cout << "five" << endl;
                    break;
                
            case 6: cout << "six" << endl;
                    break;
            
            case 7: cout << "seven" << endl;
                    break;
            
            case 8: cout << "eight" << endl;
                    break;

            case 9: cout << "nine" << endl;
                    break;
            
            default: cout << "Greater than 9" << endl;
                     break;
        }
    }
}

int main(){

    int num;
    cin >> num;

    // Function Call
    // NumToString(num);

    Num_String(num);
    
    return 0;
}