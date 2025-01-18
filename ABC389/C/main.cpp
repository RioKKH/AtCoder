#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <sstream>
#include <string>
#include <vector>

int main() {
    // std::string Q;
    // std::getline(std::cin, Q);
    int Q;
    std::cin >> Q;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string query;
    std::list<int> head;
    std::list<int> tail;

    for (int i = 0; i < Q; i++) {
        int num = 0;
        std::vector<int> numbers;

        std::getline(std::cin, query);
        // std::cout << "query: " << query << std::endl;

        std::istringstream iss(query);
        while (iss >> num) {
            numbers.push_back(num);
        }

        if (numbers.size() == 1) { // 入力サイズが１の時
            // 2に限定、且つ要素のサイズが非０であることが補償されている
            if (!head.empty() && !tail.empty()) {
                head.pop_front();
                int offset = tail.front();
                tail.pop_front();
                for (auto &h : head) {
                    h -= (offset + 1);
                }
                for (auto &t : tail) {
                    t -= (offset + 1);
                }
            }
        } else if (numbers.size() == 2) { // 入力サイズが2の時
            if (numbers[0] == 1) {
                head.push_back(tail.back() + 1);
                tail.push_back(tail.back() + numbers[1]);
            } else if (numbers[0] == 3) {
                auto it = head.begin();
                std::advance(it, numbers[1] - 1);
                int kthValue = *it;
                std::cout << kthValue << std::endl;
            }
        }
    }

    return 0;
}
