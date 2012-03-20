#include <stdlib.h>
#include <string.h>

#include "poly_test_parent.h"

/* constructor */
int poly_test_Ctor(struct poly_test_t** obj, const char* name, size_t len, int val)
{
	*obj = (struct poly_test_t*) malloc(sizeof(struct poly_test_t));
	if(*obj == NULL)
		return 1;

	(*obj)->name = (char*) malloc(sizeof(char)*(len+1));
	if((*obj)->name == NULL)
	{
		free(obj);
		return 2;
	}

	(*obj)->name = strncpy((*obj)->name, name, len+1);

	(*obj)->len = len;
	(*obj)->val = val;

	return 0;
}

/* destructor */
void poly_test_Dtor(struct poly_test_t** obj)
{
	free((*obj)->name);
	free((*obj));
}

/* getters */
char* poly_test_get_name(struct poly_test_t* obj)
{
	if(obj)
		return obj->name;
	return NULL;
}

int poly_test_get_val(struct poly_test_t* obj)
{
	if(obj)
		return obj->val;
	return 0;
}

/* setters */
void poly_test_set_name(struct poly_test_t* obj, const char* name, size_t len)
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

void poly_test_set_val(struct poly_test_t* obj, int val)
{
	if(obj)
		obj->val = val;
}

