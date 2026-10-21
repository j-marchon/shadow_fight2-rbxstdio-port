// Nekki.SF2.GUI.Common.BottomPanelScrollCell$$ReleaseButton @ RVA 0x35B09E0

void Nekki_SF2_GUI_Common_BottomPanelScrollCell__ReleaseButton
               (Nekki_SF2_GUI_Common_BottomPanelScrollCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SectionButton_o **ppNVar1;
  bool bVar2;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar4;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04568e9c & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanelScrollCell_OnClick__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568e9c = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields).NMKFEDBLPGI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  ppNVar1 = &(__this->fields).NMKFEDBLPGI;
  if (*ppNVar1 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)((*ppNVar1)->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(__this_01,call,(MethodInfo *)0x0);
      if ((*ppNVar1 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent
                  (pUVar3,(__this->fields).BFPDBENNACC,false,(MethodInfo *)0x0);
        pNVar4 = (__this->fields).NMKFEDBLPGI;
        if (pNVar4 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
          if (DAT_0455fa77 == '\0') {
            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
            DAT_0455fa77 = '\x01';
          }
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localPosition
                      (pUVar3,(UnityEngine_Vector3_o)
                              (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            if ((*ppNVar1 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) &&
               (__this_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0),
               __this_00 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
              *ppNVar1 = (Nekki_SF2_GUI_Common_SectionButton_o *)0x0;
              thunk_FUN_01c20e04(ppNVar1,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

