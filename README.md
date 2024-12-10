# logs_tools_c

Here you will find a logging tool useful for your C applications.

## Installation

To install the logging tools, clone this repository and compile the sources:

```sh
git clone https://github.com/Klaynight-dev/logs_tools_c.git
cd logs_tools_c
make
```

## Usage

Here is an example of how to use the logging tools in your C code:

```c
#include "log_tools.h"

int main() {
    log_info("Starting the application");
    // Your code here
    log_error("An error occurred");
    return 0;
}
```

## Contributing

Contributions are welcome! Please create a pull request or open an issue to discuss the changes you want to make.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
