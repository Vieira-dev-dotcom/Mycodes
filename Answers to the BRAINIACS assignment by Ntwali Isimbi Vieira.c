// QUESTION 1:What is the output of this program?




#include <stdio.h>

int main() {
    int x = 5, y = 7, z = 10;
    int a = 15, b = 20, c = 30;

    int result1 = ((x++) * (y--)) + ((++z) / 2);// We should concider that when there is a post increment or decrement the compiler will first use the value in the equation and after increment the the value later:the x and y will not change in  the execution of the equation above. 
    printf("x = %d, y = %d, z = %d, result1 = %d\n", x, y, z, result1);





    x = 5;
    y = 7;
    z = 10;
    int result2 = ((++x) * (--y)) - ((z--) % 3);
    printf("x = %d, y = %d, z = %d, result2 = %d\n", x, y, z, result2);

    a = 15;
    b = 20;
    c = 30;
    int result3 = ((a-- * b) + (--c)) / 2;
    printf("a = %d, b = %d, c = %d, result3 = %d\n", a, b, c, result3);

    return 0;
}





//ANSWERS :
// Will output the following : x = 5, y = 7 , z = 11 , result1 = 40
// x = 6 , y = 6 , z = 10 , result2 = 37
// a = 15 , b = 20 , c = 29 , result3 = 164








// QUESTION 2 :What is the output of the following program:







#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 7;

    int result1 = (a > b) && (b < c);
    int result2 = (a > b) || (b > c);
    int result3 = !(a == b);

    printf("Result 1: (a > b) && (b < c) = %d\n", result1);
    printf("Result 2: (a > b) || (b > c) = %d\n", result2);
    printf("Result 3: !(a == b) = %d\n", result3);

    return 0;
}




//ANSWERS :
// Will output the following : 
 
// Result 1 : 1
// Result 2 : 1
// Result 3 : 1






