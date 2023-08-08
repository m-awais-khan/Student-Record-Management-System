#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int roll[10] = { 0 }, Class[10] = { 0 };
	float midmarks[10] = { 0 }, finalmarks[10] = { 0 }, per;
	char grade[10];
	srand(time(0));
	for (int i = 0; i <= 4; i++)	//This loop assigns random values to arrays.
	{
		roll[i] = rand() % (9000) + 1000;
		midmarks[i] = float(rand() % 31);
		finalmarks[i] = float(rand() % 51);
		Class[i] = rand() % (12) + 1;
	}
	for (int i = 0; i <= 4; i++)	//This loop assigns grade.
	{
		per = 0;
		per = finalmarks[i] / 50 * 100;
		if (per < 50)
		{
			grade[i] = 'F';
		}
		else if (per >= 50 && per <= 60)
		{
			grade[i] = 'D';
		}
		else if (per > 60 && per <= 73)
		{
			grade[i] = 'C';
		}
		else if (per > 73 && per <= 86)
		{
			grade[i] = 'B';
		}
		else if (per > 86 && per <= 100)
		{
			grade[i] = 'A';
		}
	}
	system("COLOR BD");
	const char k[7] = { "*MENU*" };
	cout << "\t \t \t \t \t";
	for (int i = 1; i <= 20; i++)
	{
		cout << "*";
		_sleep(100);
	}
	cout << endl;
	cout << "\t \t \t \t \t \t";
	for (int i = 0; i <= 5; i++)
	{
		cout << k[i];
		_sleep(300);
	}
	cout << endl;
	cout << "\t \t \t \t \t";
	cout << "Record of Students." << endl;
	cout << "\t \t \t \t \t";
	for (int i = 1; i <= 20; i++)
	{
		cout << "*";
		_sleep(100);
	}
	cout << endl;
	cout << "=============----=================-------===============---------======----------======" << endl;		//This is Data Sample.
	cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
	cout << "=============----=================-------===============---------======----------======" << endl;
	for (int i = 0; i <= 4; i++)
	{
		cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
	}
	cout << "=============----=================-------===============---------======----------======" << endl << endl;
	int i = 0, check = 5, v = 25;
	bool a, d, x, z;
	do
	{
		cout << "Please select the option from the following." << endl;
		cout << "****************************************************************************************************" << endl;
		cout << "* Press (1)      To Sort and display all the records roll number wise in ascending  order.         *" << endl;	//This is the menue.
		cout << "* Press (2)      To Sort and display all the records roll number wise in descending order.         *" << endl;
		cout << "* Press (3)      To Sort and display all records in ascending order based on marks in Midterm.     *" << endl;
		cout << "* Press (4)      To Sort and display all records in descending order based on marks in Midterm.    *" << endl;
		cout << "* Press (5)      To Sort and display all records in ascending order based on marks in Final.       *" << endl;
		cout << "* Press (6)      To Sort and display all records in descending order based on marks in Final.      *" << endl;
		cout << "* Press (7)      To Sort and display all records in ascending order based on Grade.                *" << endl;
		cout << "* Press (8)      To Sort and display all records in descending order based on Grade.               *" << endl;
		cout << "* Press (9)      To Add a new entry of a student.                                                  *" << endl;
		cout << "* Press (10)     To Delete a student record based on his roll number.                              *" << endl;
		cout << "* Press (11)     To Display record of all the students greater than X marks in final exam          *" << endl;
		cout << "*                (in descending order with respect to marks obtained in final exam)                *" << endl;
		cout << "* Press (12)     To Display record of all the students greater than X marks in final exam          *" << endl;
		cout << "*                (in ascending order with respect to marks obtained in final exam)                 *" << endl;
		cout << "* Press (13)     To Display record of all the students less than or equal to X marks in final exam *" << endl;
		cout << "*                (in descending order with respect to marks obtained in final exam)                *" << endl;
		cout << "* Press (14)     To Display record of all the students less than or equal to X marks in final exam *" << endl;
		cout << "*                (in ascending order with respect to marks obtained in final exam)                 *" << endl;
		cout << "* Press (15)     To Display record of all the students greater than X grade                        *" << endl;
		cout << "*                (in descending order with respect to grade).                                      *" << endl;
		cout << "* Press (16)     To Display record of all the students greater than X grade                        *" << endl;
		cout << "*                (in ascending order with respect to grade).                                       *" << endl;
		cout << "* Press (17)     To Display record of all the students less than or equal to X grade               *" << endl;
		cout << "*                (in descending order with respect to grade).                                      *" << endl;
		cout << "* Press (18)     To Display record of all the students less than or equal to X grade               *" << endl;
		cout << "*                (in ascending order with respect to grade).                                       *" << endl;
		cout << "* Press (e or E) To exit the Program.                                                              *" << endl;
		cout << "****************************************************************************************************" << endl << endl;
		int temp = 0, comt = 0;
		float temp1 = 0.0;
		char temp2 = {}, n[10]{};
		cout << "Which option you want to select?      ";
		do
		{
			for (int i = 0; i < 1;)
			{
				cin >> n;
				if ((n[0] >= '1' && n[0] <= '9' && n[1] == '\0') || (n[0] == 'e' || n[0] == 'E'))
				{
					z = false;
					break;
				}
				else if (n[0] == '1' && n[1] >= '0' && n[1] <= '8' && n[2] == '\0')
				{
					z = false;
					break;
				}
				else
				{
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					cout << "Please input valid data." << endl;
					cout << "Please select the options from the above mentioned.         ";
					for (int i = 0; i <= 9; i++)
					{
						n[i] = '\0';
					}
					z = true;
				}
			}
		} while (z);
		cout << endl;
		for (int i = 0; i <= 1; i++)
		{
			if (n[i] != '\0')
			{
				comt++;
			}
		}
		if (comt == 1)
		{
			comt = 0;
			if (n[0] == '1')
			{
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				cout << "The sorted records roll number wise in ascending  order. " << endl;
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				for (int i = 0; i <= check - 2; i++)
				{
					for (int j = i + 1; j <= check - 1; j++)
					{
						if (roll[i] > roll[j])
						{
							temp = roll[i];
							roll[i] = roll[j];
							roll[j] = temp;

							temp1 = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = temp1;

							temp1 = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = temp1;

							temp = Class[i];
							Class[i] = Class[j];
							Class[j] = temp;

							temp2 = grade[i];
							grade[i] = grade[j];
							grade[j] = temp2;
						}
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl;
				cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
				cout << "=============----=================-------===============---------======----------======" << endl;
				for (int i = 0; i <= 9; i++)
				{
					if (roll[i] != 0)
					{
						cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl << endl;
			}
			else if (n[0] == '2')
			{
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				cout << "The sorted records roll number wise in descending order. " << endl;
				cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
				for (int i = 0; i <= check - 2; i++)
				{
					for (int j = i + 1; j <= check - 1; j++)
					{
						if (roll[i] < roll[j])
						{
							temp = roll[i];
							roll[i] = roll[j];
							roll[j] = temp;

							temp1 = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = temp1;

							temp1 = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = temp1;

							temp = Class[i];
							Class[i] = Class[j];
							Class[j] = temp;

							temp2 = grade[i];
							grade[i] = grade[j];
							grade[j] = temp2;
						}
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl;
				cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
				cout << "=============----=================-------===============---------======----------======" << endl;
				for (int i = 0; i <= 9; i++)
				{
					if (roll[i] != 0)
					{
						cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl << endl;
			}
			else if (n[0] == '3')
			{
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				cout << "The sorted records in ascending order based on marks in Midterm. " << endl;
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				for (int i = 0; i <= check - 2; i++)
				{
					for (int j = i + 1; j <= check - 1; j++)
					{
						if (midmarks[i] > midmarks[j])
						{
							temp = roll[i];
							roll[i] = roll[j];
							roll[j] = temp;

							temp1 = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = temp1;

							temp1 = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = temp1;

							temp = Class[i];
							Class[i] = Class[j];
							Class[j] = temp;

							temp2 = grade[i];
							grade[i] = grade[j];
							grade[j] = temp2;
						}
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl;
				cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
				cout << "=============----=================-------===============---------======----------======" << endl;
				for (int i = 0; i <= 9; i++)
				{
					if (roll[i] != 0)
					{
						cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl << endl;
			}
			else if (n[0] == '4')
			{
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				cout << "The sorted records in descending order based on marks in Midterm. " << endl;
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				for (int i = 0; i <= check - 2; i++)
				{
					for (int j = i + 1; j <= check - 1; j++)
					{
						if (midmarks[i] < midmarks[j])
						{
							temp = roll[i];
							roll[i] = roll[j];
							roll[j] = temp;

							temp1 = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = temp1;

							temp1 = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = temp1;

							temp = Class[i];
							Class[i] = Class[j];
							Class[j] = temp;

							temp2 = grade[i];
							grade[i] = grade[j];
							grade[j] = temp2;
						}
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl;
				cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
				cout << "=============----=================-------===============---------======----------======" << endl;
				for (int i = 0; i <= 9; i++)
				{
					if (roll[i] != 0)
					{
						cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl << endl;
			}
			else if (n[0] == '5')
			{
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				cout << "The sorted records in ascending order based on marks in Final. " << endl;
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				for (int i = 0; i <= check - 2; i++)
				{
					for (int j = i + 1; j <= check - 1; j++)
					{
						if (finalmarks[i] > finalmarks[j])
						{
							temp = roll[i];
							roll[i] = roll[j];
							roll[j] = temp;

							temp1 = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = temp1;

							temp1 = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = temp1;

							temp = Class[i];
							Class[i] = Class[j];
							Class[j] = temp;

							temp2 = grade[i];
							grade[i] = grade[j];
							grade[j] = temp2;
						}
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl;
				cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
				cout << "=============----=================-------===============---------======----------======" << endl;
				for (int i = 0; i <= 9; i++)
				{
					if (roll[i] != 0)
					{
						cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl << endl;
			}
			else if (n[0] == '6')
			{
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				cout << "The sorted records in descending order based on marks in Final. " << endl;
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				for (int i = 0; i <= check - 2; i++)
				{
					for (int j = i + 1; j <= check - 1; j++)
					{
						if (finalmarks[i] < finalmarks[j])
						{
							temp = roll[i];
							roll[i] = roll[j];
							roll[j] = temp;

							temp1 = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = temp1;

							temp1 = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = temp1;

							temp = Class[i];
							Class[i] = Class[j];
							Class[j] = temp;

							temp2 = grade[i];
							grade[i] = grade[j];
							grade[j] = temp2;
						}
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl;
				cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
				cout << "=============----=================-------===============---------======----------======" << endl;
				for (int i = 0; i <= 9; i++)
				{
					if (roll[i] != 0)
					{
						cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl << endl;
			}
			else if (n[0] == '7')
			{
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				cout << "The sorted records in ascending order based on Grade. " << endl;
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				for (int i = 0; i <= check - 2; i++)
				{
					for (int j = i + 1; j <= check - 1; j++)
					{
						if (grade[i] < grade[j])
						{
							temp = roll[i];
							roll[i] = roll[j];
							roll[j] = temp;

							temp1 = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = temp1;

							temp1 = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = temp1;

							temp = Class[i];
							Class[i] = Class[j];
							Class[j] = temp;

							temp2 = grade[i];
							grade[i] = grade[j];
							grade[j] = temp2;
						}
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl;
				cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
				cout << "=============----=================-------===============---------======----------======" << endl;
				for (int i = 0; i <= 9; i++)
				{
					if (roll[i] != 0)
					{
						cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl << endl;
			}
			else if (n[0] == '8')
			{
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				cout << "The sorted records in descending order based on Grade. " << endl;
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				for (int i = 0; i <= check - 2; i++)
				{
					for (int j = i + 1; j <= check - 1; j++)
					{
						if (grade[i] > grade[j])
						{
							temp = roll[i];
							roll[i] = roll[j];
							roll[j] = temp;

							temp1 = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = temp1;

							temp1 = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = temp1;

							temp = Class[i];
							Class[i] = Class[j];
							Class[j] = temp;

							temp2 = grade[i];
							grade[i] = grade[j];
							grade[j] = temp2;
						}
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl;
				cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
				cout << "=============----=================-------===============---------======----------======" << endl;
				for (int i = 0; i <= 9; i++)
				{
					if (roll[i] != 0)
					{
						cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
					}
				}
				cout << "=============----=================-------===============---------======----------======" << endl << endl;
			}
			else if (n[0] == '9')
			{
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				cout << "Add a new entry of a student. " << endl;
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				int r, count = 0, count1 = 0, s = 0, entries = 0, i = check;
				char b;
				for (int i = check; i <= 9;)
				{
					entries = 10 - check;
					cout << "\t     *****" << endl;
					cout << "You have total " << entries << " entries left." << endl;
					cout << "\t     *****" << endl;
					cout << "Please enter the roll number of student(4 digit no.): ";
					cin >> r;
					if (r >= 1000 && r <= 9999)
					{
						for (int j = 0; j <= 9; j++)
						{
							if (r == roll[j])
							{
								count++;
								break;
							}
						}
						if (count == 1)
						{
							count = 0;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "This roll number already exist." << endl;
							cout << "Please again enter roll number." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
						else if (count == 0)
						{
							roll[i] = r;
							count1++;
							check++;
							v += 5;
							i = check;
						}
					}
					else
					{
						cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						cout << "Make sure you enter integer from to 1000 to 9999" << endl;
						cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					}

					if (count1 == 1)
					{
						float tempmarks, k = 0;
						int e = i - 1;
						do
						{
							cout << "Please enter med-term marks of student(max 30): ";
							cin >> tempmarks;
							if (tempmarks >= 0 && tempmarks <= 30)
							{
								midmarks[e] = tempmarks;
								k++;
							}
							else
							{
								cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
								cout << "Please enter marks between 0 to 30." << endl;
								cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							}
						} while (k < 1);
						int l = 0;
						do
						{
							cout << "Please enter final marks of student(max 50): ";
							cin >> tempmarks;
							if (tempmarks >= 0 && tempmarks <= 50)
							{
								finalmarks[e] = tempmarks;
								l++;
							}
							else
							{
								cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
								cout << "Please enter marks between 0 to 50." << endl;
								cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							}
						} while (l < 1);
						int m = 0, tempclass;
						do
						{
							cout << "Please enter the class of student(max 12): ";
							cin >> tempclass;
							if (tempclass >= 1 && tempclass <= 12)
							{
								Class[e] = tempclass;
								m++;
							}
							else
							{
								cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
								cout << "Please enter class between 1 to 12." << endl;
								cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							}
						} while (m < 1);
						float per = 0;
						per = finalmarks[e] / 50 * 100;
						if (per < 50)
						{
							grade[e] = 'F';
						}
						else if (per >= 50 && per <= 59)
						{
							grade[e] = 'D';
						}
						else if (per >= 60 && per <= 72)
						{
							grade[e] = 'C';
						}
						else if (per >= 73 && per <= 85)
						{
							grade[e] = 'B';
						}
						else if (per >= 86 && per <= 100)
						{
							grade[e] = 'A';
						}
						cout << "*******" << endl;
						cout << "*Done.*" << endl;
						cout << "*******" << endl;
						cout << "Do you want to enter record of student again.      ";
					}
					if (count1 == 1)
					{
						count1 = 0;

						do
						{
							d = false;
							cout << "Press y(for yes) and n(for no) : ";
							cin >> b;
							if (b == 'y' || b == 'Y')
							{
								break;
							}
							else if (b == 'n' || b == 'N')
							{
								s++;
								cout << "OK!" << endl;
								break;
							}
							else
							{
								cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
								cout << "Please input valid data." << endl;
								cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
								d = true;
							}
						} while (d);
					}
					if (s == 1)
					{
						s = 0;
						break;
					}
					else if (s == 0)
					{
						continue;
					}
				}

				if (check == 10)
				{
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					cout << "The array is full you have to delete entry first." << endl;
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				}
			}
			else if (n[0] == 'e' || n[0] == 'E')
			{
				cout << "OK!" << endl;
				break;
			}
		}
		else if (comt == 2)
		{
			comt = 0;
			if (n[0] == '1' && n[1] == '0')
			{
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				cout << "Delete a student record based on his roll number. " << endl;
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				int rd, cont = 0, index = 0, cont1 = 0, tamp = 0;
				float tamp1 = 0.0;
				char tamp2 = {}, g;
				do
				{
					if (check == 0)
					{
						cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						cout << "The array is empty please add the record first." << endl;
						cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						break;
					}
					cout << "Please enter the roll number from the given options." << endl;
					for (int i = 1; i <= v; i++)
					{
						cout << "-";
					}
					cout << endl;
					for (int f = 0; f <= 9; f++)
					{
						if (roll[f] != 0)
						{
							cout << roll[f] << " ";
						}
					}
					cout << endl;
					for (int i = 1; i <= v; i++)
					{
						cout << "-";
					}
					cout << endl;
					cin >> rd;
					if (rd >= 1000 && rd <= 9999)
					{
						for (int u = 0; u <= 9; u++)
						{
							if (rd == roll[u])
							{
								cont++;
								index = u;
								break;
							}
							else
							{
								continue;
							}
						}
						if (cont == 0)
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Your entered roll number is not available." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
						else if (cont == 1)
						{
							cont = 0;
							cont1++;
							check--;
							v -= 5;

							roll[index] = 0;
							midmarks[index] = 0;
							finalmarks[index] = 0;
							Class[index] = 0;
							grade[index] = 0;
						}
					}
					else
					{
						cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						cout << "Make sure you enter 4 digit integer from the following: " << endl;
						cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					}
					if (cont1 == 1)
					{
						for (int i = index; i <= 8; i++)
						{
								tamp = roll[i];
								roll[i] = roll[i + 1];
								roll[i + 1] = tamp;

								tamp1 = midmarks[i];
								midmarks[i] = midmarks[i + 1];
								midmarks[i + 1] = tamp1;

								tamp1 = finalmarks[i];
								finalmarks[i] = finalmarks[i + 1];
								finalmarks[i + 1] = tamp1;

								tamp = Class[i];
								Class[i] = Class[i + 1];
								Class[i + 1] = tamp;

								tamp2 = grade[i];
								grade[i] = grade[i + 1];
								grade[i + 1] = tamp2;
						}
						cout << "*******" << endl;
						cout << "*Done.*" << endl;
						cout << "*******" << endl;
						cout << "Do you wnat to delete record again:      ";
					}
					if (cont1 == 1)
					{
						cont1 = 0;
						for (int i = 0; i < 1;)
						{
							cout << "Press y(for yes) and n(for no) : ";
							cin >> g;
							if (g == 'y' || g == 'Y')
							{
								x = true;
								break;
							}
							else if (g == 'n' || g == 'N')
							{
								cout << "OK!" << endl;
								x = false;
								break;
							}
							else
							{
								cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
								cout << "Please input valid data." << endl;
								cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							}
						}
					}

				} while (x);
			}
			else if (n[0] == '1' && n[1] == '1')
			{
				float t;
				int q = 0;
				char w = {};
				bool p;
				do
				{
					cout << "Please enter the marks: ";
					for (int j = 0; j < 1;)
					{
						cin >> t;
						if (t >= 0 && t <= 50)
						{
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please enter marks from 0 to 50." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					cout << "The sorted records in descending order based on marks in Final. " << endl;
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					for (int i = 0; i <= 8; i++)
					{
						for (int j = i + 1; j <= 9; j++)
						{
							if (finalmarks[i] < finalmarks[j])
							{
								temp = roll[i];
								roll[i] = roll[j];
								roll[j] = temp;

								temp1 = midmarks[i];
								midmarks[i] = midmarks[j];
								midmarks[j] = temp1;

								temp1 = finalmarks[i];
								finalmarks[i] = finalmarks[j];
								finalmarks[j] = temp1;

								temp = Class[i];
								Class[i] = Class[j];
								Class[j] = temp;

								temp2 = grade[i];
								grade[i] = grade[j];
								grade[j] = temp2;
							}
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl;
					cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
					cout << "=============----=================-------===============---------======----------======" << endl;
					for (int i = 0; i <= 9; i++)
					{
						if (roll[i] != 0 && finalmarks[i] > t)
						{
							q++;
							cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl << endl;
					if (q == 0)
					{
						cout << ">>>>>>>>>>>>>>>" << endl;
						cout << "No record found" << endl;
						cout << ">>>>>>>>>>>>>>>" << endl;
					}
					if (q >= 1)
					{
						q = 0;
					}
					cout << "Do You want to check it again:       ";
					for (int i = 0; i < 1;)
					{
						cout << "Press y(for yes) and n(for no) : ";
						cin >> w;
						if (w == 'y' || w == 'Y')
						{
							p = true;
							break;
						}
						else if (w == 'n' || w == 'N')
						{
							cout << "OK!" << endl;
							p = false;
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please input valid data." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
				} while (p);
			}
			else if (n[0] == '1' && n[1] == '2')
			{
				float t;
				int q = 0;
				char w = {};
				bool p;
				do
				{
					cout << "Please enter the marks: ";
					for (int j = 0; j < 1;)
					{
						cin >> t;
						if (t >= 0 && t <= 50)
						{
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please enter marks from 0 to 50." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					cout << "The sorted records in ascending order based on marks in Final. " << endl;
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					for (int i = 0; i <= 8; i++)
					{
						for (int j = i + 1; j <= 9; j++)
						{
							if (finalmarks[i] > finalmarks[j])
							{
								temp = roll[i];
								roll[i] = roll[j];
								roll[j] = temp;

								temp1 = midmarks[i];
								midmarks[i] = midmarks[j];
								midmarks[j] = temp1;

								temp1 = finalmarks[i];
								finalmarks[i] = finalmarks[j];
								finalmarks[j] = temp1;

								temp = Class[i];
								Class[i] = Class[j];
								Class[j] = temp;

								temp2 = grade[i];
								grade[i] = grade[j];
								grade[j] = temp2;
							}
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl;
					cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
					cout << "=============----=================-------===============---------======----------======" << endl;
					for (int i = 0; i <= 9; i++)
					{
						if (roll[i] != 0 && finalmarks[i] > t)
						{
							q++;
							cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl << endl;
					if (q == 0)
					{
						cout << ">>>>>>>>>>>>>>>" << endl;
						cout << "No record found" << endl;
						cout << ">>>>>>>>>>>>>>>" << endl;
					}
					if (q >= 1)
					{
						q = 0;
					}
					cout << "Do You want to check it again:       ";
					for (int i = 0; i < 1;)
					{
						cout << "Press y(for yes) and n(for no) : ";
						cin >> w;
						if (w == 'y' || w == 'Y')
						{
							p = true;
							break;
						}
						else if (w == 'n' || w == 'N')
						{
							cout << "OK!" << endl;
							p = false;
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please input valid data." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
				} while (p);
			}
			else if (n[0] == '1' && n[1] == '3')
			{
				float t;
				int q = 0;
				char w = {};
				bool p;
				do
				{
					cout << "Please enter the marks: ";
					for (int j = 0; j < 1;)
					{
						cin >> t;
						if (t >= 0 && t <= 50)
						{
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please enter marks from 0 to 50." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					cout << "The sorted records in descending order based on marks in Final. " << endl;
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					for (int i = 0; i <= 8; i++)
					{
						for (int j = i + 1; j <= 9; j++)
						{
							if (finalmarks[i] < finalmarks[j])
							{
								temp = roll[i];
								roll[i] = roll[j];
								roll[j] = temp;

								temp1 = midmarks[i];
								midmarks[i] = midmarks[j];
								midmarks[j] = temp1;

								temp1 = finalmarks[i];
								finalmarks[i] = finalmarks[j];
								finalmarks[j] = temp1;

								temp = Class[i];
								Class[i] = Class[j];
								Class[j] = temp;

								temp2 = grade[i];
								grade[i] = grade[j];
								grade[j] = temp2;
							}
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl;
					cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
					cout << "=============----=================-------===============---------======----------======" << endl;
					for (int i = 0; i <= 9; i++)
					{
						if (roll[i] != 0 && finalmarks[i] <= t)
						{
							q++;
							cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl << endl;
					if (q == 0)
					{
						cout << ">>>>>>>>>>>>>>>" << endl;
						cout << "No record found" << endl;
						cout << ">>>>>>>>>>>>>>>" << endl;
					}
					if (q >= 1)
					{
						q = 0;
					}
					cout << "Do You want to check it again:       ";
					for (int i = 0; i < 1;)
					{
						cout << "Press y(for yes) and n(for no) : ";
						cin >> w;
						if (w == 'y' || w == 'Y')
						{
							p = true;
							break;
						}
						else if (w == 'n' || w == 'N')
						{
							cout << "OK!" << endl;
							p = false;
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please input valid data." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
				} while (p);
			}
			else if (n[0] == '1' && n[1] == '4')
			{
				float t;
				int q = 0;
				char w = {};
				bool p;
				do
				{
					cout << "Please enter the marks: ";
					for (int j = 0; j < 1;)
					{
						cin >> t;
						if (t >= 0 && t <= 50)
						{
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please enter marks from 0 to 50." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					cout << "The sorted records in ascending order based on marks in Final. " << endl;
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					for (int i = 0; i <= 8; i++)
					{
						for (int j = i + 1; j <= 9; j++)
						{
							if (finalmarks[i] > finalmarks[j])
							{
								temp = roll[i];
								roll[i] = roll[j];
								roll[j] = temp;

								temp1 = midmarks[i];
								midmarks[i] = midmarks[j];
								midmarks[j] = temp1;

								temp1 = finalmarks[i];
								finalmarks[i] = finalmarks[j];
								finalmarks[j] = temp1;

								temp = Class[i];
								Class[i] = Class[j];
								Class[j] = temp;

								temp2 = grade[i];
								grade[i] = grade[j];
								grade[j] = temp2;
							}
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl;
					cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
					cout << "=============----=================-------===============---------======----------======" << endl;
					for (int i = 0; i <= 9; i++)
					{
						if (roll[i] != 0 && finalmarks[i] <= t)
						{
							q++;
							cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl << endl;
					if (q == 0)
					{
						cout << ">>>>>>>>>>>>>>>" << endl;
						cout << "No record found" << endl;
						cout << ">>>>>>>>>>>>>>>" << endl;
					}
					if (q >= 1)
					{
						q = 0;
					}
					cout << "Do You want to check it again:       ";
					for (int i = 0; i < 1;)
					{
						cout << "Press y(for yes) and n(for no) : ";
						cin >> w;
						if (w == 'y' || w == 'Y')
						{
							p = true;
							break;
						}
						else if (w == 'n' || w == 'N')
						{
							cout << "OK!" << endl;
							p = false;
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please input valid data." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
				} while (p);
			}
			else if (n[0] == '1' && n[1] == '5')
			{
				char y;
				int q = 0;
				char w = {};
				bool p;
				do
				{
					cout << "Please enter the grade(must be in Capital letters): ";
					for (int j = 0; j < 1;)
					{
						cin >> y;
						if (y >= 'A' && y <= 'F')
						{
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please enter grade from F to A." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					cout << "The sorted records in descending order based on Grade. " << endl;
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					for (int i = 0; i <= 8; i++)
					{
						for (int j = i + 1; j <= 9; j++)
						{
							if (grade[i] > grade[j])
							{
								temp = roll[i];
								roll[i] = roll[j];
								roll[j] = temp;

								temp1 = midmarks[i];
								midmarks[i] = midmarks[j];
								midmarks[j] = temp1;

								temp1 = finalmarks[i];
								finalmarks[i] = finalmarks[j];
								finalmarks[j] = temp1;

								temp = Class[i];
								Class[i] = Class[j];
								Class[j] = temp;

								temp2 = grade[i];
								grade[i] = grade[j];
								grade[j] = temp2;
							}
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl;
					cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
					cout << "=============----=================-------===============---------======----------======" << endl;
					for (int i = 0; i <= 9; i++)
					{
						if (roll[i] != 0 && grade[i] > y)
						{
							q++;
							cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl << endl;
					if (q == 0)
					{
						cout << ">>>>>>>>>>>>>>>" << endl;
						cout << "No record found" << endl;
						cout << ">>>>>>>>>>>>>>>" << endl;
					}
					if (q >= 1)
					{
						q = 0;
					}
					cout << "Do You want to check it again:       ";
					for (int i = 0; i < 1;)
					{
						cout << "Press y(for yes) and n(for no) : ";
						cin >> w;
						if (w == 'y' || w == 'Y')
						{
							p = true;
							break;
						}
						else if (w == 'n' || w == 'N')
						{
							cout << "OK!" << endl;
							p = false;
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please input valid data." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
				} while (p);
			}
			else if (n[0] == '1' && n[1] == '6')
			{
				char y;
				int q = 0;
				char w = {};
				bool p;
				do
				{
					cout << "Please enter the grade(must be in Capital letters): ";
					for (int j = 0; j < 1;)
					{
						cin >> y;
						if (y >= 'A' && y <= 'F')
						{
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please enter grade from F to A." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					cout << "The sorted records in ascending order based on Grade. " << endl;
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					for (int i = 0; i <= 8; i++)
					{
						for (int j = i + 1; j <= 9; j++)
						{
							if (grade[i] < grade[j])
							{
								temp = roll[i];
								roll[i] = roll[j];
								roll[j] = temp;

								temp1 = midmarks[i];
								midmarks[i] = midmarks[j];
								midmarks[j] = temp1;

								temp1 = finalmarks[i];
								finalmarks[i] = finalmarks[j];
								finalmarks[j] = temp1;

								temp = Class[i];
								Class[i] = Class[j];
								Class[j] = temp;

								temp2 = grade[i];
								grade[i] = grade[j];
								grade[j] = temp2;
							}
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl;
					cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
					cout << "=============----=================-------===============---------======----------======" << endl;
					for (int i = 0; i <= 9; i++)
					{
						if (roll[i] != 0 && grade[i] > y)
						{
							q++;
							cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl << endl;
					if (q == 0)
					{
						cout << ">>>>>>>>>>>>>>>" << endl;
						cout << "No record found" << endl;
						cout << ">>>>>>>>>>>>>>>" << endl;
					}
					if (q >= 1)
					{
						q = 0;
					}
					cout << "Do You want to check it again:       ";
					for (int i = 0; i < 1;)
					{
						cout << "Press y(for yes) and n(for no) : ";
						cin >> w;
						if (w == 'y' || w == 'Y')
						{
							p = true;
							break;
						}
						else if (w == 'n' || w == 'N')
						{
							cout << "OK!" << endl;
							p = false;
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please input valid data." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
				} while (p);
			}
			else if (n[0] == '1' && n[1] == '7')
			{
				char y;
				int q = 0;
				char w = {};
				bool p;
				do
				{
					cout << "Please enter the grade(must be in Capital letters): ";
					for (int j = 0; j < 1;)
					{
						cin >> y;
						if (y >= 'A' && y <= 'F')
						{
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please enter grade from F to A." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					cout << "The sorted records in descending order based on Grade. " << endl;
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					for (int i = 0; i <= 8; i++)
					{
						for (int j = i + 1; j <= 9; j++)
						{
							if (grade[i] > grade[j])
							{
								temp = roll[i];
								roll[i] = roll[j];
								roll[j] = temp;

								temp1 = midmarks[i];
								midmarks[i] = midmarks[j];
								midmarks[j] = temp1;

								temp1 = finalmarks[i];
								finalmarks[i] = finalmarks[j];
								finalmarks[j] = temp1;

								temp = Class[i];
								Class[i] = Class[j];
								Class[j] = temp;

								temp2 = grade[i];
								grade[i] = grade[j];
								grade[j] = temp2;
							}
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl;
					cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
					cout << "=============----=================-------===============---------======----------======" << endl;
					for (int i = 0; i <= 9; i++)
					{
						if (roll[i] != 0 && grade[i] <= y)
						{
							q++;
							cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl << endl;
					if (q == 0)
					{
						cout << ">>>>>>>>>>>>>>>" << endl;
						cout << "No record found" << endl;
						cout << ">>>>>>>>>>>>>>>" << endl;
					}
					if (q >= 1)
					{
						q = 0;
					}
					cout << "Do You want to check it again:       ";
					for (int i = 0; i < 1;)
					{
						cout << "Press y(for yes) and n(for no) : ";
						cin >> w;
						if (w == 'y' || w == 'Y')
						{
							p = true;
							break;
						}
						else if (w == 'n' || w == 'N')
						{
							cout << "OK!" << endl;
							p = false;
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please input valid data." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
				} while (p);
			}
			else if (n[0] == '1' && n[1] == '8')
			{
				char y;
				int q = 0;
				char w = {};
				bool p;
				do
				{
					cout << "Please enter the grade(must be in Capital letters): ";
					for (int j = 0; j < 1;)
					{
						cin >> y;
						if (y >= 'A' && y <= 'F')
						{
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please enter grade from F to A." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					cout << "The sorted records in ascending order based on Grade. " << endl;
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					for (int i = 0; i <= 8; i++)
					{
						for (int j = i + 1; j <= 9; j++)
						{
							if (grade[i] < grade[j])
							{
								temp = roll[i];
								roll[i] = roll[j];
								roll[j] = temp;

								temp1 = midmarks[i];
								midmarks[i] = midmarks[j];
								midmarks[j] = temp1;

								temp1 = finalmarks[i];
								finalmarks[i] = finalmarks[j];
								finalmarks[j] = temp1;

								temp = Class[i];
								Class[i] = Class[j];
								Class[j] = temp;

								temp2 = grade[i];
								grade[i] = grade[j];
								grade[j] = temp2;
							}
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl;
					cout << "Roll Number \t Midterm(30 marks) \t Final(50 marks) \t Class \t\t Grade" << endl;
					cout << "=============----=================-------===============---------======----------======" << endl;
					for (int i = 0; i <= 9; i++)
					{
						if (roll[i] != 0 && grade[i] <= y)
						{
							q++;
							cout << roll[i] << "\t\t\t" << midmarks[i] << "\t\t\t" << finalmarks[i] << "\t\t   " << Class[i] << "\t\t   " << grade[i] << endl;
						}
					}
					cout << "=============----=================-------===============---------======----------======" << endl << endl;
					if (q == 0)
					{
						cout << ">>>>>>>>>>>>>>>" << endl;
						cout << "No record found" << endl;
						cout << ">>>>>>>>>>>>>>>" << endl;
					}
					if (q >= 1)
					{
						q = 0;
					}
					cout << "Do You want to check it again:       ";
					for (int i = 0; i < 1;)
					{
						cout << "Press y(for yes) and n(for no) : ";
						cin >> w;
						if (w == 'y' || w == 'Y')
						{
							p = true;
							break;
						}
						else if (w == 'n' || w == 'N')
						{
							cout << "OK!" << endl;
							p = false;
							break;
						}
						else
						{
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
							cout << "Please input valid data." << endl;
							cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
						}
					}
				} while (p);
			}
		}
			char c;
			cout << "Do you wnat to see menu again      ";
			for (int i = 0; i < 1;)
			{
				cout << "Press y(for yes) and n(for no) : ";
				cin >> c;
				if (c == 'y' || c == 'Y')
				{
					a = true;
					break;
				}
				else if (c == 'n' || c == 'N')
				{
					cout << "OK!" << endl;
					a = false;
					break;
				}
				else
				{
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
					cout << "Please input valid data." << endl;
					cout << ">>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				}
			}
	}while(a);
	const char end[9] = { "THE END" };
	cout << "\t \t \t \t \t";
	for (int i = 1; i <= 23; i++)
	{
		cout << "*";
		_sleep(100);
	}
	cout << endl << endl;
	cout << "\t \t \t \t \t \t";
	for (int i = 0; i <= 6; i++)
	{
		cout << end[i];
		_sleep(300);
	}
	cout << endl;
	cout << "\t \t \t \t \t";
	cout << endl;
	cout << "\t \t \t \t \t";
	for (int i = 1; i <= 23; i++)
	{
		cout << "*";
		_sleep(100);
	}
	cout << endl;
	return 0;
}