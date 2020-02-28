#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

//Write definition of randData(), showData() and findColSum()
void randData(double *dPtr,int N, int M){
	for (int i = 0; i < 49; i++)
	{
		        *dPtr = rand()%99/100.00;
				*dPtr++;
	}
	           
}	     

void showData(double *dPtr,int N,int M){
		for (int i = 0; i < N; i++)
		{
		  for (int j = 0; j < M; j++)
		  {
			  cout << *dPtr <<" ";
			  *dPtr++;
		  }
		  cout <<"\n";
		}
	}

void findColSum(const double *dPtr,double *result,int M,int N){
    double sum =0;
	 for (int i = 0; i < N*M; i++)
	 {
		 sum += *dPtr;
		 if(i%M == M-1){
			 *result = sum;
			 sum =0;
			*result++;
			 dPtr-=41;
		 }else{
			 dPtr+=M;
		 }
}
}