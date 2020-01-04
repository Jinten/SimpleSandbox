#pragma once

#include"window.h"


class Application
{
public:
	Application();
	Application(Window::Desc& desc);
	~Application();

	void setBackgroundColor(const ImVec4& color)
	{
		mBackgroundColor = color;
	}

	void setShowImGuiDemoWindow(bool enable)
	{
		mShowImGuiDemoWindow = enable;
	}

	void update(Action action);

private:
	bool mKilled = false;;
	bool mShowImGuiDemoWindow = false;
	ImVec4 mBackgroundColor;

	Window mWindow;

private:
	static void updateMessage(Window::MessageInfo* info);
};