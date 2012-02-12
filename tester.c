#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "obj_test.h"

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


int main()
{

	obj_tester();

	return 0;
}
