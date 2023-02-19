#include <stdio.h>
#include <string.h>
int main(){
	char str1[10],str2[10],b;
	int choice1,i,R,length,len;
	printf("\n Enter your first string -->");
	scanf("%s",str1); // & is not use when we read string
	printf("\n Enter your second string -->");
	scanf("%s",str2); // & is not use when we read string
	
	printf("\n I am Entered first string is :--%s--:",str1);
	printf("\n I am Entered second string is :--%s--:",str2);
	
	printf("\n Which operatioon do you want to perform on given string ?");
	printf("\n\t 1.Calculate lenght of string \n\t 2.Compare the two strings \n\t 3.Reverse the string \n\t 4.Copy the string \n\t 5.Concatanation \n\t 6.Palindrome ");
     scanf("%d",&choice1);
	
	switch (choice1)
	{
		case 1: // Calculate lenght of string 
		for (i=0;str1[i]!='\0';i++)
			{
				length = length+1;
			}
			printf("Length of a given string is  --> %d",length);
				break;
				
		case 2: //  compare the two strings
				i=0;
				R=0;
				while (str1[i]!='\0'&&str2[R]!='\0')
				{
					if (str1[i]==str2[R])
					{
						i++;
						R++;
						break;
					}
					else break;
				}
				if (str1[i]==str2[R])
					printf("Both strings are equal");
				else
					printf("Both strings are not equal");
					break;	
		
		case 3:  // Reverse the string
		    printf("Entered string is:",str1);
                	i=0;
                	while(str1[i]!='\0')
                	     {  
						     printf("%c",str1);
                	         i++;
						 }
					printf("\nThe Reversed string is :");
					
						 R=i-1;
						 while(R>=0)
						 {  
						    printf("%c",str1[R]);
						    R--;
						 }
						 break;
						 
		case 4://Copy the string
		          printf("copied string is:"); 
				        while(str1[i]!='\0')
				         {  
						     str1[R]=str1[i];
                	         i++;
                	       R++;
                	         printf("%c",R);
						 }
      			        break;
      			        
      	case 5://concatenation
      	     length =0;
      	     while (str1[length]!='\0')
      	     {
      	     	++length;
			 }
			for (i=0;str2[i]!='\0';++i,++length)
			{
				str1[length]=str2[i];
			}
			// terminating the str1 string
			str1[length]='\0';
			printf("After concatention:");
			puts(str1);
		
		case 6:// palindrome
			        i=0;
				    R= strlen(str1)-1;
				      while(i!=R)
				      { if(str1[i]==str2[R] )
						
						{
						 i=i+1;
						R=R-1;}
						else
						printf("no"); 	
						break;			  	
    				 }
    				 if (str1[i]=str2[R])
				      printf("yes");
				else
				      printf("no");
				      break;
	}
	
	return 0;
}
