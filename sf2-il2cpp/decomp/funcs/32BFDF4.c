// Nekki.SF2.GUI.Dialogs.StoryDialog$$ACICKHKFILK @ RVA 0x32BFDF4

void Nekki_SF2_GUI_Dialogs_StoryDialog__ACICKHKFILK
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,LabelButton_o *LGHOMHOPNEP,
               int32_t JFLAKNAGBEL,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_Action_object__o *pSVar1;
  System_String_o **ppSVar2;
  System_String_o *CJNHFNHJHPE;
  int32_t CJNHFNHJHPE_00;
  int32_t iVar3;
  
  if ((DAT_045674c1 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045674c1 = 1;
  }
  if ((LGHOMHOPNEP != (LabelButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)LGHOMHOPNEP,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    CJNHFNHJHPE_00 = 1;
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    if (JFLAKNAGBEL == 1) {
      CJNHFNHJHPE_00 = (__this->fields).PAAKEJMBFFH;
      ppSVar2 = &(__this->fields).super.NIEHEOKFPAN;
      iVar3 = 1;
    }
    else if (JFLAKNAGBEL == 2) {
      CJNHFNHJHPE_00 = (__this->fields).IFBFFFFGLDJ;
      iVar3 = 0;
      ppSVar2 = &(__this->fields).super.LLBBHINDIDB;
    }
    else {
      ppSVar2 = (System_String_o **)&StringLiteral_1;
      iVar3 = 0;
    }
    CJNHFNHJHPE = *ppSVar2;
    LabelButton__set_ButtonColor(LGHOMHOPNEP,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    LabelButton__set_Alias(LGHOMHOPNEP,CJNHFNHJHPE,(MethodInfo *)0x0);
    (LGHOMHOPNEP->fields).super.super.ButtonId = iVar3;
    pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    if (__this != (Nekki_SF2_GUI_Dialogs_StoryDialog_o *)0x0) {
      System_Action<object>___ctor();
      SFButton__RemoveEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar1,(MethodInfo *)0x0);
      pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      SFButton__AddEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

