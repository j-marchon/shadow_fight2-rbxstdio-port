// PFDCJGIIPLB$$IGPLEOEHKKG @ RVA 0x3355648

System_Collections_Generic_Dictionary_string__object__o *
PFDCJGIIPLB__IGPLEOEHKKG(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_04567a42 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    DAT_04567a42 = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
  return (System_Collections_Generic_Dictionary_string__object__o *)__this;
}

