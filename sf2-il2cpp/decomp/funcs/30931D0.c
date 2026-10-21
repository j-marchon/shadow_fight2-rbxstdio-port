// Nekki.SF2.GUI.GeneralMenu.StoryItemText$$OnEnable @ RVA 0x30931D0

void Nekki_SF2_GUI_GeneralMenu_StoryItemText__OnEnable
               (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *in_x2;
  Nekki_SF2_GUI_GeneralMenu_MenuItemStory_array *pNVar2;
  uint OKBHJGIOENM;
  long lVar3;
  Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *pNVar4;
  
  pNVar2 = (__this->fields)._storyButtons;
  if (pNVar2 != (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_array *)0x0) {
    lVar3 = 4;
    do {
      uVar1 = (uint)pNVar2->max_length;
      OKBHJGIOENM = (int)lVar3 - 4;
      if ((int)uVar1 <= (int)OKBHJGIOENM) {
        return;
      }
      if (uVar1 <= OKBHJGIOENM) {
LAB_03193278:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pNVar4 = pNVar2->m_Items[lVar3 + -4];
      CJNHFNHJHPE = Nekki_SF2_GUI_GeneralMenu_StoryItemText__HMEMCCGNGFF(__this,OKBHJGIOENM,in_x2);
      if ((pNVar4 == (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *)0x0) ||
         (__this_00 = (pNVar4->fields).super._label, __this_00 == (Nekki_SF2_GUI_LabelAlias_o *)0x0)
         ) break;
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._storyButtons;
      if (pNVar2 == (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_array *)0x0) break;
      if ((uint)pNVar2->max_length <= OKBHJGIOENM) goto LAB_03193278;
      if (pNVar2->m_Items[lVar3 + -4] == (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *)0x0) break;
      in_x2 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_GeneralMenu_MenuItemStory__SetSlotIndex
                (pNVar2->m_Items[lVar3 + -4],OKBHJGIOENM,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._storyButtons;
      lVar3 = lVar3 + 1;
    } while (pNVar2 != (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

