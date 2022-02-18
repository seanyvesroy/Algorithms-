/*
Project 1 : Alternating Disk Problem
CPSC 335 Algorithm Engineering
Andrew Doan, Roman Barron, Sean McCarthy 
*/

#include <iostream>

using namespace std;

//Alternating disk first approach
int segregateDisks(int n, char* list) {                     //n = size of list/2  list = list of disks

    int swapcount = 0;                                      //counter to keep track of number of swaps  
    for(int k = n; k > 0; --k) {                            //outer loop ensures the swap loop occurs n times
        for(int i = 0; i < n * 2; ++i) {                    //loop iterating through list
            if(list[i] == 'W') {                            //lines 12-16 check if disk is white and next disk
                if(list[i + 1] == 'B') {                    //is black, then those two disks are swapped
                    char store = list[i];
                    list[i] = list[i + 1];
                    list[i + 1] = store;
                    ++swapcount;                            //increase counter
                }
            }
        }
    }
    return swapcount;                                       //return number of swaps performed
}

int main() {
    int n = 2;                                              //n = size of list/2
    char list_one[] = { 'B', 'W', 'B', 'W'};                //list

    int count = segregateDisks(n, list_one);                //function call

    cout << "Disks After Segregating List 3: ";     
    for (int i = 0; i < 2 * n; ++i) {                       //print sorted list
        cout << list_one[i] << " ";
    }
    cout << endl;
    cout << count << " swaps performed" << endl;            //print number of swaps

    n = 4;                                                  //n = size of list/2
    char list_two[] = { 'B', 'W', 'B', 'W',                 //list
                         'B', 'W', 'B', 'W' };


    count = segregateDisks(n, list_two);                    //function call

    cout << "Disks After Segregating List 1: ";
    for (int i = 0; i < 2 * n; ++i) {                       //print sorted list
        cout << list_two[i] << " ";
    }
    cout << endl;

    cout << count << " swaps performed" << endl;            //print number of swaps

    n = 7;                                                  //n = size of list/2    
    char list_three[] = { 'B', 'W', 'B', 'W', 'B',          //list 
                        'W', 'B', 'W', 'W', 'B',
                         'B', 'W', 'B', 'W' };

    count = segregateDisks(n, list_three);                  //function call

    cout << "Disks After Segregating List 2: ";
    for (int i = 0; i < 2 * n; ++i) {                       //print sorted list
        cout << list_three[i] << " ";
    }
    cout << endl;
    cout << count << " swaps performed" << endl;            //print swap count

    
    return 0;
}
