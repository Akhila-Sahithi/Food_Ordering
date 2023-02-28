#include <stdio.h>
#include <conio.h>
#include <string.h>

struct food_ordering {
    char name[10];
    int quantity;
    int order_num;
    int cost;
}f[500];
int order_cnt = 0, served_cnt = 0, waiting_now = 0;

int order ()
{
    int n, input, qu;
    printf ("Please Enter your name: ");
    gets (f[order_cnt].name);
    f[order_cnt].order_num = 10001+order_cnt;
    items();
    f[order_cnt].quantity = n;
    f[order_cnt].cost = 0;
    f[order_cnt].quantity = 0;

    printf ("\n\nHow many items you want to order?\n");
    scanf ("%d", &n);
    getch ();
    while (n--){
        printf ("Enter the item code of the food name:\n");
        scanf ("%d", &input);
        getchar();

    switch(input){
    case 11 : {
        printf ("Enter the size of Manchow soup: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;

        if (i==1) f[order_cnt].cost += (80*qu);

        else f[order_cnt].cost += (150*qu);
        break;
    }
    case 12 :{
        printf ("Enter the size of Mixed vegetable soup: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;

        if (i==1) f[order_cnt].cost += (80*qu);

        else f[order_cnt].cost += (150*qu);
        break;
    }
    case 13 :{
        printf ("Enter the size of Cream of Tomato soup: 1. half  2. full \n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;

       if (i==1) f[order_cnt].cost += (95*qu);

        else f[order_cnt].cost += (190*qu);
        break;
    }
    case 14 :{
        printf ("Enter the size of Makai Shorba: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;

       if (i==1) f[order_cnt].cost += (100*qu);

        else f[order_cnt].cost += (200*qu);
        break;
    }
    case 15 :{
        printf ("Enter the size of Thick corn soup: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;

        if (i==1) f[order_cnt].cost += (95*qu);

        else f[order_cnt].cost += (190*qu);

        break;
    }
    case 16 :{
        printf ("(Veg)Manchurian\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;
        f[order_cnt].cost += (200*qu);
        break;
    }
    case 17 : {
        printf ("(Non-Veg)Chicken Manchurian");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;
        f[order_cnt].cost += (250*qu);
        break;
    }
    case 18 : {
        printf ("Spring Rolls\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;
        f[order_cnt].cost += (200*qu);
        break;
    }
    case 21 : {
        printf ("(Veg)Biryani\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;
        f[order_cnt].cost += (200*qu);
        break;
    }
    case 22 :{
        printf ("(Veg)Paneer Biryani\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;
        f[order_cnt].cost += (250*qu);
        break;
    }
    case 23 :{
        printf ("(Non-Veg)Chicken Biryani\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;
        f[order_cnt].cost += (300*qu);
        break;
    }
    case 24 :{
        printf ("(Non-Veg)Mutton Biryani\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;
        f[order_cnt].cost += (400*qu);
        break;
    }
    case 25 :{
        printf ("(Veg) Fried Rice\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;
        f[order_cnt].cost += (200*qu);
        break;
    }
    case 31 :{
        printf (" Gulab Jamun\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;
        f[order_cnt].cost += (90*qu);
        break;
    }
    case 32 :{
        printf (" Kala Jamun\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;
        f[order_cnt].cost += (90*qu);
        break;
            }
    case 33 :{
        printf (" Barfi-Kaju\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;
        f[order_cnt].cost += (150*qu);
        break;
            }
    case 41 :{
        printf ("Enter the size of Oreo Shake: 1. mini  2. regular\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;

        if (i==1) f[order_cnt].cost += (100*qu);

        else f[order_cnt].cost += (190*qu);

        break;
    }
    case 42 :{
        printf ("Enter the size of Chocolate Shake: 1. mini  2. regular\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity:\n ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;

        if (i==1) f[order_cnt].cost += (100*qu);

        else f[order_cnt].cost += (190*qu);

        break;
    }
    case 43 :{
        printf ("Enter the size of Black Current Shake: 1. mini  2. regular\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;

        if (i==1) f[order_cnt].cost += (100*qu);

        else f[order_cnt].cost += (190*qu);

        break;
    }
       case 51 :{
        printf ("Enter the size of Coke: 1. 250ml  2. 500ml\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;

        if (i==1) f[order_cnt].cost += (40*qu);

        else f[order_cnt].cost += (80*qu);

        break;
    }
    case 52 :{
        printf ("Enter the size of Sprite: 1. 250ml  2. 500ml\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        f[order_cnt].quantity +=qu;

        if (i==1) f[order_cnt].cost += (40*qu);

        else f[order_cnt].cost += (80*qu);

        break;
    }
    default : {
        printf ("Invalid selection try again please\n");
        n++;
    }
        }
    }
    int temp;
    printf ("Choose to 1 dine here / 2 take away\n");
    scanf("%d", &temp);
    if (temp == 1)
        printf ("We will prepare to dine here");
    else
        printf("We will prepare to take away");
    printf ("\nTotal quantity of food ordered: %d", f[order_cnt].quantity);
    printf ("\n-----------------------%s you have successfully placed the order.---------------------- ", f[order_cnt].name);
    printf ("\n\nYour bill is %d rupees.\nWe request your patience while we prepare your food.\n", f[order_cnt].cost);
    order_cnt ++;
}

int receive ()
{
    if (order_cnt==0){
        printf ("Kindly order first\n");
        return;
    }
    else if (served_cnt == order_cnt) {
        printf ("All orders are served\n");
        return;
    }
    printf ("Order no. %d for %s is ready\n", f[served_cnt].order_num, f[served_cnt].name);
    printf ("------\2Enjoy your meal\2------\n\n");
    printf (" ---------Thank You---------");
    served_cnt++;
}

int payment ()
{
    int pay;
    if (order_cnt==0){
        printf ("Kindly order first\n");
        return;}

    printf ("Choose a number to complete the payment. \n");
    printf ("You can pay your through\n 1 Cash\n 2 Debit/Credit card\n 3 UPI\n");
    scanf  ("%d",&pay);

    if (pay == 1){
        printf ("you have chosen cash payment");
        }
    else if (pay == 2){
        printf ("you have chosen Debit/Credit payment");
        }
    else
        printf ("you have chosen UPI payment");

    printf ("\nPayment successful");
}

int display ()
{
    printf ("Total order taken: %d\n", (order_cnt));
    printf ("Total number of order served: %d\n", served_cnt);
    printf ("Number of Currently waiting to be served: %d\n", (order_cnt-served_cnt));
    printf ("Currently preparing food for order no.: %d\n\n", f[served_cnt].order_num);
    printf ("------\2Thank You\2------\n");
    system ("color 2");
}

void items ()
{
    printf("..............MENU......................MENU.......................MENU...........................\n\n");
    printf("Item Code-----Food Name ------------------------Size-------------------------Price in rupees\n");

    printf("-------Soups and Starters-----\n");
    printf("[11]---------Manchow Soup-----------------------half/full--------------------80/150\n");
    printf("[12]---------Mixed vegetable soup---------------half/full--------------------80/150\n");
    printf("[13]---------Cream of Tomato soup---------------half/full--------------------95/190\n");
    printf("[14]---------Makai Shorba-----------------------half/full--------------------100/200\n");
    printf("[15]---------Thick corn soup--------------------half/full--------------------95/190\n");
    printf("[16]---------(Veg)Manchurian-------------------------------------------------200\n");
    printf("[17]---------(Non-Veg)Chicken Manchurian-------------------------------------250\n");
    printf("[18]---------(Veg)Spring Rolls-----------------------------------------------200\n");

    printf("-------Main Course------------\n");
    printf("[21]--------(Veg)Biriyani----------------------------------------------------200\n�");
    printf("[22]--------(Veg)Paneer Biryani---------------------------------------------250\n�");
    printf("[23]--------(Non-Veg)Chicken Biryani----------------------------------------300\n");
    printf("[24]--------(Non-Veg)Mutton Biryani------------------------------------------400\n");
    printf("[25]--------(Veg)Fried Rice--------------------------------------------------200\n");

    printf("-------Desserts---------------\n");
    printf("[31]---------Gulab Jamun-----------------------------------------------------90\n");
    printf("[32]---------Kala Jamun------------------------------------------------------90\n");
    printf("[33]---------Barfi-kaju------------------------------------------------------150\n");

    printf("-------Milkshakes-------------\n");
    printf("[41]---------Oreo Shake-------------------------mini/regular-----------------100/190\n");
    printf("[42]---------Chocolate Shake--------------------mini/regular-----------------100/190\n");
    printf("[43]---------Black Current Shake----------------mini/regular-----------------100/190\n");

    printf("-------Beverages--------------\n");
    printf("[51]---------Coke-------------------------------250ml/500ml------------------40/80\n");
    printf("[52]---------Sprite-----------------------------250ml/500ml------------------40/80\n");
}

int main ()
{
    printf ("         Welcome To Programmed Menu           \n\n");
    printf("Choose a number to start");
    while (1){
        printf ("\n 1 Order\n 2 Payment\n 3 Serve\n 4 Display\n 5 Exit\n");
        int input;
        scanf ("%d", &input);
        getchar ();
    switch (input){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                payment();
                break;
            }
            case 3 : {
                receive();
                break;
            }
            case 4 : {
                display();
                break;
            }
            case 5 : {
                system ("COLOR 3");
                printf ("....\2 Thank you Visit again \2....\n\n");
            return 0;
            }
        }
    }
}




