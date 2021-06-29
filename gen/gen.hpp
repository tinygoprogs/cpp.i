#ifndef CGO_CPP_GEN_H
#define CGO_CPP_GEN_H
#include <functional>
typedef void (*Fn)();
class Pass {
public:
  std::function<void()> mfn;
  Pass(Fn fn);
};
class Gen {
  int m;
  const Pass &m_p;

public:
  Gen(const Pass &p, int mm = 7330, int mmm = 1);
  int test();
};
#endif
