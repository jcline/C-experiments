#include <stdlib.h>

#include "poly_test_parent.h"
#include "poly_test_a_child.h"

int poly_test_a_Ctor(struct poly_test_a_t** obj, const char* name, size_t len, int val)
{
	*obj = (struct poly_test_a_t*) malloc(sizeof(struct poly_test_a_t));
	if(*obj == NULL)
		return 1;

	return poly_test_Ctor( &(**obj).parent, name, len, val);
}
