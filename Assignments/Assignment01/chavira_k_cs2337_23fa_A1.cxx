// Kate Chavira
// 1096539
 #include <iostream>
 #include <iomanip>
 using namespace std;

double trans_cost(double USD) {
    double fee;
    if (USD <= 100) {
       fee = 5.98;
    }  
    else if (USD <= 3000) {
        fee = 9.99;
    }
    else if(USD > 3000) {
        fee = 19.95;
    }
    return USD + fee;
}

double currency_conversion(double USD, int currency_option) {
    double exchange_rate;
    if (currency_option == 1) {
        exchange_rate = 146.56;
    }
    else if(currency_option == 2) {
        exchange_rate = 17.18;
    }
    else if(currency_option == 3) {
        exchange_rate = 82.72;
    }
    else if(currency_option == 4) {
        exchange_rate = 0.79;
    } 
    return USD * exchange_rate;
}

int print_menu() {
    int input;
    cout << "\nAvailable currencies to convert from US Dollar (USD) " << endl;
    cout << "[1] Japanese Yen (JPY)" << endl;
    cout << "[2] Mexican Peso (MXN)" << endl; 
    cout << "[3] Indian Rupee (INR)" << endl; 
    cout << "[4] British Pound Sterling (GBP)" << endl;
    cout << "[0] Quit " << endl;
    cout<< "Select an option (0 to 4): ";
    cin >> input;
    return input;
}

int main() {

    double USD;
    int currency_option;

    currency_option = print_menu();

    while(currency_option != 0) {
        cout << "Enter USD amount: ";
        cin >> USD;

        double amount_due = trans_cost(USD);
        double amount_received = currency_conversion(USD, currency_option);

        cout << fixed << setprecision(2);

        cout << "\nAmount Due: " << amount_due << " USD" << endl;
        cout << "Amount Received: " << amount_received << " ";
   
        if(currency_option == 1) {
            cout << "JPY" << endl;
        }
        else if(currency_option == 2) {
            cout << "MXN" << endl;
        }
        else if(currency_option == 3) {
            cout << "INR" << endl;
        }   
        else if(currency_option == 4) {
            cout << "GBP" << endl;
        }     
        currency_option = print_menu();
    }
    return 0;
}