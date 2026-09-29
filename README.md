# Image Steganography in C

A command-line based image steganography project developed in C for hiding secret text data inside BMP image files and extracting the hidden data when required.

## Features

* Encode secret text data into a BMP image
* Decode hidden text data from a stego image
* Command-line argument based operation
* Uses a magic string to identify encoded files
* Handles BMP image and text file operations

## Technologies Used

* C
* File Handling
* Pointers
* Structures
* Bit Manipulation
* Command-Line Arguments
* Dynamic Memory Allocation

## Usage

### Encoding

```bash
./a.out -e beautiful.bmp secret.txt stego.bmp
```

### Decoding

```bash
./a.out -d stego.bmp decode.txt
```

## Encoding Options

```text
-e <source_image.bmp> <secret_file.txt> <output_image.bmp>
```

## Decoding Options

```text
-d <stego_image.bmp> <output_text_file.txt>
```

## Project Structure

```text
image-steganography-c/
├── src/
├── include/
├── README.md
└── ...
```

## Working Principle

The project hides secret text data inside the pixel data of a BMP image by modifying selected bits of the image bytes. During decoding, the modified bits are read back to reconstruct the original secret data.

## Author

Akshat Raj
