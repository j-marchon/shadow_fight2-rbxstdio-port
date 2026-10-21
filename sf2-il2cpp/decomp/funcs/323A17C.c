// Nekki.SF2.GUI.Map.MapContainer$$FKOGMFGABFL @ RVA 0x323A17C

void Nekki_SF2_GUI_Map_MapContainer__FKOGMFGABFL
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  System_Action_o *pSVar1;
  
  __this_00 = (__this->fields)._mapPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__EnableScrolling(__this_00,true,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).ENMNHIMEELL;
    if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0333a1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

