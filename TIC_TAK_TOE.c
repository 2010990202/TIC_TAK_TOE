#include <stdio.h>
#include <conio.h>
void check(char,char);
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gameName(){
  printf("\n\t\t\tTIC TAC TOE GAME \t\t\t\n");
}
void show(){
  printf("\n\n\t\t\t---|---|---\n");
  printf("\t\t\t %c | %c | %c",a[0],a[1],a[2]);
  printf("\n\n\t\t\t---|---|---\n");
  printf("\t\t\t %c | %c | %c ",a[3],a[4],a[5]);
  printf("\n\n\t\t\t---|---|---\n");
  printf("\t\t\t %c | %c | %c ",a[6],a[7],a[8]);
  printf("\n\n\t\t\t---|---|---");
}
void inputSymbol(){
  printf("\n player 1 symbol :x:");
  printf("\n player 2 symbol :0:\n");
}
void start(){
    char pa;
    printf("enter who will start the game: player 1 or player 2\n");
    scanf("%c",&pa);
}
int count =0;
void play(){
    char p,s;
    printf("enter the position and symbol ");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    count++;
    check(p,s);
}
void check(char P,char S){
    int i;
    for (i=0;i<=8;i++){
        if(a[i]==P){
            a[i]=S;
        }
    }

}
int end(){
    if((a[0]=='x' && a[1]=='x' && a[2]=='x')||(a[0]=='x' && a[3]=='x' && a[6]=='x')||(a[0]=='x'&& a[4]=='x' && a[8]=='x'))
    return (100);
    else if((a[0]=='0' && a[1]=='0' && a[2]=='x')||(a[0]=='0' && a[3]=='0' && a[6]=='0')||(a[0]=='0'&& a[4]=='0' && a[8]=='0'))
    return (200);
    else if(a[1]=='x'&& a[4]=='x' && a[7]=='x')
    return (100);
    else if(a[1]=='0'&& a[4]=='0' && a[7]=='0')
    return (200);
    else if(a[2]=='x'&& a[5]=='x' && a[8]=='x')
    return (100);
    else if(a[2]=='0'&& a[5]=='0' && a[8]=='0')
    return (200);
    else if(a[2]=='x' && a[4]=='x' && a[6]=='x')
    return (100);
    else if(a[2]=='0' && a[4]=='0' && a[6]=='0')
    return (200);
    else if(a[3]=='x' && a[4]=='x' && a[5]=='x')
    return (100);
    else if(a[3]=='0' && a[4]=='0' && a[5]=='0')
    return (200);
    else if(a[6]=='x' && a[7]=='x' && a[8]=='x')
    return (100);
    else if(a[6]=='0' && a[7]=='0' && a[8]=='0')
    return (200);
    else
    return (300);

}
void main(){
  int k;
  char ch;
  labell:

gameName();
show();
inputSymbol();
start();
play();
label:
show();
play();
k=end();
//show();
if(count<9){
 if(k==100){
 printf("\nPLAYER 1 WON THE GAME ");
 count =0;
}
 else if(k==200){
 printf("\nPLAYER 2 WON THE GAME ");
 count =0;
}
 else
  goto label;
}
else{
  printf("GAME DRAW \n");
  count=0;
}
 printf("DO YOU WANT TO CONTINUE: 'Y' FOR YES OR 'N' FOR NO: \n");
 fflush(stdin);
 scanf("%c",&ch);
 if(ch=='y'||ch=='Y'){

   a[0]='1';
   a[1]='2';
   a[2]='3';
   a[3]='4';
   a[4]='5';
   a[5]='6';
   a[6]='7';
   a[7]='8';
   a[8]='9';
  goto labell;
 }
 else{
   printf("press any key to exit the game: ");
 }
getch();
}
