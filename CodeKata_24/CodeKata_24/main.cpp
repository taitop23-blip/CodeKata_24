// main.cpp

#include <string>
#include <vector>

std::string solution(std::vector<std::string> seoul) {
    std::string answer = "";

    for (int i = 0; i < seoul.size(); ++i) {
        if (seoul[i] == "Kim") {
            return "김서방은" + std::to_string(i) + "에 있다";
        }
    }
    return answer;
}

