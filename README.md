# emoji
Emojis are just Unicode characters, patterns of bits that humans have decided shall represent ideograms. Whereas ASCII uses just one byte to represent each of its characters, Unicode uses as many as four. Each emoji is defined by its code point, a number often written in hexadecimal, that uniquely identifies it. For instance, the code point for “grinning face” is U+1F600, otherwise known as 0x1F600. 😀

It turns out we can programmatically generate an emoji! Try compiling and running the code in your IDE, wherein wchar_t represents a "wide character," which can be thought as a 4-byte character (or, really, number).

This piece of code will generate a grinning face emoji as an output. You can check this site (https://unicode.org/emoji/charts/full-emoji-list.html) to get the code point for every emoji.
