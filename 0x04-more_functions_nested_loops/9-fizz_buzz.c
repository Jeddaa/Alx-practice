#include <stdio.h>

int main() {
    int x = 1;
    while (x <= 100)
    {
        if ((x % 3 == 0) && (x % 5 == 0))
            printf("%s ", "fizzbuzz");
        else if (x % 3 == 0)
            printf("%s ", "fizz");
        else if (x % 5 == 0)
            printf("%s ", "buzz");
        else
            printf("%d ", x);
    
    x++;
    }
    return 0;
}