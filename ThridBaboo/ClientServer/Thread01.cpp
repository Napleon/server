#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
int trigger;

void seokHoon()
{
    while (trigger == 0) {

        cout << "�ƾƾ�" << endl;
        this_thread::sleep_for(std::chrono::milliseconds(1000));

    }
}

void JeongSeok()
{
    while (trigger == 0) {
        this_thread::sleep_for(std::chrono::milliseconds(500));
        cout << "�ƾƾ�2" << endl;
        this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    trigger = 0;
    cout << "�׵��� ����� �������.\n\n";
    thread na(seokHoon);
    thread oh(JeongSeok);

    while (trigger == 0) {
        cin >> trigger;
    }

    na.join();
    oh.join();

    cout << "�׵��� ����� ������.\n\n";
}