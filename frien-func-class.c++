
/*
#include<iostream>

using namespace std;

class alpha1;

class alpha2
{
    public:

        void put_bata(int a,int b);
};

void alpha2 :: put_bata(int a,int b)
{
    alpha1 net;

    net.roll=a;

    net.id=b;

    net.get_data();
}

class alpha1
{
    int roll;

    int id;

    public:

        void get_data(void)
        {
            cout<<roll<<endl<<id<<endl;
        }

        friend void alpha2 :: put_bata(int a,int b);
};

int main()
{
    alpha2 gamma;

    gamma.put_bata(5,6);

    return 0;
}










*/
// Error above 


// below is right


#include<iostream>

using namespace std;

class alpha1;

class alpha2
{
    public:

        void put(int a,int b);
};

class alpha1
{
    int roll;

    int id;

    public:

        void get()
        {
            cout<<"roll"<<roll;
	    cout<<"id"<<id;
        }

        friend void alpha2 :: put(int a,int b);
};

void alpha2 :: put(int a,int b)
{
    alpha1 ob1;

    ob1.roll=a;

    ob1.id=b;

    ob1.get();
}


int main()
{
    alpha2 gamma;

    gamma.put(5,6);

    return 0;
}
