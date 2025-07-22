//
// Created by Pedro Pereira on 21/07/2025.
//

#include <vector>

#ifndef MULTIPLETEPERATURSENSORREADER_H
#define MULTIPLETEPERATURSENSORREADER_H

using namespace std;

class MultipleTeperaturSensorReader
{
  private:
    int id;
    float temperature;

  public:
    void Get_update();
    void Update_temperature(vector <int> *temperatur);
    void Show_data(vector <int> *temperatur);
    int temp_sensor_one   = 0xffff;
    int temp_sensor_two   = 0xffff;
    int temp_sensor_three = 0xffff;
    int temp_sensor_four  = 0xffff;
    int temp_sensor_five  = 0xffff;
    vector <int> temporari_temp_sensor[5];
    vector <int> temperature_sensor[5];
};
#endif //MULTIPLETEPERATURSENSORREADER_H
