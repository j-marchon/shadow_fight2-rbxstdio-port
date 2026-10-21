// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$JKENKFGECHO @ RVA 0x3172E1C

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__JKENKFGECHO
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  System_Action_EOLFEKNCPLM__o *pSVar1;
  
                    /* try { // try from 03272e1c to 03372f3f has its CatchHandler @ 03272e1c
                       catch() { ... } // from try @ 03272e1c with catch @ 03272e1c
                       catch() { ... } // from try @ 03272fe4 with catch @ 03272e1c
                       catch() { ... } // from try @ 032730a0 with catch @ 03272e1c
                       catch() { ... } // from try @ 032730f8 with catch @ 03272e1c
                       catch() { ... } // from try @ 03273128 with catch @ 03272e1c */
  pSVar1 = (__this->fields).BADMDODBKLB;
  if (pSVar1 != (System_Action_EOLFEKNCPLM__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03272e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,HEHMPFLAEGE,
               (pSVar1->fields).super.super.method);
    return;
  }
  return;
}

