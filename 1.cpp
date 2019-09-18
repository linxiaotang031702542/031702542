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
		cout << "未成功打开文件" << endl;
	}
	outfile << '[' ;
	while (getline(myfile, temp))
	{
		outfile << '{' ;
		outfile << '"' << "姓名" << '"' << ':' << '"' << temp.substr(2, 4) << '"' << ',' ;
		outfile  << '"' << "手机" << '"' << ':';
		for (i = 7;; i++)
		{
			if (temp[i] == '1')
			{
				outfile << '"' << temp.substr(i, 11) << '"' << ',';
				break;
			}
		}
		outfile << '"' << "地址" << '"' << ':' << '[' ;
		string s(temp.substr(7, i - 7));
		string d(temp.substr(i + 11));
		s += d;
		//省
		outfile << '"';
		for (i = 0; i < (s.length() - 6); i = i + 2)
		{
			if (s.substr(i, 2) == "省")
			{
				outfile << s.substr(0, i + 2);
				i += 2;
				break;
			}
			else if (s.substr(i, 6) == "自治区")
			{
				outfile << s.substr(0, i + 6);
				i += 2;
				break;
			}
		}
		if (i > (s.length() - 6))
		{
			if (s.substr(0, 4) == "北京" || s.substr(0, 4) == "上海" || s.substr(0, 4) == "重庆" || s.substr(0, 4) == "天津")
			{
				outfile << s.substr(0, 4);
				i = 0;
			}
			if (s.substr(0, 6) == "黑龙江")
			{
				outfile << "黑龙江省";
				i = 6;
			}
			else
			{
				outfile << s.substr(0, 4) << "省";
				i = 4;
			}

		}
		outfile << '"' << ',' ;
		outfile << '"';

		//市
		m = i;
		for (j = i; j < (s.length() - 2); j = j + 2)
		{

			if (s.substr(j, 2) == "市")
			{
				outfile << s.substr(i, j - i + 2);
				j += 2;
				break;
			}
		}
		if (j > (s.length() - 2))
		{
			outfile << s.substr(i, 4)<<"市";
			j = m + 4;
		}
		outfile << '"' << ',';
		outfile << '"';

		//县
		m = j;
		for (i = j; i < (s.length() - 2); i = i + 2)
		{

			if (s.substr(i, 2) == "区" || s.substr(i, 2) == "县")
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

		//乡
		m = i;
		for (j = i; j < (s.length() - 2); j = j + 2)
		{

			if (s.substr(j, 2) == "乡" || s.substr(j, 2) == "镇")
			{
				outfile << s.substr(i, j - i + 2);
				j += 2;
				break;
			}
			if (s.substr(j, 2) == "街")
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

		//5级地址

		if (temp[0] == '1')
		{
			outfile << s.substr(j, s.length() - j - 1);
		}



		//7级地址
		else
		{
			//路
			for (i = j; i < (s.length() - 2); i = i + 2)
			{

				if (s.substr(i, 2) == "路" || s.substr(i, 2) == "街")
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

			//门牌号
			for (p = i; p < s.length(); p++)
			{
				if (s[p] == '0' || s[p] == '1' || s[p] == '2' || s[p] == '3' || s[p] == '4' || s[p] == '5' || s[p] == '6' || s[p] == '7' || s[p] == '8' || s[p] == '9')
				{
					outfile << s[p];
				}
				else
				{
					outfile << "号";
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

			//详细地址
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
		cout << "未成功打开文件" << endl;
	}
	outfile << '[' ;
	while (getline(myfile, temp))
	{
		outfile << '{' ;
		outfile << '"' << "姓名" << '"' << ':' << '"' << temp.substr(2, 4) << '"' << ',' ;
		outfile  << '"' << "手机" << '"' << ':';
		for (i = 7;; i++)
		{
			if (temp[i] == '1')
			{
				outfile << '"' << temp.substr(i, 11) << '"' << ',';
				break;
			}
		}
		outfile << '"' << "地址" << '"' << ':' << '[' ;
		string s(temp.substr(7, i - 7));
		string d(temp.substr(i + 11));
		s += d;
		//省
		outfile << '"';
		for (i = 0; i < (s.length() - 6); i = i + 2)
		{
			if (s.substr(i, 2) == "省")
			{
				outfile << s.substr(0, i + 2);
				i += 2;
				break;
			}
			else if (s.substr(i, 6) == "自治区")
			{
				outfile << s.substr(0, i + 6);
				i += 2;
				break;
			}
		}
		if (i > (s.length() - 6))
		{
			if (s.substr(0, 4) == "北京" || s.substr(0, 4) == "上海" || s.substr(0, 4) == "重庆" || s.substr(0, 4) == "天津")
			{
				outfile << s.substr(0, 4);
				i = 0;
			}
			if (s.substr(0, 6) == "黑龙江")
			{
				outfile << "黑龙江省";
				i = 6;
			}
			else
			{
				outfile << s.substr(0, 4) << "省";
				i = 4;
			}

		}
		outfile << '"' << ',' ;
		outfile << '"';

		//市
		m = i;
		for (j = i; j < (s.length() - 2); j = j + 2)
		{

			if (s.substr(j, 2) == "市")
			{
				outfile << s.substr(i, j - i + 2);
				j += 2;
				break;
			}
		}
		if (j > (s.length() - 2))
		{
			outfile << s.substr(i, 4)<<"市";
			j = m + 4;
		}
		outfile << '"' << ',';
		outfile << '"';

		//县
		m = j;
		for (i = j; i < (s.length() - 2); i = i + 2)
		{

			if (s.substr(i, 2) == "区" || s.substr(i, 2) == "县")
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

		//乡
		m = i;
		for (j = i; j < (s.length() - 2); j = j + 2)
		{

			if (s.substr(j, 2) == "乡" || s.substr(j, 2) == "镇")
			{
				outfile << s.substr(i, j - i + 2);
				j += 2;
				break;
			}
			if (s.substr(j, 2) == "街")
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

		//5级地址

		if (temp[0] == '1')
		{
			outfile << s.substr(j, s.length() - j - 1);
		}



		//7级地址
		else
		{
			//路
			for (i = j; i < (s.length() - 2); i = i + 2)
			{

				if (s.substr(i, 2) == "路" || s.substr(i, 2) == "街")
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

			//门牌号
			for (p = i; p < s.length(); p++)
			{
				if (s[p] == '0' || s[p] == '1' || s[p] == '2' || s[p] == '3' || s[p] == '4' || s[p] == '5' || s[p] == '6' || s[p] == '7' || s[p] == '8' || s[p] == '9')
				{
					outfile << s[p];
				}
				else
				{
					outfile << "号";
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

			//详细地址
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
