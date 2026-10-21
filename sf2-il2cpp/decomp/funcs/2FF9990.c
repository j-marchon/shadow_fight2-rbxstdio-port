// JMDPBFOCHHP.CMLEEJPGHNC$$.ctor @ RVA 0x2FF9990

void JMDPBFOCHHP_CMLEEJPGHNC___ctor(JMDPBFOCHHP_CMLEEJPGHNC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_HKDMLOKOJPH__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ac2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_TypeInfo);
    DAT_04565ac2 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>__ctor__);
  ppSVar1 = &(__this->fields).MOJCKKMAKOE;
  *ppSVar1 = (System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_HKDMLOKOJPH__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

