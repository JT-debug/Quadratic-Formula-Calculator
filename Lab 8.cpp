/**********************************************************************
Programmer: J.T. Sundara
Purpose: This program solves and displays quadratic equations
**********************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

//functions
int quadraticdiscriminant(double a, double b, double c, double& root1, double& root2);
void getinput(double& a, double& b, double& c);
void quadraticdisplay(double& root1, double& root2, double a, double b, double c);

int main() {
    char run; // variable needed for user to run program again
    //header
    cout << "lab 8 programmming excercise 1 by J.T. Sundara" << endl;
    cout << "quadratic equation program\n" << endl;
    do {
        double a, b, c, root1, root2;
        //display required information for user to use program
        getinput(a, b, c);
        //display calculations
        quadraticdisplay(root1,root2,a,b,c);
        // ask user if they want to repeat the program
            cout << "Would you like to run the program again? (Y/N): ";
        cin >> run;
        cout << endl;
    } while (run == 'y' || run == 'Y');
    return 0;
}



// void function to display and ask user required information
void getinput(double& a, double& b, double& c) {
    //ask user required information to run program
    cout << "Enter value for a: ";
    cin >> a;
    while (a == 0) { // quadratic formula is not applicable if a is 0 because a uses division 
        cout << "ERROR: cannot divide by 0\n\n" <<"please enter a valid number for a: ";
        cin >> a;
    }
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;
}

//funtion for discriminant
int quadraticdiscriminant(double a, double b, double c, double& root1, double& root2) {
    double discriminant;
      return discriminant = b * b - 4 * a * c;

}

//void funtion to display results of calculation
//notes to self:
//positive = 2 real solutions
//0 = 1 solution
//negative = complex solutions
void quadraticdisplay(double& root1,double& root2, double a, double b, double c) {
    double answer;
    answer = quadraticdiscriminant(a,b,c,root1,root2); //assign discriminant to variable
    if ( answer > 0) {//2 real solution display
        root1 = (-b + sqrt(answer)) / (2 * a);
        root2 = (-b - sqrt(answer)) / (2 * a);
        cout << "The two roots are " << root1 << " and " << root2 << endl;
    }
    else if (answer == 0) { // one real solution display
        root1 = -b / (2 * a);
        root2 = root1;
        cout << "there is only one root: " << root1 << endl;
        
    }
    else if (answer < 0) { // complex roots display
        cout << "the equation has complex roots\n"; 
    }
}
