#include <iostream>
using namespace std;

union Measurement {
    int length;
    float weight;
};

// Function to modify union member
void setLength(Measurement *m, int len) {
    m->length = len;
}

void setWeight(Measurement *m, float wt) {
    m->weight = wt;
}

int main() {
    Measurement m;

    // Manipulate length
    setLength(&m, 25);
    cout << "Length: " << m.length << endl;

    // Manipulate weight (overwrites length)
    setWeight(&m, 72.5);
    cout << "Weight: " << m.weight << endl;

    // Accessing overwritten length (undefined behavior)
    cout << "Accessing overwritten Length: " << m.length << endl;

    return 0;
}

/*
Length: 25
Weight: 72.5
Accessing overwritten Length: 1116798976
*/