#include<stdio.h>
#include<string.h>
void exit()
{
    char ex;
    printf("Press enter to clear screen: ");
            fflush(stdin);
            scanf("%c",&ex);
            if(ex!='|') system("cls");
}
struct student
{
    char name[30];
    int id;
    int age;
    int batch;
    int mblNum;
} s[100];
int main()
{
    int i,j; char name[30];
    int opt,id,findId,t=1,k=0;
    strcpy(s[k].name,"Md Fahim");
    s[k].id= 3;
    s[k].age= 20;
    s[k].batch= 221;
    s[k].mblNum= 01111111155;
    k++;
    strcpy(s[k].name,"Md Ratan");
    s[k].id= 4;
    s[k].age= 20;
    s[k].batch= 221;
    s[k].mblNum= 01222222255;
    k++;
    strcpy(s[k].name,"Md Sajid");
    s[k].id= 6;
    s[k].age= 22;
    s[k].batch= 221;
    s[k].mblNum= 01333333335;
    k++;
    strcpy(s[k].name,"Md Apurba");
    s[k].id= 8;
    s[k].age= 20;
    s[k].batch= 221;
    s[k].mblNum= 01454444433;
    k++;
    strcpy(s[k].name,"Md Imon");
    s[k].id= 9;
    s[k].age= 21;
    s[k].batch= 221;
    s[k].mblNum= 01355555335;
    k++;
    while(t)
    {
        printf("\n1. add info.");
        printf("\n2. Show info.");
        printf("\n3. update info.");
        printf("\n4. delete info.");
        printf("\nChoose one option: ");
        scanf("%d",&opt);

        if(opt==1)
        {
            printf("\n\nEnter id of the student: ");
            scanf("%d",&id);
            s[k].id = id;
                printf("Enter student name: ");
                fflush(stdin);
                gets(name);
                strcpy(s[k].name,name);
                printf("Enter age: ");
                scanf("%d",&s[k].age);
                printf("Enter batch: ");
                scanf("%d",&s[k].batch);
                printf("Enter mobile number: ");
                scanf("%d",&s[k].mblNum);
                k++;
                printf("Student info added\n");
            exit();
        }
        else if(opt==2)
        {
            for(i=0;i<k;i++)
            {
                printf("\n\nStudent name: %s\n",s[i].name);
                printf("\tID: %d\n",s[i].id);
                printf("\tAge: %d\n",s[i].age);
                printf("\tBatch: %d\n",s[i].batch);
                printf("\Mobile Number: %d\n\n",s[i].mblNum);
            }
            exit();
        }
        else if(opt==3)
        {
            printf("\n\nTo update, Enter id of the student: ");
            scanf("%d",&id);
            for(i=0;i<k;i++)
            {
                if(s[i].id==id)
                    break;

            }
                printf("Enter student name: ");
                fflush(stdin);
                gets(name);
                strcpy(s[i].name,name);
                printf("Enter age: ");
                scanf("%d",&s[i].age);
                printf("Enter batch: ");
                scanf("%d",&s[i].batch);
                printf("Enter mobile number: ");
                scanf("%d",&s[i].mblNum);
            printf("\nStudent info updated\n");
            exit();
        }
        else if(opt==4)
        {
            printf("\n\nTo Delete, Enter id of the student: ");
            scanf("%d",&id);
            for(i=0,j=0;s[i].id!='\0';j++,i++)
            {
                if(s[i].id==id)
                    j--;
                else
                {
                    strcpy(s[j].name,s[i].name);
                    s[j].id=s[i].id;
                    s[j].age=s[i].age;
                    s[j].batch=s[i].batch;
                    s[j].mblNum=s[i].mblNum;
                }
            }
            k--;
            printf("\nStudent info updated\n");
            exit();
        }
    }
}
