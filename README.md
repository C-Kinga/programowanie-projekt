# Podstawy programowania

## **Zadanie 1 - Zespoły i narzędzia**
Utworzono repozytorium na GitHub. Wykorzystano Google Docs do Współpracy zespołowej. Ponadto w Visual Studio Code przygotowano stronę prezentującą podstawowe elementy Markdown, takie jak nagłówki, listy, pogrubienie, kod, linki i obrazy.

## **Zadanie 2 - MSYS2**
Zaintalowano i zaktualizowano środowisko MSYS2.
Do aktualizacji użyto polecenia:
*pacman -Syu*
Zainstalowano wybrane pakiety:
*pacman -S vim nano less diffutils zip unzip dos2unix patch imagemagick*

## **Zadanie 3 - Niesforne dane**
Napisano program w języku C przekształcający dane z jednej kolumny do trzech kolumn. Program odczytuje dane z pliku dane.txt i zapisuje wynik do wynik.txt.
Dodano nagłówki x, y oraz z i przygotowano dane do dalszej analizy.

## **Zadanie 4 - Dodawanie poprawek**
Przekonwertowano pliki do formatu Unix:
*dos2unix lista.txt lista-pop.txt*
Porównano pliki:
*diff -u lista.txt lista-pop.txt*
Utworzono pliki łatki:
*diff -u lista.txt lista-pop.txt > poprawka.patch*
Zastosowano poprawkę:
*patch lista.txt < poprawka.patch*
Zweryfikowano poprawność za pomocą:
*md5sum lista.txt lista-pop.txt*

## **Zadanie 5 - Z CSV do SQL i z powrotem**
W Visual Studio Code wykorzystano funkcję *Znajdź i zamień*(Ctrl+H) oraz wyrażenia regularne. Przekształcono dane z formatu CSV do instrukcji *INSERT INTO*. Następnie wykonano konwersję z SQL do CSV, usuwając milisekundy ze znacznika czasu i dodając odpowiednie nagłówki.

## **Zadanie 6 - Marudny tłumacz**
Przygotowano skrypt w PowerShell do automatycznego przetwarzania pliku JSON. Odczytano plik *en-7.2.json5* i utworzono plik *pl-7.2.json5* z zachowaniem kodowania UTF-8. Wykorzystano pętlę przetwarzającą kolejne linie oraz dodano zakomentowane kopie wpisów, ułatwiające tłumaczenie. Uruchomiono skrypt z poziomu terminala PowerShell.

## **Zadanie 7 - Fotografik gamoń**
Zainstalowano narzędzie ImageMagick.
Rozpakowano archiwa ZIP i przetworzono zdjęcia za pomocą skryptu PowerShell. Wykorzystano *ForEach-Object* do masowej konwersji obrazów do formatu JPG oraz ustawienia rozdzielczości 96 DPI i wymiarów 720×720 px. Przetworzone pliki zapisano i spakowano do archiwum *gotowe_zdjecia.zip*.

## **Zadanie 8 - Wszędzie te PDF-y**
Przy użyciu ImageMagick przygotowano portfolio w formacie PDF. Do zdjęć dodano podpisy z nazwami plików za pomocą opcji - *annotate*.
Następnie wykorzystano *montage* z parametrami *-tile 2x4* oraz *-geometry* do utworzenia układu zdjęć na stronie A4.
Wygenerowano gotowy plik PDF z portfolio.

## **Zadanie 9 - Porządki w kopiach zapasowych**
W PowerShell rozpakowano archiwa przy użyciu *Expand-Archive*. Za pomocą *Get-ChildItem -Recurse* wyszukano pliki ZIP. Utworzono strukturę katalogów rok/miesiąc i przeniesiono pliki przy użyciu *Move-Item*.
Po zakończeniu pracy usunięto pliki tymczasowe.

## **Zadanie 10 - Galeria dla grafika**
Przygotowano folder roboczy z plikiem *index.html* oraz grafikami.
W PowerShell wykorzystano *Get-ChildItem* i *ForEach-Object* do automatycznego wygenerowania bloków HTML dla wszystkich zdjęć.
Wygenerowany kod wklejono do pliku *index.html*, zastępując poprzednią zawartość.
Utworzono działającą responsywną galerię internetową. 