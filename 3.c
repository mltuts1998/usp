p3a
// Write a Lex program to accept a C program and do error detection & correction for the
following.
a) Check for un - terminated string constant in the input C program. i.e A string constant
begins with double quotes and extends for more than one line. Intimate the error line
	numbers and the corrective actions to user




	% {
#include<stdio.h>
	int c = 0;
	FILE *fp;
	%
}
% %
\n { c++; }
["][a-zA-Z0-9]*["] {ECHO; printf(" Valid String in line number %d\n ", c + 1);}
["][a-zA-Z0-9]* { ECHO; printf(" InValid String in line number % d\n ",c+1);}
 . ;
 %%
 main()
 {
 yyin=fopen("source.txt","r");
 yylex();
 fclose(yyin);
 }



 source.txt

#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()
 {
 int a,b,h;
 a=a+b;
 char d[20]="d",h[67]="yu;
char c[10] = "msrit";
a = a + / b + h;
strlen("msrit");
strlen("msr);
       strcpy(c,"Bangalore);
b = b + *;
}