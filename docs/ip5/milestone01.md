# Meilenstein 01

`System-Basis und Baseline-Karte erstellt. Das ROS 2-System ist eingerichtet, die Kommunikation zum Dingo-O ist vollständig validiert, und ein erster SLAM-Kartierungslauf (Baseline-Karte) unter Verwendung der rohen Lidar-Daten wurde erfolgreich durchgeführt und dokumentiert.`

---

**Status:** +- Erreicht

---

**Stand 26.11.2025:**

- VS-Code eingerichtet mit DevContainer und anderen extensions

- ROS2 Arbeitsbereich eingerichtet. Mit [FHNW-dev-workspace](https://gitlab.fhnw.ch/wsr/fhnw-dev-workspace).

- Umfänglicher Ueberblick geschaffen über die Architektur 

- Setup kurz dokumentiert.

- Lidar Rohdaten, Kamera Rohdaten dokumentiert. 

- Simulation getestet.

- SLAM Kartierung erstellt.

---

[Rohdaten](helper.md)

[Setup](setup.md)

--- 

**Probleme:**

- Projektklärung definieren

- Am Anfang versucht ein komplett eigener Arbeitsbereich zu erstellen.

- Probleme bei dem Implementieren eines eignes DevContainer + Dockerfile -> Bildschirm wurde nicht erkannt.

- Probleme beim Aufstarten ds FHNW-dev-workspace -> Nvidia chip nicht erkannt. 

- Gazebo-Simlation hat ein Fehler auf **meinem Laptop** -> [Lidar Visualisierung](img/gazebo-bug.png)   

- fhnw_bot_bringup hat einen Bug bei der erstellung von SLAM.  

**Nächste Schritte**

- Ultraschallsensor-Daten dokumentieren und in Gazebo benutzen

- Lautsprecher-Daten dokumentieren und in Gazebo benutzen

- Mikrofon-Daten empfangen und in gazeb benutzen

