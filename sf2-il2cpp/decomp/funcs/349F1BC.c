// Nekki.SF2.GUI.Map.MapPanel$$MNOIMJDFMMJ @ RVA 0x349F1BC

void Nekki_SF2_GUI_Map_MapPanel__MNOIMJDFMMJ
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o *pSVar1;
  
  pSVar1 = (__this->fields).CGHGGKBEHIF;
  if (pSVar1 != (System_Action_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0359f1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,BANHBMINMMP,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

