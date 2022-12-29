#include <stdio.h>
/* global variable declaration */
int rows = 5;
void print_spaces(int r) {
    /* local variable declaration */
    int i;
}

void print_stars(int r) {
    /* local variable declaration */
    int i;
}

int main() {
    /* local variable declaration */
    int j;
    for (int i = rows; i >= 1; --i) {
        print_spaces(i);
        print_stars(i);
    }
     
    return 0;
}
