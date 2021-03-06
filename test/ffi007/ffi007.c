#include <stdio.h>

typedef int (*callback)(int);
typedef int (*cb2)(char *);

void test_ffi(callback cb)
{
    printf("%d\n", cb(3));
}

void test_ffi2(cb2 cb)
{
    printf("%d\n", cb("hello"));
}

void test_ffi3(void (*cb)(void))
{
    printf("Before calling callback\n");
    cb();
    printf("After calling callback\n");
}
