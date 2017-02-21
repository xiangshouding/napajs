///
/// Napa response codes definition file!
///
/// Guidelines:
///     1. Use NAPA_RESPONSE_CODE_DEF to define new codes.
///     2. Add new codes at the end of the list.
///     3. Make sure to add a comma at the end of the previous response code defintion
/// 
///    |----------------------- symbol name ---------- string representation --|
///     NAPA_RESPONSE_CODE_DEF( EXAMPLE_NAME1,        "Example string message1"),
///     NAPA_RESPONSE_CODE_DEF( EXAMPLE_NAME2,        "Example string message2")
/// Always add news codes
///

#ifndef NAPA_RESPONSE_CODE_DEF
#error NAPA_RESPONSE_CODE_DEF must be defined before including response_code.inc
#endif

NAPA_RESPONSE_CODE_DEF( SUCCESS,                         "Success"),
NAPA_RESPONSE_CODE_DEF( UNDEFINED,                       "Undefined"),
NAPA_RESPONSE_CODE_DEF( INTERNAL_ERROR,                  "Napa internal error"),
NAPA_RESPONSE_CODE_DEF( TIMEOUT,                         "The request timed out"),
NAPA_RESPONSE_CODE_DEF( LOAD_SCRIPT_ERROR,               "Failed to load JavaScript code in container"),
NAPA_RESPONSE_CODE_DEF( LOAD_FILE_ERROR,                 "Failed to load the JavaScript file in container"),
NAPA_RESPONSE_CODE_DEF( RUN_FUNC_ERROR,                  "Failed to run the JavaScript function"),
NAPA_RESPONSE_CODE_DEF( SETTINGS_PARSER_ERROR,           "Failed to parse settings"),
NAPA_RESPONSE_CODE_DEF( PROVIDERS_INIT_ERROR,            "Failed to initialize providers"),
NAPA_RESPONSE_CODE_DEF( V8_INIT_ERROR,                   "Failed to initialize V8")