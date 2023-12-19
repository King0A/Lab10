//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
        float num = 0;
        float sum = 0;
        float sum2 = 0;
        string n;
        ifstream source("score.txt");
        while (getline(source,n))
        {
                sum += atof(n.c_str());
                sum2 += pow(atof(n.c_str()),2);
                num++;
        }
        float m =(1/num)*sum;
        float b =sqrtf(((1/num)*sum2)-pow(m,2));
        cout << "Number of data = " <<num<< "\n";
        cout << setprecision(3);
        cout << "Mean = " << m << "\n";
        cout << "Standard deviation = " << b;
}