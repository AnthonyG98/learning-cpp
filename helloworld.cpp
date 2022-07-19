#include <iostream>
#include <vector>

int main(){
   /*
   typeconversion: conversion a value of one data type to another 
   Implicit = automatic
   Explicit = precede value with new data type (Int)
   */
   int correct = 8;
   int questions = 10;
   double score = correct/(double)questions * 100;

   std::cout << score << "%";

    return 0;
}