#include <iostream>

using namespace std;

int main(){

  //initialize an array to size 10
  int array1 [10];
  int num;

  //a for loop that inputs 10 non negative numbers into the array
  for(int i = 0; i < 10; ++i){
    cout << "Please enter a non negative number: " << endl;
    cin >> num;
    if(num >= 0){
      array1[i] = num;
    }
    //letting user change invalid number to a valid number
    else{
      cout << "You entered an invalid number, please enter a non negative number: " << endl;
      cin >> num;
      if(num >= 0){
        array1[i] = num;
      }
    }
  }

  //a for loop to print out the array
  for(int i = 0; i < 10; ++i){
    cout << array1[i] << endl;
  }
  return 0;
}
