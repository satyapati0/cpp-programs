#include <iostream>
using namespace std;

class IncOvldPrefx
{
    private:
       int i;
    public:
       IncOvldPrefx(int a){ i = a; }
       void operator ++() 
          { ++i; }



       void Display() 
          { cout << "i=" << i << endl; }
};

int main()
{
    IncOvldPrefx obj(15);
    obj.Display();
    ++obj; 
    obj.Display();
    return 0;
}
