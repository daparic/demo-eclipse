#include <stdio.h>
#include <stdlib.h>
#include "dbutil.h"

Person *retrievePersonFromDB(int id) {
    Person *p;
    int MIN_ID = 1;
    if (id < MIN_ID) {
        return NULL;
    }
    p = (Person *)malloc(sizeof(Person));
    if (p == 0) exit(1);
    /* initialize p with the data from the database */
    return p;
}