#include <cstdint>	// Fixed width integer types class
#include <iostream>	//standardlib
#include <vector>	//Vektorfeld für kleinen platzbedarf

using namespace std;

const int numbers = 40;

namespace bfh
{
        template <class T, class U>
        inline void fillUp(vector<T>& newdata, U& size)
        {
            for (int idx = 0 ; idx < size ; idx++)
            {
                newdata.push_back(idx);
            }
        }
        template <class T>
        inline void sum(T& result, const vector<T>& newData)
        {
            for (unsigned int index = 0 ; index < newData.size() ; index++)
            {
                result += newData.at(index);
            }
        }
}

int main(void)
{

    int accumulator_i = 0;
    vector<int> data_i;
    bfh::fillUp(data_i, numbers);
    bfh::sum(accumulator_i, data_i);

    float accumulator_f = 0;
    vector<float> data_f;
    bfh::fillUp(data_f, numbers);
    bfh::sum(accumulator_f, data_f);

    double accumulator_d = 0;
    vector<double> data_d;
    bfh::fillUp(data_d, numbers);
    bfh::sum(accumulator_d, data_d);

    cout << "The sum is: " << accumulator_i << endl;
    cout << "The sum is: " << accumulator_f << endl;
    cout << "The sum is: " << accumulator_d << endl;

    return 0;
}

