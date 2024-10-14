#include <stdio.h>

int main() {
    printf("________________________________________________________________\n");
    printf(" \n");
    printf("Welcome to Careera Jobs!!\n");
    printf("________________________________________________________________\n");
    printf("We strive to help you find jobs that are befitting of your skillset!\n");
    printf("Grow with us as the enterprises flourish!!\n");
    printf("________________________________________________________________\n");
    printf("The following jobs are available\n");
    printf("\tData Scientist\n");
    printf("\tMachine Learning Intern\n");
    printf("\tFrontend Engineer\n");
    printf("\tCyber Security Expert\n");
    printf("\tUX Designer\n");
    printf("\tGraphic Design\n");
    printf("________________________________________________________________\n");
    printf("\tTo filter jobs; \n");
    printf("\n");
    printf("\tR-Remote Jobs \n\tF-Full Time Jobs\n");
    char a;
    printf("\tPlease enter your choice\n");
    scanf("%c", &a);
    if (a == 'R' || a == 'r') {
        printf("Available part-time jobs are;\n");
        printf("\n");
        printf("⦿Machine Learning Intern\n");
        printf("\n");
        printf("⦿UX Designer Intern\n ");
        printf("\n");
        printf("⦿Graphic Design Intern\n ");
    } else if (a == 'F' || a == 'f') {
        printf("Available full-time jobs are;\n");
        printf("\n");
        printf("⦿Data Scientist\n");
        printf("\n");
        printf("⦿Frontend Engineer\n ");
        printf("\n");
        printf("⦿Cyber Security Expert\n");
    } else {
        printf("\tinvalid entry\n");
        printf("\tPlease enter correct choice\n");
        scanf(" %c", &a);
        if (a == 'R' || a == 'r') {
            printf("Available part-time jobs are;\n");
            printf("⦿Machine Learning Intern\n");
            printf("\n");
            printf("⦿UX Designer Intern\n ");
            printf("\n");
            printf("⦿Graphic Design Intern\n ");
        } else if (a == 'F' || a == 'f') {
            printf("Available full-time jobs are;\n");
            printf("⦿Data Scientist\n");
            printf("\n");
            printf("⦿Frontend Engineer\n ");
            printf("\n");
            printf("⦿Cyber Security Expert\n");
        }
    }
    printf("________________________________________________________________\n");
    printf("________________________________________________________________\n");
    printf("To select a particular job \n");
    printf("Press 1 : for Data Scientist\n");
    printf("Press 2 : for Machine Learning Intern\n");
    printf("Press 3 : for Frontend Engineer\n");
    printf("Press 4 : for Cyber Security Expert\n");
    printf("Press 5 : for UX Designer Intern\n");
    printf("Press 6 : for Graphic Design Intern\n");
    printf("Press 7 : to exit the choices!\n");
    printf("________________________________________________________________\n");
    printf("________________________________________________________________\n");
    int pj;
    printf("Enter your choice:\n");
    scanf("%d", &pj);
    if (pj == 1) {
        printf("\tDetails for Data Scientist opening is as follows:\n");
        printf("\tLocation:Chennai,India \n");
        printf("\tSalary:₹12,00,000/year \n");
        printf("\tTo apply; please send your resume at careerajobs@gmail.com\n");
        printf("________________________________________________________________\n");
    } else if (pj == 2) {
        printf("\tDetails for Machine Learning Intern opening is as follows:\n");
        printf("\tLocation:Remote \n");
        printf("\tSalary:₹20,000/month \n");
        printf("\tTo apply; please send your resume at careerajobs@gmail.com\n");
        printf("________________________________________________________________\n");
    } else if (pj == 3) {
        printf("\tDetails for Frontend Engineer opening is as follows:\n");
        printf("\tLocation:Bengaluru,India \n");
        printf("\tSalary:₹10,00,000/year \n");
        printf("\tTo apply; please send your resume at careerajobs@gmail.com\n");
        printf("________________________________________________________________\n");
    } else if (pj == 4) {
        printf("\tDetails for Cyber Security Expert opening is as follows:\n");
        printf("\tLocation:Chennai,India \n");
        printf("\tSalary:₹13,00,000/year \n");
        printf("\tTo apply; please send your resume at careerajobs@gmail.com\n");
        printf("________________________________________________________________\n");
    } else if (pj == 5) {
        printf("\tDetails for UX Designer Intern opening is as follows:\n");
        printf("\tLocation:Remote \n");
        printf("\tSalary:₹15,000/month \n");
        printf("\tTo apply; please send your resume at careerajobs@gmail.com\n");
        printf("________________________________________________________________\n");
    } else if (pj == 6) {
        printf("\tDetails for Graphic Design Intern opening is as follows:\n");
        printf("\tLocation:Remote \n");
        printf("\tSalary:₹10,000/month \n");
        printf("\tTo apply; please send your resume at careerajobs@gmail.com\n");
        printf("________________________________________________________________\n");
    } else{
        printf("Invalid choice\n");
    }
    int i;
    for (i = 1; i <= 10; i++) {
        printf("To know the details of any other jobs please enter the number below: \n");
        printf("Enter your choice:\n");
        scanf("%d", &pj);
        switch(pj){
        case 1:
            printf("\tDetails for Data Scientist opening is as follows:\n");
            printf("\tLocation:Chennai,India \n");
            printf("\tSalary:₹12,00,000/year \n");
            printf("\tTo apply; please send your resume at careerajobs@gmail.com\n");
            printf("________________________________________________________________\n");
            break;
       case 2:
            printf("\tDetails for Machine Learning Intern opening is as follows:\n");
            printf("\tLocation:Remote \n");
            printf("\tSalary:₹20,000/month \n");
            printf("\tTo apply; please send your resume at careerajobs@gmail.com\n");
            printf("________________________________________________________________\n");
            break;
       case 3:
            printf("\tDetails for Frontend Engineer opening is as follows:\n");
            printf("\tLocation:Bengaluru,India \n");
            printf("\tSalary:₹10,00,000/year \n");
            printf("\tTo apply; please send your resume at careerajobs@gmail.com\n");
            printf("________________________________________________________________\n");
            break;
        case 4:
            printf("\tDetails for Cyber Security Expert opening is as follows:\n");
            printf("\tLocation:Chennai,India \n");
            printf("\tSalary:₹13,00,000/year \n");
            printf("\tTo apply; please send your resume at careerajobs@gmail.com\n");
            printf("________________________________________________________________\n");
            break;
        case 5:
            printf("\tDetails for UX Designer Intern opening is as follows:\n");
            printf("\tLocation:Remote \n");
            printf("\tSalary:₹15,000/month \n");
            printf("\tTo apply; please send your resume at careerajobs@gmail.com\n");
            printf("________________________________________________________________\n");
            break;
        case 6:
            printf("\tDetails for Graphic Design Intern opening is as follows:\n");
            printf("\tLocation:Remote \n");
            printf("\tSalary:₹10,000/month \n");
            printf("\tTo apply; please send your resume at careerajobs@gmail.com\n");
            printf("________________________________________________________________\n");
            break;
        case 7:
            printf("\tYour choices are up!\n");
            break;
        default:
            printf("Please enter a valid option\n");}
        if (pj==7){
            break;
        }
        
    }
    printf("\t\tYou have reached the end!\n\t\tThank you for visiting us!!");

    return 0;
}






