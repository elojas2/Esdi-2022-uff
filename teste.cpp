#include <tuple>

#define CATCH_CONFIG_MAIN // define main() automaticamente
#include "thirdparty/catch.hpp"

#include "aluno.hpp" // implementações do aluno

// =======================
// testes para exercício 0
// -----------------------

TEST_CASE("Ex0", "[aquecimento]") { REQUIRE(exercicio0("") == 0); }

// =======================
// testes para exercício 1
// -----------------------

TEST_CASE("Ex1", "[aquecimento]") {
  REQUIRE(exercicio1("1 3") == 6);
  REQUIRE(exercicio1("1 10") == 55);
}

// ===================
// testes para exemplo
// -------------------

TEST_CASE("exemplo n=3 3 2 5", "[aquecimento]") {
  // 3 + 2 + 5 = 10
  REQUIRE(exemplo_c("\t3     3    2 \n\t 5") == 10);
  REQUIRE(exemplo_cpp("\t3     3    2 \n\t 5") == 10);
}

// testado com Catch v2.13.1
// mais testes virão aqui no futuro...

TEST_CASE("Ex2", "[aquecimento]") {
  REQUIRE(exercicio2("4 1 1 2 3") == 1);
  REQUIRE(exercicio2("3 1 2 3") == 0);
}

TEST_CASE("Ex3", "[aquecimento]") {
  REQUIRE(exercicio3("4 5.0 10.0 1.5 3.5") ==
          std::make_tuple(20.0, 5.0, 10.0, 1.5));
  REQUIRE(exercicio3("2 1.0 -1.0") == std::make_tuple(0.0, 0.0, 1.0, -1.0));
}

TEST_CASE("Ex4", "[aquecimento]") {
  REQUIRE(exercicio4("6\n"
                     "8.0 Carla\n"
                     "9.0 Marcos\n"
                     "1.0 José\n"
                     "9.9 Rita\n"
                     "5.0 Luiz\n"
                     "7.0 Maria\n"
                     "2") == 1);
  REQUIRE(exercicio4("2\n"
                     "3.0 A\n"
                     "9.0 B\n"
                     "1") == 0);
  REQUIRE(exercicio4("2\n"
                     "3.0 A\n"
                     "9.0 B\n"
                     "2") == 1);
}

TEST_CASE("Ex5", "[aquecimento]") { REQUIRE(exercicio5("4") == 24); }

TEST_CASE("Ex6", "[aquecimento]") { REQUIRE(exercicio6("4") == 3); }

TEST_CASE("Ex7", "[aquecimento]") {
  REQUIRE(exercicio7("3\n"
                     "t p\n"
                     "d p\n"
                     "d t") == 'M');
}

TEST_CASE("Ex8", "[aquecimento]") {
  REQUIRE(exercicio8("10 20") == std::make_tuple(20, 10));
}

TEST_CASE("Ex9", "[aquecimento]") { REQUIRE(exercicio9("5 8 3 6 1 4") == 4.0); }
