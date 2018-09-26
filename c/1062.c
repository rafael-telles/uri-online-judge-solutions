#include <stdlib.h>

typedef struct pilha_s {
    int n;
    int* vals;
} pilha_t;

pilha_t* criar_pilha(int tamanho) {
    pilha_t* p = malloc(sizeof(pilha_t));
    p->n = 0;
    p->vals = malloc(sizeof(int) * tamanho);

    return p;
}

void free_pilha(pilha_t* p) {
    free(p->vals);
    free(p);
}

bool vazia(pilha_t* p) {
    return p->n == 0;
}

void push_pilha(pilha_t* p, int a) {
    p->vals[(p->n)++] = a;
}

int pop_pilha(pilha_t* p) {
    return p->vals[--(p->n)];
}

int peek_pilha(pilha_t* p) {
    return p->vals[p->n - 1];
}

void print_pilha(pilha_t* p) {
    printf("P[");

    int i;
    for (i = 0; i < p->n; i++) {
        printf("%d,", p->vals[i]);
    }
    printf("]\n");
}

int main() {
    while(1) {
        int nv;
        scanf("%d", &nv);
        if (nv == 0) {
            return 0;
        }

        int i, j;
        while(1) {
            int exit = 0;
            int exit1 = 0;

            int v[nv];
            for (i = 0; i < nv; i++) {
                scanf("%d", v+i);
                if (v[i] == 0) {
                    exit = 1;
                    break;
                }
            }
            if (exit) {
                nv = 0;
                break;
            }

            pilha_t* p = criar_pilha(nv);

            i = 1;
            j = 1;
            while (1) {
                if (i > nv || exit || exit1) break;
                while (1) {
                    if (!vazia(p) && peek_pilha(p) == v[i]) {
                        pop_pilha(p);
                        break;
                    } else if (j <= nv) {
                        push_pilha(p, j);
                        j++;
                        if (peek_pilha(p) == v[i]) {
                            pop_pilha(p);
                            break;
                        }
                    } else {
                        exit1 = 1;
                        break;
                    }
                }
                i++;
            }
            if (exit) break;
            if (vazia(p)) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }

            free_pilha(p);
        }
    }

    return 0;
}