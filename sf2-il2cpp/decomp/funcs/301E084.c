// Nekki.SF2.GUI.Dialogs.SimpleDialog$$ACICKHKFILK @ RVA 0x301E084

void Nekki_SF2_GUI_Dialogs_SimpleDialog__ACICKHKFILK
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,LabelButton_o *LGHOMHOPNEP,
               int32_t JFLAKNAGBEL,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Action_object__o *pSVar2;
  bool_conflict *pbVar3;
  System_String_o **ppSVar4;
  int32_t *piVar5;
  System_String_o *CJNHFNHJHPE;
  int32_t iVar6;
  
  if ((DAT_04565c2d & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565c2d = 1;
  }
  CJNHFNHJHPE = StringLiteral_1;
  if (JFLAKNAGBEL == 1) {
    pbVar3 = &(__this->fields).super.AHHAONPHEPD;
    ppSVar4 = &(__this->fields).super.NIEHEOKFPAN;
    piVar5 = &(__this->fields).super.FKKACPDDADI;
    iVar6 = 1;
LAB_0311e0fc:
    if (LGHOMHOPNEP == (LabelButton_o *)0x0) goto LAB_0311e1e8;
    CJNHFNHJHPE = *ppSVar4;
    bVar1 = *pbVar3;
    LabelButton__set_ButtonColor(LGHOMHOPNEP,*piVar5,(MethodInfo *)0x0);
    if (bVar1 != false) goto LAB_0311e154;
    LabelButton__set_Text(LGHOMHOPNEP,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  else {
    if (JFLAKNAGBEL == 2) {
      iVar6 = 0;
      pbVar3 = &(__this->fields).super.KJLEAJNIFPA;
      ppSVar4 = &(__this->fields).super.LLBBHINDIDB;
      piVar5 = &(__this->fields).super.FHLAKGNIFAF;
      goto LAB_0311e0fc;
    }
    if (LGHOMHOPNEP == (LabelButton_o *)0x0) goto LAB_0311e1e8;
    LabelButton__set_ButtonColor(LGHOMHOPNEP,1,(MethodInfo *)0x0);
    iVar6 = 0;
LAB_0311e154:
    LabelButton__set_Alias(LGHOMHOPNEP,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  (LGHOMHOPNEP->fields).super.super.ButtonId = iVar6;
  pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  if (__this != (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0) {
    System_Action<object>___ctor();
    SFButton__RemoveEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar2,(MethodInfo *)0x0);
    pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    SFButton__AddEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar2,(MethodInfo *)0x0);
    return;
  }
LAB_0311e1e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

