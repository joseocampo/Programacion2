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
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/coleccion.o \
	${OBJECTDIR}/curso.o \
	${OBJECTDIR}/escuela.o \
	${OBJECTDIR}/estudiante.o \
	${OBJECTDIR}/estudianteExtranjero.o \
	${OBJECTDIR}/estudianteNacional.o \
	${OBJECTDIR}/grupo.o \
	${OBJECTDIR}/interfaz.o \
	${OBJECTDIR}/interfazCurso.o \
	${OBJECTDIR}/interfazEscuela.o \
	${OBJECTDIR}/interfazProfesor.o \
	${OBJECTDIR}/interfazSistema.o \
	${OBJECTDIR}/interfazUniversidad.o \
	${OBJECTDIR}/iterador.o \
	${OBJECTDIR}/lista.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/matricula.o \
	${OBJECTDIR}/objeto.o \
	${OBJECTDIR}/profesor.o \
	${OBJECTDIR}/sistema.o \
	${OBJECTDIR}/universidad.o \
	${OBJECTDIR}/vector.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/sistema-matricula-3.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/sistema-matricula-3.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/sistema-matricula-3 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/coleccion.o: coleccion.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/coleccion.o coleccion.cpp

${OBJECTDIR}/curso.o: curso.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/curso.o curso.cpp

${OBJECTDIR}/escuela.o: escuela.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/escuela.o escuela.cpp

${OBJECTDIR}/estudiante.o: estudiante.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/estudiante.o estudiante.cpp

${OBJECTDIR}/estudianteExtranjero.o: estudianteExtranjero.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/estudianteExtranjero.o estudianteExtranjero.cpp

${OBJECTDIR}/estudianteNacional.o: estudianteNacional.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/estudianteNacional.o estudianteNacional.cpp

${OBJECTDIR}/grupo.o: grupo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/grupo.o grupo.cpp

${OBJECTDIR}/interfaz.o: interfaz.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfaz.o interfaz.cpp

${OBJECTDIR}/interfazCurso.o: interfazCurso.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfazCurso.o interfazCurso.cpp

${OBJECTDIR}/interfazEscuela.o: interfazEscuela.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfazEscuela.o interfazEscuela.cpp

${OBJECTDIR}/interfazProfesor.o: interfazProfesor.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfazProfesor.o interfazProfesor.cpp

${OBJECTDIR}/interfazSistema.o: interfazSistema.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfazSistema.o interfazSistema.cpp

${OBJECTDIR}/interfazUniversidad.o: interfazUniversidad.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfazUniversidad.o interfazUniversidad.cpp

${OBJECTDIR}/iterador.o: iterador.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/iterador.o iterador.cpp

${OBJECTDIR}/lista.o: lista.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lista.o lista.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/matricula.o: matricula.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/matricula.o matricula.cpp

${OBJECTDIR}/objeto.o: objeto.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/objeto.o objeto.cpp

${OBJECTDIR}/profesor.o: profesor.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/profesor.o profesor.cpp

${OBJECTDIR}/sistema.o: sistema.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sistema.o sistema.cpp

${OBJECTDIR}/universidad.o: universidad.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/universidad.o universidad.cpp

${OBJECTDIR}/vector.o: vector.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/vector.o vector.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/sistema-matricula-3.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
