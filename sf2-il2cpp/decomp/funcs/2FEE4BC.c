// KCJMBDCBIIF$$HHAFBOFFEHA @ RVA 0x2FEE4BC

void KCJMBDCBIIF__HHAFBOFFEHA
               (KCJMBDCBIIF_o *__this,DLOALGNBPNL_o *PIMBGGLBFAA,int32_t EGJLNEOGECM,
               MethodInfo *method)

{
  System_Action_T__o *pSVar1;
  
  if ((DAT_04565a4c & 1) == 0) {
    FUN_01bab630(&Method_JICOLGELJGE<DLOALGNBPNL>_FAJIGDCHCKL__);
    FUN_01bab630(&Method_JICOLGELJGE<DLOALGNBPNL>_PIIKLDFBOMK__);
    DAT_04565a4c = 1;
  }
  pSVar1 = JICOLGELJGE<object>__PIIKLDFBOMK
                     ((JICOLGELJGE_T__o *)__this,EGJLNEOGECM,
                      Method_JICOLGELJGE<DLOALGNBPNL>_PIIKLDFBOMK__);
  if (pSVar1 != (System_Action_T__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,PIMBGGLBFAA,
               (pSVar1->fields).super.super.method);
    JICOLGELJGE<object>__FAJIGDCHCKL
              ((JICOLGELJGE_T__o *)__this,EGJLNEOGECM,Method_JICOLGELJGE<DLOALGNBPNL>_FAJIGDCHCKL__)
    ;
    return;
  }
  return;
}

