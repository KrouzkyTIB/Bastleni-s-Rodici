#include "buttonHandler.hpp"

#include <Arduino.h>

#define BUTTON_CLICKED 0

bool timeSetBtnClicked = false;
bool timePlusBtnClicked = false;
bool timeMinusBtnClicked = false;
bool alarmSetBtnClicked = false;
bool snoozeBtnClicked = false;

void initButtons() {
    pinMode(TIME_PLUS_BUTTON, INPUT_PULLUP);
    pinMode(TIME_MINUS_BUTTON, INPUT_PULLUP);
    pinMode(TIME_SET_BUTTON, INPUT_PULLUP);
    pinMode(ALERT_SET_BUTTON, INPUT_PULLUP);
    pinMode(SNOOZE_BUTTON, INPUT_PULLUP);
}

bool isButtonClicked(int button, bool* buttonStatus) {
    bool retValue = false;
    if (digitalRead(button) == BUTTON_CLICKED) {
        if (!*buttonStatus) {
            retValue = true;
        }
        *buttonStatus = true;
    } else {
        *buttonStatus = false;
    }
    return retValue;
}

ButtonsStatus getButtonsStatus() {
    ButtonsStatus status = {
        .setTimeClicked = isButtonClicked(TIME_SET_BUTTON, &timeSetBtnClicked),
        .timePlusClicked = isButtonClicked(TIME_PLUS_BUTTON, &timePlusBtnClicked),
        .timeMinusClicked = isButtonClicked(TIME_MINUS_BUTTON, &timeMinusBtnClicked),
        .setAlarmClicked = isButtonClicked(ALERT_SET_BUTTON, &alarmSetBtnClicked),
        .snoozeClicked = isButtonClicked(SNOOZE_BUTTON, &snoozeBtnClicked)};

    return status;
}
