//odd & even 

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"inter your number: ";
//     cin>>a;
//     if(a%2 == 0){
//         cout<<"your nmber is even";
//     }
//     else if(a%2 != 0){
//         cout<<"your number is odd";
//     }
//     else{
//         cout<<"your choice is wrong try again!!";
//     }

//     return 0;
// }

// array and loop 

// #include <iostream>
// using namespace std;

// int main() {
//     int numbers[5] = {10, 20, 30, 40, 50}; 
//     for (int i = 0; i < 5; i++) {
//         cout << numbers[i] <<endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1;
    }

    cout << "Result= " << result << endl;
    return 0;
}
