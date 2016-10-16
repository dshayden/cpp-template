#ifndef HELLO_H
#define HELLO_H

#include <algorithm>
#include <iostream>
#include <omp.h>
#include <string>
#include <vector>

/**
 * \brief Prints the message from get_message()
 *
 */
void hello();

/**
 * \brief Runs a test parfor using OpenMP and counts the # of unique threads.
 *
 */
int ex_parfor();

/**
 * \brief Generates a Hello World message
 *
 * There's really not a lot to document here...
 *
 */
std::string get_message();

#endif /* end of include guard: HELLO_H */
