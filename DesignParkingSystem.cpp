class ParkingSystem {
public: vector<int> cars;
public:
    ParkingSystem(int big, int medium, int small) {
        cars = { big,medium,small };
    }

    bool addCar(int carType) {
        if (carType == 1) {
            if (cars[0] > 0) {
                cars[0]--;
                return true;
            }
        }
        else if (carType == 2) {
            if (cars[1] > 0) {
                cars[1]--;
                return true;
            }
        }
        else if (carType == 3) {
            if (cars[2] > 0) {
                cars[2]--;
                return true;
            }
        }
        return false;
    }
};