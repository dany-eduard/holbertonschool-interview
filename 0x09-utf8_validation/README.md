# 0x09. UTF-8 Validation

<h2>Resources</h2>
<ul>
<li><a href="https://en.wikipedia.org/wiki/UTF-8" title="UTF-8" target="_blank">UTF-8</a> </li>
<li><a href="https://www.youtube.com/watch?v=MijmeoH9LT4" title="Characters, Symbols, and the Unicode Miracle" target="_blank">Characters, Symbols, and the Unicode Miracle - YouTube</a> </li>
</ul>

<h2>Requirements</h2>
<ul>
<li>All your files will be interpreted/compiled on Ubuntu 14.04 LTS using <code>python3</code> (version 3.4.3)</li>
<li>The first line of all your files should be exactly <code>#!/usr/bin/python3</code></li>
<li>Your code should use the <code>PEP 8</code> style (version 1.7.x)</li>
<li>All your files must be executable</li>
</ul>

<h2>Tasks</h2>
<h3>0. UTF-8 Validation</h3>
<p>Write a method that determines if a given data set represents a valid UTF-8 encoding.</p>
<ul>
<li>Prototype: <code>def validUTF8(data)</code></li>
<li>Return: <code>True</code> if data is a valid UTF-8 encoding, else return <code>False</code></li>
<li>A character in UTF-8 can be 1 to 4 bytes long</li>
<li>The data set can contain multiple characters</li>
<li>The data will be represented by a list of integers</li>
<li>Each integer represents 1 byte of data, therefore you only need to handle the 8 least significant bits of each integer</li>
</ul>

<pre><code>carrie@ubuntu:~/0x09-utf8_validation$ cat 0-main.py
#!/usr/bin/python3
"""
Main file for testing
"""

validUTF8 = __import__('0-validate_utf8').validUTF8

data = [65]
print(validUTF8(data))

data = [80, 121, 116, 104, 111, 110, 32, 105, 115, 32, 99, 111, 111, 108, 33]
print(validUTF8(data))

data = [229, 65, 127, 256]
print(validUTF8(data))

carrie@ubuntu:~/0x09-utf8_validation$
</code></pre>

<pre><code>carrie@ubuntu:~/0x09-utf8_validation$ ./0-main.py
True
True
False
carrie@ubuntu:~/0x09-utf8_validation$
</code></pre>
