// ex00e1 : Time After
#include <iostream>

using namespace std;

int main() {
    int hour, min, add_min;
    cin >> hour >> min;
    cin >> add_min;
    if (min + add_min >= 60) {
        hour += (add_min + min) / 60;
        min = (min + add_min) % 60;
    } else {
        min += add_min;
    }
    if (hour >= 24) {
        hour = hour % 24;
    }
    if ((hour < 10 and min < 10)) {
        cout << "0" << hour << " " << "0" << min << endl;
    } else if (min < 10) {
        cout << hour << " " << "0" << min << endl;
    } else if (hour < 10) {
        cout << "0" << hour << " " << min << endl;
    } else {
        cout << hour << " " << min << endl;
    }
}
