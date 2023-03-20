#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

//function choose option (1 in 4)
void choose_option(int &n){
    cout <<"Choose the select the method you want to perform by entering the number 1,2,3,4: " << endl;
    cout << "1. Sum of two numbers (keyboard input)" << endl;
    cout << "2. Times of two numbers (keyboard input)" << endl;
    cout << "3. Sum of array  (keyboard input)" << endl;
    cout << "4. Arrange the numbers in order (keyboard input)" << endl;
    cin >>n;
}

//-----------------Function option 1 & 2 -----------------------//

//Function input two numbers 
void input_two_numbers(int &first_number, int &second_number){
    cout <<"Please input the first number: ";
    cin >> first_number;
    cout <<"Please input the second number:";
    cin >> second_number;
}

// Option 1 - Function sum of two number 
int sum_two_numbers(int first_number, int second_number){
    int sum;
    sum = first_number + second_number;
    return sum;
}

// Option 2 - Function times of two number
int times_two_numbers(int first_number, int second_number){
    int times;
    times = first_number*second_number;
    return times;
}
//----------------------Function option 3 & 4-----------------//
// Function input array
void input_array(int &number_of_elements){
    cout <<"How many number that array has?";
    cin >> number_of_elements;
}

//Function input array

// funtions sum of array (option 3)

//funtion arrange the numbers in order (keyboard input) (option 4)

//--------------------Main program --------------------------//

int main(){
    int n, first_number, second_number,sum, times;
    choose_option(n);
    if (n==1) {
        input_two_numbers(first_number, second_number);
        sum = sum_two_numbers(first_number,second_number);
        cout << "Sum of " <<first_number<<" and " << second_number<< " is: "<<sum << endl;
        return 0;
    }
    
    if (n==2) {
        input_two_numbers(first_number, second_number);
        times = times_two_numbers(first_number,second_number);
        cout << "Times of " <<first_number<<" and " << second_number<< " is: "<<times;
        return 0;
}
}



