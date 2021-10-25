#include<iostream>
using namespace std;
class A
{
protected:
    int a;
public:
    void dispa()
    {
        a = 10;
        cout << "Entered = " << a << endl;
    }

};//09
class A1
{
protected:
    int a1;
public:
    void dispa1()
    {
        a1 = 21;
        cout << "initial value Entered = " << a1 << endl;
    }

};

class B : public A
{
protected:
    int b;
public:
    void dispb()
    {
        b = 20;
        cout << "B Entered = " << b << endl;
    }

};
class C : public A
{
protected:
    int c;
public:
    void dispc()
    {
        c = 30;
        cout << "C Entered = " << c << endl;    
    }
};

class D : public B
{
protected:
    int d;
public:
    void dispd()
    {
        d = 40;
        cout << "D Entered = " << d << endl;
    }
};

class E : public A, public A1
{
protected:
    int e;
public:
    void dispe()
    {
        e = 50;
        cout << "E Entered = " << e << endl;
    }

};

class F : public B
{
protected:
    int f;
public:
    void dispf()
    {
        f = 60;
        cout << "D Entered = " << f << endl;
    }
};

int main()
{
    B objectb;
    C objectc;
    D objectd;
    E objecte;
    F objectf;
    while (1)
    {
        cout << ("1.single inheritance\n");
        cout << ("2.multilevel inheritance\n");
        cout << ("3.hybrid inheritance\n");
        cout << ("4.multiple inheritance \n");
        cout << ("5.Hierarchical inheritance\n");
        cout << "6.Exit\n";
        cout << ("enter your choice = ");
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Single : \n";
            objectb.dispa();
            break;
        case 2:
            cout << "Multilevel : \n";
            objectd.dispa();
            break;
        case 3:
            cout << "hybrid : \n";
            objectd.dispa();
            objectf.dispa();
            break;
        case 4:
            cout << "Multiple : \n";
            objecte.dispa();
            objecte.dispa1();
            break;
        case 5:
            cout << "Hierarchical : \n";
            objectb.dispa();
            objectc.dispa();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}
