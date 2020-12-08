#
# Makefile
#
# Makefile for macchina.io LTEBundle sample
#

include $(POCO_BASE)/build/rules/global
include $(POCO_BASE)/OSP/BundleCreator/BundleCreator.make

objects = BundleActivator

target      = io.macchina.samples.lte
target_libs = PocoOSP PocoUtil PocoJSON PocoXML PocoFoundation

postbuild = $(SET_LD_LIBRARY_PATH) $(BUNDLE_TOOL) -n$(OSNAME) -a$(OSARCH) -o../bundles LTEBundle.bndlspec

include $(POCO_BASE)/build/rules/dylib
