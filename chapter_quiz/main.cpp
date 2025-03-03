/* Chapter 2 quiz question 2
    Modify the program you wrote in exercise #1 so that readNumber() and
        writeAnswer() live in a separate file called “io.cpp”. Use a forward
        declaration to access them from main().

    If you’re having problems, make sure “io.cpp” is properly added to your
        project so it gets compiled.
 */

int readNumber();
void writeAnswer(int number_input);

int main()
{
    int num1{ readNumber() };
    int num2{ readNumber() };

    writeAnswer(num1 + num2);
    return 0;
}

