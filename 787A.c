#include <stdio.h>

int main() {
    int i, j, a, b, c, d, rickTime[100], mortyTime[100], flag=0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    for(i=0; i<=100; i++) {
         for(j=0; j<=100; j++) {
            if(((b + (i*a))) == (d + (j*c))) {
                printf("\n%d", (b + (i*a)));
                flag=1;
                break;
            }
        }
        if(flag==1) {
            break;
        }
    }

    if(flag==0) {
        printf("-1");
    }
    return 0;
}