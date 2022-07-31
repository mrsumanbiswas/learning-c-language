#include <stdio.h>

int main()
{
    /* defining & initilization */
    int d;                      // decimal (intiger)
    int o = 017;                // octal degit
    int x = 0x1F;               // hexadecimal
    int i;                      // i -> Decimal or Octal or Hexadecilmal
    float f = 12.55;            // f & e are for floting numbers
    unsigned int u = 123456789; // u is for unsigned intiger (the positive number)
    char c = 'S';               // c is for single charecter
    char s[] = "Suman";         // s for array of charecter

    /* printing int */
    printf("please enter 10 digit number\n");
    scanf(" %10d", &d);                            // scaning int number
    printf("Printing the number(int) -> %d\n", d); // printing int number

    printf("please enter 5 digit number\n");
    scanf("%5d", &d);                                           // scaning int number upto 5 digit
    printf("Printing the number(int) upto 5 digit -> %d\n", d); // printing int number upto 5 digit

    printf("please enter 3 digit number\n");
    scanf(" %3d", &d);                                               // scaning int number upto 3 digit
    printf("Printing the number(int) upto 3 digit -> %3d\n\n\n", d); // printing int number upto 3 digit

    /* other number systems */
    printf("printing a decimal number:\t%d\n", 5 * d);
    printf("printing a octal number\ndecimal: %d\toctal: %o\n", o, o);
    printf("printing a hexadecimal number\ndecimal: %d\thexadecimal: %x\n", x, x);

    /* various formats */
    printf("printing an unsigned intiger number\t%u\n", u);
    printf("printig a floting number\t%f\n", f);
    printf("printing a Charecter\t%c\n", c);
    printf("printing arry of charecter (or) string\t%s\n\n", s);

    /*
    There also have -> double , long double, long int, short int and many more.
    There is noting to represent binary number unlike octal and hexadecimal.
    */
    return 0;
}