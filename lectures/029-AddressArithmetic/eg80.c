#include<stdio.h>
int main(){
    int x[5];
    int *p;
    p=&x[0];

    printf("Address of &x[0] is %lu\n", &x[0]);
    printf("p=&x[0], Hence Address in p is %lu\n\n", p);

    printf("Address of &x[1] is %lu\n", &x[1]);
    p++;
    printf("p++, Hence Address in p is %lu\n\n", p);

    printf("Address of &x[2] is %lu\n", &x[2]);
    p++;
    printf("p++, Hence Address in p is %lu\n\n", p);

    printf("Address of &x[3] is %lu\n", &x[3]);
    p++;
    printf("p++, Hence Address in p is %lu\n\n", p);

    printf("Address of &x[4] is %lu\n", &x[4]);
    p++;
    printf("p++, Hence Address in p is %lu\n\n", p);
    return 0;
}

/*

Address of &x[0] is 6129611060
p=&x[0], Hence Address in p is 6129611060

Address of &x[1] is 6129611064
p++, Hence Address in p is 6129611064

Address of &x[2] is 6129611068
p++, Hence Address in p is 6129611068

Address of &x[3] is 6129611072
p++, Hence Address in p is 6129611072

Address of &x[4] is 6129611076
p++, Hence Address in p is 6129611076

*/