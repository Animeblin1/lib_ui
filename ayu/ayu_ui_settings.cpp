// This is the source code of AyuGram for Desktop.
//
// We do not and cannot prevent the use of our code,
// but be respectful and credit the original author.
//
// Copyright @Radolyn, 2026
#include "ayu_ui_settings.h"

#include <utility>

namespace AyuUiSettings {

QString monoFont;
double wideMultiplier = 1.0;
bool materialSwitches;
int avatarCorners = kMaxAvatarCorners;

void setMonoFont(QString newFont) {
	monoFont = std::move(newFont);
}

QString getMonoFont() {
	return monoFont;
}

void setWideMultiplier(double val) {
	wideMultiplier = val;
}

bool isWideMultiplied() {
	return abs(wideMultiplier - 1.0) > 0.01;
}

int getWideMultiplied(int width, double mult) {
	if (!isWideMultiplied()) {
		return width;
	}
	const auto res = width * (wideMultiplier * mult);
	return std::max(width, static_cast<int>(std::round(res)));
}

void setMaterialSwitches(bool val) {
	materialSwitches = val;
}

bool isMaterialSwitches() {
	return materialSwitches;
}

void setAvatarCorners(int val) {
	avatarCorners = val;
}

int getAvatarCorners() {
	return avatarCorners;
}

bool smoothCaret = true;
bool smoothScroll = true;

void setSmoothCaret(bool val) {
	smoothCaret = val;
}

bool isSmoothCaret() {
	return smoothCaret;
}

void setSmoothScroll(bool val) {
	smoothScroll = val;
}

bool isSmoothScroll() {
	return smoothScroll;
}

int caretSpeed = 50;
bool caretBlink = true;
int blinkMs = 500;
bool caretAccent = false;
int scrollSmoothSpeed = 50;

void setCaretSpeed(int val) {
	caretSpeed = val;
}

int getCaretSpeed() {
	return caretSpeed;
}

void setCaretBlink(bool val) {
	caretBlink = val;
}

bool isCaretBlink() {
	return caretBlink;
}

void setBlinkMs(int val) {
	blinkMs = val;
}

int getBlinkMs() {
	return blinkMs;
}

void setCaretAccent(bool val) {
	caretAccent = val;
}

bool isCaretAccent() {
	return caretAccent;
}

// 0 = automatic (accent toggle / palette), otherwise 0xRRGGBB.
unsigned int caretCustomColor = 0;

void setCaretCustomColor(unsigned int rgb) {
	caretCustomColor = rgb;
}

unsigned int getCaretCustomColor() {
	return caretCustomColor;
}

void setScrollSmoothSpeed(int val) {
	scrollSmoothSpeed = val;
}

int getScrollSmoothSpeed() {
	return scrollSmoothSpeed;
}

// Wheel notch distance as a percentage of the native step.
int wheelScrollStep = 100;

void setWheelScrollStep(int percent) {
	wheelScrollStep = percent;
}

int getWheelScrollStep() {
	return wheelScrollStep;
}

}
