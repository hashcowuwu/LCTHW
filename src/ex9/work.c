//将一些字符赋给numbers的元素，之后用printf一次打印一个字符，你会得到什么编译器警告？
//对names执行上述的相反操作，把names当成int数组，并一次打印一个int，Valgrind会提示什么？
//有多少种其它的方式可以用来打印它？
//如果一个字符数组占四个字节，一个整数也占4个字节，你可以像整数一样使用整个name吗？你如何用黑魔法实现它？
//拿出一张纸，将每个数组画成一排方框，之后在纸上画出代码中的操作，看看是否正确。
//将name转换成another的形式，看看代码是否能正常工作。

#include <stdio.h>

int main() {
    int numbers[4] = {
        [0] = 'a',
        [1] = 'b',
        [2] = 'c',
        [3] = 'd'
    };

    for (int *it = numbers; it < 1[&numbers] ;  it ++ ){
        printf("%d \n",*it);
    }

}