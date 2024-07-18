#include <iostream>
#include <string>
#define MAX 100
using namespace std;

class Weather{
    public:
        string date;
        string day;
        string weather;

        Weather(string date, string day, string weather){
            this->date = date;
            this->day = day;
            this->weather = weather;
        }
        Weather(){}
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Weather weather_date[MAX];
    for(int i = 0; i < n; i++){
        string date, day , weather;
        cin >> date >> day >> weather;
        weather_date[i] = Weather(date, day, weather);
    }

    int idx = 0;
    // idx 값 저장 , idx = weather이 rain인  date 의 index로
    for(int i = 0; i < n; i++){
        if(weather_date[i].weather == "Rain") idx = i;
    }
    // 이제 비교
    for(int i = 0; i < n; i++){
        if(weather_date[i].weather == "Rain") {
            if(weather_date[i].date < weather_date[idx].date ) idx = i;
        }   
    }

    cout << weather_date[idx].date << " " << weather_date[idx].day << " " << weather_date[idx].weather;
    return 0;
}