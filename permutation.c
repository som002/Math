#include <stdio.h>
void prints();
int perm(char s[],int k);


int main(){
    char s[]="ABC";
    int c = perm(s,0);
    printf("count : %d\n",c);
    return 0;
}

int perm(char s[],int k)
{
    static int A[10]={0};
    static char res[10]={0};
    static int count=0;
    int i;
    
if(s[k]=='\0'){
    count++;
    res[k]='\0';
    prints(res);
}
else{
    for ( i = 0; s[i] != '\0'; i++)
    {
        if (A[i] ==0)
        {
            res[k]=s[i];
            A[i]=1;
            perm(s,k+1);
            A[i]=0;
        }
            
    }
}
return count;
}

void prints(char *d){
    int i=0;
    while (d[i]!='\0') 
    {
        printf("%c", d[i]);
        i++;
    }
    printf("\n");
}