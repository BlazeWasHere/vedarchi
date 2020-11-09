# Ved Archi Library
Simple REST API wrapper for https://ved.archi/

## Installation

```bash
$ git clone https://github.com/blazewashere/vedarchi
$ cd vedarchi
$ chmod +x tests.sh
$ ./tests.sh
```

## Usage

```c++
#include "archi/api.h"

int main() {
    Archi archi;
    archi.lists();
    archi.lists("LYOCTRgrJPzDfter");
    archi.donations();
}
```

## Other Langs

Python -> [Ved Archi Py](https://github.com/blazewashere/vedarchi-py)

## Requirements

Requires [CPR](https://github.com/whoshuu/cpr)

## License

[MIT](https://github.com/BlazeWasHere/vedarchi/blob/master/LICENSE)
