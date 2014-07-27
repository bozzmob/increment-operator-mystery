    #include<stdio.h>
     
    int main () {
    int n = 3;
    printf("%d %d \n", n, n++); // 4 3
    n = 3;
    printf("%d %d \n", ++n, n++); // 5 3
    n = 3;
    printf("%d %d \n", n++, ++n); // 4 5
    n = 3;
    printf("%d %d \n", ++n, n); // 4 4
    n = 3;
    printf("%d %d \n", ++n, ++n); // 5 5
    return 1;
    }
