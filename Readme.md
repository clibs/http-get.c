
# http-get

  Simple HTTP GET requests backed by libcurl 

## Prerequisites

* [`libcurl`](http://curl.haxx.se/docs/install.html)

## Installation

  Install with [clib(1)](https://github.com/clibs/clib):

    $ clib install http-get.c

## API

### `http_get_response_t *http_get(const char *url)`

  Perform an HTTP GET request on `url`, returning the structure:

    {
        ok: 1 or 0,
        status: response status code,
        data: response text/data,
        size: size of data
    }

### `int http_get_file(const char *url, const char *file)`

  Perform an HTTP GET request on `url` and save the response to `file`.  Returns `0` on success and `-1` on failures.

### `void http_get_free(http_get_response_t *res)`

  Free `res`.

## License

(The MIT License)

Copyright (c) 2013 Stephen Mathieson &lt;me@stephenmathieson.com&gt;

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
'Software'), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
