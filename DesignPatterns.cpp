// DesignPatterns.cpp

#include <iostream>
#include <string>

using namespace std;

class Button
{
protected:
    string m_label;

public:
    Button(string label)
        : m_label(label)
    {
    }
    virtual void Draw() = 0;
};

class CheckBox
{
public:
    virtual void Draw() = 0;
};

class GUIFactory
{
public:
    virtual Button* CreateButton(string label) = 0;
    virtual CheckBox* CreateCheckBox() = 0;
};

#ifdef XBOX
// Xbox
class XboxButton : public Button
{
public:
    XboxButton(string label)
        : Button(label)
    {
    }
    virtual void Draw() override
    {
        cout << "Xbox Button: " << m_label << endl;
    }
};

class XboxCheckBox : public CheckBox
{
public:
    virtual void Draw() override
    {
        cout << "Xbox CheckBox" << endl;
    }
};

class XboxFactory : public GUIFactory
{
public:
    virtual Button* CreateButton(string label) override
    {
        return new XboxButton(label);
    }
    virtual CheckBox* CreateCheckBox() override
    {
        return new XboxCheckBox();
    }
};

#else
// Playstation
class PlaystationButton : public Button
{
public:
    PlaystationButton(string label)
        : Button(label)
    {
    }
    virtual void Draw() override
    {
        cout << "Playstation Button: " << m_label << endl;
    }
};

class PlaystationCheckBox : public CheckBox
{
public:
    virtual void Draw() override
    {
        cout << "Playstation CheckBox" << endl;
    }
};

class PlaystationFactory : public GUIFactory
{
public:
    virtual Button* CreateButton(string label) override
    {
        return new PlaystationButton(label);
    }
    virtual CheckBox* CreateCheckBox() override
    {
        return new PlaystationCheckBox();
    }
};

#endif

// will return the factories wanted
GUIFactory* GetGUIFactory()
{
#ifdef XBOX
    return new XboxFactory();
#else
    return new PlaystationFactory();
#endif
}

int main()
{
    GUIFactory* pFactory = GetGUIFactory();
    Button* pButton = pFactory->CreateButton("Main Menu");
    CheckBox* pCheckBox = pFactory->CreateCheckBox();

    pButton->Draw();
    pCheckBox->Draw();

    delete pButton;
    pButton = nullptr;

    delete pCheckBox;
    pCheckBox = nullptr;

    delete pFactory;
    pFactory = nullptr;

    return 0;
}
