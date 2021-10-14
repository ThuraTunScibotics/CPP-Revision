#include<iostream>
using namespace std;

class kitNo
{
    private:
        int kit_no;

    public:
        void setNo(int num)
        {
            kit_no = num;
        }

        int getNo()
        {
            return kit_no;
        }
};

int main()
{
    kitNo *ptr = new kitNo;

    ptr->setNo(8);

    cout << "Kit number of Bruno is " << ptr->getNo();

    return 0;
}