#include <iostream>
using namespace std;

unsigned long isSimple(long int numb) {
    long int squareMemory(0), numberOfDeviders(0), sum(0);
    
    for (int i = 1; numb / i >= i; i++) {
        if (numb % i == 0 && numb / i >= i) {
            cout << i << " * " << numb / i << endl;
            sum += i + numb / i;
            numberOfDeviders += 2;
            squareMemory = i == numb / i ? i : 0;
        }
    }
    if (squareMemory != 0) cout << "Square Root is " << squareMemory << "." << endl;
    string question(((sum - numb) == numb) ? "eql" : "NOT eql");
    cout << "Sum of deviders (sum - numb): " << sum - numb << ", " << question << endl;
    return numberOfDeviders;
}

void start() {
    long int numb = 0;
    cout << "Input the number: ";
    cin >> numb;
    
    unsigned long devCounter = isSimple(numb);
    if ( devCounter == 2 ){
        cout << "Is prime." << endl;
    } else {
        cout << "Is NOT prime. " << devCounter << " deviders." << endl;
    }
    
}

int main() {
    start();
}
