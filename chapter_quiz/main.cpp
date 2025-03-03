/* Chapter 2 quiz question 3
 * Modify the program you wrote in #2 so that it uses a header file (named io.h)
 *  to access the functions instead of using forward declarations directly
 *  in your code (.cpp) files. Make sure your header file uses header guards.
 */

#include "io.h"

int main()
{
    int num1{ readNumber() };
    int num2{ readNumber() };

    writeAnswer(num1 + num2);
    return 0;
}

