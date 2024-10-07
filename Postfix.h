#ifndef POSTFIX_H_
#define POSTFIX_H_

#include "Stack.h"
#include "Vector.h"
#include <cassert>
#include <cctype>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int eval_postfix(string);
bool is_operator(string);
int string_to_integer(string);
int apply_op(string, int, int);

#endif
