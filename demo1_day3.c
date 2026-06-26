#include<stdio.h>
int g = 10
namespace ns1
{
int connector = 3307;
namespace nns
{
int value = 100;

}
}
namespcae ns2
{
	int connector = 2268;
	int num1 = 11;
	int num2 = 22;
	int num3 = 33;
	int num4 = 44;
	int num5 = 55;

}
int main()
{
	printf("\n value of g = %d",g);
	printf("\n value of g = %d"::g);

	printf("\n connector = %d",ns1::connector);
	printf("\n ns1::nns::value = %d",ns1::nns::value);

	printf("value of ns2::num1 = %d",ns2::num1);

	using namespace ns2;

	printf("\n value of ns2::num1 = %d",num1);

	return 0;


}
