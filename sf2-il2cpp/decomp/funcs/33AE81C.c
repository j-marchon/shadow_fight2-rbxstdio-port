// Nekki.SF2.GUI.Dialogs.BaseDialog$$ACICKHKFILK @ RVA 0x33AE81C

void Nekki_SF2_GUI_Dialogs_BaseDialog__ACICKHKFILK
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,LabelButton_o *LGHOMHOPNEP,
               int32_t JFLAKNAGBEL,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  System_Action_object__o *pSVar2;
  UnityEngine_Transform_o *transform;
  System_String_o *CJNHFNHJHPE;
  int32_t iVar3;
  
  if ((DAT_04567d32 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567d32 = 1;
  }
  if ((LGHOMHOPNEP == (LabelButton_o *)0x0) ||
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)LGHOMHOPNEP,(MethodInfo *)0x0),
     __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034ae9bc;
  UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
  CJNHFNHJHPE = StringLiteral_1;
  if (JFLAKNAGBEL == 1) {
    bVar1 = (__this->fields).AHHAONPHEPD;
    CJNHFNHJHPE = (__this->fields).NIEHEOKFPAN;
    iVar3 = 1;
    LabelButton__set_ButtonColor(LGHOMHOPNEP,1,(MethodInfo *)0x0);
    if (bVar1 != false) goto LAB_034ae914;
LAB_034ae8e0:
    LabelButton__set_Text(LGHOMHOPNEP,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  else {
    if (JFLAKNAGBEL == 2) {
      bVar1 = (__this->fields).KJLEAJNIFPA;
      CJNHFNHJHPE = (__this->fields).LLBBHINDIDB;
      LabelButton__set_ButtonColor(LGHOMHOPNEP,0,(MethodInfo *)0x0);
      iVar3 = 0;
      if (bVar1 == false) goto LAB_034ae8e0;
    }
    else {
      LabelButton__set_ButtonColor(LGHOMHOPNEP,1,(MethodInfo *)0x0);
      iVar3 = 0;
    }
LAB_034ae914:
    LabelButton__set_Alias(LGHOMHOPNEP,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  (LGHOMHOPNEP->fields).super.super.ButtonId = iVar3;
  pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  if (__this != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
    System_Action<object>___ctor();
    SFButton__RemoveEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar2,(MethodInfo *)0x0);
    pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    SFButton__AddEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar2,(MethodInfo *)0x0);
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)LGHOMHOPNEP,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionX(transform,0.0,(MethodInfo *)0x0);
    return;
  }
LAB_034ae9bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

