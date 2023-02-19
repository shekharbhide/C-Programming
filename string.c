/* 
Name-Bhide Shekhar Vishnu
Roll No.06
Batch - S1
Title - C program to reverse, copy, compare, contatenate, lenght, palimdrone the string
*/
#include<stdio.h>
int main()
{
	// declare the string
	char str1[15], str2[10],diff;
	int ch1,ch2 ,M, i1, i2, len, flag;
	do
	{
		printf("\n Enter your String::"); // read string.....
		// scanf("formatsecifier", list of variable using &) ;
		scanf("%s",str1); // & is not used when we read the string...
		printf("\n Dear User, you have Entered the string is:: %s ::",str1);
		printf("\n Which operation you wan to perform on given string??");
		printf("\n Your Choices are \n\t 1.Reverse the given String \n\t 2. Copy the String \n\t 3. Compare the Two given String for Equality ");
		printf("\n\t 4. Concatenation of String \n\t 5. Length of String \n\t 6.Palindrome the String");
		printf("\n Enter the Integer number among 1 to 6:");
		scanf("%d", &ch1);
		switch(ch1)
	{
		case 1: // Reverse the strings
		i1=0;
		while(str1[i1] != '\0')
		{
			printf("%c",str1[i1]); 
			i1++; //increment of index
		}
		printf("\n The Reversed string is::--->");
		// Logic: 2
		M=0;
		i1=i1-1;
		while(i1>=0)
		{
			str2[M] =str1[i1]; //string1 assigning string2
			printf("\n %c->%c", str1[i1], str2[M]);
			i1--;
			M++;
		}
		str2[M]='\0';
		printf("\n%s", str2);
		break;
		
		case 2: // Copy the String
 		i1=0;
 		printf("\n Copy the string ::");
	 	while(str1[i1]!='\0')
 		{
 			str2[i1]=str1[i1]; //copying the string
 			printf( "%c",str2[i1]);
 			i1++;
		}
		str2[i1]='\0';
		break;
		
		case 3: //Compare the Two given String for Equality
 		i1=0;
 		printf("Enter second string::"); //Entering second string
 		scanf("%s",str2);
 		printf("Enter String is::%s%s", str1, str2);
		while(str1[i1]!='\0', str2[i1]!='\0')
		{
			if (str1[i1]==str2[i1]) //equalate two strings
			{
				printf("\n\t String is same");
				i1=i1++;
			}
			else
				printf("\n\t String not same");
			break;
		}	 
		diff=str1[i1]-str2[i1];
		break;
		case 4: //Concatenation of the String
 		i1=0;
 		while(str1[i1] != '\0')
 		{
 			printf("%c",str1);
 			i1++;
		}
		i2=0;
		printf("\n Enter the Second String::"); //assign second string
		scanf("%s",str2);
		printf("Concatenated String is::");
		while(str2[i2] != '\0')
		{
			str1[i1]=str2[i2]; //concatenate two string
			i1++;
			i2++;
		}
		str1[i1]='\0';
		printf("%s", str1);
 		break;
		case 5: //Length of String
 			for
			(i1=0;str1[i1]!='\0';++i1);
			printf("Length of String::%d",i1);
		 break;
		case 6: //Palindrome the string
 			for (i1 = 0; str1[i1] != '\0'; i1++)
 			{
 				len++;
 			}
 			for (i1 = len - 1; i1 >= 0 ; i1--)
 			{
 				str2[len - i1 - 1] = str1[i1];
 			}
 			for (flag = 1, i1 = 0; i1 < len; i1++)
 			{
 				if (str2[i1] != str1[i1])
 				flag = 0;
 			}
 			if (flag == 1)
 			printf ("\nString is a palindrome \n");
 			else
 			printf("\nStirng is not a palindrome \n");
 
			break;
			default: printf("\n Enter the Correct Choice!! ");
			}		
			printf("\n u want to continue 1.YES \n 2.NO\n");
			scanf("%d",&ch2);
	}while(ch2!=2);
	return 0;
}



