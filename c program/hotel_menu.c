#include<stdio.h>
#include<conio.h>

void thank_you();
void main_course();
void dessert();

void dessert(){
    printf("\nYour now in our Dessert\n");
}
void main_course(){
    printf("\nYour now in our Main Course\n");
}
void thank_you(){
    printf("\n\nThank You\nPlease visit again\n");
}

int main()
{
    int quentity,type,menu,ordder,kahan_type,end;
    char name[50];
    printf("WELLCOME TO OUR RESTAURANT\nPlease Enter Your first name\n");
    scanf("%s",&name);

for(int menu=1; ;menu++){
    printf("\n\nHello %s\nwhat would like to order\n",name);
    printf("Press for\nstarter = 1\nmain course = 2\ndessert = 3\nEnd = 8\n",name);
    scanf("%d",&menu);

    if(menu==8){
        break;
    }

    switch (menu)
    {
    case 1: printf("Your now in our Starter Page\nfor Veg. press 1\nfor Non Veg. press 2\n");
            scanf("%d",&type);
                if(type==1)
                {
                    printf("1. Paneer tikka: 150₹\n2.Chilli Paneer: 150₹\n3.Paneer Cutlet: 150₹\n4.Paneer Pakoda: 150₹\n5.Paneer Sandwich: 150₹\n");
                    printf("\nWhat would you like to ordder(make sure that your entering item serial number):\n");
                    scanf("%d",&ordder);
                        switch (ordder)
                        {
                        case 1: printf("'Paneer Tikka: 150₹'\nplease enter quentity\n\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'Paneer Tikka: 150₹'\nin %d Quentity",quentity);
                            break;
                        case 2: printf("'Chilli Paneer: 150₹'\nplease enter quentity\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'Chilli Paneer: 150₹'\nin %d Quentity",quentity);
                            break;
                        case 3: printf("'Paneer Cutlet: 150₹'\nplease enter quentity\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'Paneer Cutlet: 150₹'\nin %d Quentity",quentity);
                            break;
                        case 4: printf("'Paneer Pakoda: 150₹'\nplease enter quentity\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'Paneer Pakoda: 150₹'\nin %d Quentity",quentity);
                                break;
                        case 5: printf("'Paneer Sandwich: 150₹'\nplease enter quentity\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'Paneer Sandwich: 150₹'\nin %d Quentity",quentity);
                            break;
                        default: printf("Wrrong Number\n");
                                break;
                        }
                }
                else if(type == 2){
                    printf("1.Chicken Angara Kabab: 200₹\n2.Spicy Garlic Wings: 200₹\n3.Nando's Peri Peri Chicken Recipe: 200₹\n4.Prawn Ghee Roast: 200₹\n5.Prawn Ghee Roast: 200₹Prawn Ghee Roast: 200₹Prawn Ghee Roast: 200₹\n");
                    printf("\nWhat would you like to ordder\n");
                    scanf("%d",&ordder);
                    switch (ordder)
                        {
                        case 1: printf("'Chicken Angara Kabab: 200₹'\nplease enter quentity\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'Chicken Angara Kabab: 200₹'\nin %d Quentity",quentity);
                            break;
                        case 2: printf("'Spicy Garlic Wings: 200₹'\nplease enter quentity\n");
                            scanf("%d",&quentity);
                                printf("Your order has been placed\n'Spicy Garlic Wings: 200₹'\nin %d Quentity",quentity);
                            break;
                            case 3: printf("'Nando's Peri Peri Chicken Recipe: 200₹'\nplease enter quentity\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'Nando's Peri Peri Chicken Recipe: 200₹'\nin %d Quentity",quentity);
                            break;
                        case 4: printf("'Prawn Ghee Roast: 200₹'\nplease enter quentity\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'Prawn Ghee Roast: 200₹'\nin %d Quentity",quentity);
                            break;
                        case 5: printf("'Prawn Ghee Roast: 200₹'\nplease enter quentity\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'Prawn Ghee Roast: 200₹'\nin %d Quentity",quentity);
                            break;
                        default: printf("Wrrong Number\n");
                            break;
                        }
                }
        break;
    case 2 : main_course();
                    printf("Press 1 for daal\nPress 2 for non veg Sabji\nPress 0 for Roti\n");
                    scanf("%d",&kahan_type);
                        if(kahan_type==1)
                        {
                            printf("1.Daal Makhni: 200₹\n2.Daal Tadhka: 200₹\n3.Shahi Paneer: 250₹\n4.Sev Sabji: mat kha pet kharab ho jayega\n5.Kadhai Paneer: 350₹\n");
                            scanf("%d",&ordder);
                            switch (ordder)
                            {
                                case 4: printf("BOLA NA PET Kharab ho jayega\nja nahi milega\n");
                                    break;
                                case 1: printf("'Daal Makhni: 200₹'\nPlease enter quentity\n");
                                        scanf("%d",&quentity);
                                        printf("Your order has been placed\n'Daal Makhni: 200₹' %d",quentity);
                                    break;
                                case 2: printf("'Daal Tadhka: 200₹'\nPlease enter quentity\n");
                                        scanf("%d",&quentity);
                                        printf("Your order has been placed\n'Daal Tadhka: 200₹' %d",quentity);
                                    break;
                                case 3: printf("'Shahi Paneer: 250₹'\nPlease enter quentity\n");
                                        scanf("%d",&quentity);
                                        printf("Your order has been placed\n'Shahi Paneer: 250₹' %d",quentity);
                                    break;
                                case 5: printf("'Kadhai Paneer: 350₹'\nPlease enter quentity\n");
                                        scanf("%d",&quentity);
                                        printf("Your order has been placed\n'Kadhai Paneer: 350₹' %d",quentity);
                                    break;
                                default: printf("Wrrong Number\n");
                                break;
                            }
                        }
                        else if(kahan_type==2){
                            printf("sorry hamare yaha bas veg hi milta hai\nkya matlb devloper ko aalas aa raha tha iss liye non veg nahi diya\n");
                        }
                        else if(kahan_type==0){
                            printf("1.Plan Roti: 200₹\n2.Butter Roti: 200₹\n3.Naan: 200₹\n4.Garlic Naan: 200₹\n");
                            scanf("%d",&ordder);
                            switch (ordder){
                                case 1: printf("'Plan Roti: 200₹'\nplease enter quentity\n");
                                        scanf("%d",&quentity);
                                        printf("Your order has been placed\n'Plan Roti: 200₹'\nin %d Quentity",quentity);
                                    break;
                                case 2: printf("'Butter Roti: 200₹'\nplease enter quentity\n");
                                        scanf("%d",&quentity);
                                        printf("Your order has been placed\n'Butter Roti: 200₹'\nin %d Quentity",quentity);
                                    break;
                                case 3: printf("'Naan: 200₹'\nplease enter quentity\n");
                                        scanf("%d",&quentity);
                                        printf("Your order has been placed\n'Naan: 200₹'\nin %d Quentity",quentity);
                                    break;
                                case 4: printf("'Garlic Naan: 2000₹'\nplease enter quentity\n");
                                        scanf("%d",&quentity);
                                        printf("Your order has been placed\n'Garlic Naan: 2000₹'\nin %d Quentity",quentity);
                                    break;
                                default: printf("Wrrong Number\n");
                                break;
                            }
                        }
                        else{
                            printf("WRRONG NUMBER\n%d",kahan_type);
                        }
        break;
    case 3: dessert();
            printf("1.choco bar ice cream: 15₹\n2.Cakes: 150₹\n3.Custards: 150₹\n4.Brownies: 150₹\n5.Muffins.150\n");
                    printf("\nWhat would you like to ordder(make sure that your entering item serial number):\n");
                    scanf("%d",&ordder);
                    switch (ordder)
                        {
                        case 1: printf("'choco bar ice cream: 15₹'\nplease enter quentity\n\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'choco bar ice cream: 15₹'\nin %d Quentity",quentity);
                            break;
                        case 2: printf("'Cakes: 150₹'\nplease enter quentity\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'Cakes: 150₹'\nin %d Quentity",quentity);
                            break;
                        case 3: printf("'Custards: 150₹'\nplease enter quentity\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'Custards: 150₹'\nin %d Quentity",quentity);
                            break;
                        case 4: printf("'Brownies: 150₹'\nplease enter quentity\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'Brownies: 150₹'\nin %d Quentity",quentity);
                            break;
                        case 5: printf("'5.Muffins.150'\nplease enter quentity\n");
                                scanf("%d",&quentity);
                                printf("Your order has been placed\n'5.Muffins.150₹'\nin %d Quentity",quentity);
                            break;
                        default: printf("Wrrong Number\n");
                            break;
                        }
        break;
    default : printf("Wrong Number\ntry again\n");
        break;
    }
    
}
    thank_you();
    getch();
    return 0;
}