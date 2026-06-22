/**
 * Learn:
 *  types of map or bind done by compiler while function call with appropriate
 *  function definition which is known as Early Binding.
 * 
 * NOTE: below program can't be compile because not defined the functions, below
 *       is only for understand.
 */

#include <iostream>

using namespace std;

/**********************1.Exact Match**********************/
void f1(int);
float f1(float);

int main(void)
{
    int x = 5;
    f1(x); //exact match to "void f1(int)", no data loss
}
/*********************************************************/


/***********************2.Type Promotion*******************
 * type promotion no data loss
 * NOTE: promition only happens with "char and float"
 * char -> int
 * float -> double
 * 
 * but if you do opposite that tends to type demotion,
 * and data loss happens
 * int -> char 
 * double -> float
 */
void f1(int);
float f1(float);

int main(void)
{
    char x = 'A';
    f1(x); //type promotion to "float f1(int)", no data loss
}
/**********************************************************/


/*********************3.Type Conversion*********************
 * here we are trying to do char -> float, which is not 
 * either a type promotion or demotion so type conversion
 * method can be applied, where we convert primitive data
 * types to other primitive data type (*not possible with 
 * non-primitive data types)
 */
/*e.g. 1*/
float f1(float);
float f1(struct book);

int main(void)
{
    char x = 'A';
    f1(x); /*type conversion best match near to "float f1(float)",
             so bind will happens and can be data loss*/
}

/*e.g. 2*/
float f1(float);
float f1(double);

int main(void)
{
    char x = 'A';
    f1(x); /*test1: will it be exact match? NO, compiler prompt
                    ERROR.
             test2: will it promot? NO, bcs char promot to int,
                    here compiler will prompt ERROR.
             test3: will it type convert? NO, bcs there are 2
                    matches float and double which can't be 
                    possible, map / bind / match can be possible
                    with single data type. so here, compiler will
                    prompt ERRROR. */
}
/***********************************************************/