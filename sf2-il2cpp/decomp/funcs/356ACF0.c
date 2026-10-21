// Nekki.SF2.GUI.Menu.MainMenu$$SetCurrentButton @ RVA 0x356ACF0

void Nekki_SF2_GUI_Menu_MainMenu__SetCurrentButton
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,
               Nekki_SF2_GUI_Common_SectionButton_o *BECCOGAMKJL,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o **ppNVar1;
  bool bVar2;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *pNVar3;
  
  if ((DAT_04568c2f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c2f = 1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    pNVar3 = (__this->fields).IPLFMOGNGML;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppNVar1 = &(__this->fields).IPLFMOGNGML;
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_UI_Selectable_o *)*ppNVar1 == (UnityEngine_UI_Selectable_o *)0x0)
      goto LAB_0366ae24;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)*ppNVar1,true,(MethodInfo *)0x0);
      if ((UnityEngine_UI_Selectable_o *)*ppNVar1 == (UnityEngine_UI_Selectable_o *)0x0)
      goto LAB_0366ae24;
      UnityEngine_UI_Selectable__set_transition
                ((UnityEngine_UI_Selectable_o *)*ppNVar1,1,(MethodInfo *)0x0);
      LJLLAKHOFFF__JAEOMHIAHJB((UnityEngine_UI_Button_o *)*ppNVar1,0,true,(MethodInfo *)0x0);
    }
    *ppNVar1 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)BECCOGAMKJL;
    thunk_FUN_01c20e04(ppNVar1,BECCOGAMKJL);
    pNVar3 = *ppNVar1;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_UI_Selectable_o *)*ppNVar1 != (UnityEngine_UI_Selectable_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)*ppNVar1,false,(MethodInfo *)0x0);
        if ((UnityEngine_UI_Selectable_o *)*ppNVar1 != (UnityEngine_UI_Selectable_o *)0x0) {
          UnityEngine_UI_Selectable__set_transition
                    ((UnityEngine_UI_Selectable_o *)*ppNVar1,2,(MethodInfo *)0x0);
          LJLLAKHOFFF__JAEOMHIAHJB((UnityEngine_UI_Button_o *)*ppNVar1,2,true,(MethodInfo *)0x0);
          return;
        }
      }
LAB_0366ae24:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

