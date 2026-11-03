#include<stdio.h>
#include<ctype.h>
int main()
{
    int count[26]={0};
    char ch;
    
    while ((ch=getchar())!=EOF)
    {
            ch=tolower(ch);
            if(ch>='a' && ch<='z')
            {
                count[ch-'a']++;
            }
    }
    for(int i=0;i<26;i++)
    {
            printf("%c=%d\n",i+'a',count[i]);
    }        
      
    return 0;
}