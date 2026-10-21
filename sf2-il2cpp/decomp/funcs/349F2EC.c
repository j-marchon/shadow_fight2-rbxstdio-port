// Nekki.SF2.GUI.Map.MapPanel$$Clear @ RVA 0x349F2EC

void Nekki_SF2_GUI_Map_MapPanel__Clear(Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar1;
  MEJIKMPNBNL_o **ppMVar2;
  
  pNVar1 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    (*(pNVar1->klass->vtable)._4_DestroyItems.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._4_DestroyItems.method);
    ppMVar2 = &(__this->fields)._PEMNOEOCALC_k__BackingField;
    *ppMVar2 = (MEJIKMPNBNL_o *)0x0;
    thunk_FUN_01c20e04(ppMVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

