#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Student {

public:
    Student(string n, int a) {
        Name = n;
        Age = a;
    }

    void setAge(int);
    void setName(string);
    string getName()
    {
        return Name;
    }
    int getAge()
    {
        return Age;
    }
    void printStudentInfo() {
        cout << "Name: " << getName() << ", Age: " << getAge() << endl;
    }


private:
    string Name;
    int Age;
};

    int main ()
{
    int selection =0;
    vector<Student>studentList;

    // luodaan opiskelijoita

    Student a("Pekka", 30);
    Student b("Liisa", 27);
    Student c("Jukka", 22);
    Student d("Jorma", 35);

    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);



    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "Opiskelijoiden nimet: ";
            for (Student s: studentList)
            {
                s.printStudentInfo();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            // sama vertailu, aakkoset a < b, b < c
            sort(studentList.begin(), studentList.end(), [](Student &a, Student &b)
            {
                return a.getName() < b.getName();
            }

            );

            cout << "Lajiteltu nimen perusteella" << endl;
            for (Student &s: studentList) {
                s.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(),[](Student &a, Student &b)
            {
                return a.getAge() < b.getAge();
            }


            );

            cout << "Lajiteltu iän perusteella" << endl;
            for (Student &s: studentList) {
                s.printStudentInfo();
            }
            break;
        case 4:

            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            string etsittavaNimi;
            cout << "Anna etsittävä nimi" << endl;
            cin >> etsittavaNimi;

            auto it = find_if(studentList.begin(), studentList.end(),
            [&etsittavaNimi](Student &s) { return s.getName() == etsittavaNimi; });

            if (it != studentList.end() ) {
                cout << "löydettiin";
                it->printStudentInfo();
            } else {
                cout << "ei löydetty";
            }

            break;


    default:
        cout<< "Wrong selection, stopping..." << endl;
        break;
    }

 }
 while(selection != 5);

return 0;
    }
