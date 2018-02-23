#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void switchpin(char c);
int main(int argc, char** argv) {
	string c;
cin>>c;
	int i;
	for(i=0;i<c.length();i++)
	{
		switchpin(c[i]);
		if(i!=c.length()-1)
		{
			cout<<" ";
		}
	}
	return 0;
}
void switchpin(char c)
{
	switch(c){

		case '-':cout<<"fu";break;
		case '1':cout<<"yi";break;
		case '2':cout<<"er";break;
		case '3':cout<<"san";break;
		case '4':cout<<"si";break;
		case '5':cout<<"wu";break;
		case '6':cout<<"liu";break;
		case '7':cout<<"qi";break;
		case '8':cout<<"ba";break;
		case '9':cout<<"jiu";break;
		case '0':cout<<"ling";break;
}
}
