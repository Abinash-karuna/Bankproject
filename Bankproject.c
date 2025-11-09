// hello
#include <stdio.h>
int Createaccount();
int Balancechecker();
int deposit();
int withdrawal();

int accountbalance=0;

static int mainaccount=0;
struct student {
    char Name[100];
    int Age;
    long int Phonenumber;
};
int main()

{
    
    int n;
    printf("Enter the choice [Administator(0) || User(1)] : ");
    scanf("%d",&n);
    if(n==1){
        printf("\tHello User\n Canara Bank Welcome You\n");
        while(1){
        printf("Select the service you need: ");
        int service;
        scanf("%d",&service);
        switch(service){
            case 1:
            printf("You chosed Create account.\n");
            Createaccount();
            break;
            
            case 2:
            printf("You chosed Balance checker.");
            Balancechecker();
            break;
            
            case 3:
            printf("You chosed Deposit.");
            deposit();
            break;
            
            case 4:
            printf("You Chosed Widthrawl,");
            withdrawal();
            break;
            case 5:
            return 0;
            
            default:
            printf("Invalid");
        }
            
        }
        
    }
    else{
        return 0;
    }

    return 0;
}
int Createaccount(){
    if(mainaccount!=0){
        printf("You already have account");
    }else{
        struct student s1;
            printf("Enter the Name: ");
            scanf("%s",s1.Name);
            printf("Enter the Age: ");
            scanf("%d",&s1.Age);
            printf("Enter the Phonenumber");
            scanf("%ld",&s1.Phonenumber);
            printf("you have entered \nName: %s\nAge: %d\nPhonenumber: %ld\n ",s1.Name,s1.Age,s1.Phonenumber);
            mainaccount=1;
        
        
    }
    return 0;
}
int Balancechecker(){
    if (mainaccount==0){
        printf("No account is there\n");
    }
    else{
        printf("Balance is Rs.%d\n",accountbalance);
    }
    return 0;
}
    
int deposit(){
    if (mainaccount==0){
        printf("\nNo account is there");
    }
    else
   {
        int moneyToDeposit;
        printf("\nEnter the Money to deposit: ");
        scanf("%d",&moneyToDeposit);
        accountbalance+=moneyToDeposit;
      
        printf("%d",accountbalance);
    }
    return 0;
    
}
int withdrawal(){
    if (mainaccount==0){
        printf("\nNo account is there\n");
    }
    else{
    int moneyToWidthdraw;int borrow;
    
    printf("\nEnter the Money to Widthrawl: ");
    scanf("%d",&moneyToWidthdraw);
    if(moneyToWidthdraw>0 && moneyToWidthdraw<accountbalance){
        accountbalance=accountbalance-moneyToWidthdraw;
        printf("\nMoney you got: %d\n",moneyToWidthdraw);
        printf("Remaining balance: %d",accountbalance);
    }
    else{
        printf("\nYou Don't have enough money");
    }
    return 0;
    }
}
find by the added

to check the commit



//KISHORE 

//ABINASH

