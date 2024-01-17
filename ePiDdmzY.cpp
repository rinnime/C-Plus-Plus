#include <iostream>
#include <fstream>
#include <unordered_map>
#include <vector>
#include <numeric>

using namespace std;


std::string decode(const std::string& message_file) {
    std::ifstream file(message_file);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << message_file << std::endl;
        return "";
    }

    std::vector<int> pyramid;                 // Vector to store the pyramid of numbers
    std::unordered_map<int, std::string> words; // Map to store words associated with each number

    // Read the contents of the message_file
    int number;
    std::string word;
    while (file >> number >> word) {
        pyramid.push_back(number);
        words[number] = word;
    }

    file.close();

    std::vector<std::string> decoded_message; // Vector to store the decoded message

    // Iterate through each level of the pyramid
    for (int level = 1; level <= *std::max_element(pyramid.begin(), pyramid.end()); ++level) {
        // Filter words associated with numbers at the current level
        std::vector<std::string> words_at_level;
        for (int num : pyramid) {
            if (num <= level) {
                words_at_level.push_back(words[num]);
            }
        }

        // Join the words and add to the decoded message
        decoded_message.push_back(accumulate(words_at_level.begin(), words_at_level.end(), std::string(" ")));
    }

    // Join the decoded message into a single string and return
    return accumulate(decoded_message.begin(), decoded_message.end(), std::string(" "));
}

int main() {
    std::string result = decode("your_input_file.txt");  // Replace with the actual file name
    std::cout << result << std::endl;

    return 0;
}