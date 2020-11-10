/** 
* @file LibraryManagementSystem_operations.h
* LibraryManagementSystem application 
*
*/
#ifndef __LibraryManagementSystem_OPERATIONS_H__
#define __LibraryManagementSystem_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int Addbook(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int Searchbook(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int Displaybook(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int Author(int operand1, int operand2);

int Titlelist(int operand1, int operand2);

int Stock(int operand1, int operand2);

int Issue(int operand1, int operand2);

int bookret(int operand1, int operand2);

int Addmembr(int operand1, int operand2);

int Exit(int operand1, int operand2);

#endif  /* #define __LibraryManagementSystem_OPERATIONS_H__ */

