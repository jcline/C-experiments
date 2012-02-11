#include <string.h>
#include "obj_test.h"

// constructor
int obj_test_Ctor(struct obj_test_t* obj, const char* name, size_t len, int val)
{
	obj = (struct obj_test_t*) malloc(sizeof(struct obj_test_t));
	if(obj == NULL)
		return 1;

	obj->name = (char*) malloc(sizeof(char)*len);
	if(obj->name == NULL)
	{
		free(obj);
		return 2;
	}

	obj->name = strncpy(obj->name, name, len);

	obj->len = len;
	obj->val = val;

	return 0;
}

// destructor
void obj_test_Dtor(struct obj_test_t* obj)
{
	free(obj->name);
	free(obj);
}

// getters
char* obj_test_get_name(struct obj_test_t* obj)
{
	if(obj)
		return obj->name;
	return NULL;
}

int obj_test_get_val(struct obj_test_t* obj)
{
	if(obj)
		return obj->val;
	return 0;
}

// setters
void obj_test_set_name(struct obj_test_t* obj, const char* name, size_t len)
{
	if(obj)
	{
		if(len > obj->len)
		{
			obj->name = (char*) realloc(obj->name, sizeof(char)*len);
		}

		obj->name = strncpy(obj->name, name, len);
	}
}

void obj_test_set_val(struct obj_test_t* obj, int val)
{
	if(obj)
		obj->val = val;
}
