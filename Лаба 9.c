#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

 
double calculate(const char* a){
    char*  b, c;
    double n, sum = strtod(a, &b);
    if(a == b)
        return 0.0;
 
    for(a = b; *a; a = b){
        while(*a && isspace(*a))
            ++a;
        if(! *a)
            break;
 
        c = *a++;
        n = strtod(a, &b);
        if(a == b)
            break;
 
        switch(c){
        case '+':
            sum += n;
            break;
        case '-':
            sum -= n;
            break;
        default:
            return 0.0;
        }
    }
    return sum;
}
 
int main(void){
    char a[128];
    fgets(a, sizeof(a), stdin);
    printf("Ответ: %lg\n", calculate(a));
    return 0;
}
