#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;

const int marks_cnt = 10;

struct Schoolchild {
    string patronymic;
    string name;
    string surname;
    int grade;
    string num_phone;
    char marks[marks_cnt];

    void print() {
        cout << patronymic << " " << name << " " << surname << endl;
        cout << grade << endl;
        cout << num_phone << endl;
        for (int i = 0; i < marks_cnt; i++) {
            cout << marks[i] << " ";
        }
        cout << endl << endl;
    }    
};

Schoolchild * init(int size, string file_name) {
    Schoolchild * pupils = new Schoolchild[size];

    ifstream r_file(file_name);

    if (r_file.is_open()) {
        
        for (int i = 0; i < size; i++) {
            string block_end;
            Schoolchild temp;
            string marks;
            string grade;
            getline(r_file, temp.patronymic);
            getline(r_file, temp.name);
            getline(r_file, temp.surname);
            getline(r_file, grade);
            temp.grade = stoi(grade);
            getline(r_file, temp.num_phone);
            getline(r_file, marks);

            for (int j = 0; j < marks_cnt; j++) {
                temp.marks[j] = marks[j];
            }
            pupils[i] = temp;
            getline(r_file, block_end);
        }

        r_file.close();
    }
    else {
        cout << "Ошибка открытия файла!" << endl;
    }

    return pupils;
}

void file_write(Schoolchild * arr, int size, string file_name) {
    ofstream w_file(file_name);

    if(w_file.is_open()) {
        for (int i = 0; i < size; i++) {
            w_file << arr[i].patronymic << endl;
            w_file << arr[i].name << endl;
            w_file << arr[i].surname << endl;
            w_file << arr[i].grade << endl;
            w_file << arr[i].num_phone << endl;
            w_file << arr[i].marks << endl;
            w_file << endl;
        }

        w_file.close();
    }
    else {
        cout << "Ошибка открытия файла!" << endl;
    }
}

Schoolchild * add(Schoolchild * arr, int &size, string file_name) {
    Schoolchild new_child;
    string patronymic;
    string name;
    string surname;
    int grade;
    string num_phone;
    string marks;

    cout << "Введите отчество: ";
    cin >> patronymic;
    cout << "Введите имя: ";
    cin >> name;
    cout << "Введите фамилию: ";
    cin >> surname;
    cout << "Введите класс: ";
    cin >> grade;
    cout << "Введите номер телефона: ";
    cin >> num_phone;
    cout << "Введите оценки(" << marks_cnt << " штук без пробела): ";
    cin >> marks;

    if (patronymic.size() > 0 && name.size() > 0 && surname.size() > 0 && grade >= 1 && grade <= 11 && num_phone.size() > 0 && marks.size() == 10) {
        new_child.patronymic = patronymic;
        new_child.name = name;
        new_child.surname = surname;
        new_child.grade = grade;
        new_child.num_phone = num_phone;

        size++;
        Schoolchild * new_arr = new Schoolchild[size];

        for (int i = 0; i < marks_cnt; i++) {
            new_child.marks[i] = marks[i];
        }

        new_arr[0] = new_child;

        for (int i = 1, j = 0; i < size; i++) {
            new_arr[i] = arr[j++];
        }

        delete[] arr;
        arr = nullptr;

        file_write(new_arr, size, file_name);

        return new_arr;
    }
    else {
        cout << "Ошибка ввода данных!" << endl;
        return arr;
    }
}

Schoolchild * del(Schoolchild * arr, int &size, string file_name) {
    int new_size = size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < marks_cnt; j++) {
            if (arr[i].marks[j] == '2') {
                new_size--;
                arr[i].name = "Null";
                break;
            }
        }
    }

    Schoolchild * new_arr = new Schoolchild[new_size];
    for (int i = 0, j = 0; i < size; i++) {
        if (arr[i].name != "Null") {
            new_arr[j++] = arr[i];
        }
    }

    delete[] arr;
    arr = nullptr;

    size = new_size;

    file_write(new_arr, size, file_name);

    return new_arr;
}

void arr_print(Schoolchild * arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i].print();
    }
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int pupils_cnt = 5;

    Schoolchild * pupils = init(pupils_cnt, "schoolchild_init.txt"); 
    arr_print(pupils, pupils_cnt);

    pupils = del(pupils, pupils_cnt, "new_schoolchild.txt");
    arr_print(pupils, pupils_cnt);

    pupils = add(pupils, pupils_cnt, "new_schoolchild.txt");
    arr_print(pupils, pupils_cnt);

    pupils = del(pupils, pupils_cnt, "new_schoolchild.txt");
    arr_print(pupils, pupils_cnt);

    delete[] pupils;
    pupils = nullptr;

    return 0;
}