#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

int main() {
    vector<int> nums;
    const size_t RANGE = 10000000;

    // Seed the random number generator
    unsigned seed = static_cast<unsigned>(std::chrono::system_clock::now().time_since_epoch().count());
    default_random_engine generator(seed);
    
    // Insert numbers
    cout << "Generating Random Numbers up to " << RANGE << endl;

    for (size_t i = 0; i < RANGE; i++) {
        nums.push_back(i + 1);
    }

    shuffle(nums.begin(), nums.end(), generator);

    // Calculate the total size of the vector
    size_t total_size = nums.size() * sizeof(int);
    double size_in_MB = static_cast<double>(total_size) / (1024 * 1024);

    cout << "Total Vector size = " << size_in_MB << " MB" << endl;

    // Optional: Print the first 10 shuffled numbers
    std::cout << "First 10 shuffled numbers: ";
    for (size_t i = 0; i < 10 && i < nums.size(); i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    // Start timing before the sort
    auto start = std::chrono::high_resolution_clock::now();

    // Sort using std::sort
    std::sort(nums.begin(), nums.end());

    // Stop timing after the sort
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the duration in milliseconds
    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Time taken to sort: " << duration.count() << " ms" << std::endl;

    // Print the first 10 sorted numbers
    std::cout << "First 10 sorted numbers: ";
    for (size_t i = 0; i < 10 && i < nums.size(); i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}