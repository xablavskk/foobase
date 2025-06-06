#include "Pedido.hpp"

#include <utility>

Pedido::Pedido(const int id, std::string nome) : id(id), name(std::move(nome)) {}

int Pedido::getId() const { return id; }
std::string Pedido::getName() const { return name; }

#include "../db/Database.hpp"

Pedido::Pedido() : id(0), name("") {}

void Pedido::setId(int id) {
    this->id = id;
}

void Pedido::setName(const std::string& name) {
    this->name = name;
}