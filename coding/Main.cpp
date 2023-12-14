#include "ArraySorter.h"
#include "Queue.h"
#include <string>

int main()
{
    // Sorteren van std::strings
    std::string strArray[] = {"banaan", "appel", "citroen"};
    int strSize = sizeof(strArray) / sizeof(strArray[0]);
    sortArray(strArray, strSize);
    printArray(strArray, strSize);

    // Sorteren van floats
    float floatArray[] = {3.14f, 1.59f, 2.65f};
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);
    sortArray(floatArray, floatSize);
    printArray(floatArray, floatSize);

    // Gebruik van de Queue
    Queue<int> queue;
    queue.put(2);
    queue.put(1);
    queue.put(3);

    std::cout << "Queue na toevoegingen: ";
    queue.print();

    std::cout << "Element verwijderd: " << queue.get() << std::endl;

    std::cout << "Queue na verwijdering: ";
    queue.print();

    bool isRunning = true;
    while (isRunning)
    {
    }

    return 0;
}
