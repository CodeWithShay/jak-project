#pragma once

#include "common/type_system/TypeSpec.h"

/*!
 * This contains type system utilities related to state and process
 */

enum class StateHandler { ENTER, EXIT, CODE, TRANS, POST, EVENT };

TypeSpec state_to_go_function(const TypeSpec& state_type);
StateHandler handler_name_to_kind(const std::string& name);
std::string handler_kind_to_name(StateHandler kind);
TypeSpec get_state_handler_type(const std::string& handler_name, const TypeSpec& state_type);
TypeSpec get_state_handler_type(StateHandler kind, const TypeSpec& state_type);