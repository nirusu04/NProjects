    #include <iostream>
    using namespace std;



    void add(int value1, int value2)
    {
        cout << value1 << " + " << value2 << " " << (value1 + value2) << endl;
    }

    void sub(int value1, int value2)
    {
        cout << value1 << " - " << value2 << " " << (value1 - value2) << endl;
    }

    int main()
    {
        int num = 10;
        while (num > 0)
        {
            if (num < 5)
                add(num, num*2);
            else
                sub(num, num/2);
            num--;
        }
        return 0;
    }
