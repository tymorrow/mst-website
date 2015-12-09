/*
 * @author  Tyler Morrow
 * @date    10/06/2015
 * @file    calcFunctions.h
 * @course  cs1580, section B/d
 * @brief   Prototypes for calcFunctions.cpp
 */

#ifndef CALCFUNCTIONS_H
#define CALCFUNCTIONS_H

/*******************************************************************************
 * @desc : Adds two floating-point numbers and sets them equal to the provided 
           variable.
 * @pre  : `quantityX` and `quantityY` may be any floating-point values.
 * @post : `result` will be the sum of `quantityX` and `quantityY`.
 ******************************************************************************/
void Add(const float quantityX, const float quantityY, float & result);

/*******************************************************************************
 * @desc : Subtracts one floating-point number from another sets the provided 
           variable equal to the result.
 * @pre  : `quantityX` and `quantityY` may be any floating-point values.
 * @post : `result` will be the difference between `quantityX` and `quantityY`.
 ******************************************************************************/
void Subtract(const float quantityX, const float quantityY, float & result);

/*******************************************************************************
 * @desc : Computes the product of two float-point numbers and sets the provided
           vraiable equal to the result.
 * @pre  : `quantityX` and `quantityY` may be any floating-point values.
 * @post : `result` will be the product of `quantityX` and `quantityY`.
 ******************************************************************************/
void Multiply(const float quantityX, const float quantityY, float & result);

/*******************************************************************************
 * @desc : Computes the quotient and remainder of division on two floating-point
           numbers and sets the results equal to two provided variables.
 * @pre  : `quantityX` and `quantityY` may be any floating-point values, except
           `quantityX` can't be zero.
 * @post : `result` will not contain a decimal value, and `remainder` will equal
           the remaining quantity that would have been represented by decimal.
 ******************************************************************************/
void Divide(const float quantityX, const float quantityY, float & result,
	    float & remainder);

#endif
