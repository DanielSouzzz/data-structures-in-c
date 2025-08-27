#include <stdio.h>
#include <stdlib.h>
/* DATA (global inicializada) */
int global_init = 5;
/* BSS(global não inicializada -> inicia como 0) */
int global_bss;
 
/* TEXT/RODATA: função e stringliteral */
void func(void) {}
int main(void) {
/* STACK (variável local) */
int local = 10;
/* HEAP (alocação dinâmica) */
int *heapVar = (int*)malloc(sizeof(int));
*heapVar = 20;
const char *msg = "rodata/stringliteral";
 
printf("== Valores ==\n");
printf("Globalinit(DATA): %d\n", global_init);
printf("Globalbss  (BSS) : %d\n", global_bss);
printf("Local       (STACK): %d\n", local);
printf("Heap        (HEAP) : %d\n", *heapVar);
 
printf("\n==Enderecos==\n");
printf("&global_init(DATA): %p\n", (void*)&global_init);
printf("&global_bss  (BSS) : %p\n", (void*)&global_bss);
printf("&local       (STACK): %p\n", (void*)&local);
printf("heapVar     (HEAP): %p\n", (void*)heapVar);
printf(" msg (RODATA/string): %p\n", (const void*)msg);
printf("func(TEXT/codigo): %p\n", (void*)func);
 
free(heapVar);
return 0;
}