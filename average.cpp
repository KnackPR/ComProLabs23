#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char *argv[]){
    double sum = 0;
    if(argc > 1 ){
        for(int  i = 1 ; i < argc ; i++){
            sum += atof(argv[i]); 
        }
    double avg = sum/(argc-1);
    cout << "---------------------------------\n";
    cout << "Average of "<< argc-1 << " numbers = " << avg << '\n';
    cout << "---------------------------------";
    }else{
        cout << "Please input numbers to find average.";
    }
}
