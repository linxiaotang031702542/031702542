<<<<<<< HEAD
#include <vector>  
#include <string>  
#include <fstream>  
#include <iostream>  

using namespace std;

int main()
{
	ifstream myfile("F:\\Google\\1.txt");
	ofstream outfile("F:\\Google\\2.txt", ios::trunc);
	string temp;
	int i, j, p, m;
	if (!myfile.is_open())
	{
		cout << "δ�ɹ����ļ�" << endl;
	}
	outfile << '[' ;
	while (getline(myfile, temp))
	{
		outfile << '{' ;
		outfile << '"' << "����" << '"' << ':' << '"' << temp.substr(2, 4) << '"' << ',' ;
		outfile  << '"' << "�ֻ�" << '"' << ':';
		for (i = 7;; i++)
		{
			if (temp[i] == '1')
			{
				outfile << '"' << temp.substr(i, 11) << '"' << ',';
				break;
			}
		}
		outfile << '"' << "��ַ" << '"' << ':' << '[' ;
		string s(temp.substr(7, i - 7));
		string d(temp.substr(i + 11));
		s += d;
		//ʡ
		outfile << '"';
		for (i = 0; i < (s.length() - 6); i = i + 2)
		{
			if (s.substr(i, 2) == "ʡ")
			{
				outfile << s.substr(0, i + 2);
				i += 2;
				break;
			}
			else if (s.substr(i, 6) == "������")
			{
				outfile << s.substr(0, i + 6);
				i += 2;
				break;
			}
		}
		if (i > (s.length() - 6))
		{
			if (s.substr(0, 4) == "����" || s.substr(0, 4) == "�Ϻ�" || s.substr(0, 4) == "����" || s.substr(0, 4) == "���")
			{
				outfile << s.substr(0, 4);
				i = 0;
			}
			if (s.substr(0, 6) == "������")
			{
				outfile << "������ʡ";
				i = 6;
			}
			else
			{
				outfile << s.substr(0, 4) << "ʡ";
				i = 4;
			}

		}
		outfile << '"' << ',' ;
		outfile << '"';

		//��
		m = i;
		for (j = i; j < (s.length() - 2); j = j + 2)
		{

			if (s.substr(j, 2) == "��")
			{
				outfile << s.substr(i, j - i + 2);
				j += 2;
				break;
			}
		}
		if (j > (s.length() - 2))
		{
			outfile << s.substr(i, 4)<<"��";
			j = m + 4;
		}
		outfile << '"' << ',';
		outfile << '"';

		//��
		m = j;
		for (i = j; i < (s.length() - 2); i = i + 2)
		{

			if (s.substr(i, 2) == "��" || s.substr(i, 2) == "��")
			{
				outfile << s.substr(j, i - j + 2);
				i += 2;
				break;
			}
		}
		outfile << '"' << ',';
		outfile << '"';
		if (i > (s.length() - 2))
		{
			i = m;
		}

		//��
		m = i;
		for (j = i; j < (s.length() - 2); j = j + 2)
		{

			if (s.substr(j, 2) == "��" || s.substr(j, 2) == "��")
			{
				outfile << s.substr(i, j - i + 2);
				j += 2;
				break;
			}
			if (s.substr(j, 2) == "��")
			{
				outfile << s.substr(i, j - i + 4);
				j += 4;
				break;
			}
		}
		outfile << '"' << ',';
		outfile<< '"';
		if (j > (s.length() - 2))
		{
			j = m;
		}

		//5����ַ

		if (temp[0] == '1')
		{
			outfile << s.substr(j, s.length() - j - 1);
		}



		//7����ַ
		else
		{
			//·
			for (i = j; i < (s.length() - 2); i = i + 2)
			{

				if (s.substr(i, 2) == "·" || s.substr(i, 2) == "��")
				{
					outfile << s.substr(j, i - j + 2);
					i += 2;
					break;
				}
			}
			outfile << '"' << ',' ;
			outfile << '"';
			if (i > (s.length() - 2))
			{
				i = m;
			}

			//���ƺ�
			for (p = i; p < s.length(); p++)
			{
				if (s[p] == '0' || s[p] == '1' || s[p] == '2' || s[p] == '3' || s[p] == '4' || s[p] == '5' || s[p] == '6' || s[p] == '7' || s[p] == '8' || s[p] == '9')
				{
					outfile << s[p];
				}
				else
				{
					outfile << "��";
					p += 2;
					break;
				}
			}
			outfile << '"' << ',' ;
			outfile  << '"';
			if (p > (s.length() - 2))
			{
				p = m;
			}

			//��ϸ��ַ
			outfile << s.substr(p, s.length() - p - 1);

		}
		outfile << '"' ;
		outfile << ']' ;
		outfile  << '}' << ',';
		//outfile << endl;
	}
	outfile << ']';
	myfile.close();
	outfile.close();
	return 0;
}
=======
#include <vector>  
#include <string>  
#include <fstream>  
#include <iostream>  

