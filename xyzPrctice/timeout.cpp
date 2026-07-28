#include <iostream>
#include <chrono>

using namespace std;

// Function to check for timeout and return true if time exceeded
bool checkTimeout(chrono::steady_clock::time_point start, int timeoutSeconds = 60,
                  const string& message = "Runtime exceeded 1 minute. Exiting..." ) {
    auto now = chrono::steady_clock::now();
    auto elapsed = chrono::duration_cast<chrono::seconds>(now - start).count();

    if (elapsed >= timeoutSeconds) {
        cout << message << endl;
        return true; // time exceeded
    }
    return false;
}

int runWithTimeout() {
    auto start = chrono::steady_clock::now();
    while (true) {
        cout << "in while loop" << endl;
        // Simulate work
        for (long long i = 0; i < 1000000; ++i) {
            cout << i << "\r"; // Print progress
            // Occasionally check if timeout occurred
            if (checkTimeout(start, 120, "Timeout exceeded 2 minutes. Exiting...")) {
                cout << i << endl;
                return 0;
            } // exit immediately if timeout
        }

        // Also check after each loop
        if (checkTimeout(start))
            return 0;
    }

    return 0;
}

int main() {
    cout << "Starting function... take 4" << endl;
    int result = runWithTimeout();
    cout << "Function ended with return code: " << result << endl;
    return result;
}