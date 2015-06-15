#include <iostream>
#include "Student.h"

using namespace std;

int main() {

    /*
     Задача 1 - Търсене на данни на неправилно място, въвеждане на изпълним SQL код в
     * текстово поле, грешка в кода на програмиста.
     * 
     Задача 2 - Ясно да се разбере, че на дадено място има грешка.
     * 
     Задача 3 - Липса на описателност.
     * 
     Задача 4 - При взимане на стойност извън границите на масив. Ще се вземе кодът като
     * нормални данни от масива.
     * 
     Задача 5 - Не е ясно, къде е възникнала грешката, а програмата често изглежда, че
     * приключва нормално.
     * 
     Задача 6 - Могат да се слагат много assert-и по кода, за да проверяват валидността му,
     * за да показват, къде е настъпила нередност. Много са удобно в процеса на разработка,
     * защото могат да се изключат всички вместо да се трият един по един.
     * 
     Задача 7 - Прихващат определен тип грешка и могат да изведат конкретна информация за
     * грешката. Голямото предимство е, че после програмата може да продължи изпълнението си.
     * 
     Задача 8 - throw runtime_error("Network failure"); throw string("Network failure"); 
     * throw 13;
     * 
     Задача 9 - try { ... asd ... } catch(runtime_error e) {
     *     cerr << e.what();
     * } catch(string s) {
     *     cerr << s;
     * } catch(int i) {
     *     cerr << "Status code: " << i;
     * }
     * 
     Задача 10 - След всички catch блокове на съответния try.
     * 
     Задача 11 - Програмата прекъсва, защото изключението не е прихванато.
     * 
     Задача 12 - Изпълнява се първата, която съответства на типа.
     * 
     Задача 13 - Ако в рамките на catch-а има try, се обработва като нормално изключение
     * независимо, че се намира в catch блок. В противен случай се прекратява изпълението
     * на програмата, поради неприхванато изключение.
     * 
     Задача 14 - class CustomListError : public ListError, runtime_error, logic_error
    try {
        
    } catch(CustomListError e) {
        cerr << e.what();
    } catch(...) {
        cerr << "Other exception";
    }
     * 
     Задача 15 - Можем да създаваме изключения, които по-добре могат да ни ориентират при
     * възникване на грешка. Можем да ги направим да ни дават по-точна информация. Йерархията
     * ни дава възможност да разделяме логически типовете от грешки.
     * 
     Задача 16 - Когато искаме да прекратим изпълнението на текущата функция, без да
     * изхвърляме изключение.
     * 
     Задача 17 - а ще се унищожи, но при b ще има изтичане на памет.
     * 
     Задача 18 - Първата функция може да изхвърли всичко, а втората - нищо.
     * 
     Задача 19 - void f() throw(bad_alloc); void f() throw(); void f()
     * 
     Задача 20 - Ще прекрати изпълнението на програмата.
     */
    
    return 0;
}

