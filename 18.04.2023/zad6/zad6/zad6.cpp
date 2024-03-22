#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Question
{
public:
    virtual ~Question() {}
    virtual void set_text(string question_text)
    {
        text = question_text;
    }
    virtual void set_answer(string correct_response)
    {
        answer = correct_response;
    }
    virtual bool check_answer(string response) const
    {
        return response == answer;
    }
    virtual void display() const
    {
        cout << text << endl;
    }

protected:
    string text;
    string answer;
};

class ChoiceQuestion : public Question
{
public:
    virtual ~ChoiceQuestion() {}
    void add_choice(string choice, bool correct)
    {
        choices.push_back(choice);
        if (correct) {
            string answer_str = to_string(choices.size());
            set_answer(answer_str);
        }
    }
    void display() const
    {
        Question::display();
        for (int i = 0; i < choices.size(); i++)
        {
            cout << i + 1 << ". " << choices[i] << endl;
        }
    }

private:
    vector<string> choices;
};

int main()
{
    Question* q = new Question();
    q->set_text("Kto jest autorem poematu 'Pan Tadeusz'?");
    q->set_answer("Adam Mickiewicz");
    q->display();
    string response;
    cout << "Twoja odpowiedz: ";
    getline(cin, response);
    if (q->check_answer(response))
    {
        cout << "Poprawna odpowiedz!" << endl;
    }
    else {
        cout << "Bledna odpowiedz." << endl;
    }
    delete q;

    ChoiceQuestion* cq = new ChoiceQuestion();
    cq->set_text("Ktory z tych krajow jest w Europie?");
    cq->add_choice("Nigeria", false);
    cq->add_choice("Japonia", false);
    cq->add_choice("Polska", true);
    cq->add_choice("Brazylia", false);
    cq->display();
    cout << "Twoja odpowiedz: ";
    getline(cin, response);
    if (cq->check_answer(response))
    {
        cout << "Poprawna odpowiedz!" << endl;
    }
    else
    {
        cout << "Bledna odpowiedz." << endl;
    }
    delete cq;

    return 0;
}
