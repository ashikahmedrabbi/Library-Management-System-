#include<stdio.h>
struct login{
    char first_name[500];
    char last_name[500];
    char s_id_or_u_id[500];
    char username[500];
    char password[500];


};
registe (){
    FILE *log;
    log=fopen("login_info.txt","w");
    struct login l;
    printf("\n\n\n\t\t\t **************** Enter your information **************** \n");
    printf("\n\t Enter your first name : ");
    scanf("%s",l.first_name);
    printf("\n\tEnter your last name : ");
    scanf("%s",l.last_name);
    printf("\n\tEnter your username : ");
    scanf("%s",l.username);
    printf("\n\tEnter your password : ");
    scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    printf("\n\n Congratulation! Registration Successful : ");
    printf("\n\n Now login with your username and password : ");
    printf("\n\n press any key to continue....... ");
    getch();
    system("CLS");
    login();
}
login(){
    char username [200],password[200];
    FILE *log;
    log =fopen("login_info.txt","r");
    struct login l;
    printf("\n\n\n\t\t\t ****************Enter your Username & Password*************");
    printf("\n\n\t\t\tUsername:");
    scanf("%s",&username);
    printf("\n\n\t\t\tPassword:");
    scanf("%s",&password);

     while(fread(&l,sizeof(l),1,log)){
        if (strcmp(username,l.username)==0 && strcmp (password,l.password)==0)
        {
             printf("\n\n\n\t\t\t\t **************** Successful Login ****************\n");
             printf("\t\t\t\t\t****** *** ***** ***** ***** **** ****** \n\n");
             printf("\t\t\t\t****** **** Enter What you Want **** ****** \n\n");
             printf("\t\t\t1. USER Dashboard\n");
             printf("\t\t\t2. ADMIN Dashboard\n");

        }

        else{
          printf("\t\t\tPlease Enter Correct UserID And Password\n");
        }
     }
     fclose(log);

}
                    /********************teacher Code***************************/
