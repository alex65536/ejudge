/* -*- c -*- */
/* $Id$ */

#ifndef __CLIENT_ACTIONS_H__
#define __CLIENT_ACTIONS_H__

/* Copyright (C) 2002-2005 Alexander Chernov <cher@ispras.ru> */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

enum
  {
    ACTION_DUMMY = 0,
    ACTION_RUN_CHANGE_USER_ID,
    ACTION_RUN_CHANGE_USER_LOGIN,
    ACTION_RUN_CHANGE_LANG,
    ACTION_RUN_CHANGE_PROB,
    ACTION_RUN_CHANGE_STATUS,
    ACTION_USER_TOGGLE_BAN,
    ACTION_USER_TOGGLE_VISIBILITY,
    ACTION_USER_TOGGLE_LOCK,
    ACTION_GENERATE_PASSWORDS_1,
    ACTION_GENERATE_PASSWORDS_2,
    ACTION_SUSPEND,
    ACTION_RESUME,
    ACTION_UPDATE_STANDINGS_1,
    ACTION_UPDATE_STANDINGS_2,
    ACTION_RESET_1,
    ACTION_RESET_2,
    ACTION_START,
    ACTION_STOP,
    ACTION_REJUDGE_ALL_1,
    ACTION_REJUDGE_ALL_2,
    ACTION_REJUDGE_PROBLEM,
    ACTION_SCHEDULE,
    ACTION_DURATION,
    ACTION_LOGOUT,
    ACTION_CHANGE_LANGUAGE,
    ACTION_CHANGE_PASSWORD,
    ACTION_SUBMIT_RUN,
    ACTION_SUBMIT_CLAR,
    ACTION_STANDINGS,
    ACTION_START_VIRTUAL,
    ACTION_STOP_VIRTUAL,
    ACTION_RESET_FILTER,
    ACTION_CLEAR_RUN,
    ACTION_CLEAR_RUN_2,
    ACTION_SQUEEZE_RUNS,
    ACTION_SQUEEZE_RUNS_2,
    ACTION_DUMP_RUNS,
    ACTION_DUMP_USERS,
    ACTION_DUMP_STANDINGS,
    ACTION_SET_JUDGING_MODE,
    ACTION_CONTINUE,
    ACTION_CONTINUE_2,
    ACTION_GENERATE_REG_PASSWORDS_1,
    ACTION_GENERATE_REG_PASSWORDS_2,
    ACTION_WRITE_XML_RUNS,
    ACTION_MERGE_RUNS,
    ACTION_RUN_CHANGE_IMPORTED,
    ACTION_CLEAR_TEAM_PASSWORDS_1,
    ACTION_CLEAR_TEAM_PASSWORDS_2,
    ACTION_RELOAD_SERVER,
    ACTION_EXPORT_XML_RUNS,
    ACTION_RUN_CHANGE_VARIANT,
    ACTION_RUN_CHANGE_HIDDEN,
    ACTION_TEST_SUSPEND,
    ACTION_TEST_RESUME,
    ACTION_JUDGE_SUSPENDED_1,
    ACTION_JUDGE_SUSPENDED_2,
    ACTION_RUN_CHANGE_TESTS,
    ACTION_RUN_CHANGE_SCORE,
    ACTION_RUN_CHANGE_READONLY,
    ACTION_SET_ACCEPTING_MODE,
    ACTION_PRINT_RUN,
    ACTION_PRINT_PRIV_RUN,
    ACTION_RUN_CHANGE_PAGES,
    ACTION_PRIV_DOWNLOAD_RUN,
    ACTION_PRINT_SUSPEND,
    ACTION_PRINT_RESUME,
    ACTION_COMPARE_RUNS,
    ACTION_UPLOAD_REPORT,
    ACTION_REJUDGE_DISPLAYED_1,
    ACTION_REJUDGE_DISPLAYED_2,
    ACTION_NEW_RUN_FORM,
    ACTION_NEW_RUN,
    ACTION_VIEW_TEAM,
    ACTION_CHANGE_CONTESTANT_STATUS,
    ACTION_ISSUE_WARNING,
    ACTION_RUN_CHANGE_SCORE_ADJ,
    ACTION_RESET_CLAR_FILTER,
    ACTION_VIEW_TEST_INPUT,
    ACTION_VIEW_TEST_OUTPUT,
    ACTION_VIEW_TEST_ANSWER,
    ACTION_VIEW_TEST_ERROR,
    ACTION_VIEW_TEST_CHECKER,
    ACTION_VIEW_TEST_INFO,
    ACTION_VIEW_AUDIT_LOG,
    ACTION_LAST
  };

#endif /* __CLIENT_ACTIONS_H__ */

