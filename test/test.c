
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "http-get.h"
#include "describe.h"

static int file_exists(const char *path) {
  struct stat b;
  return stat(path, &b);
}

int main(int argc, char **argv) {

  describe("http_get", {
    it("should perform an HTTP GET request", {
      response_t *res = http_get("http://google.com");
      assert(res);
      assert(res->data);
      assert(res->ok);
      assert(200 == res->status);
    });
  });

  describe("http_get_file", {
    it("should download a file to the disk", {
      assert(0 == http_get_file("http://google.com", "./google.html"));
      assert(0 == file_exists("./google.html"));
      unlink("./google.html");
    });
  });

  return 0;
}
