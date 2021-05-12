#include <iostream>

using namespace std;

int main()
{

    int n,r,b,x,y;

    cout<<"introduceti n: ";
    cin>> n;

    r=n*8;
    cout<<"n*8= "<<r<<endl;
    r=n/4;
    cout<<"catul impartirii lui n la 4: "<<r<<endl;

    r=n*10;
    cout<<"n*10= "<<r<<endl;


    cout<<"introduceti b: ";
    cin >> b ;
if (( b & 1 ) == 1) cout << "Numar impar" ;
else cout << "Numar par"<<endl;


scanf("%d%d",&b,&n);

printf("Afisare bit n: %d\n",b>>n&1);

printf("Stergere: %d\n", b&~(1<<n));

printf("Setare: %d\n", b|1<<n);

printf("Complement: %d\n",b^1<<n);



cout<<"nr pentru x si y: ";

    cin >> x >> y;

    x = x + y;
    y = x - y;
    x = x - y;

	cout<<x<<" "<<y<<endl;



    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

	cout<<x<<" "<<y<<endl;


    return 0;
}
