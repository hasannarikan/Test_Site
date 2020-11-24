#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int userId, password, userNum, a, numbers,b;
	double  check, add, remove, transfer;
	password = 123;
	userId = 190301002;
	int userNumbers[5] = { 19301001, 190301000, 190301003};
	int MacWork = 1;
	check = 200;

	for (int i = 0; i < 4; i += 1)
	{
		printf("User Id: ");
		scanf_s("%d", &a);
		if (userId == a)
		{
			printf("\nPassword: ");
			scanf_s("%d", &b);
			if (password == b)
			{
				while (MacWork == 1)
				{
					printf("\nWelcome to the main page.\n");
					printf("\nPlease select one of the actions.\n");
					printf("\n 1:Chech your money.\n 2:Deposit some money to your account.\n 3:Withdraw some money.\n 4:Transfer some money to another account.\n 5:Exit\n\n Action Number: ");
					scanf_s("%d", &numbers);
					if (numbers == 1)
					{
						printf("\nYou have %lf dolars in your account.\n", check);
					}
					else if (numbers == 2)
					{
						printf("\nHow much money, do you want to deposit? : ");
						scanf_s("%lf", &add);
						check = check + add;
						printf("\nNow you have %lf dolars in your account.\n", check);
					}
					else if (numbers == 3)
					{
						printf("\nHow much money, do you want to withdraw? : ");
						scanf_s("%lf", &remove);
						if (remove > check)
						{
							printf("\nYou can not withdraw that much money.\nYou only have %lf dolars.\n", check);
						}
						else
						{
							check = check - remove;
							printf("\nNow you have %lf dolars in your account.\n", check);
						}
					}
					else if (numbers == 4)
					{

						printf("Please enter a UserID to transfer money: ");
						scanf_s("%d", &userNum);
						bool c = false;
						for (int i = 0; i < 10; i++)
						{
							if (userNum == userNumbers[i])
							{
								c = true;
							}
						}
						
						if (c == true)
						{
							printf("\nHow much money, do you want to transfer? : ");
							scanf_s("%lf", &transfer);
							if (transfer > check)
							{
								printf("\nYou can not transfer that much money.\nYou only have %lf dolars.\n", check);
							}
							else
							{
								check = check - transfer;
								printf("\nTransfer Complited\n");
								printf("\nNow you have %lf dolars in your account.\n", check);
							}
						}
						else
						{
							printf("\n Invalid UserId. \n We are sending you to the main page.\n \n");
						}
					}
					else if (numbers == 5)
					{
						MacWork = 0;
						i = 5;
					}
					else
					{
						printf("\nPlease enter a valid number.\n");
					}

				}
			}
			else
			{
				printf("Password is incorrect.");
			}
		}
		else
		{
			printf("Invalid UserId.");
		}
		printf("\nPlease try again.\n");
	}
	system("PAUSE");
	return 0;
	
}
