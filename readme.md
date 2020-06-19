# Hash Generator

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/1ef83a55516e4089962d0f5c8dbadcea)](https://www.codacy.com/manual/bartkessels/HashGenerator?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=bartkessels/HashGenerator&amp;utm_campaign=Badge_Grade)
[![codecov](https://codecov.io/gh/bartkessels/hashgenerator/branch/development/graph/badge.svg)](https://codecov.io/gh/bartkessels/hashgenerator)

<br>

|__Linux / MacOS__|__Windows__|
|---|---|
|[![Build Status](https://travis-ci.org/bartkessels/HashGenerator.svg?branch=development)](https://travis-ci.org/bartkessels/HashGenerator)|[![Build status](https://ci.appveyor.com/api/projects/status/a182byo6kb5bcsy7?svg=true)](https://ci.appveyor.com/project/bartkessels/hashgenerator)|


Application to generate different kind of hashes

---

## Table of contents

- [1. Screenshots](#1-screenshots)
- [2. Features](#2-features)
    - [2.1 Supported hashing algorithms](#21-supported-algorithms)
- [3. Required packages](#3-required-packages)
- [4. Build](#4-build)
    - [4.1 MacOS](#41-macos)
    - [4.2 Linux](#42-linux)
    - [4.3 Windows](#43-windows)
- [5. Packaging](#5-packaging)
    - [5.1 MacOS](#51-macos)
    - [5.2 Linux](#52-linux)
    - [5.3 Windows](#53-windows)

## 1. Screenshots

![Main window of Hash Generator](data/screenshot_1.png)

## 2. Features

Hash Generator is a small application to generate multiple hashes from any input string you give it.
The code is designed to easily add new hashing algorithms so if you're missing anything feel free
to open a pull-request or create an issue.

### 2.1 Supported algorithms

- Keccak-224
- Keccak-256
- Keccak-384
- Keccak-512
- MD4
- MD5
- SHA1
- SHA224
- SHA256
- SHA384
- SHA512
- SHA3-224
- SHA3-256
- SHA3-284
- SHA3-512

## 3. Required packages

Hash Generator only uses the `Core` and `Widgets` components of the Qt5 library for the GUI.
To run the tests Hash Generator requires Catch2 which will be fetched when building `hashgen_tests`
so there's no need to install any libraries or header files.

## 4. Build

### 4.1 MacOS

```bash
$ mkdir build
$ cd build
$ cmake ..
$ make
```

After these commands completed you'll get two files in the `bin` folder, one for running the tests and
a `.app` file which you can execute to run Hash Generator.

Use `./bin/hashgen_tests` to run the tests

Use `open bin/hashgen.app` to execute the application

### 4.2 Linux

```bash
$ mkdir build
$ cd build
$ cmake ..
$ make
```

After these commands completed you'll get two files in the `bin` folder, one for running the tests and
one for executing Hash Generator itself.

Use `./bin/hashgen_tests` to run the tests

Use `./bin/hashgen` to execute the application

### 4.3 Windows

```bat
> cmake ..
> devenv HashGenerator.sln /deploy Release
```

After these commands completed you'll get two files in the `bin/Release` folder, one for running the tests and
one for executing Hash Generator itself.

Use `bin/Release/hashgen_tests.exe` to run the tests

Use `bin/Release/hashgen.exe` to execute the application

## 5. Packaging

To install Hash Generator we need to create an installable package for the platform you're currently on.

You can only execute these steps if you've already built the application. The working directory for all the following
platforms is assumed to be `build`.

### 5.1 Macos

On MacOS we'll create a `dmg` package in which you can drag the `hashgen.app` file into the `Applications` directory.
As of right now you need to enter the bin directory to be able to see the `hashgen.app` file, this will be resolved so
it's more user friendly.

By executing the following command you'll get the `HashGenerator-<verion_number>-Darwin.dmg` file in the `build` directory.

```bash
$ cpack -g DragNDrop
```

### 5.2 Linux

On Linux we'll create a bash script which can install Hash Generator.

By executing the following command you'll get the `HashGenerator-<version-number>-Linux.sh` file in the `build` directory.

```bash
$ cpack
``` 

### 5.3 Windows

On Windows we'll create an executable to install Hash Generator into the program files directory.

By executing the following command you'll get the `HashGenerator-<version_number>-Windows.exe` file in the `build` directory.

```bat
> cpack
```