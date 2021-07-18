#include <iostream>
#include <unordered_map>

#include "absl/container/flat_hash_map.h"
#include "absl/strings/string_view.h"
#include "absl/types/any.h"

struct Point
{
  double x{ 0.0 };
  double y{ 0.0 };

  Point()
  {
    _attrs["x"] = (x);
    _attrs["y"] = (y);
  }

  absl::any GetAttr(absl::string_view name)
  {
    return _attrs[name];
  }

 private:
  absl::flat_hash_map<absl::string_view, absl::any>_attrs;
};

int main()
{
  Point p;
  p.x = 1.0;
  p.y = 2.0;

  std::cout << "p.x: " << p.x << std::endl;

  auto px = absl::any_cast<double>(p.GetAttr("x"));
  px = 3.0;
  std::cout << "p.x: " << p.x << std::endl;

  return 0;
}