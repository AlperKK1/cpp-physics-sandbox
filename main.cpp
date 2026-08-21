#include <iostream>
#include <vector>

struct Vector2D {
    float x;
    float y;
};

int main() {
    std::cout << "--- Welcome To Physics Sandbox ---\n";

    Vector2D position = {0.0f, 0.0f};
    Vector2D velocity = {5.0f, 2.0f};

    float timeStep = 1.0f;

    std::cout << "\n--- Euler Integration Test ---\n";

    for (int t = 1; t <= 5; ++t) {
        position.x = position.x + (velocity.x * timeStep);
        position.y = position.y + (velocity.y * timeStep);

        std::cout << "Time t=" << t << " -> X Position: " << position.x 
                  << " | Y Position: " << position.y << "\n";
    }

    return 0;
}