#
# 	Makefile for utilities for the http web server 
#
# 	opyright (c) Embedthis Software LLC, 2003-2012. All Rights Reserved.
#

include 		.makedep

TARGETS			+= $(BLD_BIN_DIR)/cgiProgram$(BLD_EXE)
ifeq ($(BUILD_NATIVE_OR_COMPLETE_CROSS),1)
	TARGETS		+= $(BLD_BIN_DIR)/httpPassword$(BLD_EXE)
endif

compileExtra: $(TARGETS)

$(BLD_BIN_DIR)/httpPassword$(BLD_EXE): $(OBJECTS)
	bld --exe $(BLD_BIN_DIR)/httpPassword$(BLD_EXE) --libs "$(BLD_MPR_LIBS)" $(BLD_OBJ_DIR)/httpPassword$(BLD_OBJ)

$(BLD_BIN_DIR)/cgiProgram$(BLD_EXE): $(OBJECTS)
	bld --exe $(BLD_BIN_DIR)/cgiProgram$(BLD_EXE) $(BLD_OBJ_DIR)/cgiProgram$(BLD_OBJ) $(BLD_OBJ_DIR)/mprLib$(BLD_OBJ)

#
#   Local variables:
#   tab-width: 4
#   c-basic-offset: 4
#   End:
#   vim: sw=4 ts=4 noexpandtab
#
