#include <iostream>
#include "source.h"

std::string SourceToken(const std::vector<std::string>& tokens) {
    std::string source = tokens[2];
    if (source == "��������" || source == "�����" || source == "������") {
        return "��������: " + source;
} else {return "�������� �������. �������: ��������, ����� ��� ������.";}
}