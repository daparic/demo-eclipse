#include<cstdio>

void bar(const char* p)
{

}

void goo(const char *p)
{
    if (p != (const char*) NULL)    // Violation
    {
        p = NULL;                   // Violation
    } else
    {
        bar(0);                     // Violation
    }
    p = (const char*) 0L;           // Violation
}
