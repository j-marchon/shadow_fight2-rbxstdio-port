// MDFGJKBMECA.OJOAPHBHAFL$$.ctor @ RVA 0x3368C48

void MDFGJKBMECA_OJOAPHBHAFL___ctor(MDFGJKBMECA_OJOAPHBHAFL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567ae5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlDocument>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_XmlDocument>_TypeInfo);
    DAT_04567ae5 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_XmlDocument>_TypeInfo,
                              method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_XmlDocument>__ctor__);
  (__this->fields).CANNFEEOFEA =
       (System_Collections_Generic_Dictionary_string__XmlDocument__o *)pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  ppSVar2 = &(__this->fields).INCJHPNJFFA;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

