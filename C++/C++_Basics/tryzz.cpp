// Casting Operators

#include <iostream>
using namespace std;
int main()
{
    double a = 22.22222;
    float b = 22.22;

    int c;

    c = (int)a;
    cout << "Value of (int) a = " << c << endl;

    c = (int)b;
    cout << " Value of (int) b = " << c << endl;
    return 0;
}



/*

To use the bundled libc++ please add the following LDFLAGS:
  LDFLAGS="-L/usr/local/opt/llvm/lib/c++ -Wl,-rpath,/usr/local/opt/llvm/lib/c++"

llvm is keg-only, which means it was not symlinked into /usr/local,
because macOS already provides this software and installing another version in
parallel can cause all kinds of trouble.

If you need to have llvm first in your PATH, run:
  echo 'export PATH="/usr/local/opt/llvm/bin:$PATH"' >> ~/.zshrc

For compilers to find llvm you may need to set:
  export LDFLAGS="-L/usr/local/opt/llvm/lib"
  export CPPFLAGS="-I/usr/local/opt/llvm/include"
mwafa2@Moafks-MBP ~ % 

*/