//
// Created by Pedro Pereira on 21/07/2025.
//
#include <iostream>
#include <vector>
#include "MultipleTeperaturSensorReader.h"

using namespace std;

void MultipleTeperaturSensorReader::Get_update()
{
      cout << "Enter the temperatur for the sensors one: ";
      cin >> MultipleTeperaturSensorReader::temp_sensor_one;
      temporari_temp_sensor[0].insert(temporari_temp_sensor[0].end(), temp_sensor_one);
      cout << "\n";

      cout << "Enter the temperatur for the sensors two:";
      cin >> temp_sensor_two;
      temporari_temp_sensor[1].insert(temporari_temp_sensor[1].end(), temp_sensor_one);
      cout << "\n";

      cout << "Enter the temperatur for the sensors three: ";
      cin >> temp_sensor_three;
      temporari_temp_sensor[2].insert(temporari_temp_sensor[2].end(), temp_sensor_one);
      cout << "\n";

      cout << "Enter the temperatur for the sensors four: ";
      cin >> temp_sensor_four;
      temporari_temp_sensor[3].insert(temporari_temp_sensor[3].end(), temp_sensor_one);
      cout << "\n";

      cout << "Enter the temperatur for the sensors five: ";
      cin >> temp_sensor_five;
      temporari_temp_sensor[4].insert(temporari_temp_sensor[4].end(), temp_sensor_one);
      cout << "\n";
}

void MultipleTeperaturSensorReader::Update_temperature(vector<int> *temperatur)
{
  for (int i; i < temperatur->size(); i++)
  {
      temperatur->insert(temperature_sensor->end(), temporari_temp_sensor[i].begin(), temperature_sensor->end());
  }
}

void MultipleTeperaturSensorReader::Show_data(vector <int> *temperatur)
{
    for (int i; i < temperatur->size(); i++)
    {
        cout << temperatur->at(i) << "\n";
    }
}