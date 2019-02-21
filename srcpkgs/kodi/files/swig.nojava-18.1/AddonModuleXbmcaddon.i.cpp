

/*
 *  Copyright (C) 2005-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

// ************************************************************************
// This file was generated by xbmc compile process. DO NOT EDIT!!
//  It was created by running the code generator on the spec file for
//  the module "xbmcaddon" on the template file PythonSwig.template.cpp
// ************************************************************************



#include <Python.h>
#include <string>
#include "interfaces/python/LanguageHook.h"
#include "interfaces/python/swig.h"
#include "interfaces/python/PyContext.h"


#if defined(TARGET_WINDOWS)
#  include <windows.h>
#endif

#include "interfaces/legacy/Addon.h"

using namespace XBMCAddon;
using namespace xbmcaddon;

#if defined(__GNUG__)
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif



namespace PythonBindings
{

  //=========================================================================
  // These variables will hold the Python Type information for XBMCAddon::xbmcaddon::Addon
  TypeInfo TyXBMCAddon_xbmcaddon_Addon_Type(typeid(XBMCAddon::xbmcaddon::Addon));
  //=========================================================================



  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_New (PyTypeObject* pytype  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          NULL};

    char * id  = NULL;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "|s",
       const_cast<char**>(keywords),
         &id
       ))
    {
      return NULL;
    }

    XBMCAddon::xbmcaddon::Addon * apiResult;
    try
    {

      XBMCAddon::SetLanguageHookGuard slhg(XBMCAddon::Python::PythonLanguageHook::GetIfExists(PyThreadState_Get()->interp).get());
      apiResult = new XBMCAddon::xbmcaddon::Addon(  id  );
      prepareForReturn(apiResult);
    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"new XBMCAddon::xbmcaddon::Addon\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"new XBMCAddon::xbmcaddon::Addon\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    result = makePythonInstance(apiResult,pytype,false);

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_getLocalizedString (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          NULL};

    int  id ;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "i",
       const_cast<char**>(keywords),
         &id
       ))
    {
      return NULL;
    }

    XBMCAddon::String  apiResult;
    try
    {

      apiResult = ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"getLocalizedString","XBMCAddon::xbmcaddon::Addon"))-> getLocalizedString(  id  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"getLocalizedString\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"getLocalizedString\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    result = PyUnicode_DecodeUTF8(apiResult.c_str(),apiResult.size(),"replace");

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_getSetting (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          NULL};

    char * id  = nullptr;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "s",
       const_cast<char**>(keywords),
         &id
       ))
    {
      return NULL;
    }

    XBMCAddon::String  apiResult;
    try
    {

      apiResult = ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"getSetting","XBMCAddon::xbmcaddon::Addon"))-> getSetting(  id  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"getSetting\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"getSetting\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    result = PyString_FromStringAndSize(apiResult.c_str(), apiResult.length());

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_getSettingBool (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          NULL};

    char * id  = nullptr;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "s",
       const_cast<char**>(keywords),
         &id
       ))
    {
      return NULL;
    }

    bool  apiResult;
    try
    {

      apiResult = ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"getSettingBool","XBMCAddon::xbmcaddon::Addon"))-> getSettingBool(  id  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"getSettingBool\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"getSettingBool\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    result = Py_BuildValue("b", apiResult);

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_getSettingInt (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          NULL};

    char * id  = nullptr;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "s",
       const_cast<char**>(keywords),
         &id
       ))
    {
      return NULL;
    }

    int  apiResult;
    try
    {

      apiResult = ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"getSettingInt","XBMCAddon::xbmcaddon::Addon"))-> getSettingInt(  id  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"getSettingInt\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"getSettingInt\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    result = Py_BuildValue("i", apiResult);

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_getSettingNumber (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          NULL};

    char * id  = nullptr;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "s",
       const_cast<char**>(keywords),
         &id
       ))
    {
      return NULL;
    }

    double  apiResult;
    try
    {

      apiResult = ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"getSettingNumber","XBMCAddon::xbmcaddon::Addon"))-> getSettingNumber(  id  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"getSettingNumber\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"getSettingNumber\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    result = PyFloat_FromDouble(apiResult);

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_getSettingString (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          NULL};

    char * id  = nullptr;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "s",
       const_cast<char**>(keywords),
         &id
       ))
    {
      return NULL;
    }

    XBMCAddon::String  apiResult;
    try
    {

      apiResult = ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"getSettingString","XBMCAddon::xbmcaddon::Addon"))-> getSettingString(  id  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"getSettingString\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"getSettingString\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    result = PyString_FromStringAndSize(apiResult.c_str(), apiResult.length());

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_setSetting (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          "value",
          NULL};

    char * id  = nullptr;
    std::string  value ;
    PyObject* pyvalue = NULL;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "sO",
       const_cast<char**>(keywords),
         &id,
         &pyvalue
       ))
    {
      return NULL;
    }


    try
    {
      if (pyvalue) PyXBMCGetUnicodeString(value,pyvalue,false,"value","setSetting"); 

      ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"setSetting","XBMCAddon::xbmcaddon::Addon"))-> setSetting(  id,  value  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"setSetting\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"setSetting\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    Py_INCREF(Py_None);
    result = Py_None;

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_setSettingBool (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          "value",
          NULL};

    char * id  = nullptr;
    bool  value ;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "sb",
       const_cast<char**>(keywords),
         &id,
         &value
       ))
    {
      return NULL;
    }

    bool  apiResult;
    try
    {

      apiResult = ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"setSettingBool","XBMCAddon::xbmcaddon::Addon"))-> setSettingBool(  id,  value  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"setSettingBool\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"setSettingBool\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    result = Py_BuildValue("b", apiResult);

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_setSettingInt (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          "value",
          NULL};

    char * id  = nullptr;
    int  value ;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "si",
       const_cast<char**>(keywords),
         &id,
         &value
       ))
    {
      return NULL;
    }

    bool  apiResult;
    try
    {

      apiResult = ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"setSettingInt","XBMCAddon::xbmcaddon::Addon"))-> setSettingInt(  id,  value  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"setSettingInt\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"setSettingInt\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    result = Py_BuildValue("b", apiResult);

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_setSettingNumber (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          "value",
          NULL};

    char * id  = nullptr;
    double  value ;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "sd",
       const_cast<char**>(keywords),
         &id,
         &value
       ))
    {
      return NULL;
    }

    bool  apiResult;
    try
    {

      apiResult = ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"setSettingNumber","XBMCAddon::xbmcaddon::Addon"))-> setSettingNumber(  id,  value  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"setSettingNumber\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"setSettingNumber\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    result = Py_BuildValue("b", apiResult);

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_setSettingString (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          "value",
          NULL};

    char * id  = nullptr;
    std::string  value ;
    PyObject* pyvalue = NULL;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "sO",
       const_cast<char**>(keywords),
         &id,
         &pyvalue
       ))
    {
      return NULL;
    }

    bool  apiResult;
    try
    {
      if (pyvalue) PyXBMCGetUnicodeString(value,pyvalue,false,"value","setSettingString"); 

      apiResult = ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"setSettingString","XBMCAddon::xbmcaddon::Addon"))-> setSettingString(  id,  value  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"setSettingString\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"setSettingString\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    result = Py_BuildValue("b", apiResult);

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_openSettings (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    try
    {

      ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"openSettings","XBMCAddon::xbmcaddon::Addon"))-> openSettings(  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"openSettings\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"openSettings\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    Py_INCREF(Py_None);
    result = Py_None;

    return result; 
  } 

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_getAddonInfo (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          NULL};

    char * id  = nullptr;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       "s",
       const_cast<char**>(keywords),
         &id
       ))
    {
      return NULL;
    }

    XBMCAddon::String  apiResult;
    try
    {

      apiResult = ((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"getAddonInfo","XBMCAddon::xbmcaddon::Addon"))-> getAddonInfo(  id  );

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
      return NULL; 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
      return NULL; 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"getAddonInfo\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"getAddonInfo\""); 
      return NULL; 
    }

    PyObject* result = Py_None;

    // transform the result
    result = PyString_FromStringAndSize(apiResult.c_str(), apiResult.length());

    return result; 
  } 

  static void xbmcaddon_XBMCAddon_xbmcaddon_Addon_Dealloc (PyHolder* self  )
  {
    XBMC_TRACE;

    try
    {


      XBMCAddon::xbmcaddon::Addon* theObj = (XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"~XBMCAddon::xbmcaddon::Addon","XBMCAddon::xbmcaddon::Addon");
      cleanForDealloc(theObj);

    }
    catch (const XBMCAddon::WrongTypeException& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_TypeError, e.GetMessage()); 
    }
    catch (const XbmcCommons::Exception& e)
    {
      CLog::Log(LOGERROR,"EXCEPTION: %s",e.GetMessage());
      PyErr_SetString(PyExc_RuntimeError, e.GetMessage()); 
    }
    catch (...)
    {
      CLog::Log(LOGERROR,"EXCEPTION: Unknown exception thrown from the call \"XBMCAddon::xbmcaddon::Addon\"");
      PyErr_SetString(PyExc_RuntimeError, "Unknown exception thrown from the call \"XBMCAddon::xbmcaddon::Addon\""); 
    }

    self->ob_type->tp_free((PyObject*)self);
    
  } 
  //=========================================================================
  // This section contains the initialization for the
  // Python extension for the Api class XBMCAddon::xbmcaddon::Addon
  //=========================================================================
  // All of the methods on this class
  static PyMethodDef XBMCAddon_xbmcaddon_Addon_methods[] = { 
    {"getLocalizedString", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_getLocalizedString, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {"getSetting", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_getSetting, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {"getSettingBool", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_getSettingBool, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {"getSettingInt", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_getSettingInt, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {"getSettingNumber", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_getSettingNumber, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {"getSettingString", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_getSettingString, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {"setSetting", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_setSetting, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {"setSettingBool", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_setSettingBool, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {"setSettingInt", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_setSettingInt, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {"setSettingNumber", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_setSettingNumber, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {"setSettingString", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_setSettingString, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {"openSettings", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_openSettings, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {"getAddonInfo", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_getAddonInfo, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {NULL, NULL, 0, NULL}
  };



  // This method initializes the above mentioned Python Type structure
  static void initPyXBMCAddon_xbmcaddon_Addon_Type()
  {


    PyTypeObject& pythonType = TyXBMCAddon_xbmcaddon_Addon_Type.pythonType;
    pythonType.tp_name = "xbmcaddon.Addon";
    pythonType.tp_basicsize = sizeof(PyHolder);
    pythonType.tp_dealloc = (destructor)xbmcaddon_XBMCAddon_xbmcaddon_Addon_Dealloc; 


    pythonType.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE;

    pythonType.tp_doc = NULL;
    pythonType.tp_methods = XBMCAddon_xbmcaddon_Addon_methods; 

    pythonType.tp_base = NULL;
    pythonType.tp_new = xbmcaddon_XBMCAddon_xbmcaddon_Addon_New;

    TyXBMCAddon_xbmcaddon_Addon_Type.swigType="p.XBMCAddon::xbmcaddon::Addon";
    registerAddonClassTypeInformation(&TyXBMCAddon_xbmcaddon_Addon_Type);

  }
  //=========================================================================


  static PyMethodDef xbmcaddon_methods[] = { 
    {NULL, NULL, 0, NULL}
  };

  // This is the call that will call all of the other initializes
  //  for all of the classes in this module
  static void initTypes()
  {
    static bool typesAlreadyInitialized = false;
    if (!typesAlreadyInitialized)
    {
      typesAlreadyInitialized = true;

      initPyXBMCAddon_xbmcaddon_Addon_Type();
      if (PyType_Ready(&(TyXBMCAddon_xbmcaddon_Addon_Type.pythonType)) < 0)
        return;
    }
  }

  void initModule_xbmcaddon()
  {
    initTypes();

    // init general xbmcaddon modules
    PyObject* module;


    Py_INCREF(&(TyXBMCAddon_xbmcaddon_Addon_Type.pythonType));

    module = Py_InitModule("xbmcaddon", xbmcaddon_methods);
    if (module == NULL) return;


    PyModule_AddObject(module, "Addon", (PyObject*)(&(TyXBMCAddon_xbmcaddon_Addon_Type.pythonType)));

   // constants
   PyModule_AddStringConstant(module, "__author__", "Team Kodi <http://kodi.tv>");
   PyModule_AddStringConstant(module, "__date__", "Mon Feb 18 19:37:35 GMT 2019");
   PyModule_AddStringConstant(module, "__version__", "2.26.0");
   PyModule_AddStringConstant(module, "__credits__", "Team Kodi");
   PyModule_AddStringConstant(module, "__platform__", "ALL");

   // need to handle constants

  }

} // end PythonBindings namespace for python type definitions


