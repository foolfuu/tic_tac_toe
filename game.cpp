#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	char a = '#',b = '#',c = '#', d = '#',e = '#',f = '#', g = '#',h = '#',i = '#';
	/*cout<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
		<<"*"<<a<<"*"<<b<<"*"<<c<<"*"<<endl
		<<"*"<<d<<"*"<<e<<"*"<<f<<"*"<<endl
		<<"*"<<g<<"*"<<h<<"*"<<i<<"*"<<endl
		<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl;*/


	cout<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
		<<"*"<<a<<"*"<<b<<"*"<<c<<"*"<<endl
		<<"*"<<d<<"*"<<e<<"*"<<f<<"*"<<endl
		<<"*"<<g<<"*"<<h<<"*"<<i<<"*"<<endl
		<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl;
	cout<<"----------"<<endl<<endl
		<<"----------"<<endl;
			
	char p1 , p2;
	cout<<"player(X): ";
	cin>>p1;
	if(p1 == '1')a = 'X';
	if(p1 == '2')b = 'X';
	if(p1 == '3')c = 'X';
	if(p1 == '4')d = 'X';
	if(p1 == '5')e = 'X';
	if(p1 == '6')f = 'X';
	if(p1 == '7')g = 'X';
	if(p1 == '8')h = 'X';
	if(p1 == '9')i = 'X';
	
	cout<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
		<<"*"<<a<<"*"<<b<<"*"<<c<<"*"<<endl
		<<"*"<<d<<"*"<<e<<"*"<<f<<"*"<<endl
		<<"*"<<g<<"*"<<h<<"*"<<i<<"*"<<endl
		<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl;
	cout<<"----------"<<endl<<endl
		<<"----------"<<endl;
		
	if(p1 == '5')
	{
		int max = 5 , min = 1 , na;
		srand(time(0));
		na = rand()%(max - min) + min;
		if(na == 1)a = 'O';
		if(na == 2)c = 'O';
		if(na == 3)g = 'O';
		if(na == 4)i = 'O';
	}
	
	else if(p1 == '1' or p1 == '2' or p1 == '3' or p1 == '4' or p1 == '6' or p1 == '7' or p1 == '8' or p1 == '9')e = 'O';
	
	
	/*
	if(p2 == '1')a = 'O';
	if(p2 == '2')b = 'O';
	if(p2 == '3')c = 'O';
	if(p2 == '4')d = 'O';
	if(p2 == '5')e = 'O';
	if(p2 == '6')f = 'O';
	if(p2 == '7')g = 'O';
	if(p2 == '8')h = 'O';
	if(p2 == '9')i = 'O';
	*/
	
	
	cout<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
		<<"*"<<a<<"*"<<b<<"*"<<c<<"*"<<endl
		<<"*"<<d<<"*"<<e<<"*"<<f<<"*"<<endl
		<<"*"<<g<<"*"<<h<<"*"<<i<<"*"<<endl
		<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl;
	cout<<"----------"<<endl<<endl
		<<"----------"<<endl;
		
	cout<<"player(X): ";
	cin>>p1;
	if(p1 == '1')a = 'X';
	if(p1 == '2')b = 'X';
	if(p1 == '3')c = 'X';
	if(p1 == '4')d = 'X';
	if(p1 == '5')e = 'X';
	if(p1 == '6')f = 'X';
	if(p1 == '7')g = 'X';
	if(p1 == '8')h = 'X';
	if(p1 == '9')i = 'X';
	
	cout<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
		<<"*"<<a<<"*"<<b<<"*"<<c<<"*"<<endl
		<<"*"<<d<<"*"<<e<<"*"<<f<<"*"<<endl
		<<"*"<<g<<"*"<<h<<"*"<<i<<"*"<<endl
		<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl;
	cout<<"----------"<<endl<<endl
		<<"----------"<<endl;
		
	if(a == 'X' and b == 'X')c = 'O';
	else if(b == 'X' and c == 'X')a = 'O';
	else if(a == 'X' and c == 'X')b = 'O';
	else if(d == 'X' and e == 'X')f = 'O';
	else if(f == 'X' and e == 'X')d = 'O';
	else if(d == 'X' and f == 'X')e = 'O';
	else if(g == 'X' and h == 'X')i = 'O';
	else if(i == 'X' and h == 'X')g = 'O';
	else if(g == 'X' and i == 'X')h = 'O';
	///
	else if(a == 'X' and e == 'X')i = 'O';
	else if(i == 'X' and e == 'X')a = 'O';
	else if(a == 'X' and i == 'X')e = 'O';
	else if(c == 'X' and e == 'X')g = 'O';
	else if(g == 'X' and e == 'X')c = 'O';
	else if(c == 'X' and g == 'X')e = 'O';
	///
	else if(c == 'X' and f == 'X')i = 'O';
	else if(a == 'X' and d == 'X')g = 'O';
	else if(g == 'X' and d == 'X')a = 'O';
	else if(a == 'X' and g == 'X')d = 'O';
	else if(b == 'X' and e == 'X')h = 'O';
	else if(h == 'X' and e == 'X')b = 'O';
	else if(h == 'X' and b == 'X')e = 'O';
	else if(i == 'X' and f == 'X')c = 'O';
	else if(c == 'X' and i == 'X')f = 'O';
	///
	else
	{
		if(e == 'O')
		{
			int min = 1 , max = 9 , eh;
			srand(time(0));
			eh = rand()%(max - min) + min;
			if(eh == 1 and a == '#')a = 'O';
			else if(eh == 2 and b == '#')b = 'O';
			else if(eh == 3 and c == '#')c = 'O';
			else if(eh == 4 and d == '#')d = 'O';
			else if(eh == 5 and f == '#')f = 'O';
			else if(eh == 6 and g == '#')g = 'O';
			else if(eh == 7 and h == '#')h = 'O';
			else if(eh == 8 and i == '#')i = 'O';
		}	
	}
	
	
	
	cout<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
		<<"*"<<a<<"*"<<b<<"*"<<c<<"*"<<endl
		<<"*"<<d<<"*"<<e<<"*"<<f<<"*"<<endl
		<<"*"<<g<<"*"<<h<<"*"<<i<<"*"<<endl
		<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl;
	cout<<"----------"<<endl<<endl
		<<"----------"<<endl;
	
	
	cout<<"player(X): ";
	cin>>p1;
	if(p1 == '1')a = 'X';
	if(p1 == '2')b = 'X';
	if(p1 == '3')c = 'X';
	if(p1 == '4')d = 'X';
	if(p1 == '5')e = 'X';
	if(p1 == '6')f = 'X';
	if(p1 == '7')g = 'X';
	if(p1 == '8')h = 'X';
	if(p1 == '9')i = 'X';
	
	cout<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
		<<"*"<<a<<"*"<<b<<"*"<<c<<"*"<<endl
		<<"*"<<d<<"*"<<e<<"*"<<f<<"*"<<endl
		<<"*"<<g<<"*"<<h<<"*"<<i<<"*"<<endl
		<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl;
	cout<<"----------"<<endl<<endl
		<<"----------"<<endl;
		
		
	if(a == 'O' and b == 'O' and c == '#')c = 'O';
	else if(b == 'O' and c == 'O' and a == '#')a = 'O';
	else if(a == 'O' and c == 'O' and b == '#')b = 'O';
	else if(d == 'O' and e == 'O' and f == '#')f = 'O';
	else if(f == 'O' and e == 'O' and d == '#')d = 'O';
	else if(d == 'O' and f == 'O' and e == '#')e = 'O';
	else if(g == 'O' and h == 'O' and i == '#')i = 'O';
	else if(i == 'O' and h == 'O' and g == '#')g = 'O';
	else if(g == 'O' and i == 'O' and h == '#')h = 'O';
	///
	else if(a == 'O' and e == 'O' and i == '#')i = 'O';
	else if(i == 'O' and e == 'O' and a == '#')a = 'O';
	else if(a == 'O' and i == 'O' and e == '#')e = 'O';
	else if(c == 'O' and e == 'O' and g == '#')g = 'O';
	else if(g == 'O' and e == 'O' and c == '#')c = 'O';
	else if(c == 'O' and g == 'O' and e == '#')e = 'O';
	///
	else if(c == 'O' and f == 'O' and i == '#')i = 'O';
	else if(a == 'O' and d == 'O' and g == '#')g = 'O';
	else if(g == 'O' and d == 'O' and a == '#')a = 'O';
	else if(a == 'O' and g == 'O' and d == '#')d = 'O';
	else if(b == 'O' and e == 'O' and h == '#')h = 'O';
	else if(h == 'O' and e == 'O' and b == '#')b = 'O';
	else if(h == 'O' and b == 'O' and e == '#')e = 'O';
	else if(i == 'O' and f == 'O' and c == '#')c = 'O';
	else if(c == 'O' and i == 'O' and f == '#')f = 'O';
	
	///
	
	else if(a == 'X' and b == 'X' and c == '#')c = 'O';
	else if(b == 'X' and c == 'X' and a == '#')a = 'O';
	else if(a == 'X' and c == 'X' and b == '#')b = 'O';
	else if(d == 'X' and e == 'X' and f == '#')f = 'O';
	else if(f == 'X' and e == 'X' and d == '#')d = 'O';
	else if(d == 'X' and f == 'X' and e == '#')e = 'O';
	else if(g == 'X' and h == 'X' and i == '#')i = 'O';
	else if(i == 'X' and h == 'X' and g == '#')g = 'O';
	else if(g == 'X' and i == 'X' and h == '#')h = 'O';
	///
	else if(a == 'X' and e == 'X' and i == '#')i = 'O';
	else if(i == 'X' and e == 'X' and a == '#')a = 'O';
	else if(a == 'X' and i == 'X' and e == '#')e = 'O';
	else if(c == 'X' and e == 'X' and g == '#')g = 'O';
	else if(g == 'X' and e == 'X' and c == '#')c = 'O';
	else if(c == 'X' and g == 'X' and e == '#')e = 'O';
	///
	else if(c == 'X' and f == 'X' and i == '#')i = 'O';
	else if(a == 'X' and d == 'X' and g == '#')g = 'O';
	else if(g == 'X' and d == 'X' and a == '#')a = 'O';
	else if(a == 'X' and g == 'X' and d == '#')d = 'O';
	else if(b == 'X' and e == 'X' and h == '#')h = 'O';
	else if(h == 'X' and e == 'X' and b == '#')b = 'O';
	else if(h == 'X' and b == 'X' and e == '#')e = 'O';
	else if(i == 'X' and f == 'X' and c == '#')c = 'O';
	else if(c == 'X' and i == 'X' and f == '#')f = 'O';




	cout<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
		<<"*"<<a<<"*"<<b<<"*"<<c<<"*"<<endl
		<<"*"<<d<<"*"<<e<<"*"<<f<<"*"<<endl
		<<"*"<<g<<"*"<<h<<"*"<<i<<"*"<<endl
		<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl;
	cout<<"----------"<<endl<<endl
		<<"----------"<<endl;
		
	if(a == 'O' and b == 'O' and c == 'O' or d == 'O' and e == 'O' and f == 'O' or g == 'O' and h == 'O' and i == 'O')
	{
		cout<<endl<<"<<O>> a win!"<<endl;
		while(true)
		{
			
		}
	}
	else if(a == 'O' and d == 'O' and g == 'O' or b == 'O' and e == 'O' and h == 'O' or c == 'O' and f == 'O' and i =='O')
	{
		cout<<endl<<"<<O>> a win!"<<endl;
		while(true)
		{
			
		}
	}
	else if(a == 'O' and e == 'O' and i == 'O' or c == 'O' and e == 'O' and g == 'O')
	{
		cout<<endl<<"<<O>> a win!";
	}
	
	///
	
	if(a == 'X' and b == 'X' and c == 'X' or d == 'X' and e == 'X' and f == 'X' or g == 'X' and h == 'X' and i == 'X')
	{
		cout<<endl<<"<<X>> a win!"<<endl;
		while(true)
		{
			
		}
	}
	else if(a == 'X' and d == 'X' and g == 'X' or b == 'X' and e == 'X' and h == 'X' or c == 'X' and f == 'X' and i =='X')
	{
		cout<<endl<<"<<X>> a win!"<<endl;
		while(true)
		{
			
		}
	}
	else if(a == 'X' and e == 'X' and i == 'X' or c == 'X' and e == 'X' and g == 'X')
	{
		cout<<endl<<"<<X>> a win!";
	}
	
	cout<<"player(X): ";
	cin>>p1;
	if(p1 == '1')a = 'X';
	if(p1 == '2')b = 'X';
	if(p1 == '3')c = 'X';
	if(p1 == '4')d = 'X';
	if(p1 == '5')e = 'X';
	if(p1 == '6')f = 'X';
	if(p1 == '7')g = 'X';
	if(p1 == '8')h = 'X';
	if(p1 == '9')i = 'X';
	
	cout<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
		<<"*"<<a<<"*"<<b<<"*"<<c<<"*"<<endl
		<<"*"<<d<<"*"<<e<<"*"<<f<<"*"<<endl
		<<"*"<<g<<"*"<<h<<"*"<<i<<"*"<<endl
		<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl;
	cout<<"----------"<<endl<<endl
		<<"----------"<<endl;
				
				
	if(a == 'O' and b == 'O' and c == '#')c = 'O';
	else if(b == 'O' and c == 'O' and a == '#')a = 'O';
	else if(a == 'O' and c == 'O' and b == '#')b = 'O';
	else if(d == 'O' and e == 'O' and f == '#')f = 'O';
	else if(f == 'O' and e == 'O' and d == '#')d = 'O';
	else if(d == 'O' and f == 'O' and e == '#')e = 'O';
	else if(g == 'O' and h == 'O' and i == '#')i = 'O';
	else if(i == 'O' and h == 'O' and g == '#')g = 'O';
	else if(g == 'O' and i == 'O' and h == '#')h = 'O';
	///
	else if(a == 'O' and e == 'O' and i == '#')i = 'O';
	else if(i == 'O' and e == 'O' and a == '#')a = 'O';
	else if(a == 'O' and i == 'O' and e == '#')e = 'O';
	else if(c == 'O' and e == 'O' and g == '#')g = 'O';
	else if(g == 'O' and e == 'O' and c == '#')c = 'O';
	else if(c == 'O' and g == 'O' and e == '#')e = 'O';
	///
	else if(c == 'O' and f == 'O' and i == '#')i = 'O';
	else if(a == 'O' and d == 'O' and g == '#')g = 'O';
	else if(g == 'O' and d == 'O' and a == '#')a = 'O';
	else if(a == 'O' and g == 'O' and d == '#')d = 'O';
	else if(b == 'O' and e == 'O' and h == '#')h = 'O';
	else if(h == 'O' and e == 'O' and b == '#')b = 'O';
	else if(h == 'O' and b == 'O' and e == '#')e = 'O';
	else if(i == 'O' and f == 'O' and c == '#')c = 'O';
	else if(c == 'O' and i == 'O' and f == '#')f = 'O';
	
	///
	
	else if(a == 'X' and b == 'X' and c == '#')c = 'O';
	else if(b == 'X' and c == 'X' and a == '#')a = 'O';
	else if(a == 'X' and c == 'X' and b == '#')b = 'O';
	else if(d == 'X' and e == 'X' and f == '#')f = 'O';
	else if(f == 'X' and e == 'X' and d == '#')d = 'O';
	else if(d == 'X' and f == 'X' and e == '#')e = 'O';
	else if(g == 'X' and h == 'X' and i == '#')i = 'O';
	else if(i == 'X' and h == 'X' and g == '#')g = 'O';
	else if(g == 'X' and i == 'X' and h == '#')h = 'O';
	///
	else if(a == 'X' and e == 'X' and i == '#')i = 'O';
	else if(i == 'X' and e == 'X' and a == '#')a = 'O';
	else if(a == 'X' and i == 'X' and e == '#')e = 'O';
	else if(c == 'X' and e == 'X' and g == '#')g = 'O';
	else if(g == 'X' and e == 'X' and c == '#')c = 'O';
	else if(c == 'X' and g == 'X' and e == '#')e = 'O';
	///
	else if(c == 'X' and f == 'X' and i == '#')i = 'O';
	else if(a == 'X' and d == 'X' and g == '#')g = 'O';
	else if(g == 'X' and d == 'X' and a == '#')a = 'O';
	else if(a == 'X' and g == 'X' and d == '#')d = 'O';
	else if(b == 'X' and e == 'X' and h == '#')h = 'O';
	else if(h == 'X' and e == 'X' and b == '#')b = 'O';
	else if(h == 'X' and b == 'X' and e == '#')e = 'O';
	else if(i == 'X' and f == 'X' and c == '#')c = 'O';
	else if(c == 'X' and i == 'X' and f == '#')f = 'O';
	else
	{
		if(a == '#')a = 'O';
		else if(b == '#')b = 'O';
		else if(c == '#')c = 'O';
		else if(d == '#')d = 'O';
		else if(e == '#')e = 'O';
		else if(f == '#')f = 'O';
		else if(g == '#')g = 'O';
		else if(h == '#')h = 'O';
		else if(i == '#')i = 'O';
	}
	
	/*cout<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
		<<"*"<<a<<"*"<<b<<"*"<<c<<"*"<<endl
		<<"*"<<d<<"*"<<e<<"*"<<f<<"*"<<endl
		<<"*"<<g<<"*"<<h<<"*"<<i<<"*"<<endl
		<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl;
	cout<<"----------"<<endl<<endl
		<<"----------"<<endl;*/
		
	cout<<"player(X): "<<endl;
	
	if(a == '#')a = 'X';
	else if(b == '#')b = 'X';
	else if(c == '#')c = 'X';
	else if(d == '#')d = 'X';
	else if(e == '#')e = 'X';
	else if(f == '#')f = 'X';
	else if(g == '#')g = 'X';
	else if(h == '#')h = 'X';
	else if(i == '#')i = 'X';
	
	cout<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
		<<"*"<<a<<"*"<<b<<"*"<<c<<"*"<<endl
		<<"*"<<d<<"*"<<e<<"*"<<f<<"*"<<endl
		<<"*"<<g<<"*"<<h<<"*"<<i<<"*"<<endl
		<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl;
	cout<<"----------"<<endl<<endl
		<<"----------"<<endl;
		
	if(a == 'O' and b == 'O' and c == 'O' or d == 'O' and e == 'O' and f == 'O' or g == 'O' and h == 'O' and i == 'O')
	{
		cout<<endl<<"<<O>> a win!"<<endl;
		while(true)
		{
			
		}
	}
	else if(a == 'O' and d == 'O' and g == 'O' or b == 'O' and e == 'O' and h == 'O' or c == 'O' and f == 'O' and i =='O')
	{
		cout<<endl<<"<<O>> a win!"<<endl;
		while(true)
		{
			
		}
	}
	else if(a == 'O' and e == 'O' and i == 'O' or c == 'O' and e == 'O' and g == 'O')
	{
		cout<<endl<<"<<O>> a win!";
	}
	
	///
	
	if(a == 'X' and b == 'X' and c == 'X' or d == 'X' and e == 'X' and f == 'X' or g == 'X' and h == 'X' and i == 'X')
	{
		cout<<endl<<"<<X>> a win!"<<endl;
		while(true)
		{
			
		}
	}
	else if(a == 'X' and d == 'X' and g == 'X' or b == 'X' and e == 'X' and h == 'X' or c == 'X' and f == 'X' and i =='X')
	{
		cout<<endl<<"<<X>> a win!"<<endl;
		while(true)
		{
			
		}
	}
	else if(a == 'X' and e == 'X' and i == 'X' or c == 'X' and e == 'X' and g == 'X')
	{
		cout<<endl<<"<<X>> a win!";
	}
	
	cout<<endl<<"X = O!"<<endl;
	while(true)
	{
		
	}
	
}
