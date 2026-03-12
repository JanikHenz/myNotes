# Setup

Das Setup wurde dank des Repositories **FHNW-dev-workspace** sehr einfach gestaltet.

Das Workspace-Repository enthält unter dem Pfad `./src` ein Sub-Repository namens **FHNW-robot-packages** mit verschiedenen Packages.  
Außerdem existiert im Workspace-Repository ein `.devcontainer`-Verzeichnis. Damit lässt sich mithilfe der VS Code Extension **DevContainer** automatisch ein korrekt konfigurierter Container erstellen.

---

### Wichtig!! (GPU-Konfiguration)

Falls der Rechner **keine NVIDIA-Grafikkarte** besitzt, sollten die folgenden Zeilen im `.devcontainer` entfernt oder auskommentiert werden:

```yaml
# - NVIDIA_VISIBLE_DEVICES=all
# - NVIDIA_DRIVER_CAPABILITIES=all
...
# deploy:
#   resources:
#     reservations:
#       devices:
#         - driver: nvidia
#           count: all
#           capabilities: [gpu]
...
```

---

### Wichtig!! (Linux: Display-Freigabe)

Wenn der DevContainer auf einem **Linux-Gerät** verwendet wird, müssen lokal folgende Befehle ausgeführt werden, um den Bildschirm freizugeben:

```bash
export DISPLAY=:0
xhost +local:docker
```

Über den VS Code Befehl
**"Dev Containers: Reopen in Container"**
befindest du dich anschließend im korrekt konfigurierten Workspace
(in unserem Fall im *jazzy*-Ordner).

---

## Build-Prozess

Mit folgendem Command werden alle ROS 2-Packages gebaut:

```bash
colcon build --symlink-install
```

Dieser Befehl setzt anschließend die wichtigen Umgebungsvariablen:

```bash
source install/setup.bash
```

---

## Launch der Simulation

Nun können bereits die gewünschten Launch-Files ausgeführt werden:

```bash
./src/FHNW-robot-packages/fhnw_bot_bringup/scripts/fhnw_bot_navigation.sh
```

Dieses Skript startet eine vollständig konfigurierte Gazebo-Simulation mit dem IMVS-Büro als Karte und dem Dingo-Bot inklusive Sensoren.

```

Wenn du willst, kann ich dir zusätzlich eine **README.md-Version** mit Titelseite, Inhaltsverzeichnis und Setup-Checks erstellen.
```

**Achtung!** Da das es noch einen Bug gibt in der fhnw_bot_navigation musste auf ein Alternative ausgewichen werden:


- Lautsprecher-Daten dokumentieren und in Gazebo benutzen

- Mikrofon-Daten empfangen und in gazeb benutzen
```bash
ros2 launch nav2_bringup tb3_simulation_launch.py headless:=False slam:=True
```


## connect with Robot

```bash
ssh -i .ssh/id_rsa.pub robot@10.95.65.31
```

the password ist "clearpath"

## connect with Jetson

```bash
ssh -i .ssh/id_rsa.pub wsr@10.95.65.175 
```





foxglove auf dem jetson muss in legacy sein


ssh -X für bildübertragung




Ziel am 10.12.25

Mit dem dingo eine slam kartierung durchzuführen



bei foxglove einfach lokal installier und verbinden auf port 9090 
