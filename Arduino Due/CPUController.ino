#include <string.h> 

#define DATA_SIZE 8
#define ADDRESS_SIZE 2

// INPUT PORTS

const unsigned short port_stopped = 43;
const unsigned short port_data = {  };

// OUTPUT PORTS

const unsigned short port_start = 23;
const unsigned short port_dm_access = 23;
const unsigned short port_read_address = {  };

void setBits(const unsigned short port[], const size_t data_size, const unsigned char data);
const unsigned char readData(const unsigned short port[], const size_t data_size);

void setup() {
  Serial.begin(9600);

  pinMode(port_stopped, INPUT);
  
  for (int i = 0; i < DATA_SIZE; i++)
  	pinMode(port_data[i], INPUT);

  for (int i = 0; i < ADDRESS_SIZE; i++) {
  	pinMode(port_read_address[i], OUTPUT);
  	digitalWrite(port_read_address, LOW);
  }

  pinMode(port_start, OUTPUT);
  digitalWrite(port_start, LOW);

  pinMode(port_dm_access, OUTPUT);
  digitalWrite(port_dm_access, LOW);
}

void loop() {
  bool stopped = (bool)readData(port_stopped, 1);

  if(stopped && Serial.available()) {

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

		setBits(port_read_address, ADDRESS_SIZE, token);
		Serial.println(String(token) + ": " + String((unsigned short)readData(port_data, DATA_SIZE)) + ".\n");
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