using namespace std;

int main()
{
	ifstream myfile("F:\\Google\\1.txt");
	ofstream outfile("F:\\Google\\2.txt", ios::trunc);
	string temp;
	int i, j, p, m;
	if (!myfile.is_open())
	{
		cout << "δ�ɹ����ļ�" << endl;
	}
	outfile << '[' ;
	while (getline(myfile, temp))
	{
		outfile << '{' ;
		outfile << '"' << "����" << '"' << ':' << '"' << temp.substr(2, 4) << '"' << ',' ;
		outfile  << '"' << "�ֻ�" << '"' << ':';
		for (i = 7;; i++)
		{
			if (temp[i] == '1')
			{
				outfile << '"' << temp.substr(i, 11) << '"' << ',';
				break;
			}
		}
		outfile << '"' << "��ַ" << '"' << ':' << '[' ;
		string s(temp.substr(7, i - 7));
		string d(temp.substr(i + 11));
		s += d;
		//ʡ
		outfile << '"';
		for (i = 0; i < (s.length() - 6); i = i + 2)
		{
			if (s.substr(i, 2) == "ʡ")
			{
				outfile << s.substr(0, i + 2);
				i += 2;
				break;
			}
			else if (s.substr(i, 6) == "������")
			{
				outfile << s.substr(0, i + 6);
				i += 2;
				break;
			}
		}
		if (i > (s.length() - 6))
		{
			if (s.substr(0, 4) == "����" || s.substr(0, 4) == "�Ϻ�" || s.substr(0, 4) == "����" || s.substr(0, 4) == "���")
			{
				outfile << s.substr(0, 4);
				i = 0;
			}
			if (s.substr(0, 6) == "������")
			{
				outfile << "������ʡ";
				i = 6;
			}
			else
			{
				outfile << s.substr(0, 4) << "ʡ";
				i = 4;
			}

		}
		outfile << '"' << ',' ;
		outfile << '"';

		//��
		m = i;
		for (j = i; j < (s.length() - 2); j = j + 2)
		{

			if (s.substr(j, 2) == "��")
			{
				outfile << s.substr(i, j - i + 2);
				j += 2;
				break;
			}
		}
		if (j > (s.length() - 2))
		{
			outfile << s.substr(i, 4)<<"��";
			j = m + 4;
		}
		outfile << '"' << ',';
		outfile << '"';

		//��
		m = j;
		for (i = j; i < (s.length() - 2); i = i + 2)
		{

			if (s.substr(i, 2) == "��" || s.substr(i, 2) == "��")
			{
				outfile << s.substr(j, i - j + 2);
				i += 2;
				break;
			}
		}
		outfile << '"' << ',';
		outfile << '"';
		if (i > (s.length() - 2))
		{
			i = m;
		}

		//��
		m = i;
		for (j = i; j < (s.length() - 2); j = j + 2)
		{

			if (s.substr(j, 2) == "��" || s.substr(j, 2) == "��")
			{
				outfile << s.substr(i, j - i + 2);
				j += 2;
				break;
			}
			if (s.substr(j, 2) == "��")
			{
				outfile << s.substr(i, j - i + 4);
				j += 4;
				break;
			}
		}
		outfile << '"' << ',';
		outfile<< '"';
		if (j > (s.length() - 2))
		{
			j = m;
		}

		//5����ַ

		if (temp[0] == '1')
		{
			outfile << s.substr(j, s.length() - j - 1);
		}



		//7����ַ
		else
		{
			//·
			for (i = j; i < (s.length() - 2); i = i + 2)
			{

				if (s.substr(i, 2) == "·" || s.substr(i, 2) == "��")
				{
					outfile << s.substr(j, i - j + 2);
					i += 2;
					break;
				}
			}
			outfile << '"' << ',' ;
			outfile << '"';
			if (i > (s.length() - 2))
			{
				i = m;
			}

			//���ƺ�
			for (p = i; p < s.length(); p++)
			{
				if (s[p] == '0' || s[p] == '1' || s[p] == '2' || s[p] == '3' || s[p] == '4' || s[p] == '5' || s[p] == '6' || s[p] == '7' || s[p] == '8' || s[p] == '9')
				{
					outfile << s[p];
				}
				else
				{
					outfile << "��";
					p += 2;
					break;
				}
			}
			outfile << '"' << ',' ;
			outfile  << '"';
			if (p > (s.length() - 2))
			{
				p = m;
			}

			//��ϸ��ַ
			outfile << s.substr(p, s.length() - p - 1);

		}
		outfile << '"' ;
		outfile << ']' ;
		outfile  << '}' << ',';
		//outfile << endl;
	}
	outfile << ']';
	myfile.close();
	outfile.close();
	return 0;
}
>>>>>>> 7ba592e54b752b2876a7f019740c731ae669126c
