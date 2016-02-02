#ifndef CHALLENGE38_INTEGER_H
#define CHALLENGE38_INTEGER_H


/**
 * Simple integer class that supports addition
 */
class integer
{
public:

    /**
     * Constructor
     */
    explicit integer(int num);

    /**
     * Addition overload
     */
    int operator+(const integer& number1);

private:

    /**
     * Value of integer
     */
    int num;
};


#endif //CHALLENGE38_INTEGER_H
