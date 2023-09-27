
#include "IntervalTreap.hh"

int main() {
  using namespace std;

  TreapNode<int> * root = nullptr;

  // for(int i=1; i<=10; i++) insert(i*7+5, root);
  print_treap(root), cout << endl;
  std::cout << "H" << get_height(root) << std::endl;

  int ty, x;
  while(cin >> ty >> x) {
    if( ty == 0 ) {
      insert(x, root);
    } else {
      cout << remove(x, root) << endl;
    }
    print_treap(root), cout << endl;
    std::cout << "Height " << get_height(root) << std::endl;
  }

  return 0;
}
