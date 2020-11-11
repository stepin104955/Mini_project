#include <LibraryManagementSystem_operations.h>

int Add_Books(int operand1, int operand2)
{
    return operand1 + operand2;
}

int Search_Books(int operand1, int operand2)
{
    return operand1 - operand2;
}

int View_Books(int operand1, int operand2)
{
    return operand1 * operand2;
}
int Delete_Book(int operand1, int operand2)
{
    return operand1 * operand2;
}
int Update_Password(int operand1, int operand2)
{
    return operand1 * operand2;
}

int Exit(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
