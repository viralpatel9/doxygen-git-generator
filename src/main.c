/******************************************************************************
 *
 * Copyright (c) 2026 Viral Patel
 *
 * This file is part of the doxygen-pages open source project.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 *****************************************************************************/

#include "stdio.h"

/**
 * @file main.c
 * @brief This file contains the main function and some example functions.
 *
 * This file is part of the doxygen-pages project and demonstrates how to
 * use Doxygen comments to document code.
 *
 * @param[in] a An integer parameter for the functions.
 * @param[in] b An integer parameter for the functions.
 *
 * @return int Returns the result of the arithmetic operation performed by the functions.
 */

/**
 * @brief A function named sum
 *
 * This function is an example of a simple function that performs addition.
 *
 * @param[in] a The first integer parameter for addition.
 * @param[in] b The second integer parameter for addition.
 *
 * @return int Returns the result of adding a and b.
 */
int sum(int a, int b)
{
    return a + b;
}

/**
 * @brief A function named subtract
 *
 * This function is an example of a simple function that performs subtraction.
 *
 * @note This function performs subtraction and returns the result.
 *
 * @warning Be cautious when using this function with negative numbers, as it may lead to unexpected results.
 *
 * @param[in] a The first integer parameter for subtraction.
 * @param[in] b The second integer parameter for subtraction.
 *
 * @return int Returns the result of subtracting b from a.
 */
int subtract(int a, int b)
{
    return a - b;
}

/**
 * @brief A function named multiply
 *
 * This function is an example of a simple function that performs multiplication.
 *
 * @param[in] a The first integer parameter for multiplication.
 * @param[in] b The second integer parameter for multiplication.
 *
 * @return int Returns the result of multiplying a and b.
 */
int multiply(int a, int b)
{
    return a * b;
}

/**
 * @brief A function named divide
 *
 * This function is an example of a simple function that performs division.
 *
 * @param[in] a The first integer parameter for division.
 * @param[in] b The second integer parameter for division.
 *
 * @return int Returns the result of dividing a by b.
 */
int divide(int a, int b)
{
    return a / b;
}

/**
 * @brief Main function
 *
 * This function is the entry point of the program and demonstrates how to use the example functions defined above.
 *
 * @return int Returns 0 on success.
 */
int main(void)
{
    printf("This is the main function.\n");
    int a = 10, b = 5;
    printf("Sum:        %d\n", sum(a, b));
    printf("Subtract:   %d\n", subtract(a, b));
    printf("Multiply:   %d\n", multiply(a, b));
    printf("Divide:     %d\n", divide(a, b));
    printf("-- End of main function --\n");
    return 0;
}