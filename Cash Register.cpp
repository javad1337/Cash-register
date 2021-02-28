#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double t, y = 5, q = 7, s = 38, sh = 4, sa = 15, kol, p = 0, pc = 0, pm = 0;
	char sym, sym1;

	while (true)
	{
		system("color 70");
		cout << "\n\n\t\t\t\t\t" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
		cout << "\t\t\t\t\t" << char(186) << " Nazvanie     " << char(186) << " Cena  " << char(186) << " Skidka " << char(186) << " Kolicestvo " << char(186) << endl;
		cout << "\t\t\t\t\t" << char(186) << " Yolka (1)    " << char(186) << " 100 $ " << char(186) << "  25 %  " << char(186) << "      " << y << "     " << char(186) << endl;
		cout << "\t\t\t\t\t" << char(186) << " Qerlanda (2) " << char(186) << " 10 $  " << char(186) << "  50 %  " << char(186) << "      " << q << "     " << char(186) << endl;
		cout << "\t\t\t\t\t" << char(186) << " Sharik (3)   " << char(186) << " 35 $  " << char(186) << "  20 %  " << char(186) << "      " << s << "    " << char(186) << endl;
		cout << "\t\t\t\t\t" << char(186) << " Shapka (4)   " << char(186) << " 12 $  " << char(186) << "  30 %  " << char(186) << "      " << sh << "     " << char(186) << endl;
		cout << "\t\t\t\t\t" << char(186) << " Salut (5)    " << char(186) << " 40 $  " << char(186) << "  75 %  " << char(186) << "      " << sa << "    " << char(186) << endl;
		cout << "\t\t\t\t\t" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

		while (true)
		{
			cout << "\n\n\t\t\t\t\t\t       " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
			cout << "\t\t\t\t\t\t       " << char(186) << " Viberite Tovar " << char(186) << endl;
			cout << "\t\t\t\t\t\t       " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;

			while (true)
			{
				cout << " "; cin >> t;

				if (t >= 6 || t <= 0 || t == 1 & y == 0 || t == 2 & q == 0 || t == 3 & s == 0 || t == 4 & sh == 0 || t == 5 & sa == 0)
				{
					cout << "\n\n\t\t\t\t\t\t  " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
					cout << "\t\t\t\t\t\t  " << char(186) << "   Takoqo tovara netu !   " << char(186) << endl;
					cout << "\t\t\t\t\t\t  " << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185) << endl;
					cout << "\t\t\t\t\t\t  " << char(186) << " Viberite Pravilniy Tovar " << char(186) << endl;
					cout << "\t\t\t\t\t\t  " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;

				}
				else
				{
					break;
				}

			}

			cout << "\n\n\t\t\t\t\t\t     " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
			cout << "\t\t\t\t\t\t     " << char(186) << " Vvedite Kolicestvo " << char(186) << endl;
			cout << "\t\t\t\t\t\t     " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;

			while (true)
			{
				cout << " "; cin >> kol;

				if (t == 1 & kol <= y || t == 2 & kol <= q || t == 3 & kol <= s || t == 4 & kol <= sh || t == 5 & kol <= sa )
				{
					break;
				}
				else
				{
					cout << "\n\n\t\t\t\t\t\t" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
					cout << "\t\t\t\t\t\t" << char(186) << " Vvedite pravilnoye kolicestvo " << char(186) << endl;
					cout << "\t\t\t\t\t\t" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;

				}

			}
			if (t == 1)
			{
				p = (100.0 * 75 / 100) * kol;
				y -= kol;
			}

			else if (t == 2)
			{
				p = (10.0 * 50 / 100) * kol;
				q -= kol;
			}

			else if (t == 3)
			{
				p = (35.0 * 80 / 100) * kol;
				s -= kol;
			}

			else if (t == 4)
			{
				p = (12.0 * 70 / 100) * kol;
				sh -= kol;
			}

			else if (t == 5)
			{
				p = (40.0 * 25 / 100) * kol;
				sa -= kol;
			}

			pc += p;


			cout << "\n\n\t\t\t\t\t\t     " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
			cout << "\t\t\t\t\t\t     " << char(186) << " Xotite eshe tovar ? " << char(186) << endl;
			cout << "\t\t\t\t\t\t     " << char(186) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(186) << endl;
			cout << "\t\t\t\t\t\t     " << char(186) << "  D - da || N - net  " << char(186) << endl;
			cout << "\t\t\t\t\t\t     " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
			cin >> sym;

			if (sym == 'n' || sym == 'N')
			{
				cout << "\n\n\t\t\t\t\t\t  " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << "\t\t\t\t\t\t  " << char(186) << " Vsya Summa Pokupki = " <<pc <<"   " << char(186) << endl;
				cout << "\t\t\t\t\t\t  " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				
				break;  
			}
			else
			{
				if (y == 0 & q == 0 & s == 0 & sh == 0 & sa == 0)
				{
					pm += pc;
					cout << "\n\n\t\t\t\t\t\t" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
					cout << "\t\t\t\t\t\t" << char(186) << " Neceqo ne ostalos , maqazin pust " << char(186) << endl;
					cout << "\t\t\t\t\t\t" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;

					cout << "\n\n\t\t\t\t\t\t   " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
					cout << "\t\t\t\t\t\t   " << char(186) << " Vsya Summa Pokupki = " << pc << "     " << char(186) << endl;
					cout << "\t\t\t\t\t\t   " << char(200)  << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;

					
					cout << "\n\n\t\t\t\t\t\t" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
					cout << "\t\t\t\t\t\t" << char(186) << " Obshaya viruchka maqazina = " << pm << "  " << char(186) << endl;
					cout << "\t\t\t\t\t\t" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;

					pm -= pc;
					break;

				}
			}

		}
		pm += pc;
		cout << "\n\n\t\t\t\t\t\t     " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
		cout << "\t\t\t\t\t\t     " << char(186) << " Est li eshe klient? " << char(186) << endl;
		cout << "\t\t\t\t\t\t     " << char(186) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(45) << char(186) << endl;
		cout << "\t\t\t\t\t\t     " << char(186) << "  D - da || N - net  " << char(186) << endl;
		cout << "\t\t\t\t\t\t     " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
		cin >> sym1;

		if (sym1 == 'n' & y == 0 & q == 0 & s == 0 & sh == 0 & sa == 0)
		{
			break;
		}
		else if (sym1 == 'N' & y == 0 & q == 0 & s == 0 & sh == 0 & sa == 0)
		{
			break;
		}
		else if (sym1 == 'n' || sym1 == 'N')
		{
			cout << "\n\n\t\t\t\t\t\t" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
			cout << "\t\t\t\t\t\t" << char(186) << " Obshaya viruchka maqazina = " << pm << "  " << char(186) << endl;
			cout << "\t\t\t\t\t\t" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;


			break;
		}
		else
		{
			pc = 0;  
			
			if (y == 0 & q == 0 & s == 0 & sh == 0 & sa == 0)
			{
				cout << "\n\n\t\t\t\t\t\t" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << "\t\t\t\t\t\t" << char(186) << " Neceqo ne ostalos , maqazin pust " << char(186) << endl;
				cout << "\t\t\t\t\t\t" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;


				cout << "\n\n\t\t\t\t\t\t" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << "\t\t\t\t\t\t" << char(186) << " Obshaya viruchka maqazina = " << pm << "  " << char(186) << endl;
				cout << "\t\t\t\t\t\t" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;

				break;
			}

		}
		


	}
	
	cout << "\n\n\n";
}