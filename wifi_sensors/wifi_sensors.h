// SkyMonitor.h
#ifndef wifi_sensors_h
#define wifi_sensors_h

#include <Arduino.h>
#include "ESP8266WiFiMulti.h"
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <Wire.h>
#include <SparkFunMLX90614.h>
#include <Adafruit_Sensor.h>
#include "Adafruit_TSL2591.h"
#include "cont.h"

// Constants for WiFi and sensors
extern const char* ssid1;
extern const char* password1;
extern const char* ssid2;
extern const char* password2;
extern const char* ssid3;
extern const char* password3;
extern const char* ssid4;
extern const char* password4;

// WiFi functions
void startWifiMulti();
void maintainWifi();

// Web server functions
void startWebserver();
void handleRoot();
void handleNotFound();

// Sensor functions
void configureSensor();
void advancedRead();
void fetchSkyTemp();
void readSkyTemp();
void fetchNanoData();
void processSerialData(const String& data);
bool isNumeric(const String& str);
void printNanoData(String sensor, String value);
void memoryMonitor();

// Utility functions
void customSerialPrint(const String &message);
void customSerialPrintln(const String &message);

#endif
