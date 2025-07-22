//
// Created by Pedro Pereira on 21/07/2025.
//
#include "MultipleTeperaturSensorReader.h"
#include <vector>


using namespace std;


int main()
{
  MultipleTeperaturSensorReader mt;

  mt.Get_update();
  vector <int> *temporari_temp_sonsor_ptr = {mt.temporari_temp_sensor};
  mt.Update_temperature(temporari_temp_sonsor_ptr);
  vector <int> *temperature_sonsor_ptr = {mt.temperature_sensor};
  mt.Show_data(temperature_sonsor_ptr);

}
