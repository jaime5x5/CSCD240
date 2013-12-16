//wed1120

double sumFunc(int max, int start){
	int k;
	double sum = 0.0:
	for (k = start; k <= max; k++)
	{
		sum += f(k)*f(k);
	}
}

double *f();//function called f takes no params & a ptr of type double
double (*f)();// a pointer to a function that function takes no params and retuns a double.
double *(*f)(int);

double sumOfSquares(double (*f)(double), int m, int n){

	int x; 
	double sum = 0.0
	for (x = m; x < n; x++)
	{
		sum += f(k) * f(k);
	}
}

gcc *.c lm //on cslinux need to do this so that it will do math.