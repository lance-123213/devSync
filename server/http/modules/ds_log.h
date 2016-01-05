/*
 * Copyright (C) Reage
 * blog:http://www.ireage.ccom
 */
#ifndef _HTTP_DS_LOG_H_

#define _HTTP_DS_LOG_H_
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "base.h"

#define  LOG_STR_MAX_LEN (255)

int logFileId;
int logFileErrorId;
char logStr[LOG_STR_MAX_LEN];

int ds_log(http_conf * conf, char * str, int level);
int ds_log_error(http_conf * conf, char * str);
int ds_init(http_conf * conf);

#endif