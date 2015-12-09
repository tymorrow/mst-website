/*
 * @author  Tyler Morrow
 * @date    10/06/2015
 * @file    calcFunctions.cpp
 * @course  cs1580, section B/d 
 * @brief   Function definitions for calcFunctions.h
 */

#include <iostream>
using namespace std;

void Add(const float quantityX, const float quantityY, float & result)
{
  result = quantityX + quantityY;
  return;
}

void Subtract(const float quantityX, const float quantityY, float & result)
{
  result = quantityX - quantityY;
  return;
}

void Multiply(const float quantityX, const float quantityY, float & result)
{
  result = quantityX * quantityY;
  return;
}

void Divide(const float quantityX, const float quantityY, float & result,
	    float & remainder)
{
  result = static_cast<int>(quantityX / quantityY);
  remainder = quantityX - quantityY * static_cast<int>(result);
  return;
}
