#ifndef __OWL_TEST_H__
#define __OWL_TEST_H__

extern int numtests;

#define FAIL_UNLESS(desc,pred) do { int __pred = (pred);                \
    numtests++;                                                         \
    printf("%s %s", (__pred)?"ok":(numfailed++,"not ok"), desc);        \
    if(!(__pred)) printf("\t(%s:%d)", __FILE__, __LINE__); printf("%c", '\n'); } while(0)

#endif
