#include<stdio.h>

typedef struct address
{
    int houseNo;
    char block[100];
    char city[100];
    char state[100];
} add;

void print(add a1)
{
    printf("address = %d, %s, %s, %s\n", a1.houseNo, a1.block, a1.city, a1.state);
}

int main()
{
    add adds[5];
    //input
    for (int i = 0; i < 4; i++)
    {
        printf("enter the details of the address: ");
        scanf("%d %s %s %s", &adds[i].houseNo, &adds[i].block, &adds[i].city, &adds[i].state);
    }
    printf("list of addresses:\n");
    //output
    for (int i = 0; i < 4; i++)
    {
        print(adds[i]);
    }
    

    return  0;
}