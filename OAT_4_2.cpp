#include <iostream>
using namespace std;

const int interviewedNumbers = 5;

enum Gender
{
    MALE,
    FEMALE
};
enum Response
{
    YES,
    NO
};

void askQuestion(Gender &gender, Response &response)
{
    char charGender, charResponse;

    cout << "Sexo (M/F): ";
    cin >> charGender;
    cout << "Resposta (S/N): ";
    cin >> charResponse;

    if (charGender == 'M')
    {
        gender = MALE;
    }
    else if (charGender == 'F')
    {
        gender = FEMALE;
    }
    else
    {
        cerr << "Sexo inválido" << endl;
        exit(1);
    }

    if (charResponse == 'S')
    {
        response = YES;
    }
    else if (charResponse == 'N')
    {
        response = NO;
    }
    else
    {
        cerr << "Resposta inválida" << endl;
        exit(1);
    }
}

int main()
{
    int numberInterviewedYes = 0;
    int numberInterviewedNo = 0;
    int numberFemaleYes = 0;
    int numberMaleNo = 0;
    int i = 1;

    while (i <= interviewedNumbers)
    {
        Gender Gender;
        Response Response;

        cout << "Entrevistado " << i << endl;
        askQuestion(Gender, Response);

        if (Response == YES)
        {
            numberInterviewedYes++;
            if (Gender == FEMALE)
            {
                numberFemaleYes++;
            }
        }
        else
        {
            numberInterviewedNo++;
            if (Gender == MALE)
            {
                numberMaleNo++;
            }
        }
        i++;
    }

    float percentageFemaleYes = (float)numberFemaleYes / interviewedNumbers * 100;
    float percentageMaleNo = (float)numberMaleNo / interviewedNumbers * 100;

    cout << "Numero de pessoas que responderam sim: " << numberInterviewedYes << endl;
    cout << "Numero de pessoas que responderam nao: " << numberInterviewedNo << endl;
    cout << "Percentagem de mulheres que responderam sim: " << percentageFemaleYes << "%" << endl;
    cout << "Percentagem de homens que responderam nao: " << percentageMaleNo << "%" << endl;

    return 0;
}
