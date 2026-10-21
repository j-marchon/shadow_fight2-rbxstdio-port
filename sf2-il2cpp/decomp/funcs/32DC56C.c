// Nekki.SF2.GUI.Dialogs.Raids.SeasFinBaseContent$$GIENGNEGHPJ @ RVA 0x32DC56C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__GIENGNEGHPJ
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *__this,bool COPEPIPJEPE,
               int32_t ACLFJCOLFMD,System_String_o *DOEJEADIJEJ,bool MDEOLMMEEDM,int32_t LGJADIDEGHK
               ,System_String_o *BECCMDCHEOP,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  LabelButton_o *pLVar5;
  
  if ((DAT_045675c6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045675c6 = 1;
  }
  if (COPEPIPJEPE) {
    pLVar5 = (__this->fields)._btnOk;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pLVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pLVar5 = (__this->fields)._btnOk;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_033dc7e4;
      LabelButton__set_Alias(pLVar5,DOEJEADIJEJ,(MethodInfo *)0x0);
      pLVar5 = (__this->fields)._btnOk;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_033dc7e4;
      LabelButton__set_ButtonColor(pLVar5,ACLFJCOLFMD,(MethodInfo *)0x0);
      pLVar5 = (__this->fields)._btnOk;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_033dc7e4;
      pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar5->fields).super.super.super.m_OnClick;
      pUVar2 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar4 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_033dc7e4;
      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
    }
  }
  if (MDEOLMMEEDM) {
    pLVar5 = (__this->fields)._btnCancel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pLVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pLVar5 = (__this->fields)._btnCancel;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_033dc7e4;
      LabelButton__set_Alias(pLVar5,BECCMDCHEOP,(MethodInfo *)0x0);
      pLVar5 = (__this->fields)._btnCancel;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_033dc7e4;
      LabelButton__set_ButtonColor(pLVar5,LGJADIDEGHK,(MethodInfo *)0x0);
      pLVar5 = (__this->fields)._btnCancel;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_033dc7e4;
      pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar5->fields).super.super.super.m_OnClick;
      pUVar2 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar4 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_033dc7e4;
      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
      pLVar5 = (__this->fields)._btnCancel;
      if ((pLVar5 == (LabelButton_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar5,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033dc7e4;
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
    }
  }
  pLVar5 = (__this->fields)._btnOk;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar5 = (__this->fields)._btnOk;
    if ((pLVar5 == (LabelButton_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar5,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033dc7e4;
    UnityEngine_GameObject__SetActive(pUVar3,COPEPIPJEPE,(MethodInfo *)0x0);
  }
  pLVar5 = (__this->fields)._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pLVar5 = (__this->fields)._btnCancel;
  if ((pLVar5 != (LabelButton_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pLVar5,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar3,MDEOLMMEEDM,(MethodInfo *)0x0);
    return;
  }
LAB_033dc7e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

