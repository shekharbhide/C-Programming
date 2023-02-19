#include<stdio.h>
#include <string.h>
int main()

{    // Declare the string
   char str1[10], str2[10],b;
   int choice1,i,R,length,len;
   printf("\n-------------- Welcome To All In FDS Lab ---------");
   printf("\n Enter Your First String-->");
              // Read string
    scanf("%s",&str1);  // & is not used when we read the string...
      printf("\n Enter Your second String-->");
	 scanf("%s",&str2); 
   
    printf("\n Dear, I am Entered first string is: -- %s -- :",str1);
     printf("\n Dear, I am Entered second string is: -- %s -- :",str2);
    
    printf("\n Which operation you want to perform on given string ?");
	printf("\n Enter the your choice :: \n\t1.Reverse the given string \n\t2.Copy the string: \n\t3.Calculate the length of given string: " );
	printf("\n\t4.Compare the two strng for equality: \n\t5.concatenation: \n\t6.palindrome");
    printf("\n Enter choice number among 1 to 6:\n\t");
    scanf("%d",&choice1);
    
          switch(choice1)
          {    
                case 1:  //Reverse the given string
                    printf("Entered string is:-",str1);
                	i=0;
                	while(str1[i]!='\0')
                	     {  
						     printf("%c",str1[i]);
                	         i++;
						 }
					printf("\nThe Reversed string is :");
						 R=i;
						 while(R>=0)
						 {  
						    printf("%c",str1[R]);
						    R--;
						 }
						 break;
				case 2: // copy the given string
				        printf("copied string is:");
						i=0; 
				        while(str1[i]!='\0')
				         {  
						     str2[R]=str1[i];
                	         i++;
                	         printf("%c",str2[R]);
						 }
      			        break;
						   
				case 3: //length of a given string
				        for(i=0;str1[i]!='\0';i++)
						{  
						    i++;
				     	}
							printf("Length of a  given string is ---> %d",i);
					
							break;
								 			        
	            case 4: //compare the given strings
	                    i=0;
	                    R=0;
	                    while(str1[i]!='\0'&& str2[R]!='\0')
	                   {
						 if (str1[i]==str2[R])
	                     {     
	                        printf("Both strings are equal");
							break;    
					   }
	                   else
	                   printf("Both strings are not equal");
	                   break;
				    	}
				    break;	 
				case 5://concatenation
				       i=0;
				       while(str1[i]!='\0')
				       {  
				       printf("%c",str1[i]);
				       i++;
					   }
					   R=0;
					   printf("\nconcatenate string is:");
					    while(str2[R]!='\0')
				       {  str1[i]=str2[R];
				           i++;
				           R++;
					   }
					   printf("\n%s",str1);
					   break;
				case 6:// palindrome
			        i=0;
				    R= strlen(str1)-1;
				      while(i!=R)
				      { if(str1[i]==str2[R] )
						{
						 i=i+1;
						R=R-1;
						printf("string is palindrome!!");
						}
						else
						printf("string is not palindrome!!"); 	
						break;			  	
    			}
		  }
   return 0;
   
}
