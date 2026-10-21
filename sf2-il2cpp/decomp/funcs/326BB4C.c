// Nekki.SF2.GUI.Shop.SidePanel$$get_BlockRaycasts @ RVA 0x326BB4C

bool Nekki_SF2_GUI_Shop_SidePanel__get_BlockRaycasts
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields)._CanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    bVar1 = UnityEngine_CanvasGroup__get_blocksRaycasts(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

