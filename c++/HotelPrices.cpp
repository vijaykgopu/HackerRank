#include <iostream>
#include <vector>

using namespace std;

class HotelRoom {
    private:
        int bedrooms;
        int bathrooms;

    public:
        HotelRoom(int bed, int bath) : bedrooms(bed), bathrooms(bath) {   
        }
    
        virtual int get_price() {
            return (50 * bedrooms) + (100 * bathrooms);
        }

};

class HotelApartment : public HotelRoom {
    public:
        HotelApartment(int bed, int bath) : HotelRoom(bed, bath) {
        }

        int get_price() {
            return HotelRoom::get_price() + 100;
        }
};
 
int main() {
    int n;
    cin >> n;
    
    vector <HotelRoom *> rooms;
    
    for (int i = 0; i < n; ++i) {
        string room_type;
        cin >> room_type;
        
        int bedrooms;
        int bathrooms;
        cin >> bedrooms >> bathrooms;
        
        if (room_type == "standard")
            rooms.push_back(new HotelRoom(bedrooms, bathrooms));
        else
            rooms.push_back(new HotelApartment(bedrooms, bathrooms));
    }

    int total_profit = 0;
    for (auto room : rooms)
        total_profit += room->get_price();

    cout << total_profit << endl;

    for (auto room : rooms)
        delete room;
    
    rooms.clear();

    return 0;
}
