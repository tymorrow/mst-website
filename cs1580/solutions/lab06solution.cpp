/*
 * @author  Tyler Morrow
 * @date    9/29/2015
 * @file    lab6solution.cpp
 * @course  cs1580, section B/D
 * @brief   Implementing simple functions that compute mathematical quantities.
 */

#include<iostream>
using namespace std;

void PrintGreeting();
void PrintFarewell();
float GetThetaFromUser();
int CalculateFactorial(int value);
float CalculatePower(float base, float exp);
float ConvertDegreesToRadians(float degrees);
float CalculateSine(float degrees);

const float THETA_MIN = -90;
const float THETA_MAX = 90;
const float PI = 3.14159;
const float PIS_PER_DEGREE = PI/180;
const int MAX_SINE_TERM = 7;

int main()
{
  float userInput = 0;

  PrintGreeting();

  userInput = GetThetaFromUser();
  cout << ":: Factorial: \t" << CalculateFactorial(static_cast<int>(userInput))
       << endl;
  cout << ":: Squared: \t" << CalculatePower(userInput, static_cast<int>(2))
       << endl;
  cout << ":: Sin: \t" << CalculateSine(userInput)
       << endl << endl;

  PrintFarewell();
  return 0;
}

void PrintGreeting()
{
  cout << "[Power, Factorial, Sine Calculator]"
       << endl << endl;
  return;
}

void PrintFarewell()
{
  cout << "[Calculation complete, program terminated]" << endl;
  return;
}

float GetThetaFromUser()
{
  float degrees = 0;

  do
  {
    cout << "> Provide theta (in degrees ["
         << THETA_MIN << "," << THETA_MAX
         << "]): ";
    cin >> degrees;
    
    cout << ((degrees < THETA_MIN || degrees > THETA_MAX)
	     ? "! Invalid value, try again!" : "")
	 << endl;
  }while(degrees < THETA_MIN || degrees > THETA_MAX);

  return degrees;
}

int CalculateFactorial(int value)
{
  int result = 1;
  // Check the input value for validity isn't a bad idea,
  // but that's the focus of this assignment.
  for(int i = value; i > 1; i--)
  {
    result *= i;
  }  
  return result;
}

float CalculatePower(float base, float exp)
{
  float result = 1;
  for(int i = 1; i <= exp; i++)
  {
    result *= base;
  }  
  return result;
}

float ConvertDegreesToRadians(float degrees)
{
  return degrees*PIS_PER_DEGREE;
}

// There are many ways to implement this, this is just the one that
// seems most intuitive to me
float CalculateSine(float degrees)
{
  // We convert our parameter to radians because our equation requires it
  float radians = ConvertDegreesToRadians(degrees);
  float result = 0;
  
  // Sum up all positive terms
  for(int i = 1; i <= MAX_SINE_TERM; i += 4)
  {
    result += CalculatePower(radians, i) /
              CalculateFactorial(i);
  }
  // Subtract all negative terms
  for(int i = 3; i <= MAX_SINE_TERM; i += 4)
  {
    result -= CalculatePower(radians, i) /
              CalculateFactorial(i);
  }

  return result;
}