int Add_Book_info()
{
    char name[300];
    FILE *fptr;
    int id;

    float intake, section;
    fptr = fopen("book_info.txt", "w+");/*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("\t\t\tEnter Book id\n");
    scanf("%d", &id);
    fprintf(fptr, "Id= %d\n", id);
    printf("\t\t\tEnter Book name \n");
    scanf("%s", name);
    fprintf(fptr, "Name= %s\n", name);
    printf("\t\t\tEnter the Intake\n");
    scanf("%f", &intake);
    fprintf(fptr, "Intake= %.2f\n", intake);

    fclose(fptr);

    FILE *fp;
   char buff[255];//creating char array to store data of file
   fp = fopen("book_info.txt", "r");
   while(fscanf(fp, "%s", buff)!=EOF){
   printf("%s ", buff);
   }
   fclose(fp);
}
int CSE()
{
   printf("\t\t\t BOOK Name     || Author  || Book Id\n");
   printf("\t\t\t *********     || ******  || ********\n\n");
   printf("\t\t\t C programming || Ar Zone ||  101\n");
   printf("\t\t\t C+ programming|| Ar Zole ||  111\n");
   printf("\t\t\t A programming || Ar Zoze ||  121\n");
   printf("\t\t\t B programming || Ar Zoee ||  131\n");
}
int EEE()
{
   printf("\t\t\t BOOK Name     || Author  || Book Id\n");
   printf("\t\t\t *********     || ******  || ********\n\n");
   printf("\t\t\t C programming || Ar Zone ||  101\n");
   printf("\t\t\t C+ programming|| Ar Zole ||  111\n");
   printf("\t\t\t A programming || Ar Zoze ||  121\n");
   printf("\t\t\t B programming || Ar Zoee ||  131\n");
}
int cvill()
{
   printf("\t\t\t BOOK Name     || Author  || Book Id\n");
   printf("\t\t\t *********     || ******  || ********\n\n");
   printf("\t\t\t C programming || Ar Zone ||  101\n");
   printf("\t\t\t C+ programming|| Ar Zole ||  111\n");
   printf("\t\t\t A programming || Ar Zoze ||  121\n");
   printf("\t\t\t B programming || Ar Zoee ||  131\n");
}
int arc()
{
   printf("\t\t\t BOOK Name     || Author  || Book Id\n");
   printf("\t\t\t *********     || ******  || ********\n\n");
   printf("\t\t\t C programming || Ar Zone ||  101\n");
   printf("\t\t\t C+ programming|| Ar Zole ||  111\n");
   printf("\t\t\t A programming || Ar Zoze ||  121\n");
   printf("\t\t\t B programming || Ar Zoee ||  131\n");
}

int show_Book_list()
{
    FILE *fp;
   char buff[255];//creating char array to store data of file
   fp = fopen("book_info.txt", "r");
   while(fscanf(fp, "%s", buff)!=EOF){
   printf("%s \n", buff);
   }
   fclose(fp);
}

int LibraryManagement(){  //************************
    printf("\t\t\tLibrary Management System : \n");
    printf("\n\t\t\t1. CSE ");
    printf("\n\t\t\t2. EEE ");
    printf("\n\t\t\t3. CVILL ");
    printf("\n\t\t\t4. Arc");

    int ch;
    printf("\n\t\t\tEnter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        CSE();
        break;
    case 2:
        EEE();
        break;
    case 3:
        cvill();
        break;
    case 4:
        arc();
        break;

    default:
        printf("\t\t\tWrong Input\n");

    }
}

int Library_Management()
{
    printf("\t\t\tLibrary Management System : \n");
    printf("\n\t\t\t1. ADD New Book ");
    printf("\n\t\t\t2. Show Book List ");
    printf("\n\t\t\t3. Update Book Info ");
    printf("\n\t\t\t4. Delete Old Info");

    int ch;
    printf("\t\t\tEnter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        Add_Book_info();
        break;
    case 2:
        show_Book_list();
        break;

    default:
        printf("\t\t\tWrong Input\n");

    }

}


int User()
{
    printf("\t\t\t User PANEL OF THE PROJECT: \n");
    printf("\t\t\t1.Categories  \n");
    printf("\t\t\t2. Book Purchase \n");
    printf("\t\t\t3. Book List \n");
    printf("\t\t\t4. My ACCOUNT\n");
    printf("\t\t\t5. Complain \n");
    printf("\t\t\t6. Contact Us \n");
    printf("\t\t\t7. Exit \n");

    int ch;
    printf("\n\t\t\tEnter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
          LibraryManagement ();
        break;
    case 2:
          LibraryManagement ();
        break;

    default:
        printf("Wrong Input\n");

    }


}

int Admin()
{
    printf("\n\t\t\t *** Admin PANEL OF THE PROJECT *** \n");
    printf("\t\t\t1.Update Info  \n");
    printf("\t\t\t2. Book List \n");
    printf("\t\t\t3. My ACCOUNT\n");
    printf("\t\t\t4. Exit \n");

    int ch;
    printf("\n\t\t\tEnter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
          Library_Management ();
        break;
    case 2:
          Library_Management ();
        break;

    default:
        printf("Wrong Input\n");

    }
}

                    /******************teacher code end**************************/

main()
{
    printf("\n\n");
    printf("\t\t\t******************* PROJECT NAME : Library Management System *********************\n");
    printf("\t\t\t\t\t   ****** *** ***** ***** ****** **** ******* \n\n\n\n\n\n");

    int cho;
    printf("\t\t\tpress '1' for register :\n ");
    printf("\n\t\t\tpress '2' for login : \n\n\t Please Enter What you want :" );
    scanf("%d",&cho);
    if (cho==1)
    {
        system ("CLS");
        registe();

    }
    else if (cho==2)
    {
        system ("CLS");
        login();

    }
    int ch;
    printf("\n\t\t\tEnter Your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        User();
        break;
    case 2:
        Admin();
        break;


    default:
        printf("\t\t\tWrong Input\n");
    }

    return 0;

}





