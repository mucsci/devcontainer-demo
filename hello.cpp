#include <iostream>
#include <vector>
#include <ranges>
#include <concepts>

int
main ()
{
  std::vector<int> v;
  for (int i : {5, 4, 3, 2, 1})
  {
    v.push_back(10);
  }

  for (auto val : v)
  {
    std::cout << val << ' ';
  }
  std::cout << "\nHello, World!" << std::endl;

  return 0;
}
