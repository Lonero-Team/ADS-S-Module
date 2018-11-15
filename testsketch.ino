// WiFi - Version: Latest 
#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>

// GSM - Version: Latest 
#include <GSM.h>
#include <GSM3CircularBuffer.h>
#include <GSM3IO.h>
#include <GSM3MobileAccessProvider.h>
#include <GSM3MobileCellManagement.h>
#include <GSM3MobileClientProvider.h>
#include <GSM3MobileClientService.h>
#include <GSM3MobileDataNetworkProvider.h>
#include <GSM3MobileMockupProvider.h>
#include <GSM3MobileNetworkProvider.h>
#include <GSM3MobileNetworkRegistry.h>
#include <GSM3MobileSMSProvider.h>
#include <GSM3MobileServerProvider.h>
#include <GSM3MobileServerService.h>
#include <GSM3MobileVoiceProvider.h>
#include <GSM3SMSService.h>
#include <GSM3ShieldV1.h>
#include <GSM3ShieldV1AccessProvider.h>
#include <GSM3ShieldV1BandManagement.h>
#include <GSM3ShieldV1BaseProvider.h>
#include <GSM3ShieldV1CellManagement.h>
#include <GSM3ShieldV1ClientProvider.h>
#include <GSM3ShieldV1DataNetworkProvider.h>
#include <GSM3ShieldV1DirectModemProvider.h>
#include <GSM3ShieldV1ModemCore.h>
#include <GSM3ShieldV1ModemVerification.h>
#include <GSM3ShieldV1MultiClientProvider.h>
#include <GSM3ShieldV1MultiServerProvider.h>
#include <GSM3ShieldV1PinManagement.h>
#include <GSM3ShieldV1SMSProvider.h>
#include <GSM3ShieldV1ScanNetworks.h>
#include <GSM3ShieldV1ServerProvider.h>
#include <GSM3ShieldV1VoiceProvider.h>
#include <GSM3SoftSerial.h>
#include <GSM3VoiceCallService.h>

// BLE - Version: Latest 
#include <BLEAttribute.h>
#include <BLEBondStore.h>
#include <BLECentral.h>
#include <BLECentralRole.h>
#include <BLECharacteristic.h>
#include <BLEConstantCharacteristic.h>
#include <BLEDescriptor.h>
#include <BLEDevice.h>
#include <BLEDeviceLimits.h>
#include <BLEFixedLengthCharacteristic.h>
#include <BLEHID.h>
#include <BLEHIDPeripheral.h>
#include <BLEHIDReportMapCharacteristic.h>
#include <BLEHIDReportReferenceDescriptor.h>
#include <BLEKeyboard.h>
#include <BLELocalAttribute.h>
#include <BLEManager.h>
#include <BLEMouse.h>
#include <BLEMultimedia.h>
#include <BLENode.h>
#include <BLEPeripheral.h>
#include <BLEProgmemConstantCharacteristic.h>
#include <BLERemoteAttribute.h>
#include <BLERemoteCharacteristic.h>
#include <BLERemoteService.h>
#include <BLESerial.h>
#include <BLEService.h>
#include <BLESystemControl.h>
#include <BLETypedCharacteristic.h>
#include <BLETypedCharacteristics.h>
#include <BLEUtil.h>
#include <BLEUuid.h>
#include <EddystoneBeacon.h>
#include <iBeacon.h>
#include <nRF51822.h>
#include <nRF8001.h>

// ArduinoBearSSL - Version: Latest 
#include <ArduinoBearSSL.h>

// Arduino Uno WiFi Dev Ed Library - Version: Latest 
#include <UnoWiFiDevEd.h>

/*

*/

void setup() {
    
}
pinMode(latchPin, OUTPUT);
	pinMode(dataPin, OUTPUT);
	pinMode(clockPin, OUTPUT);
	Serial.begin(7200);
Serial.println("Start!");
flag_complete = true;
  start = 0;
  now = 0;
  i = 0;
  
  Serial.begin(9600);  //Baud_Rate.
  delay(500);  // wait
Serial.println("Press button");
void loop() {
      for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {
    // turn the pin on:
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(ledPins[thisPin], LOW);
  }
}
