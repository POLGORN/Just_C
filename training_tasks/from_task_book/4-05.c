// Напишите функцию get_and_zero которая каким то способом получает
// на вход (через параметр) целочисленную переменную в эту переменную
// заносит ноль а то число которое в переменной находилось раньше
// возвращается в качестве своего значения. Как нужно будет вызвать
// эту функцию? 
////////////////////////////////////////////////////////////////
// #include <stdio.h>


// int get_and_zero(int a) {
//     int b = a;
//     a = 0;
//     printf("%d and %d", a, b);
//     return b;
// }

// int main() {
//     get_and_zero(255);
//     return 0;
// }
////////////////////////////////////////////////////////////////
#include <stdio.h>


int get_and_zero(int *p) {
    int t = *p;
    *p = 0;
    return t;
}

int main() {
    int a, b;
    a = get_and_zero(&b);
    printf("%d and %d", a, b);
    return 0;
}
////////////////////////////////////////////////////////////////
// 3719168 and 0
// 3211264 and 0
// 2170880 and 0
