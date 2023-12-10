#include <stdio.h>
#include <string.h>

int main() {
    char gender[10];
    char name[50]; 
    int age, choice;
    int  bjp = 0, bsp = 0, inc = 0, aap = 0;

    while (1) {
       
        printf("press any key to exit or enter (male/female) for vote in our voying system : ");
        scanf("%s", gender);

        if((strcmp(gender, "male") == 0 ) ==(strcmp(gender, "female") == 0 )){
            printf("End command received....\n");
            break;
        }

    
        printf("Enter your name: ");
        scanf("%s", name);
         
		 if (strcmp(gender, "male") == 0 ) {
            printf("Thank you, Mr. %s, for voting in our voting system \n", name);
        } else if (strcmp(gender, "female") == 0 ) {
            printf("Thanks, Mrs. %s, for voting in your voting sytem\n", name);
        }

        printf("Enter your age: ");
        scanf("%d", &age);
       
        if (age < 18) {
            printf(" %s, you are not eligible to vote.\n", name);
            continue;
        }

       
        printf("\nChoose a party:\n");
        printf("1. Party 1\n");
        printf("2. Party 2\n");
        printf("3. party 3\n");
        printf("4. Party 4 \n");

       
        printf("choose any party which you want to support  (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bjp++;
                break;
            case 2:
                bsp++;
                break;
            case 3:
                inc++;
                break;
            case 4:
                aap++;
                break;
            default:
                printf("you make an invaild choice.\n");
        }
    }

    printf("\nVoting Summary:\n");
    printf("party 1: %d\n", bjp);
    printf("party 2: %d\n", bsp);
    printf("party 3: %d\n", inc);
    printf("Party 4: %d\n", aap);
    
    if((bjp>bsp)&&(bjp>inc)&&(bjp>aap))
    {
    	printf(" the winnig party is   PARTY 1");
	}
	else if((bsp>bjp)&&(bsp>inc)&&(bsp>aap))
    {
    	printf(" the winnig party is  PARTY 2");
	}
	else if((inc>bsp)&&(inc>bjp)&&(inc>aap))
    {
    	printf(" the winnig party is PARTY 3");
	}
	else if((aap>bsp)&&(aap>inc)&&(aap>bjp))
    {
    	printf(" the winnig party is PARTY 4");
	}
	else 
	{
		printf("the votes are draw ");
	}


    return 0;
}
