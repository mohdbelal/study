#include<stdio.h>
struct tele
{
char* name;
int tele_No;
};
void main()
{
struct tele phone[2];
int i;
for(i=0;i<2;i++)
{
printf("Enter new name\n");
phone[i].name= (char*)malloc(sizeof(char)*10 );
scanf("%s",phone[i].name);
printf("Enter new number\n");
scanf("%d",&phone[i].tele_No);
}
for(i=0;i<2;i++)
{

printf("%s\t",phone[i].name);
printf("%d\n",phone[i].tele_No);

}

}
