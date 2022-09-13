# 1 "spag.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "spag.c"
# 1 "sphagetti.h" 1

typedef struct {
    int memberInt;
}structure;
# 2 "spag.c" 2


int zi = 0;
structure recipes[3];

int main(){
    recipes[0].memberInt = 3;
    printf("%d",recipes[0].memberInt);
    return 0;
}
