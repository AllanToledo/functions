#include <stdlib.h>
#include "print/print.h"

int main()
{
    char *name = "John";
    char *sobrenome = "Doe";
    char *fullname = concat(name, sobrenome);
    printYourName(fullname);
    system("pause");
    return 0;
}
