#ifndef SEAT_H
#define SEAT_H

enum SeatType
{
    FACULTY_SEAT,
    STUDENT_SEAT
};

class Seat
{
private:
    int number;
    SeatType type;
    bool booked;

public:
    Seat() {}
    Seat(int num, SeatType t) : number(num), type(t), booked(false) {}
    bool isBooked() const { return booked; }
    SeatType getType() const { return type; }
    void bookSeat() { booked = true; }
};

#endif
