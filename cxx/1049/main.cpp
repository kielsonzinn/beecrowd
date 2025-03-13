#include <iostream>
#include <string>

int main() {
    std::string a1, a2, a3;
    std::cin >> a1 >> a2 >> a3;

    if ( a1 == "vertebrado" ) {

        if ( a2 == "ave" ) {

            if ( a3 == "carnivoro" ) {

                std::cout << "aguia" << std::endl;

            } else if ( a3 == "onivoro" ) {

                std::cout << "pomba" << std::endl;

            }

        } else if ( a2 == "mamifero" ) {

            if ( a3 == "onivoro" ) {

                std::cout << "homem" << std::endl;

            } else if ( a3 == "herbivoro" ) {

                std::cout << "vaca" << std::endl;

            }

        }

    } else if ( a1 =="invertebrado" ) {

        if ( a2 == "inseto" ) {

            if ( a3 == "hematofago" ) {

                std::cout << "pulga" << std::endl;

            } else if ( a3 == "herbivoro" ) {

                std::cout << "lagarta" << std::endl;

            }

        } else if ( a2 == "anelideo" ) {

            if ( a3 == "hematofago" ) {

                std::cout << "sanguessuga" << std::endl;

            } else if ( a3 == "onivoro" ) {

                std::cout << "minhoca" << std::endl;

            }

        }

    }

    return 0;

}
