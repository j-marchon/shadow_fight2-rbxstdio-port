// CPJDJFPABGI$$GCKNPLLGECO @ RVA 0x3284258

void CPJDJFPABGI__GCKNPLLGECO(CPJDJFPABGI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_Generic_List_T__o *__this_01;
  System_Action_T__o *action;
  System_Action_o *LILIJINNGNC;
  void **ppvVar1;
  System_Collections_Generic_List_KeyValuePair_string__int___o *pSVar2;
  
  if ((DAT_045672a8 & 1) == 0) {
    FUN_01bab630(&System_Action<KeyValuePair<string,_int>>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_BOFEMGGNODC_FGNINNOOCCL__);
    FUN_01bab630(&Method_CPJDJFPABGI_FGGFAAPJLCN_KGNDFCKAIHN__);
    FUN_01bab630(&CPJDJFPABGI_FGGFAAPJLCN_TypeInfo);
                    /* try { // try from 033842c8 to 034844ff has its CatchHandler @ 033842c8
                       catch() { ... } // from try @ 033842c8 with catch @ 033842c8
                       catch() { ... } // from try @ 03384738 with catch @ 033842c8
                       catch() { ... } // from try @ 0338481c with catch @ 033842c8
                       catch() { ... } // from try @ 03384880 with catch @ 033842c8
                       catch() { ... } // from try @ 03384888 with catch @ 033842c8
                       catch() { ... } // from try @ 033848cc with catch @ 033842c8
                       catch() { ... } // from try @ 03384908 with catch @ 033842c8
                       catch() { ... } // from try @ 03384a08 with catch @ 033842c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_int>>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045672a8 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(CPJDJFPABGI_FGGFAAPJLCN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)AAJBIMFNMBB;
    thunk_FUN_01c20e04(__this_00 + 1,AAJBIMFNMBB);
    __this_01 = (System_Collections_Generic_List_T__o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_List<KeyValuePair<string,_int>>_TypeInfo
                                  );
    System_Collections_Generic_List<KeyValuePair<object,_int>>___ctor
              (__this_01,Method_System_Collections_Generic_List<KeyValuePair<string,_int>>__ctor__);
    ppvVar1 = &__this_00[1].monitor;
    *ppvVar1 = __this_01;
    thunk_FUN_01c20e04(ppvVar1,__this_01);
    pSVar2 = (__this->fields).NDEECPOPNFM;
    action = (System_Action_T__o *)
             thunk_FUN_01bda818(System_Action<KeyValuePair<string,_int>>_TypeInfo);
    System_Action<KeyValuePair<object,_int>>___ctor();
    if (pSVar2 != (System_Collections_Generic_List_KeyValuePair_string__int___o *)0x0) {
      System_Collections_Generic_List<KeyValuePair<object,_int>>__ForEach
                ((System_Collections_Generic_List_T__o *)pSVar2,action,
                 Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_ForEach__);
      pSVar2 = *ppvVar1;
      LILIJINNGNC = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__JBMJNGNBGKC(pSVar2,LILIJINNGNC,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

