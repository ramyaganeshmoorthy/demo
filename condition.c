#include<stdio.h>
#include<string.h>

void main()
{
    int ideasSize=4;
    char ideas[4][10]={"coffee","toffee","donuts","time"};
    int i,j,k;
    long long count;
    char pre[4];
    char postStr[4][10]; 
    printf("%s %ld",ideas[0],strlen(ideas[0]));
    for(i=0;i<ideasSize;i++){
        for(k=1;k<strlen(ideas[0]);k++){
            postStr[i][k-1]=ideas[i][k];
            // printf("%c",postStr[i][k-1]);
        }
        postStr[i][k]='\0';
        printf("%s\n",postStr[i]);
        
    }
    //     // for(j=i+1;j<ideaSize;j++){
    //     //     if(ideas[i][0]==ideas[j][0]){

    //     //     }
    //     // }
    // }
    // for(i=0;i<ideasSize;j++){
    //     printf("%s",ideas[i]);
    // }
}