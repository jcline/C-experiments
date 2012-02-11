#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "obj_test.h"

int obj_tester()
{
	struct obj_test_t* obj;

	char* name = "Object";

	obj_test_Ctor(obj, name, strlen(name), 9001);

	assert(obj);
	assert(obj->val == 9001);
	assert(obj->len == strlen(name));
}


int main()
{

	obj_tester();

	return 0;
}
