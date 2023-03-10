#ifndef RCT_PRINT_BIN
#define RCT_PRINT_BIN

#include <cstdio>
#include <limits>
#include <type_traits>

namespace rct {

template<class T, std::enable_if_t<std::is_integral<T>::value, std::nullptr_t> = nullptr>
void print_bin(const T t) {
  using U = std::make_unsigned_t<T>;
  U mask = 1ULL << (std::numeric_limits<U>::digits - 1);
  do {
    printf(mask & t ? "1" : "0");
  } while(mask >>= 1);
}

template<class T, std::enable_if_t<std::is_integral<T>::value, std::nullptr_t> = nullptr>
void put_bin(const T t) {
  putchar('0'), putchar('b'), print_bin(t), putchar('\n');
}

}  // namespace rct

#endif  // RCT_PRINT_BIN
