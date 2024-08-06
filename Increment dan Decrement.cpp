#include <iostream>
using namespace std;

int main() {
            cout << R"(                                                                    **      **  **    **   ______   **    **  ________ 
    cout << R"(                                                                    **      **  **    **   ______   **    **  ________ 
/  \    /  |/  |  /  | /      \ /  |  /  |/        |
$$  \  /$$/ $$ |  $$ |/$$$$$$  |$$ |  $$ |$$$$$$$$/ 
 $$  \/$$/  $$ |  $$ |$$ \__$$/ $$ |  $$ |$$ |__    
  $$  $$/   $$ |  $$ |$$      \ $$ |  $$ |$$    |   
   $$$$/    $$ |  $$ | $$$$$$  |$$ |  $$ |$$$$$/    
    $$ |    $$ \__$$ |/  \__$$ |$$ \__$$ |$$ |      
    $$ |    $$    $$/ $$    $$/ $$    $$/ $$ |      
    $$/      $$$$$$/   $$$$$$/   $$$$$$/  $$/       
)" << '\n';

    //increment ada 2 yaitu preincrement dan post increment

    int a = 5;
    int b = 3;

    //posincrement
    cout << "nilai a akan tetap = " << a << endl;
    a++;
    cout << "nilai akan bertambah 1 = " << a << endl;
    //preincrement
    cout << "nilai b akan tetap = " << b << endl;
    ++b;
    cout << "nilai b akan bertambah 1 = " << b << endl;
    return 0;
}
