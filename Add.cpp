#include<iostram>
using namespace std;

int Add(int a,int b)
{
	if(0 == b)
		return a;
	int sum = a^b;
	int Tmp = (a&b)<<1;
	return Add(sum,Tmp);
}
int main()
{
	cout<<Add(5,3)<<endl;
	return 0;
}