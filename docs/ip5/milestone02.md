# Ziel 

das ziel ist eine optimierte Version der Kartierung herbeizurufen. Dabei wird nicht nur der Lidar sondern auch der Ultraschallsensor benutzt. 

Man kann bei den Lidar-Daten nicht nur mit der Range spielen sondern auch mit der Intensity. Das kann gut genutzt werden um schwarze, gespiegelte oder auch durchsichtige Oberflaechen zu erkennen.

# Gegeben:  

- Lidar bottom
- Lidar top
- Ultraschallsensor

# Strategie

Nun kann man durch Tests in erfahrung bringen ab welcher Intensity die Lidar Daten zuverlaessig sind und ab welcher nciht mehr 


Lidar Top scannt permanent und baut die saubere 2D-Karte der Wände (SLAM).

Lidar Bottom füllt die Navigationskarte mit kleinen Hindernissen (Tischbeine etc.), damit der Roboter nirgends hängen bleibt.

Ultraschall läuft permanent mit:

Wenn Lidar Distanz >> Ultraschall Distanz: STOPP & MARKIEREN. Es ist Glas oder ein Spiegel. Trage ein Hindernis in die Navigationskarte ein (auch wenn der Top-LiDAR sagt "da ist Platz").

Blindzone beachten: Wenn der Ultraschall < 20cm misst, halte an oder fahre rückwärts. Hier sind beide Lidars oft blind (wegen des Winkels nach unten/oben).

