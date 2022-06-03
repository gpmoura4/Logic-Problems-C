#include <stdio.h>



int main () {
    float lido, base, menor, menordist;
    int n_entradas, nums, content, cont1, cont2;
    scanf("%d", &n_entradas);
    for (content = 0; content < n_entradas; content++) {
        scanf("%d", &nums);
        scanf("%f", &base);
        for (cont1 = 0; cont1 < nums; cont1++) {
                scanf("%f", &lido);
                if (cont1 == 0) {
                  menor = lido;
                  if (lido > base) {
                    menordist = lido-base;
                  }
                  else {
                    menordist = base-lido;
                  }
                }
                else if (lido > base) {
                  printf("%.1f %.1f\n", lido, base);
                   if (lido - base < menordist) {
                      menor = lido;
                      menordist = lido-base;
                    }
                 }
                 else {
                  if (base - lido < menordist) {
                    menor = lido;
                    menordist = lido-base;
                  }
                }
       }
       printf("%.1f\n", menor);
    }
    return 0;
}