#ifndef POLY_TEST_PARENT_H
#define POLY_TEST_PARENT_H

#include <stddef.h>

struct poly_test_t
{
	int val;
	char* name;
	size_t len;
};

/* constructor */
int poly_test_Ctor(struct poly_test_t** poly, const char* name, size_t len, int val);

/* destructor */
void poly_test_Dtor(struct poly_test_t** poly);

/* getters */
char* poly_test_get_name(struct poly_test_t* poly);
int poly_test_get_val(struct poly_test_t* poly);

/* setters */
void poly_test_set_name(struct poly_test_t* poly, const char* name, size_t len);
void poly_test_set_val(struct poly_test_t* poly, int val);

#endif
