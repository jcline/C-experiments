#ifndef POLY_TEST_A_H
#define POLY_TEST_A_H
#include "poly_test_parent.h"

struct poly_test_a_t
{
	struct poly_test_t* parent;
};

int poly_test_a_Ctor(struct poly_test_a_t** obj, const char* name, size_t len, int val);
#endif
