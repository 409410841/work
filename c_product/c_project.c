#include<stdio.h>
#include<stdlib.h>
enum shape {
        Upper_Left_Triangle = 1,
        Upper_Right_Triangle,
        Down_Left_Triangle,
        Down_Right_Triange
};

int main()
{
    int num,num2,count,i,j;
    i=1;
    j=0;
    enum shape num1;
    printf("please take your shape\n");
    printf("1.Upper_Left_Triangle\n");
    printf("2.Upper_Right_Triangle\n");
    printf("3.Down_Left_Triangle\n");
    printf("4.Down_Right_Triange\n");
    scanf("%d",&num1);
    if(num1!=1&&num1!=2&&num1!=3&&num1!=4)
        {
            printf("格式錯誤");
            return 0;
        }
    printf("請輸入你要的長度:");
    scanf("%d",&num2);
    if(num2<0)
    {
        printf("長度請輸入正整數");
    }
    switch(num1){
        case Upper_Left_Triangle:{
            printf("實心\n");
            for(count=1;count<=num2;count++)
            {
                for(num=1;num<=i;num++)
                {
                    printf("*");
                }
                i++;
                printf("\n");
            }
            i=1;
            printf("空心\n");
            for(count=1;count<=num2;count++)
            {
                for(num=1;num<=i;num++)
                {
                    if(num==1||num==i||i==num2)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                i++;
                printf("\n");
            }
            break;
        }
        case Upper_Right_Triangle:{
            printf("實心\n");
            for(count=1;count<=num2;count++,j++)
            {
                for(num=1,i=1;num<=num2;i++,num++)
                {
                    if(i>=num2-j)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            j=0;
            printf("空心\n");
            for(count=1;count<=num2;count++,j++)
            {
                for(num=1,i=1;num<=num2;i++,num++)
                {
                    if(i==num2-j||i==num2||count==num2)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
                
            }
            break;
        }
        case Down_Left_Triangle:{
            printf("實心\n");
            for(count=1;count<=num2;count++,j++)
            {
                for(num=1,i=1;num<=num2;i++,num++)
                {
                    if(i>num2-j)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                printf("\n");
            }
            j=0;
            printf("空心\n");
            for(count=1;count<=num2;count++,j++)
            {
                for(num=1,i=1;num<=num2;i++,num++)
                {
                    if((i>num2-j && j>0)||(i>1 && i<num2-j && j>0))
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                printf("\n");
                
            }
            break;
        }
        case Down_Right_Triange:{
            printf("實心\n");
            for(count=1;count<=num2;count++,j++)
            {
                for(num=1;num<=num2;num++)
                {
                    if(num<=j)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                printf("\n");
                
            }
            j=0;
            printf("空心\n");
            for(count=1;count<=num2;count++,j++)
            {
                for(num=1,i=1;num<=num2;i++,num++)
                {
                    if(j==0||num==num2||num==j+1)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        break;
    }
}
