\\ This is largely taken from Adafruit's tutorial. It's almost entirely boilerplate, but what this code does is:

\\ connect to your WiFi network
\\ connect to Adafruit via WiFi
\\ read data from your soil sensor
\\ upload sensor data to Adafruit

\\ You will need to change the following variables in the code:

\\ WLAN_SSID - this is the name of your WiFi network
\\ WLAN_PASS - this is the password to your WiFi network
\\ AIO_USERNAME - this is your adafruit.io username
\\ AIO_KEY - this is your adafruit.io key
\\ dryVal - from your previous code
\\ wetVal - from your previous code

}

int readHumidity() {
  int sensorVal = analogRead(inputPin);
  return (int)(100*(dryVal-sensorVal)/(dryVal-wetVal));
}

// connect to adafruit io via MQTT
void connect() {

  Serial.print(F("Connecting to Adafruit IO... "));

  int8_t ret;

  while ((ret = mqtt.connect()) != 0) {

    switch (ret) {
      case 1: Serial.println(F("Wrong protocol")); break;
      case 2: Serial.println(F("ID rejected")); break;
      case 3: Serial.println(F("Server unavail")); break;
      case 4: Serial.println(F("Bad user/pass")); break;
      case 5: Serial.println(F("Not authed")); break;
      case 6: Serial.println(F("Failed to subscribe")); break;
      default: Serial.println(F("Connection failed")); break;
    }

    if(ret >= 0)
      mqtt.disconnect();

    Serial.println(F("Retrying connection..."));
    delay(5000);

  }

  Serial.println(F("Adafruit IO Connected!"));

}
