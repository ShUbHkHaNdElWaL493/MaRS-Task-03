#include <RH_ASK.h> // Include RadioHead Amplitude Shift Keying Library
#include <SPI.h> // Include dependant SPI Library
#define ledPin 12

// Create Amplitude Shift Keying Object
RH_ASK rf_driver;
 
void setup()
{
  // Initialize ASK Object
  rf_driver.init();
  // Setup Serial Monitor
  Serial.begin(9600);
}
 
void loop()
{
  // Set buffer to size of expected message
  uint8_t buf[11];
  uint8_t buflen = sizeof(buf);
  // Check if received packet is correct size
  if (rf_driver.recv(buf, &buflen))
  {
    // Message received with valid che-cksum
    Serial.print("Message Received: ");
    Serial.println((char *) buf);
    digitalWrite(ledPin, HIGH);
  } else if (buf == '\0')
  {
    Serial.println("Message Not Received.");
    digitalWrite(ledPin, LOW);
  }
}