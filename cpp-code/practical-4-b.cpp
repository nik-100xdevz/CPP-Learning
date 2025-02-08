
// b. Write a friend function for adding two different distances and display its sum using two classes.
#include <iostream>
using namespace std;

class Distance; // Forward declaration of the class

// Class to represent the Distance
class Distance {
private:
    float meters; // The distance in meters

public:
    // Constructor to initialize distance
    Distance(float m = 0) : meters(m) {}

    // Friend function declaration to add two Distance objects
    friend Distance addDistance(Distance, Distance);

    // Function to display the distance
    void display() const {
        cout << meters << " meters" << endl;
    }
};

// Friend function to add two Distance objects
Distance addDistance(Distance d1, Distance d2) {
    // Adding the meters of both Distance objects
    float totalDistance = d1.meters + d2.meters;
    return Distance(totalDistance); // Return a new Distance object with the sum
}

int main() {
    Distance d1(10.5), d2(15.7); // Initialize distances
    Distance result = addDistance(d1, d2); // Add the distances using friend function
    cout << "The total distance is: ";
    result.display(); // Display the result
    return 0;
}
