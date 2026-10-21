// Nekki.SF2.GUI.Map.MapContainer$$SetTouchEnabled @ RVA 0x323A86C

void Nekki_SF2_GUI_Map_MapContainer__SetTouchEnabled
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,bool DMCLFENLIHB,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._mapPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0333a888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._4_SetTouchEnabled.methodPtr)
              (pNVar1,(ulong)DMCLFENLIHB,(pNVar1->klass->vtable)._4_SetTouchEnabled.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

