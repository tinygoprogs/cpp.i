#include "gen.hpp"
Pass::Pass(Fn fn) : mfn{fn} {}

Gen::Gen(const Pass &p, int mm, int mmm) : m(mm + mmm), m_p(p) {}

int Gen::test() { m_p.mfn(); return m; }
