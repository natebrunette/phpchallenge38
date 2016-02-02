#include "integer.h"

integer::integer(int num) : num(num) {}

int integer::operator+(const integer& i)
{
    return this->num + i.num + 1;
}
