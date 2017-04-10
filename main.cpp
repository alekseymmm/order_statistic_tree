#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef
tree<
  int,
  int,
  less<int>,
  rb_tree_tag,
  tree_order_statistics_node_update>
map_t;

typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;

int main()
{
  map_t m;
  m.insert(make_pair(12, 1012));
  m.insert(make_pair(10, 1012));
  m.insert(make_pair(505, 1505));
  m.insert(make_pair(30, 1030));
  cout << m.find_by_order(1)->second << '\n';
  cout << "Order of key 30 : " << m.order_of_key(30) << endl;

  ordered_set s;
  s.insert(10);
  s.insert(15);
  s.insert(1);
  s.insert(18);
  s.insert(100);
  cout << "Order of key 18 in set : " << s.order_of_key(18) << endl;
  return 0;
}
