            #include<malloc.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
struct book
{
	char code[20];
	char name[20];
	char date[20];
	int cost;
	char rate[10];
}b;
struct user_rating
{
    char name1[20];
    char rate1[10];
}ra;
struct acc_type
{
     char bank_name[20];
     char bank_branch[20];
     char acc_holder_name[30];
     int acc_number;
     char acc_holder_address[100];
     float available_balance;
};
struct acc_type account[20];
/*
     printf("The above structure can be declared using
     typedef like below");

     typedef struct acc_type
     {
        char bank_name[20];
        char bank_branch[20];
        char acc_holder_name[30];
        int acc_number;
        char acc_holder_address[100];
        float available_balance;
     }Acc_detail;

     Acc_detail account[20];
*/

int num_acc;
void Create_new_account();
void Cash_Deposit();
void Cash_withdrawl();
void Account_information();
void Log_out();
void display_options();
int seat = 200;
void insert_details();//for inserting movie details
void viewAll(); // for view all data
void find(); // for finding data
void book_ticket(); //for booking tickets
void old_record(); //for view old recorrds of users,booked tickets
struct node
{

    char adname[50],adpass[50];
	struct node *next;
};
struct node *head=NULL,*headd=NULL,*p,*r,*last=NULL,*lastt=NULL,*q=NULL,*s=NULL;
void admin();
void readadmin();
void writeadmin();
void adminprofile();
void loggedadmin();
int modifyadmin();
int deleteadmin();
void displayadmin();
void add_rating();
int found=0;
int ch,j,x,c=' ',choice1,choice2;
char str1[20],str2[20],str3[20],str4[20];
char str5[]="admin",str6[]="admin",str7[20],str8[20];
char choice3[]="y",choice4[10],choice5[10];
char ticket[20][3];
 char adname[50],adpass[50];
char input[255];
 int status1;
 int ch;
 int n,m,i,src;
 char umbrella;
 char ticket1[20][3];


