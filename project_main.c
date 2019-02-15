#include<stdio.h>
#include<conio.h>
#include<string.h>
struct contact
{
	char name[20],adr[20],fname[20],mname[20],email[20],g[10],pno[10],cno[10];
};
int main()
{
	struct contact c[100]; 
	int n,c2,c3,c4,c5,z1=0,f=0,j,f2=0;
	char sname[20],sname4[20],gnd[20],gndm[20],geml[20],dname[20];
	static c1=0;
	do
	{
		printf("\n\t\t\t\t***WELCOME TO PHONEBOOK***");
		printf("\n\t\t\t\t\tMenu");
	printf("\n\n\t\t\t1 Add new\t2 List\t\t3 Modify\n\t\t\t4 Search\t5 Delete\t6 Exit");
	printf("\n\nEnter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			printf("\nEnter name:");
			scanf("%s",c[c1].name);
			printf("Enter address:");
			scanf("%s",c[c1].adr);
			printf("Enter father name:");
			scanf("%s",c[c1].fname);
			printf("Enter mother name:");
			scanf("%s",c[c1].mname);
			printf("Enter Ph.No:");
			scanf("%s",c[c1].pno);
			printf("Enter gender:");
			scanf("%s",gnd);
			if(strcmp(gnd,"male")==0 || strcmp(gnd,"female")==0 || strcmp(gnd,"m")==0 || strcmp(gnd,"f")==0)
			{
				strcpy(c[c1].g,gnd);
			}
			else
			{
				printf("\t\tinvalid gender name\n");
			}
			printf("Enter e-mail:");
			//scanf("%s",c[c1].email);
			scanf("%s",geml);
			for(z1=0;z1<strlen(geml);z1++)
			{
				if(geml[z1]=='@')
				{
					while(z1<strlen(geml))
					{
						if(geml[z1]=='.')
						{
							f=1;
						strcpy(c[z1].email,geml);
						}
						z1++;
					}
				}
			}
			if(f!=1)
			printf("\t\tinvalid email\n");
			printf("Enter citizen no.:");
			scanf("%s",c[c1].cno);
			c1++;
			system("cls");
			printf("Contact saved");
		break;
		case 2:system("cls");
			c2=0;
			printf("\n\t\t\t\tContact List");
			printf("\nName\tAddress\tFname\tMname\tPh.No\tGender\tE-mail\t\tCitizen no.");
			while(c2<=c1)
			{
				printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t\t%s",c[c2].name,c[c2].adr,c[c2].fname,c[c2].mname,c[c2].pno,c[c2].g,c[c2].email,c[c2].cno);
				c2++;
			}
		break;
		case 3:
			system("cls");
			c3=0;
			printf("\nEnter the name of person to modify:");
			scanf("%s",sname);
			while(c3<c1)
			{
				if(strcmp(c[c3].name,sname)==0)
				{
					printf("\nEnter name:");
				scanf("%s",c[c3].name);
				printf("Enter address:");
				scanf("%s",c[c3].adr);
				printf("Enter father name:");
				scanf("%s",c[c3].fname);
				printf("Enter mother name:");
				scanf("%s",c[c3].mname);
				printf("Enter Ph.No:");
				scanf("%s",c[c3].pno);
				printf("Enter gender:");
				//scanf("%s",c[c3].g);
				scanf("%s",gndm);
			if(strcmp(gndm,"male")==0 || strcmp(gndm,"female")==0 || strcmp(gndm,"m")==0 || strcmp(gndm,"f")==0)
			{
				strcpy(c[c3].g,gndm);
			}
			else
			{
				printf("\t\tinvalid gender name\n");
			}
				printf("Enter e-mail:");
				scanf("%s",c[c3].email);
				printf("Enter citizen no.:");
				scanf("%s",c[c3].cno);
				}
				c3++;
			}
			
		break;
		case 4:system("cls");
			c4=0;
			printf("\nEnter the name of person to search:");
			scanf("%s",sname4);
			while(c4<c1)
			{
				if(strcmp(c[c4].name,sname4)==0)
				{
					printf("\nName\tAddress\tFname\tMname\tPh.No\tGender\tE-mail\t\tCitizen no.");
					printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t\t%s",c[c4].name,c[c4].adr,c[c4].fname,c[c4].mname,c[c4].pno,c[c4].g,c[c4].email,c[c4].cno);
				}
				c4++;
		   	}
		break;
		case 5:system("cls");
			c5=0;
			f2=0;
			printf("\nEnter the name for delete:");
			scanf("%s",dname);
			while(c5<c1)
			{
				if(strcmp(c[c5].name,dname)==0)
				{
					for ( c5; c5 < c1; c5++ )
   						 {
    
           			 c[c5] = c[c5+1];
           			 f=1;
       						 
   						 }

				}
				c5++;
			}
			if(f2==1)
			printf("\nRecord deleted");
			else
			printf("\nNo name matching");
		break;
		case 6:
			return 0;
			break;
		default:
			printf("invalid choice");
	}
	printf("\nEnter any key to continue");
	}while(getche());
return 0;
}
