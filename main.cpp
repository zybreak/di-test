#include "di.hpp"

struct Foo {
};

int main(int argc, char *argv[]) {

    auto injector = boost::di::make_injector();

    Foo f = injector.create<Foo>();

    return 0;
}
