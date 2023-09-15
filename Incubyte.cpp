#include <bits/stdc++.h>
using namespace std;

// Chandrayaan class
class Chandrayaan
{
private:
    int x, y, z;    // Position of Pragyan
    char direction; // Direction of Pragyan

public:
    // Constructor to initialize the Pragyan's position and direction
    Chandrayaan(int x, int y, int z, char direction)
    {
        this->x = x;
        this->y = y;
        this->z = z;
        this->direction = direction;
    }

    // Function to move the Pragyan forward or backward
    void move(char command)
    {
        if (command == 'f')
        {
            moveForward();
        }
        else if (command == 'b')
        {
            moveBackward();
        }
    }

    // Function to turn the Pragyan left or right
    void turn(char command)
    {
        if (command == 'l')
        {
            turnLeft();
        }
        else if (command == 'r')
        {
            turnRight();
        }
    }

    // Function to turn the Pragyan up or down
    void changeAngle(char command)
    {
        if (command == 'u')
        {
            turnUp();
        }
        else if (command == 'd')
        {
            turnDown();
        }
    }

    // Function to display the Pragyan's final position and direction
    void displayPositionAndDirection()
    {
        cout << "Final Position: (" << x << ", " << y << ", " << z << ")" << endl;
        cout << "Final Direction: " << direction << endl;
    }

    void moveForward()
    {
        switch (direction)
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        case 'U':
            z++;
            break;
        case 'D':
            z--;
            break;
        default:
            break;
        }
    }

    void moveBackward()
    {
        switch (direction)
        {
        case 'N':
            y--;
            break;
        case 'S':
            y++;
            break;
        case 'E':
            x--;
            break;
        case 'W':
            x++;
            break;
        case 'U':
            z--;
            break;
        case 'D':
            z++;
            break;
        default:
            break;
        }
    }

    void turnLeft()
    {
        switch (direction)
        {
        case 'N':
            direction = 'W';
            break;
        case 'S':
            direction = 'E';
            break;
        case 'E':
            direction = 'N';
            break;
        case 'W':
            direction = 'S';
            break;
        case 'U':
            direction = 'N';
            break;
        case 'D':
            direction = 'S';
            break;
        default:
            break;
        }
    }

    void turnRight()
    {
        switch (direction)
        {
        case 'N':
            direction = 'E';
            break;
        case 'S':
            direction = 'W';
            break;
        case 'E':
            direction = 'S';
            break;
        case 'W':
            direction = 'N';
            break;
        case 'U':
            direction = 'S';
            break;
        case 'D':
            direction = 'N';
            break;
        default:
            break;
        }
    }

    void turnUp()
    {
        direction = 'U';
    }

    void turnDown()
    {
        direction = 'D';
    }
};

int main()
{
    // Pragyan's position and direction
    int x, y, z;
    char direction;

    // Input the initial position and direction
    cout << "Enter initial position : ";
    cin >> x >> y >> z;
    cout << "Enter initial direction : ";
    cin >> direction;

    // Input the commands in string format
    string commandStr;
    cout << "Enter commands in string format: ";
    cin >> commandStr;

    // Create the Chandrayaan object named Pragyan and also initialize it using constructor
    Chandrayaan Pragyan(x, y, z, direction);

    // Execute the commands
    for (char &command : commandStr)
    {
        if (command == 'f' || command == 'b')
        {
            Pragyan.move(command);
        }
        else if (command == 'l' || command == 'r')
        {
            Pragyan.turn(command);
        }
        else if (command == 'u' || command == 'd')
        {
            Pragyan.changeAngle(command);
        }
        // Pragyan.displayPositionAndDirection();
    }

    // Display the final position and direction
    Pragyan.displayPositionAndDirection();

    return 0;
}
