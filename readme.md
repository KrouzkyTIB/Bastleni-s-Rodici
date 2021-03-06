# TIB Hodiny 
## Bastlíme s rodiči 

### Popis programu a použité technologie:

Pro vývoj byl použit jazyk C/C++ ve frameworku Platformio.
Program lze nahrát do Arduina pomocí frameworku Platformio a editoru Visual Studio Code.

### Ovládání hodin:

Hodiny mají 4 funkční tlačítka:
- TIME_SET - umožňuje nastavení času
- ALARM_SET - umožňuje nastavení buzení
- TIME+ - při nastavování přidává čas
- TIME- - při nastavování ubírá čas
- SNOOZE - bohužel nefunguje

Nastavení času:
1. Klikneme na tlačítko TIME_SET a začne nám blikat display ukazující hodiny
2. Pomocí tlačítek TIME+ a TIME- vybereme požadovanou hodinu
3. Výběr hodiny potvrdíme opětovným kliknutím na tlačítko TIME_SET
4. Nyní máme k dispozici výběr minut, výběr provedeme stejně jako u hodin
5. Potvrdíme výběr minut opětovným kliknutím na tlačítko TIME_SET
6. Při dokončení nastavování času jsou sekundy v hodinách nastaveny na 0
7. Pokud by jste chtěli i zachování času po vypnutí je nutné k modulu RTC přidělat baterii

Nastavení budíku:
1. Klikneme na tlačítko ALARM_SET
2. Začne nám blikat display ukazující hodiny
3. Pokud display ukazuje znak `-` tak je buzení aktuálně vypnuté
4. Buzení lze zapnout kliknutím na tlačítko TIME_SET, poté se začne na displaji ukazovat čas zvonění budíku
5. Čas buzení lze nastavit stejně jako čas
6. Budík si zapamatuje nastavení alarmu i při vypnutí

Jak vypnout alarm, když začne pískat:
- Stačí stisknout jakékoliv tlačitko vyjma tlačítka SNOOZE


### Otevření projektu ve Visual Studio Code:
1. Ve Visual Studio Code musíte mít nainstalované rozšíření PlatformIO
2. Klikněte na zelené tlačítko Code a vyberte Download ZIP
3. Po stáhnutí programu si stáhnutý archiv vyextrahujte
4. Vyextrahovanou složku poté otevřete ve VS Code. Kliknete na File -> Open Folder a zde vyberete složku s projektem
5. Otevřený projekt můžete nahrát do Arduina tím, že kliknete na Terminal -> Run Task -> Platformio: Upload