int main()
{
    system("color f1");
    FILE *infile;
do{
    printf("\n---------------------------------------------------------------------------\n");
    printf("                     Welcome to Movie Ticket Booking System"                );
    printf("\n----------------------------------------------------------------------------\n");
    printf("\tLog in as:\n");
    printf(" \n\t\t 1. ADMIN \n\n\t\t 2. USER \n\n\t\t 0. EXIT");
    printf("\n----------------------------------------------------------------------------\n");
    printf("         ");
    printf("\n----------------------------------------------------------------------------\n");
    printf("\n\tChoice:\t\t");
    scanf("\t%d",&ch);
    switch(ch)
    {
        case 1:

        printf("\n----------------------------------------------------------------------------\n");
        printf("                     Welcome ADMIN "                    );
        printf("\n----------------------------------------------------------------------------\n");
            readadmin();
            r=headd;
            i=0;
            printf("\n Enter Name:\t");
            scanf("%s",str1);
            printf("\n Enter  Password:\t");
                    while (i<=9)
                    {
                    str2[i]=getch();
                    if(str2[i]==13)
                    break;
                    else printf("*");
                    i++;
                    }
                    str2[i]='\0';
            for(i=1;r!=NULL;i++)
            {
            if((strcmp(r->adname,str1)==0)&&(strcmp(r->adpass,str2)==0))
                {
                strcpy(adname,r->adname);
                strcpy(adpass,r->adpass);
                found=1;
                }
           r=r->next;
            }
            if((found)==1 || ((strcmp(str5,str1)==0) &&( strcmp(str6,str2)==0) ))
            {
        do
        {    system("CLS");
             printf("\n---------------------------------------------\n");
             printf("                   Menu                      ");
             printf("\n---------------------------------------------\n");
             printf("\n\t1. Book ticket\n\t");
              printf("2. View All Transactions\n\t3. Add movies");
             printf("\n\t4. View movies\n\t5.Cancel ticket\n\t6. Profile Settings\n\t0. EXIT \n\n\t");
             printf("Choice:\t");
            scanf("%d",&choice1);

                switch(choice1)
                {
                case 0: exit(0);
                        break;
                case 1:
                        system("CLS");
                        printf("\n----------------------------------------------------------------------------\n");
                        printf("                     Ticket Booking"                    );
                        printf("\n----------------------------------------------------------------------------\n");
                        book_ticket();
                        break;

                case 2:
                        system("CLS");
                        printf("\n----------------------------------------------------------------------------\n");
                        printf("                             View All transactions"                    );
                        printf("\n----------------------------------------------------------------------------\n");
                        old_record();
                        break;
                case 3:
                        system("CLS");
                        printf("\n----------------------------------------------------------------------------\n");
                        printf("                              Insert Movies"                    );
                        printf("\n----------------------------------------------------------------------------\n");
					    insert_details();

                        break;
                case 4:
                    system("CLS");
                     printf("\n----------------------------------------------------------------------------\n");
                     printf("                              View Movies"                    );
                     printf("\n----------------------------------------------------------------------------\n");
                     viewAll();
                    break;
                case 5:
                        system("CLS");
                        printf("Your ticket has been canceled");
                        break;
                case 6: system("CLS");
                        adminprofile();

                }
        printf("\n----------------------------------------------------------------------------\n");
        printf("\n\tWant to Continue[Main Menu] (y/n):\t");
        scanf("%s",&choice4);
        strlwr(choice4);
        }while((strcmp(choice3,choice4))==0);

        }else
        {
        system("CLS");
        printf("\n\n\n\t!! INVALID CREDENTIALS ...... Enter Correct Username And Password !!\n\n");

        }
        break;
    case 2:
    {    system("CLS");
         printf("\n---------------------------------------------\n");
         printf("                 USER Menu                      ");
         printf("\n---------------------------------------------\n");
         int t;
         do{
            printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
            printf("\n");
            printf("\t Moive Ticket booking ");
            printf("\n");
            printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");

            printf("\nEnter >1< To View All Movie");
            printf("\nEnter >2< To Find Movie ");
            printf("\nEnter >3< To Book Tickets");
            printf("\nEnter >4< To Cancel Ticket");
            printf("\nEnter >5< To View All Transactions");
            printf("\nEnter >6< To Make the Payment");
            printf("\nEnter >7< Add user rating");
            printf("\nEnter >8< View user rating");
            printf("\nEnter >0< To Exit ");
            printf("\nEnter your Choice ::");
            scanf("%d",&t);
            system("cls");
            switch (t)
            {
                case 4 :
                    system("CLS");
                    printf("Your ticket has been canceled");
                    break;
                case 1:
                    viewAll();
                    break;

                case 2:
                    find();
                    break;

                case 3:
                    book_ticket();
                    break;

                case 5:
                    old_record();
                    break;
                case 6:
                    {
                    char option;
                    char f2f[50] = "19800023";
                    num_acc=0;
                    while(1)
                    {
                        printf("\n***** Welcome to Bank Application *****\n");
                        printf("\nThe account no where the money is to be transferred is %s",f2f);
                        display_options();
                        printf("Please enter any options (1/2/3/4/) ");
                        printf("to continue : ");

                        option = getch();
                        printf("%c \n", option);
                        switch(option)
                        {
                            case '1':
                                Create_new_account();
                                break;
                            case '2':
                                Cash_withdrawl();
                                break;
                            case '3':
                                return 0;
                            case '4':
                                system("cls");
                                break;
                            default : system("cls");
                                printf("Please enter one of the options");
                                printf("(1/2/3/4/5) to continue \n ");
                                break;
                            }
                        }
                    }
                        break;
                case 7:
                        add_rating();
                        break;
                case 8:
                    view_rating();
                    break;
                case 0:
                    exit(0);
                    break;

                default:
                    printf("Wrong choice !");
                    break;
                }
            }while(t!=0);



        }
    }
    }while(ch!=0);
}
void adminprofile()
{           do{system("CLS");
             printf("\n---------------------------------------------\n");
             printf("              PROFILE SETTINGS                   ");
             printf("\n---------------------------------------------\n");
             printf("\n\t1. Add Admins\n\t");
                printf("2. Display Admins and Passwords\n\t3. Change Username and Password");
             printf("\n\t4. Delete Admin\n\t0. EXIT \n\n\t");
             printf("Choice:\t");
            scanf("%d",&choice1);
            switch(choice1)
            {
                case 1: system("CLS");
                        loggedadmin();
                        admin();
                        break;
                case 2: system("CLS");
                        loggedadmin();
                        displayadmin();
                        break;
                case 3:system("CLS");
                        loggedadmin();
                        modifyadmin();
                        break;
                case 4:system("CLS");
                        loggedadmin();
                        deleteadmin();
                        break;
                case 0:system("CLS");
                        exit(0);
                break;

            }
        printf("\n----------------------------------------------------------------------------\n");
        printf("\n\t Want to Continue[Profile Setting] (y/n):\t");
        scanf("%s",&choice4);
        strlwr(choice4);
        }while((strcmp(choice3,choice4))==0);

}
void admin()
{     int i=0;
    readadmin();
char str1[20],str2[20];
 printf("\n Enter New Admin Name:\t");
        scanf("%s",str1);
 printf("\n Enter New Admin Password:\t");
            while (i<=9)
            {
            str2[i]=getch();
            if(str2[i]==13)
            break;
            else printf("*");
            i++;
            }
            str2[i]='\0';
    printf("\n Confirm Password:\t");
            i=0;
            while (i<=9)
            {
            str3[i]=getch();
            if(str3[i]==13)
            break;
            else printf("*");
            i++;
            }
    str3[i]='\0';
    printf("\n Enter LOGGED IN ADMIN PASSWORD:\t");
                i=0;
            while (i<=9)
            {
            str4[i]=getch();
            if(str4[i]==13)
            break;
            else printf("*");
            i++;
            }
    str4[i]='\0';
    if( (strcmp(str2,str3)==0) && ((strcmp(str4,adpass)==0) || (strcmp(str4,str6)==0)))
	{
	    struct node *r;

	r=lastt;
	if(lastt==NULL){
	i=1;
	lastt=(struct node*)malloc(sizeof(struct node));
	lastt->next=NULL;
	strcpy(lastt->adname,str1);
	strcpy(lastt->adpass,str2);
    r=lastt;
	headd=lastt;
	}else
	{

	r=lastt;

	r->next=(struct node*)malloc(sizeof(struct node));
	r=r->next;
	lastt=r;
	strcpy(r->adname,str1);
	strcpy(r->adpass,str2);
    r->next=NULL;
	}


	writeadmin();
	    printf("\n\t!!   Admin Profile Created Successfully !!");
	}else
	{
	    printf("\n\t!! Oopps !! .... Password Not Matched .....");
	}

}
void readadmin()
{
    int i,filempty=0;
	FILE *py=fopen("Admin.txt","r");
	r=headd;
	fseek(py,0,SEEK_END);
	if(r==NULL)
	{
	r=(struct node*)malloc(sizeof(struct node));
	headd=r;
	}
	int len=(int)ftell(py);
	if(len<=0)
	{
	filempty=1;
	r=NULL;
	headd=r;
	}
	if(filempty==0)
	{
	rewind(py);
	while(fscanf(py,"%s\t%s\n",r->adname,r->adpass))
	{
	if(feof(py))
	{
	break;
	}
	r->next=(struct node*)malloc(sizeof(struct node));
	r=r->next;
	lastt=r;
	r->next=NULL;
	}
	}
	//fclose(py);

}
void writeadmin()
{
    FILE *ppy=fopen("Admin.txt","w");
	int i;
	struct node *tempp;
	tempp=headd;
	if(tempp==NULL)
	{
	    printf("list is empty");
	}
	else
	{
	for(i=0;tempp!=NULL;i++)
	{
	fprintf(ppy,"%s\t%s\n",tempp->adname,tempp->adpass);
	tempp=tempp->next;
	}//for
	}//else
	fclose(ppy);
}
void loggedadmin()
{
            printf("\n\n\n---------------------------------------------\n");
            printf("            Logged In Admin:\t                       ");
            printf("%s",adname);
            printf("\n---------------------------------------------\n");

}
int modifyadmin()
{
 struct node *r,*s;
	readadmin();
	int loc,i;
	displayadmin();
	printf("\nEnter the location to Modify:\t");
	scanf("%d",&loc);
	if(r!=NULL)
	{
	    if(loc==1)
    {
        r=headd;
        headd=headd->next;
        writeadmin();
        free(r);
        return(headd);
    }
    else{s=headd;}
    for(i=1;i<loc-1;i++)
    {
        s=s->next;
    }
    r=s->next;
    s->next=r->next;
    writeadmin();
    free(r);
    n=n-1;
	}
	else
	{
	printf("\nSorry,The list is empty");
	}
    readadmin();
	r=headd;
	s=headd;
char str1[20],str2[20];
printf("\n Enter New Admin Name:\t");
scanf("%s",str1);
printf("\n Enter New Admin Password:\t");
             i=0;
            while (i<=9)
            {
            str2[i]=getch();
            if(str2[i]==13)
            break;
            else printf("*");
            i++;
            }
            str2[i]='\0';
    printf("\n Confirm Password:\t");
            i=0;
            while (i<=9)
            {
            str3[i]=getch();
            if(str3[i]==13)
            break;
            else printf("*");
            i++;
            }
    str3[i]='\0';
    printf("\n Enter LOGGED IN ADMIN PASSWORD:\t");
                i=0;
            while (i<=9)
            {
            str4[i]=getch();
            if(str4[i]==13)
            break;
            else printf("*");
            i++;
            }
    str4[i]='\0';
    r=(struct node*)malloc(sizeof(struct node));
    strcpy(r->adname,str1);
	strcpy(r->adpass,str2);

    if(loc==1)
    {
        r->next=headd;
	headd=r;
        writeadmin();
        return(r);
    }
    s=headd;
    for(i=1;i<loc-1;i++)
    {
        if(s!=NULL)
        {
            s=s->next;
        }
    }
    r->next=s->next;
    s->next=r;
    n=n+1;
    writeadmin();
    printf("\n\t!!   Admin Profile Created Successfully !!");


    return(headd);
}
void displayadmin()
{
    readadmin();
	r=headd;
	if(r==NULL)
	{
	printf("list is empty");
	}
	else
	{
	for(i=0;r!=NULL;i++)
	{
    printf("\n\tAdmin Name:\t\t");      //source of travel
    printf("%s",r->adname);
    printf("\t\tPassword:\t\t");      //source of travel
    printf("%s",r->adpass);

    r=r->next;

	}
    }
}
int deleteadmin()
{
 struct node *r,*s;
	readadmin();
	int loc,i;
	displayadmin();
	printf("\nEnter the location to Delete:\t");
	scanf("%d",&loc);
	if(r!=NULL)
	{
	    if(loc==1)
    {
        r=headd;
        headd=headd->next;
        writeadmin();
        free(r);
        return(headd);
    }
    else{s=headd;}
    for(i=1;i<loc-1;i++)
    {
        s=s->next;
    }
    r=s->next;
    s->next=r->next;
    writeadmin();
    free(r);
    n=n-1;
	}
	else
	{
	printf("\nSorry,The list is empty");
	}
	displayadmin();
}
void add_rating()
{
    FILE *fp;
    struct user_rating r;
    printf("enter movie name:-");
    scanf("%s",r.name1);
    printf("\nenter the rating:-");
    scanf("%s",r.rate1);
    fp=fopen("user.txt","a");
    if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"%s %s \n",r.name1,r.rate1);
		printf("Recorded Successfully");
	}
		printf("\n");
	fclose(fp);
	system("cls");
}
int view_rating()
{
    char ch;
	FILE *fp;

	fp = fopen("user.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}

	fclose(fp);
}

void insert_details()
{

	FILE *fp;
	struct book b;
	printf("Enter movie code :- ");
	scanf("%s",b.code);
	printf("Enter  name :- ");
	scanf("%s",b.name);
	printf("Enter Release Date:- ");
	scanf("%s",b.date);
	printf("Enetr Ticket Price:- ");
	scanf("%d",&b.cost);
	printf("Enter rating:-");
	scanf("%s",&b.rate);


	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"%s %s %s %d %s\n",b.code,b.name,b.date,b.cost,b.rate);
		printf("Recorded Successfully");
	}
		printf("\n");
	fclose(fp);
	system("cls");
}
void find() //find details
{
	struct book b;
	FILE *fp;
	char ch[20];
	printf("Enter movie code :");
	scanf("%s",ch);
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		while(getc(fp)!= EOF)
		{
			while(fscanf(fp,"%s %s %s %d %s",b.code,b.name,b.date,&b.cost,b.rate))
			if(strcmp(b.code,ch) == 0)
			{
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tmovie name ::%s",b.name);
				printf("\n\t\tmovie date ::%s",b.date);
				printf("\n\t\tprice of ticket ::%d",b.cost);
				printf("\n\t\trating of movie ::%s",b.rate);
			}
		}

	}

	fclose(fp);
	system("cls");
}
void viewAll()
{

	char ch;
	FILE *fp;

	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}

	fclose(fp);

}
//for ticket booking
void book_ticket()
{
 struct book b;
	FILE *fp;

	FILE *ufp;

	int total_seat,mobile,total_amount;
	char name[20];


	char ch; //used in display all movies
	char movie_code[20]; //for searching

	// disply all moives by default for movie code
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);

	//display ends
	printf("\n For Book ticket Choice Movie(Enter Movie Code First Latter Of Movie)\n");
	printf("\n Enter movie code :");
	scanf("%s",movie_code);
	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		while(getc(fp)!= EOF)
		{
			fscanf(fp,"%s %s %s %d %s",b.code,b.name,b.date,&b.cost,b.rate);
			if(strcmp(b.code,movie_code)==0)
			{
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tMovie name ::%s",b.name);
				printf("\n\t\tdate name ::%s",b.date);
				printf("\n\t\tPrice of ticket::%d",b.cost);
				printf("\n\t\trating of movie ::%s",b.rate);


			}
		}
	}


	printf("\n* Fill Deatails  *");
	printf("\n your name :");
	scanf("%s",name);
	printf("\n mobile number :");
	scanf("%d",&mobile);
	printf("\n Total number of tickets :");
	scanf("%d",&total_seat);
	displayseats();
	printf("select the seats\n");
	for(i=1;i<=total_seat+1;i++)
	{

        gets(ticket[i]);


	}
    total_amount = b.cost * total_seat;
    int response,f;
    printf("do you want to preorder snacks for the movie\n");
    scanf("%d",&response);
    if (response==1)
    {
        printf("choose from the combos available\n");
        printf("1.popcorn only -rs 90\n 2.coke+popcorn -rs 150\n 3.samossa+coke- rs 90\n 4.exit");
        scanf("%d",&f);
        switch(f)
        {
            case 1:
                printf("you will get the order during interval on your seat\n you need to pay:");
                printf("%d",total_amount+90);
                total_amount=total_amount+90;
                break;
            case 2:
                printf("you will get the order during interval on your seat\n you need to pay:");
                printf("%d",total_amount+150);
                total_amount=total_amount+90;
                break;
            case 3:
                printf("you will get the order during interval on your seat\n you need to pay:");
                printf("%d",total_amount+90);
                total_amount=total_amount+90;
                break;
        }
    }
	printf("\n ENJOY MOVIE \n");
	printf("\n\t\tname : %s",name);
	printf("\n\t\tmobile Number : %d",mobile);

	printf("\n\t\tTotal seats : %d",total_seat);
	printf("\n\t\tcost per ticket : %d",b.cost);
	printf("\n \t\tseats selected:");
	for(i=1;i<=total_seat+1;i++)
	{
	    puts(ticket[i]);

	}

	printf("\n\t\tTotal Amount : %d",total_amount);
	ufp=fopen("oldTransection.txt","a");
	if(ufp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(ufp,"%s %d %d %d %s %d \n",name,mobile,total_seat,total_amount,b.name,b.cost);
		printf("\n Record insert Sucessfull to the old record file");
	}
		printf("\n");
	fclose(ufp);
	fclose(fp);

}

