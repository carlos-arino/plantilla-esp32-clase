#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Configuración de la pantalla LCD I2C (dirección 0x27, 16 columnas, 2 filas)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(115200);
  Serial.println("Iniciando sistema I2C...");

  // Inicializar la pantalla
  lcd.init();
  lcd.backlight(); // ¡Importante! Enciende la luz de fondo

  // Mensaje de bienvenida
  lcd.setCursor(0, 0); // Columna 0, Fila 0
  lcd.print("Hola Mundo!");
  
  lcd.setCursor(0, 1); // Columna 0, Fila 1
  lcd.print("Clase Lista!");
}

void loop() {
  // Parpadeo del asterisco en la esquina superior derecha    
  lcd.setCursor(15, 1);
  lcd.print("*");
  delay(500);
  lcd.setCursor(15, 1);
  lcd.print(" ");
  delay(500);
}
