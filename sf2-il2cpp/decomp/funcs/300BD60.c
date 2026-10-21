// Nekki.SF2.GUI.Shop.InfoPanelContent$$SetFlashingButtons @ RVA 0x300BD60

void Nekki_SF2_GUI_Shop_InfoPanelContent__SetFlashingButtons
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,System_String_o *PKOJKJJKCAL,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_o *__this_00;
  System_Action_T__o *action;
  System_Collections_Generic_List_IconLabelButton__o *__this_01;
  
  if ((DAT_04565b68 & 1) == 0) {
    FUN_01bab630(&System_Action<IconLabelButton>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_LOJIFIHGKEL__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_ForEach__);
    DAT_04565b68 = 1;
  }
  __this_00 = (Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_TypeInfo);
  Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_o *)0x0) {
    (__this_00->fields).flashingButtons = PKOJKJJKCAL;
    thunk_FUN_01c20e04(&__this_00->fields,PKOJKJJKCAL);
    __this_01 = (__this->fields).PGCBEJGMIMA;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<IconLabelButton>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_IconLabelButton__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_01,action,
                 Method_System_Collections_Generic_List<IconLabelButton>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