//for view all user transections
void old_record()
{
	char ch;
	FILE *fp;

	//system("clear");

	fp = fopen("oldTransection.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);


}
int displayseats()
{
    printf("\t******************************Platinum\t********************************\n");
    printf("A(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("B(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("\n");
    printf("\t******************************Gold\t********************************\n");
    printf("C(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("D(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("E(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("F(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("G(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("H(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("I(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("J(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("\n");
    printf("\t******************************Silver\t********************************\n");
    printf("K(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("L(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("M(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("N(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("O(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");
    printf("P(1-20)--> [] [] [] [] [] [] [] [] [] \t[] [] [] [] [] [] [] [] [] [] []\n");

    printf("\n***************************** Screen this way\t *********************\n");


}
void display_options()
{
    printf("\n1. Create new account \n");
    printf("2. Make payment \n");
    printf("3. Log out \n");
    printf("4. Clear the screen and display available ");
    printf("options \n\n");
}

/* Function to create new account */

void Create_new_account()
{
   char bank_name[20];
   char bank_branch[20];
   char acc_holder_name[30];
   int acc_number;
   char acc_holder_address[100];
   float available_balance = 0;
   fflush(stdin);
   printf("\nEnter the bank name              : ");
   scanf("%s", &bank_name);
   printf("\nEnter the bank branch            : ");
   scanf("%s", &bank_branch);
   printf("\nEnter the account holder name    : ");
   scanf("%s", &acc_holder_name);
   printf("\nEnter the account number(1 to 10): ");
   scanf("%d", &acc_number);
   printf("\nEnter the account holder address : ");
   scanf("%s", &acc_holder_address);

   strcpy(account[acc_number-1].bank_name,bank_name);
   strcpy(account[acc_number-1].bank_branch,bank_branch);
   strcpy(account[acc_number-1].acc_holder_name,
   acc_holder_name);
   account[acc_number-1].acc_number=acc_number;
   strcpy(account[acc_number-1].acc_holder_address,
   acc_holder_address);
   account[acc_number-1].available_balance=available_balance;

   printf("\nAccount has been created successfully \n\n");
   printf("Bank name              : %s \n" ,
   account[acc_number-1].bank_name);
   printf("Bank branch            : %s \n" ,
   account[acc_number-1].bank_branch);
   printf("Account holder name    : %s \n" ,
   account[acc_number-1].acc_holder_name);
   printf("Account number         : %d \n" ,
   account[acc_number-1].acc_number);
   printf("Account holder address : %s \n" ,
   account[acc_number-1].acc_holder_address);


   //num_acc++;

}

// Displaying account informations

void Account_information()
{
     register int num_acc = 0;

     //if (!strcmp(customer,account[count].name))
     while(strlen(account[num_acc].bank_name)>0)
     {
         printf("\nBank name                : %s \n" ,
         account[num_acc].bank_name);
         printf("Bank branch              : %s \n" ,
         account[num_acc].bank_branch);
         printf("Account holder name      : %s \n" ,
         account[num_acc].acc_holder_name);
         printf("Account number           : %d \n" ,
         account[num_acc].acc_number);
         printf("Account holder address   : %s \n" ,
         account[num_acc].acc_holder_address);

         printf("Available balance        : 2000 \n\n");
         num_acc++;
     }
}

// Function to deposit amount in an account
void Cash_withdrawl()
{
    int acc_no;
   float withdraw_money;

   printf("Enter account number you want to withdraw money:");
   scanf("%d",&acc_no);

   printf("\nEnter money you want to withdraw from account ");
   scanf("%f",&withdraw_money);

   while (acc_no=account[acc_no-1].acc_number)
   {
         printf("************payment successful***************");
         break;
   }acc_no++;
}


