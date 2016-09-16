#include <string.h> 

#define DATA_SIZE 8
#define ADDRESS_SIZE 4

// INPUT PORTS
const unsigned short port_stopped = 24;
const unsigned short port_data[DATA_SIZE] = { 52, 50, 48, 46, 44, 42, 40, 38 };

// OUTPUT PORTS
const unsigned short port_start = 22;
const unsigned short port_dm_access = 23;
const unsigned short port_read_address[ADDRESS_SIZE] = { 53, 51, 49, 47 };

void setBits(const unsigned short port[], const size_t data_size, const unsigned char data);
const unsigned char readData(const unsigned short port[], const size_t data_size);

void setup() {
  Serial.begin(9600);

  pinMode(port_stopped, INPUT);
  
  for (int i = 0; i < DATA_SIZE; i++)
  	pinMode(port_data[i], INPUT);

  for (int i = 0; i < ADDRESS_SIZE; i++) {
  	pinMode(port_read_address[i], OUTPUT);
  	digitalWrite(port_read_address[i], LOW);
  }

  pinMode(port_start, OUTPUT);
  digitalWrite(port_start, LOW);

  pinMode(port_dm_access, OUTPUT);
  digitalWrite(port_dm_access, LOW);
}

void loop() {
  //bool stopped = (bool)digitalRead(port_stopped);
  digitalWrite(port_start, LOW);
  if(Serial.available()) {
    
    String str = Serial.readString();
    char* token = strtok((char*)(str.c_str()), " ");

    if (!strcmp(token, "run"))
		digitalWrite(port_start, HIGH);

	  else if (!strcmp(token, "show")) {
		  token = strtok(NULL, " ");

  		if (!strcmp(token, "-dm")) {
  			digitalWrite(port_dm_access, HIGH);
  			token = strtok(NULL, " ");
  		}
  		else
  			digitalWrite(port_dm_access, LOW);
      size_t address = (size_t)atoi(token);
  
  		setBits(port_read_address, ADDRESS_SIZE, address);
      delay(1000);
  		Serial.println(String(address) + ": " + String((unsigned short)readData(port_data, DATA_SIZE)) + "\n");
	}

  }
}

void setBits(const unsigned short port[], const size_t data_size, const unsigned char data) {
  for(int i = 0; i < data_size; i++) {
    if(data & (1 << i))
      digitalWrite(port[i], HIGH);
    else
      digitalWrite(port[i], LOW);
  }
}

const unsigned char readData(const unsigned short port[], const size_t data_size) {
  unsigned char data = 0;
  
  for(int i = 0; i < data_size; i++)
    data |= (digitalRead(port[i]) << i);
    
  return data;
}
