#include <iostream>
#include <string>
using namespace std;

// Temperature class
class Temperature {
private:
    double temperature; // Member variable to store temperature

public:
    // Constructor
    Temperature(double temp = 0.0) : temperature(temp) {}

    // Accessor
    double getTemperature() const {
        return temperature;
    }

    // Mutator
    void setTemperature(double temp) {
        temperature = temp;
    }

    // Member functions to check freezing/boiling points for various substances
    bool isEthylFreezing() const {
        return temperature <= -114.1; // Freezing point of ethyl alcohol in Celsius
    }

    bool isEthylBoiling() const {
        return temperature >= 78.37; // Boiling point of ethyl alcohol in Celsius
    }

    bool isOxygenFreezing() const {
        return temperature <= -218.79; // Freezing point of oxygen in Celsius
    }

    bool isOxygenBoiling() const {
        return temperature >= -182.96; // Boiling point of oxygen in Celsius
    }

    bool isWaterFreezing() const {
        return temperature <= 0.0; // Freezing point of water in Celsius
    }

    bool isWaterBoiling() const {
        return temperature >= 100.0; // Boiling point of water in Celsius
    }

    bool isNitrogenFreezing() const {
        return temperature <= -210.0; // Freezing point of nitrogen in Celsius
    }

    bool isNitrogenBoiling() const {
        return temperature >= -195.79; // Boiling point of nitrogen in Celsius
    }
};

int main() {
    double tempInput;
    cout << "Enter a temperature in Celsius: ";
    cin >> tempInput;

    Temperature temp(tempInput);

    // Display substances that freeze
    cout << "\nAt " << tempInput << "°C, the following substances will freeze:\n";
    if (temp.isEthylFreezing()) cout << "- Ethyl Alcohol\n";
    if (temp.isOxygenFreezing()) cout << "- Oxygen\n";
    if (temp.isWaterFreezing()) cout << "- Water\n";
    if (temp.isNitrogenFreezing()) cout << "- Nitrogen\n";

    // Display substances that boil
    cout << "\nAt " << tempInput << "°C, the following substances will boil:\n";
    if (temp.isEthylBoiling()) cout << "- Ethyl Alcohol\n";
    if (temp.isOxygenBoiling()) cout << "- Oxygen\n";
    if (temp.isWaterBoiling()) cout << "- Water\n";
    if (temp.isNitrogenBoiling()) cout << "- Nitrogen\n";

    return 0;
}
