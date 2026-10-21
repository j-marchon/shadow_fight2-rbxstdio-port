// HCKCBFOGMMJ$$HHAFBOFFEHA @ RVA 0x31CE284

void HCKCBFOGMMJ__HHAFBOFFEHA
               (HCKCBFOGMMJ_o *__this,LFELBGMCDHD_o *KIFIMBGOPFG,int32_t EGJLNEOGECM,
               MethodInfo *method)

{
  System_Action_T__o *pSVar1;
  
  if ((DAT_04566c87 & 1) == 0) {
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_FAJIGDCHCKL__);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_PIIKLDFBOMK__);
    DAT_04566c87 = 1;
  }
  pSVar1 = JICOLGELJGE<object>__PIIKLDFBOMK
                     ((JICOLGELJGE_T__o *)__this,EGJLNEOGECM,
                      Method_JICOLGELJGE<LFELBGMCDHD>_PIIKLDFBOMK__);
  if (pSVar1 != (System_Action_T__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,KIFIMBGOPFG,
               (pSVar1->fields).super.super.method);
  }
  JICOLGELJGE<object>__FAJIGDCHCKL
            ((JICOLGELJGE_T__o *)__this,EGJLNEOGECM,Method_JICOLGELJGE<LFELBGMCDHD>_FAJIGDCHCKL__);
  return;
}

