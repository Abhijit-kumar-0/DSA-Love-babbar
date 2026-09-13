 #include<iostream>
 #include<string>
 using namespace std;
 

// encapsulation to restrict the direct access method
class Human {
    private:
    string name;
    string village;


    public:
    string Gender;
    int age;

    void setname(string name) {
        this -> name = name;
    }
    void setVillage(string village) {
        this -> village = village;
    }

    string getname() {
        return name;
    }

    string getVillage() {
        return village;
    }
};

int main(){

    Human h1;

    h1.setname("abhijit");

    h1.setVillage("bairagi tola");
    
    cout << endl << "[ name: " << h1.getname() << ", ";
    cout << "village: " << h1.getVillage() << " ]" << endl << endl;

 return 0;
 }