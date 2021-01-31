#include <iostream>
#include <cmath>

using namespace std;

//function that prints out meters and centimeters
void userOutput(double meters, double centimeters){
  cout << "Meters: " << meters << endl;
  cout << "Centimeters: " << centimeters << endl;
}

//function that does all the calculation to get the meters and centimeters
void calculation(double feet, double inches){
  double meters = (feet * 0.3048) + (inches*0.0254);
  double newMeters = floor(meters);
  double centimeters = (meters - newMeters)*100;
  userOutput(newMeters, centimeters);
}

//function that reads in user input that will be used to calculate the meters and centimeters
void userInput(){
  double feet;
  double inches;
  cout << "Please enter feet: ";
  cin >> feet;
  cout << "Please enter inches: ";
  cin >> inches;
  calculation(feet, inches);
}

int main(){
  bool go = true;
  string var1;
  //while loop to keep going until user wants to exit
  while(go){
    cout << "Would you like to keep going? Enter exit to quit or yes to continue. ";
    cin >> var1;
    if(var1 == "exit"){
      go = false;
    }
    else{
      userInput();
      go = true;
    }
  }
}
