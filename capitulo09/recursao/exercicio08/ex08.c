/*  A multiplicação de dois números inteiros pode ser feita através de somas sucessivas
(por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma função recursiva que calcule a multi-
plicação por somas sucessivas de dois inteiros. */

#include <stdio.h>

int multiplica(int x, int y);

int main (int argc, char *argv[])
{
    int x,y;
    printf("X: ");
    scanf("%d",&x);
    printf("Y: ");
    scanf("%d",&y);

    printf("X * Y = %d\n",multiplica(x,y));
    return 0;
}

int multiplica(int x, int y){
    if (y == 0){
        return 0;
    }else{
        return x + multiplica(x,y-1);
    }

}
