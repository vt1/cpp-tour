#include <vector>
#include <iostream>
using namespace std;

bool equalBySize(const vector<double>&, const vector<double>&);
double calculate(const vector<double>&, const vector<double>&);
double maxv(const vector<double>&);

int main()
{
	vector<double> price = { 9.1, 3.1, 5.5, 1.4, 7.3, 4.2 };
	vector<double> weight = { 4.5, 7.1, 1.3, 5.7, 3.6, 9.8 };

	double result = calculate(price, weight);
	if (result == -1)
		cout << "Vecs are not equal\n";
	else
		cout << result << endl;
	
	cout << maxv(price) << endl;
	cout << maxv(weight) << endl;
}

bool equalBySize(const vector<double>& vec, const vector<double>& vec2)
{
	return vec.size() == vec2.size();
}

double calculate(const vector<double>& vec, const vector<double>& vec2)
{
	if (equalBySize(vec, vec2))
	{
		double result = 0;
		for (int i = 0; i < vec.size(); i++)
			result += vec[i] * vec2[i];
		return result;
	}
	return -1;
}

double maxv(const vector<double>& vec)
{
	double result = vec[0];
	for (double elem : vec)
		result = result < elem ? elem : result;
	return result;
}