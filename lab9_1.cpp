#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double loan , rate , pay ;
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> pay ;

	double Interest , Total , NewBalance ;
	int EndOfYear = 1;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while (loan != 0){
	cout << fixed << setprecision(2);
	cout << setw(13) << left << EndOfYear ; 
	cout << setw(13) << left << loan;
	Interest = loan * (rate / 100) ;
	cout << setw(13) << left << Interest ;
	Total = loan + Interest ; 
	cout << setw(13) << left << Total ;
	if (Total < pay){
		pay = Total ;
	}
	cout << setw(13) << left << pay;
	NewBalance = Total - pay ;
	cout << setw(13) << left << NewBalance ;
	loan = NewBalance ;
	cout << "\n";
	EndOfYear++ ;
	}
	return 0;
}
