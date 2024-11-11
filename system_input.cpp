#include <random>
#include <vector>


/**
 * @brief returns a vector of random ints in range 1 to 3.
 *
 * This function generates and returns a vector of random ints,
 * the range of ints being 1 to 3 (inclusive),
 *
 *@param rounds The integer to determine the size of the return vector
 *@return a vector of random ints
 */
std::vector<int> generate_system_input(int rounds) {
    std::vector<int> return_values;

    // Generate random numbers to be added to return vector of size of argument
    for (int i = 0; i < rounds; i++) {
        // Define range
        int min = 1;
        int max = 3;

        // Initialize a random number generator
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib(min, max);
        // Generate random number in the range [min, max]
        return_values.push_back(distrib(gen));
    }
    return return_values;
}
