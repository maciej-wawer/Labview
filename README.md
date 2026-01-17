Cel projektu

Celem projektu jest stworzenie systemu, który:

Rejestruje sygnał wizyjny z kamery i umożliwia jego wizualizację w aplikacji LabVIEW.

Odczytuje dystans od przeszkód za pomocą czujnika odległości podłączonego do Arduino.

Prezentuje dane sensoryczne w czasie rzeczywistym w graficznym interfejsie użytkownika.

Informuje użytkownika o zbliżaniu się do przeszkody sygnałem dźwiękowym (buzzer) o zmiennej głośności w zależności od zmierzonej odległości.

Architektura rozwiązania

System składa się z następujących komponentów:

Moduł Arduino – odczyt sensorów i komunikacja szeregowa:

Odczyt czujnika odległości (np. ultradźwiękowego lub innego typu) w celu określenia dystansu do przeszkody.

Sterowanie generatorem dźwięku (buzzer) o natężeniu zależnym od zmierzonej odległości.

Przesyłanie danych do aplikacji LabVIEW przez port szeregowy.

Moduł wizyjny (kamera) – źródło obrazu użyteczne do obserwacji przestrzeni za pojazdem. W zależności od zastosowanego modułu, obraz może być przechwytywany w czasie rzeczywistym lub okresowo (w przypadku ograniczeń transmisji Arduino).

LabVIEW VI – aplikacja użytkownika:

Odbiera dane z Arduino przez port COM.

Wyświetla odczyty dystansu w formie liczbowej i/lub graficznej.

Przetwarza i prezentuje obraz z kamery (np. w osobnym panelu frontowego panelu).

Zarządza sygnałami ostrzegawczymi i dodatkowymi wskaźnikami w GUI.


Główne funkcjonalności

System implementuje następujące funkcje:

Akwizycja sygnału wizyjnego z kamery oraz jego wyświetlenie w LabVIEW.

Pomiar dystansu do przeszkody oraz jego interpretacja w czasie rzeczywistym.

Dynamiczna sygnalizacja dźwiękowa zmian w odległości (buzzer).

Komunikacja szeregowa między LabVIEW a Arduino w celu synchronizacji danych.

Graficzny interfejs użytkownika (GUI) prezentujący pomiary i podgląd obrazu.
