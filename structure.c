   

#include <stdio.h>
int main()
{
	int i, n, choice1, choice2, key, count = 0,pos, choice;
	struct student
	{
		char name[40];
		int roll;
		float hsc_per;
		float ssc_per;
	} a[200];
	printf("\n How many record do you want to store:-");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("\n Enter the name of student: ");
		scanf("%s", a[i].name);
		printf("enter the roll no of student: ");
		scanf("%d", &a[i].roll);
		printf("enter the HSC marks of student: ");
		scanf("%f", &a[i].hsc_per);
		printf("enter the ssc marks of student: ");
		scanf("%f", &a[i].ssc_per);
	}

	printf("\nstudent information ::");
	printf("\n");
	printf("\tname\t\troll no\t\thsc_per\t\t\tssc_per");
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("\n\t%s\t\t%d\t\t%f\t\t%f\t\t", a[i].name, a[i].roll, a[i].hsc_per, a[i].ssc_per);
	}
	do
	{
		printf("\n\n which operation do you want to perform ::");
		printf("\n1.Insert a new student record \n 2.Delete a student\n 3.Search \n4.Display data \n 5.modify the record");
		scanf("%d", &choice1);
		switch (choice1)
		{
			case 1: // insertion of record
				printf("\ninsert  a new student record::");
				{
					printf("\nenter the name of student:");
					scanf("%s", a[i].name);
					printf("enter the roll no of student:");
					scanf("%d", &a[i].roll);
					printf("\nenter the hsc marks of student:");
					scanf("%f", &a[i].hsc_per);
					printf("\nenter the ssc marks of student:");
					scanf("%f", &a[i].ssc_per);
					n++;
				}
			break;
			case 2: // logic for deletion
				printf("Delete a student record ");
				printf("Which record you want to delet?=");
				scanf("%d", &pos);
				for (i = 0; i < n; i++)
				{
					if(pos==a[i])
					free(pos);
				}
			//	n = n - 1;
			break;
			case 3: // logic for searching
				printf("search:-");
				scanf("%d", &key);
				for (i = 0; i < n; i++)
				{
					if (key == a[i].roll)
					{
						count = 1;
					}
					break;
				}
				if (count == 1)
				{
					printf("record found");
				}
				else
				{
					printf("record not found");
				}
				break;

			case 4:
				printf("display data sheet::");
				printf("\n\t              \t:: student information ::");
				printf("\n");
				printf("name\t\troll no\t\thsc_per\t\t\tssc_per");
				printf("\n");
				for (i = 0; i < n; i++)
				{
					printf("\n%s\t\t%d\t\t%f\t\t%f\t\t", a[i].name, a[i].roll, a[i].hsc_per, a[i].ssc_per);
				}
			break;
			case 5:
				printf("modify the record::");
				printf("\n Lets! Edit the students record -->>");
				printf("\n*****");

				printf("\n Okay..The Player record u want to modify is found, you can modify it...");
				printf("\n What do you want to modify ? :: 1.Name \t 2.roll no  \t 3.Hsc marks \t 4.Ssc marks  ====>>>  ");
				scanf("%d", &choice);
				if (choice == 1)
				{
					printf("\n Enter student name :: ");
					scanf("%s", a[i].name);
					if (choice == 2)
					{
						printf("\n Enter student roll no :: ");
						scanf("%d", &a[i].roll);
					}
					if (choice == 3)
					{
						printf("\n Enter student hsc_per :: ");
						scanf("%d", a[i].hsc_per);
					}
					if (choice == 4)
					{
						printf("\n Enter student ssc_per :: ");
						scanf("%d", a[i].ssc_per);
					}
				}
				printf("record is modify!!");
				break;
			}
			printf("\ndo you want to continue ::\n1.yes\t 2.no");
			scanf("%d", &choice2);
		}while (choice2 != 2);
	return 0;
}



