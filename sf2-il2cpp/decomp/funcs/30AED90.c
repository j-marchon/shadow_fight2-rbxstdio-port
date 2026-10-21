// CFEANGJDHEE$$AIHNLLGNBLC @ RVA 0x30AED90

CFEANGJDHEE_o * CFEANGJDHEE__AIHNLLGNBLC(MethodInfo *method)

{
  System_Collections_Generic_HashSet_LogType__o *__this;
  System_Collections_Generic_HashSet_LogType__o **ppSVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_045661d4 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_045661d4 = 1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (CFEANGJDHEE_TypeInfo->static_fields->MOHDINLNEPB ==
      (System_Collections_Generic_HashSet_LogType__o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    __this = auVar2._0_8_;
    CFEANGJDHEE___ctor((CFEANGJDHEE_o *)__this,auVar2._8_8_);
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar1 = &CFEANGJDHEE_TypeInfo->static_fields->MOHDINLNEPB;
    *ppSVar1 = __this;
    thunk_FUN_01c20e04(ppSVar1,__this);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031aed24 with catch @ 031aee10
                        */
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031aed20 with catch @ 031aee14
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031aea68 with catch @ 031aee18
                        */
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031aee30 to 032aee47 has its CatchHandler @ 031aeec4 */
  return (CFEANGJDHEE_o *)CFEANGJDHEE_TypeInfo->static_fields->MOHDINLNEPB;
}

