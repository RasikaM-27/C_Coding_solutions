//DESIGNER PDF VIEWER
//When a contiguous block of text is selected in a PDF viewer, the selection is highlighted with a blue rectangle. In this PDF viewer, each word is highlighted independently. For example:

//PDF-highighting.png

//There is a list of 26 character heights aligned by index 0 to 25 their letters. For example, 'a' is at index  and 'z' is at index . There will also be a string. Using the letter heights given, determine the area of the rectangle highlight in mm2 assuming all letters are 1mm wide.
//Sample Input 0
//1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
//abc
//Sample Output 0

//9
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
int main()
{
    int h[27];
    char s[11];
    int count=0;
    int i,x;
    int tallest=0;
    int area=1;
    for(i=1;i<=27;i++)
    {
        scanf("%d",&h[i]);
    }
    scanf("%s",&s[1]);
    i=1;
    while(s[i]!='\0')
    {
        x=(s[i]-97)+1;
        if(tallest<h[x])
        {
            tallest=h[x];
        }
        count++;
        i++;
    }
    area = tallest*count;
    printf("%d", area);
}
