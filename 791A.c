#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int limak_weight, bob_weight, limak_need_year=0;
    bool flag=true;

    scanf("%d", &limak_weight);
    scanf("%d", &bob_weight);

    while(flag) {
        limak_weight = (limak_weight+limak_weight+limak_weight);
        bob_weight = (bob_weight+bob_weight);

        if(limak_weight > bob_weight) {
            flag=false;
        }
        limak_need_year++;
    }

    printf("%d", limak_need_year);

    return 0;

}
