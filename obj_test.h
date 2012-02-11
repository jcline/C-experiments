struct obj_test_t
{
	int val;
	char* name;
	size_t len;
};

/* constructor */
int obj_test_Ctor(struct obj_test_t* obj, const char* name, size_t len, int val);

/* destructor */
void obj_test_Dtor(struct obj_test_t* obj);

/* getters */
char* obj_test_get_name(struct obj_test_t* obj);
int obj_test_get_val(struct obj_test_t* obj);

/* setters */
void obj_test_set_name(struct obj_test_t* obj, const char* name, size_t len);
void obj_test_set_val(struct obj_test_t* obj, int val);
