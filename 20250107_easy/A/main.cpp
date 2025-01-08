#include <iostream>

int main() {
    int M, D;
    int y, m, d;
    std::cin >> M >> D;
    std::cin >> y >> m >> d;

    const int DAYSOFYEAR = M * D;
    const int DAYSOFMONTH = D;
    // counted from 0/1/1
    int days = y * DAYSOFYEAR + (m - 1) * DAYSOFMONTH + (d - 1);
    int next_days = days + 1;
    int year = next_days / DAYSOFYEAR;
    int month = (next_days % DAYSOFYEAR) / DAYSOFMONTH + 1;
    int day = (next_days % DAYSOFYEAR) % DAYSOFMONTH + 1;

    std::cout << year << " " << month << " " << day << std::endl;

    return 0;
}
