#include <stdio.h>
int main()
{
int num, t1 = 0, t2 = 1, proxTerm = 0;
    scanf("%d", &num);
    if (num == 1) {
        printf("%d\n", t1);
    } else if (num == 2) {
        printf("%d\n", t2);
    } else {
        for (int cont = 3; cont <= num; cont=cont+1) {
            proxTerm = t1 + t2;
            t1 = t2;
            t2 = proxTerm;
        }
        printf("%d\n", proxTerm);
    }

    return 0;
}