// Nekki.SF2.GUI.Map.MapContainer$$DCOKHIGFNFB @ RVA 0x323A284

void Nekki_SF2_GUI_Map_MapContainer__DCOKHIGFNFB
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).PEMOCAODJBA;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    Nekki_SF2_GUI_Map_MapContainer__ShowUI(__this,false,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

