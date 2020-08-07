#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct Context Context;

typedef struct Value Value;

void free_string(const char *value_ptr);

Value *jscontext_evaluate(Context *ctx_ptr, const char *script_ptr);

void jscontext_free(Context *ctx_ptr);

Context *jscontext_new(void);

double jsvalue_as_number(Value *value_ptr);

const char *jsvalue_as_string(Value *value_ptr);

Value *jsvalue_call(Value *value_ptr);

Value *jsvalue_call_bound(Value *value_ptr, Value *bound_to);

void jsvalue_free(Value *value_ptr);

Value *jsvalue_get_property(Value *value_ptr, const char *name);
