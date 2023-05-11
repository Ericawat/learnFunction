#include "iostream"

using namespace std;

// declaring the class function to be used in this program

class user{
    /* Giving the first variable (Last Name) an Access specifier of private :
     * restricting it from being easily accessed and/or modified  */
private:
    string lastname;
    /* Giving the second variable (First Name ) an Access specifier of public :
     * making the variable free and open for any function to reference and use ; */
public:
    string firstname;

    /* declaring a method to help access the attribute within the private class */

    void fullname(string lname){

        lastname = lname;
    }

    /* declaring a second method that will enhance the process of accessing, manipulating and joining
     * the members/objects within the private class  */

    void getname(string lname){
        cout<<"whats your last name ?"<<endl;
        cin>>lname;
        cout<<"Your Full Name is : "<<firstname <<" " <<lname<<endl;
    }
};

 /* calling everything to get executed in the main  */

int main (){
    /* Assigning a member class from the declared class  */
    user user1;

  cout<<"what is your first name ?"<<endl;
  cin>>user1.firstname;

  string x;
  user1.getname( x);




    return 0;
}