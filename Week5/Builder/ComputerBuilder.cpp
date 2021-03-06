#include "ComputerBuilder.h"

ComputerBuilder::ComputerBuilder() : m_computer(0)
{

}

ComputerBuilder::~ComputerBuilder()
{

}

void ComputerBuilder::createComputer()
{
    addCPU();
    addMotherboard();
    addGraphicsCard();
    addAdditionalParts();
}

Computer* ComputerBuilder::getResult() const
{
    return m_computer;
}
