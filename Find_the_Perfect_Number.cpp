#include <iostream>
using namespace std;

void isPerfect(int min, int max);


int main(){

int start;
int limit;

cout<<"Enter starting number: ";
cin>>start;

cout<<"Enter ending number: ";
cin>>limit;

cout<<"The perfect numbers between "<<start<<" and " <<limit<< " are "<<endl;
isPerfect(start,limit);

return 0;
}

void isPerfect(int min, int max){

   int factorSum;
       
    for(int i = min; i <= max; i++){  // loops trhough all  numbers in the set
        factorSum = 0;

        for (int n = 1; n <= i/2; n++){  // find all the divisor. i/2 is nesscessary to avoid going beyond the limits
            if (i % n == 0)
                factorSum += n;    //adding all the factors; to later check if equals the value of original num.
        }

        if (factorSum == i){    //if the sum-of-factors equals one of the original numbers from the set then execute.
            
            cout << i << endl <<"The divisors are: ";   //prints perfect-number
            for (int factors =1; factors<=factorSum; factors++){
             if( (factorSum % factors == 0) && (factorSum != factors) ){  //find all the factors of the num & exculde itself
             cout<< factors<<", ";     }   //print factors
            }
            cout<<endl<<endl;
          }
    }  
  }