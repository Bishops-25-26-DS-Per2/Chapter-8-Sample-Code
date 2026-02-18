#include<stdio.h>
#include<stdlib.h>  // C++: #include<cstdlib>
#include<time.h>    // C++: #include<ctime>

int main() {
    int r = 0;
    srand(time(NULL));
    for (int i=0; i<100; i++) {
        r = (rand() % 10) + 1;
        printf("%5d", r);
        if (i % 10 == 9) {printf("\n");}
    }
}
