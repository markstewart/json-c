#include <stdio.h>
#include "json.h"

int main(int argc, char** argv) {
	json_object *new_obj;

	new_obj = json_tokener_parse("{ \"abc\": 12\n, \"foo\": \"bar\", \"bool0\": false, \"bool1\": true, \"arr\": [ 1, 2, 3, null, 5 ] }");
	printf("%s\n", json_object_to_json_string_ext(new_obj, JSON_C_TO_STRING_SORTED_KEYS));
	json_object_put(new_obj);		
	
	return 0;
}

