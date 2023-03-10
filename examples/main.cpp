#include <print_bin.h>

using namespace rct;

int main() {
  put_bin(1024);
  put_bin(0xdead);
  put_bin(65535ULL);
}