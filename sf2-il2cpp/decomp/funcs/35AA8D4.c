// Nekki.SF2.GUI.Fight.RaidFightTextContent$$Init @ RVA 0x35AA8D4

void Nekki_SF2_GUI_Fight_RaidFightTextContent__Init
               (Nekki_SF2_GUI_Fight_RaidFightTextContent_o *__this,System_String_o *EHNFGMGKCHO,
               System_String_o *LGHOMHOPNEP,bool ABNCAMAPPDH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Transform_o *__this_00;
  LabelButton_o *pLVar2;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04568e4e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RaidFightTextContent_OAJKAJMHIHC__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568e4e = 1;
  }
  pNVar3 = (__this->fields)._Text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._Text;
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_036aaa44;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,EHNFGMGKCHO,(MethodInfo *)0x0);
  }
  pLVar2 = (__this->fields)._Button;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pLVar2 = (__this->fields)._Button;
  if (pLVar2 != (LabelButton_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar2->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
      pLVar2 = (__this->fields)._Button;
      if (pLVar2 != (LabelButton_o *)0x0) {
        LabelButton__set_Alias(pLVar2,LGHOMHOPNEP,(MethodInfo *)0x0);
        if (!ABNCAMAPPDH) {
          return;
        }
        pLVar2 = (__this->fields)._Button;
        if ((pLVar2 != (LabelButton_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pLVar2,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.z = 0.0;
          value.fields._0_8_ = (__this->fields)._ButtonCenterPosition.fields;
          UnityEngine_Transform__set_localPosition(__this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_036aaa44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

