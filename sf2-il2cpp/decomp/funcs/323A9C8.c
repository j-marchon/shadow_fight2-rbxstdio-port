// Nekki.SF2.GUI.Map.MapContainer$$CGKKIMGANJE @ RVA 0x323A9C8

void Nekki_SF2_GUI_Map_MapContainer__CGKKIMGANJE
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,
               Nekki_SF2_GUI_Map_ZoneScrollItem_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_Action_ZoneScrollItem__o *pSVar1;
  
  pSVar1 = (__this->fields).BFICLHPKPAE;
  if (pSVar1 != (System_Action_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0333a9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,IKKAMAMLIKA,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

