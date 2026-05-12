#include <iostream>
#include <string>
using namespace std;

#include "jantung.h"
#include "manusia.h"

int main() 
{
    // Membuat objek manusia di heap memori
    manusia *varManusia = new manusia("Markus");
    
    // Jangan lupa dihapus supaya destructor-nya jalan (biar jantungnya "mati")
    delete varManusia;
    
    return 0;
}