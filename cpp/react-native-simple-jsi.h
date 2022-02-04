#ifndef REACT_NATIVE_SIMPLE_JSI_H
#define REACT_NATIVE_SIMPLE_JSI_H

namespace facebook {
    namespace jsi {
        class Runtime;
    }
}

namespace example {
    void install(facebook::jsi::Runtime &jsiRuntime);
}


#endif /* REACT_NATIVE_SIMPLE_JSI_H */
