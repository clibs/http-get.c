
//
// http-get.h
//
// Copyright (c) 2013 Stephen Mathieson
// MIT licensed
//


#ifndef __HTTP_GET__
#define __HTTP_GET__ 1

#define HTTP_GET_VERSION "0.0.1"

typedef struct {
  char *data;
  size_t size;
  long status;
  int ok;
} http_get_response_t;

http_get_response_t *http_get(const char *);

int http_get_file(const char *, const char *);

#endif
