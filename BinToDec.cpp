#include<iostream>
using namespace std;
void con_dec_to_Bin(int num)
{
	int binaryArr[8] = {0};
	int idx = 7;
    while (idx >= 0 ) 
	{
        binaryArr[idx] = num % 2 ;
        num = num / 2 ;
        idx-- ;
    }
    
	while( idx++ < 7 )
	{
		cout<<binaryArr[idx]<<" ";
	}
}

int main()
{
	int dec_number;
	cout<<"Enter a decimal number: ";
	cin>>dec_number;
	
	con_dec_to_Bin(dec_number);
	
	return 0;
}
