#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "obj_test.h"
#include "poly_test_parent.h"
#include "poly_test_a_child.h"
#include "poly_test_b_child.h"

int obj_tester()
{
	struct obj_test_t* obj = NULL;

	char* name = "Object";

	obj_test_Ctor(&obj, name, strlen(name), 9001);

	assert(obj != NULL);
	assert(obj->val == 9001);
	assert(obj->len == strlen(name));
	assert(strcmp(obj->name, name) == 0);

	obj_test_Dtor(&obj);

	return 0;
}

int poly_tester()
{
	struct poly_test_a_t* obj = NULL;

	char* name = "A";

	poly_test_a_Ctor(&obj, name, strlen(name), 9002);

	assert(obj != NULL);
	assert(obj->parent != NULL);
	assert(obj->parent->val == 9002);
	assert(obj->parent->len == strlen(name));
	assert(strcmp(obj->parent->name, name) == 0);

	return 0;
}

int main()
{

	obj_tester();
	poly_tester();

	return 0;
}
