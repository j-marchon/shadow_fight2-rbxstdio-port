// GPEHLCDLNDL$$.cctor @ RVA 0x312818C

void GPEHLCDLNDL___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_TutorialNode__o *__this;
  
  if ((DAT_0456666f & 1) == 0) {
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<TutorialNode>_TypeInfo);
    DAT_0456666f = 1;
  }
  __this = (System_Collections_Generic_List_TutorialNode__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<TutorialNode>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<TutorialNode>__ctor__);
  GPEHLCDLNDL_TypeInfo->static_fields->JFNDMOBADAG = __this;
  thunk_FUN_01c20e04(GPEHLCDLNDL_TypeInfo->static_fields,__this);
  return;
}

