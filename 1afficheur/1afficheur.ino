void setup() {
  // Initialisation des broches comme sorties
  for (int i = 2; i <= 8; i++) {
    pinMode(i, OUTPUT);
  }
}

// Fonction pour afficher un chiffre donné sur l'afficheur 7 segments
void displayDigit(int digit) {
  // Tableau représentant les états des segments a-g pour chaque chiffre 0 à 9
  // Format : {a, b, c, d, e, f, g}
  byte digits[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // 2
    {1, 1, 1, 1, 0, 0, 1}, // 3
    {0, 1, 1, 0, 0, 1, 1}, // 4
    {1, 0, 1, 1, 0, 1, 1}, // 5
    {1, 0, 1, 1, 1, 1, 1}, // 6
    {1, 1, 1, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1}  // 9
  };

  // Appliquer l'état de chaque segment
  digitalWrite(6, digits[digit][0]); // a
  digitalWrite(5, digits[digit][1]); // b
  digitalWrite(4, digits[digit][2]); // c
  digitalWrite(3, digits[digit][3]); // d
  digitalWrite(2, digits[digit][4]); // e
  digitalWrite(7, digits[digit][5]); // f
  digitalWrite(8, digits[digit][6]); // g
}

void loop() {
  // Boucle d'affichage des chiffres 0 à 9
  for (int i = 0; i <= 9; i++) {
    displayDigit(i);
    delay(1000); // Attente 1 seconde
  }
}
