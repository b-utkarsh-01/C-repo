#include <stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    int i=0,color=1;

    for(i;i<=getmaxx();i++){
        if(color<=15){
            color=1;
            circle(100,200,30);
            delay(2);
            cleardevice();
        }
        delay(2);
        cleardevice();
    }

    getch();
    closegraph();
    return(0);
}
// int main() {
//     float a,b;
//     char out;
// for(int i=1; ;i++){
//     printf("\n\nENTER YOUR NUMBER: A\n");
//     scanf("%f",&a);
//     printf("ENTER YOUR OPRETOR:\n");
//     scanf("%s",&out);
//     printf("ENTER YOUR NUMBER: B\n");
//     scanf("%f",&b);
    
//     switch(out){
//     case '+': printf("a+b is:\n%f\n",a+b);
//     break;
//     case '-': printf("a-b is:\n%f\n",a-b);
//     break;
//     case '*': printf("a*b is:\n%f\n",a*b);
//     break;
//     case '/': printf("a/b is:\n%f\n",a/b);
//     break;
//     case '^': printf("a^b is:\n%f\n",pow(a,b));
//     break;
//     default: printf("WRONG OPRETOR\n");
//     break;
//     }
// }
//     return 0;
// }