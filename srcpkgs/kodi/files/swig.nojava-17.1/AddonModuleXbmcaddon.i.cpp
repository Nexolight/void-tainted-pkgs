

/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
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


#include "interfaces/legacy/Addon.h"

using namespace XBMCAddon;
using namespace xbmcaddon;

#if defined(__GNUG__) && (__GNUC__>4) || (__GNUC__==4 && __GNUC_MINOR__>=2)
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
       (char*)"|s",
       (char**)keywords,
         &id
       ))
    {
      return NULL;
    }

    XBMCAddon::xbmcaddon::Addon * apiResult;
    try
    {

      XBMCAddon::SetLanguageHookGuard slhg(XBMCAddon::Python::PythonLanguageHook::GetIfExists(PyThreadState_Get()->interp).get());
      apiResult = (XBMCAddon::xbmcaddon::Addon *)new XBMCAddon::xbmcaddon::Addon(  id  );
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
       (char*)"i",
       (char**)keywords,
         &id
       ))
    {
      return NULL;
    }

    std::string  apiResult;
    try
    {

      apiResult = (std::string )((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"getLocalizedString","XBMCAddon::xbmcaddon::Addon"))-> getLocalizedString(  id  );

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
         
    char * id ;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       (char*)"s",
       (char**)keywords,
         &id
       ))
    {
      return NULL;
    }

    std::string  apiResult;
    try
    {

      apiResult = (std::string )((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"getSetting","XBMCAddon::xbmcaddon::Addon"))-> getSetting(  id  );

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

  static PyObject* xbmcaddon_XBMCAddon_xbmcaddon_Addon_setSetting (PyHolder* self  , PyObject *args, PyObject *kwds  )
  {
    XBMC_TRACE;

    static const char *keywords[] = {
          "id",
          "value",
          NULL};
         
    char * id ;         
    std::string  value ;
    PyObject* pyvalue = NULL;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       (char*)"sO",
       (char**)keywords,
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
         
    char * id ;
    if (!PyArg_ParseTupleAndKeywords(
       args,
       kwds,
       (char*)"s",
       (char**)keywords,
         &id
       ))
    {
      return NULL;
    }

    std::string  apiResult;
    try
    {

      apiResult = (std::string )((XBMCAddon::xbmcaddon::Addon*)retrieveApiInstance((PyObject*)self,&TyXBMCAddon_xbmcaddon_Addon_Type,"getAddonInfo","XBMCAddon::xbmcaddon::Addon"))-> getAddonInfo(  id  );

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
  // Python extention for the Api class XBMCAddon::xbmcaddon::Addon
  //=========================================================================
  // All of the methods on this class
  static PyMethodDef XBMCAddon_xbmcaddon_Addon_methods[] = { 
    {(char*)"getLocalizedString", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_getLocalizedString, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {(char*)"getSetting", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_getSetting, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {(char*)"setSetting", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_setSetting, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {(char*)"openSettings", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_openSettings, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {(char*)"getAddonInfo", (PyCFunction)xbmcaddon_XBMCAddon_xbmcaddon_Addon_getAddonInfo, METH_VARARGS|METH_KEYWORDS, NULL }, 
    {NULL, NULL, 0, NULL}
  };



  // This method initializes the above mentioned Python Type structure
  static void initPyXBMCAddon_xbmcaddon_Addon_Type()
  {


    PyTypeObject& pythonType = TyXBMCAddon_xbmcaddon_Addon_Type.pythonType;
    pythonType.tp_name = (char*)"xbmcaddon.Addon";
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

    module = Py_InitModule((char*)"xbmcaddon", xbmcaddon_methods);
    if (module == NULL) return;


    PyModule_AddObject(module, (char*)"Addon", (PyObject*)(&(TyXBMCAddon_xbmcaddon_Addon_Type.pythonType)));

   // constants
   PyModule_AddStringConstant(module, (char*)"__author__", (char*)"Team Kodi <http://kodi.tv>");
   PyModule_AddStringConstant(module, (char*)"__date__", (char*)"Sun May 21 20:33:17 GMT 2017");
   PyModule_AddStringConstant(module, (char*)"__version__", (char*)"2.25.0");
   PyModule_AddStringConstant(module, (char*)"__credits__", (char*)"Team Kodi");
   PyModule_AddStringConstant(module, (char*)"__platform__", (char*)"ALL");

   // need to handle constants

  }

} // end PythonBindings namespace for python type definitions


