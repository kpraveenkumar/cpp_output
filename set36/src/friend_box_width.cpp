#include <iostream>
using namespace std;
class Box{
    public:
    friend void PrintWidth(Box box);
    void SetWidth(const float& width)
    {
        width_=width;
    }
    private:
    float width_;
};

void PrintWidth(Box box)
{
    box.width_*=2;
    cout<<"Box width:"<<box.width_<<endl;
}

int main()
{
    Box box;
    box.SetWidth(10.0);
    PrintWidth(box);
    return 0;
}