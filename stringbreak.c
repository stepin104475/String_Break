///@file stringbreak.c
#include <stdio.h>
#include<string.h>

/**
 * To break the string based on the delimiter _
 * line of string is broken into small strings
 * @param[in] long string separated by _
 * @param[out] small pieces of sting
 */

int main()

{
    int i,a;
   char s[]={"my_name_is_edcast_future_skills"};
    a=sizeof(s);
     char t[a];
    strcpy(t,strtok(s,"_"));
       printf("%s\n",t);
       /*Here strtok is used break string until string reaches null*/
       while(s!='\0')
       {
          strcpy(t,strtok('\0',"_"));
         printf("%s\n",t);
       }
    return 0;
}
