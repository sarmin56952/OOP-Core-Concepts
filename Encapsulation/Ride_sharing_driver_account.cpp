#include<bits/stdc++.h>
using namespace std;

class DriverAccount {
private:
    string driverName;
    double rating;
    double totalEarning;

public:
    DriverAccount(string dr_Name) {
        driverName = dr_Name;
        rating = 5.0;
        totalEarning = 0.0;
    }

    void completeRide(double fare) {
        if (fare > 0) {
            totalEarning += fare;
            cout << "Ride completed! Earned: " << fare << " TK" << endl;
        } else {
            cout << "Invalid fare!" << endl;
        }
    }

    void updateRating(double newReview) {
        // ১ থেকে ৫ এর মধ্যে রিভিউ হলে তবেই রেটিং আপডেট হবে
        if (newReview >= 1.0 && newReview <= 5.0) {
            rating = (rating + newReview) / 2.0;
            cout << "Rating updated successfully!" << endl;
        } else {
            cout << "Error: Invalid rating! Review must be between 1.0 and 5.0" << endl;
        }
    }

    void displayDashboard() {
        cout << "\n--- Driver Dashboard ---" << endl;
        cout << "Driver Name: " << driverName << endl;
        cout << "Earnings: " << totalEarning << " TK" << endl;
        cout << "Current Rating: " << rating << endl;
        cout << "------------------------\n" << endl;
    }
};

int main() {
   
    DriverAccount d("sarmin");
    
    d.displayDashboard(); // শুরুতে চেক
    
    d.completeRide(250.50);
    d.updateRating(4.0);  // ভ্যালিড রেটিং (গড় হবে ৪.৫)
    
    d.updateRating(6.5);  // ইনভ্যালিড রেটিং (এরর দেখাবে, রেটিং ৪.৫ ই থাকবে)
    
    d.displayDashboard(); // ফাইনাল ড্যাশবোর্ড
    
    return 0;
}