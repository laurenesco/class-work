#include <iostream>
#include <string>
using namespace std;

class Loan {
private:
  float loanAmount;
  float numberOfYears;
  float interestRate;

public:
  //constructor methods
  Loan(float amount, float years, float rate);
  //accessor methods
  float getLoanAmount();
  float getNumberOfYears();
  float getInterestRate();
  //mutator methods
  void setInterestRate();
  void setNumberofYears();
  void setLoanAount();

  float calculateMonthlyPayment();
  float calculateTotalPayment();
  string printPaymentTable();
  string printSinglePayment();
};

int main (int argc, char **argv)
{
  if(argc < 3)
  {
    cout << "Error";
  }

  return 0;
}
