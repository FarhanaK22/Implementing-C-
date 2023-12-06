
#include<iostream>
using namespace std;

class Book{
    public:
    string Title;
    string Author;
    float* Rates;
    int RatesCounter;


    Book(string title, string author){
        cout<<"\nConstructor Called\n";
        Title=title;
        Author=author;

        RatesCounter=2;
        Rates= new float[RatesCounter];
        Rates[0]=5;
        Rates[1]=2.5;
    }

    ~Book(){
        cout<<"\nDestructor Called\n";
        delete [] Rates;
        Rates=nullptr;
    }

    Book(const Book& original ){
        cout<<"\nCopy Constructor Called\n";
        Title=original.Title;
        Author=original.Author;
        RatesCounter=original.RatesCounter;  
        Rates =new float[RatesCounter];
        for (int i=0;i<RatesCounter;i++){
            Rates[i]=original.Rates[i];
        }
    }
    Book& operator=(const Book& original){
    if(this!=&original){
        // 
        RatesCounter=original.RatesCounter;
        Rates=new float[RatesCounter];
          for (int i=0;i<RatesCounter;i++){
            Rates[i]=original.Rates[i];
        }
    }return *this;
}

  
};

  void printbook(Book b){
        cout<<"\nbook"<<":\n"<<"Title : "<<b.Title<<endl;
        cout<<"Author : "<<b.Author<<endl;
        cout<<"ratesCount : "<<b.RatesCounter<<endl;
          for (int i=0;i<b.RatesCounter;i++){
            cout<<"\nRate- "<<i+1<<" : "<<b.Rates[i];
        }cout<<endl;
    }
int main(){
    Book b1("farhana codes","farhna");
    Book b2("CPP","willey");
    Book b3(b2);  
    cout<<"\nPrinting Book1:";
    printbook(b1);
    cout<<"\nPrinting Book2:";
    printbook(b2);
    cout<<"\nPrinting Book3:";
    printbook(b3); 
    b1=b1;
    b2=b1;
    cout<<"\nPrinting Book1:";
    printbook(b1);
    cout<<"\nPrinting Book2:";
    printbook(b2);
    return 0;
    }
