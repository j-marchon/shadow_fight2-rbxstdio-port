// Nekki.SF2.GUI.Shop.SidePanel$$set_BlockRaycasts @ RVA 0x326B254

void Nekki_SF2_GUI_Shop_SidePanel__set_BlockRaycasts
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields)._CanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,CJNHFNHJHPE);
}

