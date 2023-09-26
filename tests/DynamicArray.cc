#include "DynamicArray.hh"
#include <iostream>

int main() {

  using Rope = DynamicArray<int>;

  Rope rope, left_rope, right_rope;

  for(int i=0; i<5; i++)
    Rope::join(rope, rope, Rope(i*i+3));

  for(auto element: rope) std::cout << element << " ";
  std::cout << std::endl;

  auto split_predicate = [&](Rope::iterator const& it)
  { return *it > 4; };
  Rope::cut(split_predicate, rope, left_rope, right_rope);

  for(auto element: left_rope) std::cout << element << " ";
  std::cout << std::endl;
  for(auto element: right_rope) std::cout << element << " ";
  std::cout << std::endl;

  Rope::join(left_rope, left_rope, Rope(5));
  Rope::join(rope, left_rope, right_rope);

  for(auto element: rope) std::cout << element << " ";
  std::cout << std::endl;

  return 0;
}
