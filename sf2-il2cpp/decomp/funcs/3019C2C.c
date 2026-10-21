// ECENNHNBAME$$NAPDMHMCLML @ RVA 0x3019C2C

System_Collections_Generic_List_GBKCLIFGIFN__o *
ECENNHNBAME__NAPDMHMCLML(ECENNHNBAME_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GBKCLIFGIFN__o *PFDNCKLLMBL;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar1;
  System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK;
  
  if ((DAT_04565bf0 & 1) == 0) {
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GBKCLIFGIFN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GBKCLIFGIFN>_TypeInfo);
    DAT_04565bf0 = 1;
    method = extraout_x1;
  }
  PFDNCKLLMBL = (System_Collections_Generic_List_GBKCLIFGIFN__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<GBKCLIFGIFN>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)PFDNCKLLMBL,
             Method_System_Collections_Generic_List<GBKCLIFGIFN>__ctor__);
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if (pEVar1 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) {
    AHEFOIOKDOK = (pEVar1->fields).KPFGHBEKJIM;
    if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ECENNHNBAME__HPGNLPIBDBN(AHEFOIOKDOK,PFDNCKLLMBL,in_x2);
    return PFDNCKLLMBL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

