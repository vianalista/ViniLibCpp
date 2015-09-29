#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/AbstractBaseClasses.o \
	${OBJECTDIR}/AllocArray.o \
	${OBJECTDIR}/AllocatedObjects-Quantity.o \
	${OBJECTDIR}/CheckInstances.o \
	${OBJECTDIR}/Classes.o \
	${OBJECTDIR}/ClassesDestructor.o \
	${OBJECTDIR}/FriendClasses.o \
	${OBJECTDIR}/FriendFunctions.o \
	${OBJECTDIR}/InheritanceClasses.o \
	${OBJECTDIR}/InheritanceConstructor.o \
	${OBJECTDIR}/OverloadedFunction.o \
	${OBJECTDIR}/OverloadingConstructors.o \
	${OBJECTDIR}/ParamDefaultValue.o \
	${OBJECTDIR}/PointerToClasses.o \
	${OBJECTDIR}/PointerToFunction.o \
	${OBJECTDIR}/Polymorphism.o \
	${OBJECTDIR}/RecursiveFunction.o \
	${OBJECTDIR}/TemplateClass.o \
	${OBJECTDIR}/TemplateFunction.o \
	${OBJECTDIR}/TemplateSpecialization.o \
	${OBJECTDIR}/VirtualMember.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/menu.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/vinilibcpp

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/vinilibcpp: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/vinilibcpp ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/AbstractBaseClasses.o: AbstractBaseClasses.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AbstractBaseClasses.o AbstractBaseClasses.cpp

${OBJECTDIR}/AllocArray.o: AllocArray.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AllocArray.o AllocArray.cpp

${OBJECTDIR}/AllocatedObjects-Quantity.o: AllocatedObjects-Quantity.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AllocatedObjects-Quantity.o AllocatedObjects-Quantity.cpp

${OBJECTDIR}/CheckInstances.o: CheckInstances.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CheckInstances.o CheckInstances.cpp

${OBJECTDIR}/Classes.o: Classes.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Classes.o Classes.cpp

${OBJECTDIR}/ClassesDestructor.o: ClassesDestructor.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ClassesDestructor.o ClassesDestructor.cpp

${OBJECTDIR}/FriendClasses.o: FriendClasses.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FriendClasses.o FriendClasses.cpp

${OBJECTDIR}/FriendFunctions.o: FriendFunctions.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FriendFunctions.o FriendFunctions.cpp

${OBJECTDIR}/InheritanceClasses.o: InheritanceClasses.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/InheritanceClasses.o InheritanceClasses.cpp

${OBJECTDIR}/InheritanceConstructor.o: InheritanceConstructor.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/InheritanceConstructor.o InheritanceConstructor.cpp

${OBJECTDIR}/OverloadedFunction.o: OverloadedFunction.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OverloadedFunction.o OverloadedFunction.cpp

${OBJECTDIR}/OverloadingConstructors.o: OverloadingConstructors.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OverloadingConstructors.o OverloadingConstructors.cpp

${OBJECTDIR}/ParamDefaultValue.o: ParamDefaultValue.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ParamDefaultValue.o ParamDefaultValue.cpp

${OBJECTDIR}/PointerToClasses.o: PointerToClasses.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PointerToClasses.o PointerToClasses.cpp

${OBJECTDIR}/PointerToFunction.o: PointerToFunction.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PointerToFunction.o PointerToFunction.cpp

${OBJECTDIR}/Polymorphism.o: Polymorphism.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Polymorphism.o Polymorphism.cpp

${OBJECTDIR}/RecursiveFunction.o: RecursiveFunction.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/RecursiveFunction.o RecursiveFunction.cpp

${OBJECTDIR}/TemplateClass.o: TemplateClass.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TemplateClass.o TemplateClass.cpp

${OBJECTDIR}/TemplateFunction.o: TemplateFunction.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TemplateFunction.o TemplateFunction.cpp

${OBJECTDIR}/TemplateSpecialization.o: TemplateSpecialization.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TemplateSpecialization.o TemplateSpecialization.cpp

${OBJECTDIR}/VirtualMember.o: VirtualMember.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/VirtualMember.o VirtualMember.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/menu.o: menu.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/menu.o menu.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/vinilibcpp

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
