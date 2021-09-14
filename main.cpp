#include "solution.h"

int main() {
  Node* lista1 = nullptr;
  push_back(lista1, 3);
  push_back(lista1, 5);
  push_back(lista1, 7);

  Node* lista2 = nullptr;
  push_back(lista2, 4);
  push_back(lista2, 5);
  push_back(lista2, 6);
  push_back(lista2, 10);
  push_back(lista2, 15);

  Node* lista3 = SortedMerge(lista1, lista2);

  display(lista3); //3 -> 4 -> 5 -> 5 -> 6 -> 7 -> 10 -> 15 ->

  return 0;
}
