#include <stdio.h>

int massimoNumero(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    }
    return n2;
}

int MN(int n1, int n2, int n3) {
    int AA = massimoNumero(n1, n2);
    AA = massimoNumero(AA, n3);
    return AA;
}

int main(void) {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d\n", massimoNumero(n1, n2));
    int n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%d", MN(n1, n2, n3));
}

//funzione che calcoli il massimo tra due numeri (tra 3 e 5 è 5)
