int sum2num( int a, int b )
{
	return a + b;
}

int minus2num( int a, int b )
{
	return a - b;
}

int multi2num( int a, int b )
{
	return a * b;
}

int main()
{
	int result = sum2num( 2, 14 ) + minus2num( 2, 14 ) + multi2num( 2, 14 );
}
