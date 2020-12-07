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
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Arreglos.o \
	${OBJECTDIR}/Fibonacci.o \
	${OBJECTDIR}/Funciones.o \
	${OBJECTDIR}/Metodo_bubuja.o \
	${OBJECTDIR}/Metodo_burbuja_decendente.o \
	${OBJECTDIR}/Promedio_de_conjunto_de_datos.o \
	${OBJECTDIR}/Scanf.o \
	${OBJECTDIR}/TablasFor.o \
	${OBJECTDIR}/Valores_min_max.o \
	${OBJECTDIR}/mayor3variables.o \
	${OBJECTDIR}/mayor4numeros.o \
	${OBJECTDIR}/tablas.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tarea.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tarea.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tarea ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Arreglos.o: Arreglos.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arreglos.o Arreglos.c

${OBJECTDIR}/Fibonacci.o: Fibonacci.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Fibonacci.o Fibonacci.c

${OBJECTDIR}/Funciones.o: Funciones.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Funciones.o Funciones.c

${OBJECTDIR}/Metodo_bubuja.o: Metodo_bubuja.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Metodo_bubuja.o Metodo_bubuja.c

${OBJECTDIR}/Metodo_burbuja_decendente.o: Metodo_burbuja_decendente.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Metodo_burbuja_decendente.o Metodo_burbuja_decendente.c

${OBJECTDIR}/Promedio_de_conjunto_de_datos.o: Promedio_de_conjunto_de_datos.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Promedio_de_conjunto_de_datos.o Promedio_de_conjunto_de_datos.c

${OBJECTDIR}/Scanf.o: Scanf.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Scanf.o Scanf.c

${OBJECTDIR}/TablasFor.o: TablasFor.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TablasFor.o TablasFor.c

${OBJECTDIR}/Valores_min_max.o: Valores_min_max.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Valores_min_max.o Valores_min_max.c

${OBJECTDIR}/mayor3variables.o: mayor3variables.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/mayor3variables.o mayor3variables.c

${OBJECTDIR}/mayor4numeros.o: mayor4numeros.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/mayor4numeros.o mayor4numeros.c

${OBJECTDIR}/tablas.o: tablas.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tablas.o tablas.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tarea.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
