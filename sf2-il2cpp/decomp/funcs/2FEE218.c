// KCJMBDCBIIF$$.ctor @ RVA 0x2FEE218

void KCJMBDCBIIF___ctor(KCJMBDCBIIF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *__this_00;
  System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o **ppSVar1;
  KKLJIDJBFEI_o *__this_01;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a48 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<DLOALGNBPNL>__ctor__);
    FUN_01bab630(&Method_KCJMBDCBIIF_AKEKGJAFBOC__);
    DAT_04565a48 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<long,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>__ctor__);
  ppSVar1 = &(__this->fields).CMJNDHHGCBI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  JICOLGELJGE<object>___ctor((JICOLGELJGE_T__o *)__this,Method_JICOLGELJGE<DLOALGNBPNL>__ctor__);
  __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__HKAALOKPBPG(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

