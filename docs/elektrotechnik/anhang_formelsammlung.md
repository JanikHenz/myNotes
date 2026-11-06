# Anhang: Formelsammlung & Quick-Reference

!!! abstract "Schnelle Übersicht"
    Kompakte Zusammenstellung der wichtigsten physikalischen Konstanten, Formeln und Standardregeln für Klausuren und Laborpraxis.

### 1. Physikalische Fundamentalkonstanten

| Konstante | Symbol | Wert & Einheit |
| :--- | :---: | :--- |
| **Elektrische Feldkonstante (Vakuum-Permittivität)** | $\varepsilon_0$ | $8{,}854 \cdot 10^{-12}\,\frac{\text{As}}{\text{Vm}} = 8{,}854\,\frac{\text{pF}}{\text{m}}$ |
| **Magnetische Feldkonstante (Vakuum-Permeabilität)** | $\mu_0$ | $4\pi \cdot 10^{-7}\,\frac{\text{Vs}}{\text{Am}} \approx 1{,}257 \cdot 10^{-6}\,\frac{\text{Vs}}{\text{Am}}$ |
| **Elementarladung** | $e$ | $1{,}602 \cdot 10^{-19}\,\text{C} \quad [\text{As}]$ |
| **Lichtgeschwindigkeit im Vakuum** | $c_0$ | $2{,}998 \cdot 10^8\,\frac{\text{m}}{\text{s}}$ |

---

### 2. Fundamentale Grundformeln

| Themengebiet | Formel | Beschreibung / Anmerkung |
| :--- | :--- | :--- |
| **Ohmsches Gesetz** | $U = R \cdot I$ | Zusammenhang Spannung, Widerstand, Strom |
| **Elektrische Leistung** | $P = U \cdot I = I^2 \cdot R = \frac{U^2}{R}$ | Wärmeverlustleistung am ohmschen Widerstand |
| **Knotenregel (KCL)** | $\sum I_{\text{zu}} = \sum I_{\text{ab}} \iff \sum_{k=1}^n I_k = 0$ | Ladungserhaltung an jedem Knotenpunkt |
| **Maschenregel (KVL)** | $\sum_{k=1}^m U_k = 0$ | Energieerhaltung in jedem geschlossenen Umlauf |
| **Coulombsches Gesetz** | $F = \frac{1}{4\pi\varepsilon_0 \varepsilon_r} \cdot \frac{q_1 \cdot q_2}{r^2}$ | Kraft zwischen ruhenden Punktladungen |
| **Ampèresches Gesetz** | $\oint \vec{B} \cdot d\vec{s} = \mu_0 \cdot I_{\text{eing}}$ | Durchflutungsintegral um Stromleiter |
| **Induktionsgesetz** | $u_L(t) = L \cdot \frac{di}{dt}$ | Selbstinduktionsspannung der Spule |

---

### 3. Bauelemente-Formeln im Vergleich

| Bauelement | Kenngröße / Formel | Zeitkonstante & Energie |
| :--- | :--- | :--- |
| **Kondensator (C)** | $Q = C \cdot U \qquad C = \varepsilon_0 \varepsilon_r \frac{A}{d}$ | $\tau = R \cdot C \qquad W_e = \frac{1}{2} C U^2$ |
| **Spule / Induktivität (L)** | $L = \mu_0 \mu_r \frac{N^2 A}{l} \qquad N = \sqrt{\frac{L \cdot l}{\mu A}}$ | $\tau = \frac{L}{R} \qquad W_m = \frac{1}{2} L I^2$ |
| **RC- / RL-Grenzfrequenz** | $f_g = \frac{1}{2\pi R C} \qquad f_g = \frac{R}{2\pi L}$ | Amplitude $-3\,\text{dB}$ ($70{,}7\%$), Phase $|\varphi| = 45^\circ$ |
| **Transformator** | $\frac{U_1}{U_2} = \frac{N_1}{N_2} = \frac{I_2}{I_1} = u \implies Z_1 = u^2 Z_2$ | Galvanische Trennung, Impedanztransformation |
| **Bipolartransistor (BJT)** | $I_C = \beta \cdot I_B \qquad I_E = I_C + I_B$ | $U_{BE} \approx 0{,}7\,\text{V}, \, U_{CE,\text{sat}} \approx 0{,}2\,\text{V}$ |
| **OPV: Invertierend** | $U_a = -\frac{R_2}{R_1} \cdot U_e$ | Phasenumkehr $180^\circ$, virtueller Massepunkt |
| **OPV: Nicht-invertierend** | $U_a = \left(1 + \frac{R_2}{R_1}\right) \cdot U_e$ | Keine Phasendrehung, $v \ge 1$ |
| **OPV: Spannungsfolger** | $U_a = U_e \quad (v = 1)$ | $r_e \to \infty, \, r_a \to 0$ (Impedanzwandler) |

---
