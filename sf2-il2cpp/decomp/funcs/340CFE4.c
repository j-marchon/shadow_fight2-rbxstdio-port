// MGNPHCAAEIO$$DGEELDCOEHI @ RVA 0x340CFE4

bool MGNPHCAAEIO__DGEELDCOEHI(System_String_o *BMEDCFOKBDH,MethodInfo *method)

{
  MGNPHCAAEIO_MHMMMMFMCHA_o *__this;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar1;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_JGIFDELCGOJ__o *__this_00;
  
  if ((DAT_0456804d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_Find__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_MGNPHCAAEIO_MHMMMMFMCHA_GFBMAJEICPE__);
    FUN_01bab630(&MGNPHCAAEIO_MHMMMMFMCHA_TypeInfo);
    FUN_01bab630(&System_Predicate<JGIFDELCGOJ>_TypeInfo);
    DAT_0456804d = 1;
    method = extraout_x1;
  }
  __this = (MGNPHCAAEIO_MHMMMMFMCHA_o *)thunk_FUN_01bda818(MGNPHCAAEIO_MHMMMMFMCHA_TypeInfo,method);
  MGNPHCAAEIO_MHMMMMFMCHA___ctor(__this,(MethodInfo *)0x0);
  if (__this != (MGNPHCAAEIO_MHMMMMFMCHA_o *)0x0) {
    (__this->fields).attrName = BMEDCFOKBDH;
    thunk_FUN_01c20e04(&__this->fields,BMEDCFOKBDH);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->HNPCJGMHLCM;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<JGIFDELCGOJ>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_JGIFDELCGOJ__o *)0x0) {
      pIVar1 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_00,match,
                          Method_System_Collections_Generic_List<JGIFDELCGOJ>_Find__);
      return pIVar1 != (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

