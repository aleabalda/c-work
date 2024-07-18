#include <string>
#include <vector>
using namespace std;

class Company
{
private:
    string companyName;
    string companyAddress;
    vector<string> employees;     // vector of information about employees’ information
                                  // (name, address, date of birth)
    string dateEstablished;       // the date that company was established
    vector<string> employeeState; // information about employees' current states
                                  //(active, suspended, retired, fired)
    vector<string> customers;     // vector of information about customers
                                  // (name, address, phone)

public:
    // Public member functions (getters and setters) can be added here.
};
