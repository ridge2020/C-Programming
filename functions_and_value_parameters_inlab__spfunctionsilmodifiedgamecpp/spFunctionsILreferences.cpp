#include<iostream>
#include<math.h>
 using namespace std;




double findQuadraticRoots(double a, double b, double c, double& x1, double& x2){
    double discriminant;
    discriminant = ((pow(2, b))-(4 * a * c));
    if(discrimininant < 0){
        return 0;
    }
    if(discriminant == 0){
        x1 = ((-b)/(2 * a));
        cout << x1 << endl;
        return 1;
    }
    else{
        x1 = (-b) + sqrt((pow(2,b)-(4 * a * c))/(2 * a));
        x2 = (-b) - sqrt((pow(2,b)-(4 * a * c))/(2 * a));
        cout << x1 << setw(20) << x2 << endl;
        return 2;
    }
}

int main(){
    int roots;
    roots = findQuadraticRoots(2, 3, 3, 1, 1);
    cout << roots << endl;
}