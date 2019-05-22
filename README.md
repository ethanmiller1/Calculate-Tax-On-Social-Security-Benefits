# Calculate Tax on Social Security Benefits App

**Version 1.0.0**

Perform the calculations for the [Social Security Benefits Worksheet](https://www.irs.gov/pub/irs-prior/i1040gi--2018.pdf#page=33 "Page 33") given the input fields as they appear on from [Form 1040](https://www.irs.gov/pub/irs-pdf/f1040.pdf "U.S. Individual Income Tax Return").

## Build

Ensure you have an IDE that supports C++ (such as [Visual Studio Community](https://visualstudio.microsoft.com/vs/community/ "Visual Studio Community")), then:

``` bash
git clone https://github.com/king-melchizedek/Python-and-Flask-Web-App.git
```

Open the solution with the `IncomeTaxCalculator.sln` file. Once you have the project opened, simply run the debugger or build the solution.

### Entry Point

`Form1040.cpp` contains `main`, which is the project's entry point. Run `make Form1040` in the terminal to compile it.

(Note: `make` is a GNU command. To use on Windows, install a GNU development environment for Windows, such as [MinGW](http://www.mingw.org/).)

### Run An Executable

An exe exists in the root Debug folder, which may be run to execute the code and launch the application.

## Usage

#### Calculate Tax

Click "OK" to run the calculations on the Form 1040 input values provided. It will display a messagebox that gives the final value.

![Calculate Fields](https://github.com/king-melchizedek/Calculate-Tax-On-Social-Security-Benefits/raw/master/Demos/calculate.gif)

#### Export Data

Export current fields to a txt file.

![Calculate Fields](https://github.com/king-melchizedek/Calculate-Tax-On-Social-Security-Benefits/raw/master/Demos/export.gif)

#### Import Data

Import input fields from an existing txt file.

![Calculate Fields](https://github.com/king-melchizedek/Calculate-Tax-On-Social-Security-Benefits/raw/master/Demos/import.gif)

## Contributors

---

- Ethan Miller <ethan.romans5.8@gmail.com>

---

## License

Public domain

