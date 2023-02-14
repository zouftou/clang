#include<stdio.h>
#include<string.h>

/* function escape(s,t) that converts characters like newline and tab
     into visible escape sequences like \n and \t as it copies the string t to s */

#define MAXCHAR 25

void escape(char[], char[]);
void unescape(char[], char[]);

main()
{
    char s[MAXCHAR];
    char t[] = "a\tb\ne";

    printf("%s\n", t);
    escape(s,t);
    printf("%s\n", s);

    char tt[] = "Hello\\tWorld!!!\\r\\nEOF\\v";
	printf("%s\n", tt);
	char ss[MAXCHAR] = "";
	unescape(ss, tt);
	printf("%s\n", ss);
}

void escape(char s[], char t[])
{
    int i, j;

    for (i = 0, j = 0; t[j] != '\0'; i++, j++)
    {
        switch (t[j])
        {
        case '\n':
            s[i++] = '\\';
            s[i] = 'n';
            break;
        case '\t':
            s[i++] = '\\';
            s[i] = 't';
            break;
        default:
            s[i] = t[j];
            break;
        }
    }
    s[i] = '\0';
}

void unescape(char s[], char t[])
{
    int i, j;

    for (i = 0, j = 0; t[j] != '\0'; i++, j++)
    {
        if(t[j] == '\\' && t[j+1] != '\0')
        {
            j++;
            switch (t[j])
            {
            case 't':
                s[i] = '\t';
                break;
            case 'n':
                s[i] = '\n';
                break;
            case 'r':
                s[i] = '\r';
                break;
            case 'v':
                s[i] = '\v';
                break;
            default:
                s[i++] = '\\';
                s[i] = t[j];
                break;
            }
        } else {
            s[i] = t[j];
        }
    }
    s[i] = '\0';
}