#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int count = 0;
    double sum=0,sumS=0;
    string score;
    ifstream source("score.txt");
    while(getline(source,score)){
        sum += atof(score.c_str());
        sumS += atof(score.c_str())*atof(score.c_str());
        count++;
    }
    double mean;
    mean=(sum/count);
    cout << "Number of data = " << count <<endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sqrt(sumS*(1.0/count)-(mean*mean));
}