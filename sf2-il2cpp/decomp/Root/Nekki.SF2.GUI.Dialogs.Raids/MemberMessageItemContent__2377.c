// TypeDefIndex 2377
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class MemberMessageItemContent : MessageItemContent
// Fields:
//   private ResolutionImage _danImage; // 0x20
//   private LabelAlias _danLabel; // 0x28
//   private LabelAlias _nick; // 0x30
//   private TextButton _buttonProfile; // 0x38
//   private long HOJBIBBGOIH; // 0x40

// ===== public void .ctor()  [RVA 0x332F330]
// Nekki.SF2.GUI.Dialogs.Raids.MemberMessageItemContent$$.ctor @ RVA 0x332F330

void Nekki_SF2_GUI_Dialogs_Raids_MemberMessageItemContent___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_MemberMessageItemContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void HCKCCFCAODO()  [RVA 0x332F338]
// Nekki.SF2.GUI.Dialogs.Raids.MemberMessageItemContent$$HCKCCFCAODO @ RVA 0x332F338

void Nekki_SF2_GUI_Dialogs_Raids_MemberMessageItemContent__HCKCCFCAODO
               (Nekki_SF2_GUI_Dialogs_Raids_MemberMessageItemContent_o *__this,MethodInfo *method)

{
  PEEIMHCMDND_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045678f7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045678f7 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  if (__this_00 != (PEEIMHCMDND_o *)0x0) {
    PEEIMHCMDND__JDONKPBCNLL(__this_00,(__this->fields).HOJBIBBGOIH,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void UpdateContent(ODKDFMHHLIP IHNKCJHDDKD)  [RVA 0x332F3AC]
// Nekki.SF2.GUI.Dialogs.Raids.MemberMessageItemContent$$UpdateContent @ RVA 0x332F3AC

void Nekki_SF2_GUI_Dialogs_Raids_MemberMessageItemContent__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_MemberMessageItemContent_o *__this,
               ODKDFMHHLIP_o *IHNKCJHDDKD,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  HCKCBFOGMMJ_o *__this_01;
  GKLPDMLELJF_o *pGVar3;
  System_String_o *pSVar4;
  PLIIGOCLJDL_o *__this_02;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *pJVar5;
  Nekki_SF2_GUI_TextButton_o *pNVar6;
  UnityEngine_Events_UnityEvent_o *__this_03;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar8;
  int32_t local_34;
  
  if ((DAT_045678f8 & 1) == 0) {
    FUN_01bab630(&CMOAIOLDOIJ_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MemberMessageItemContent_HCKCCFCAODO__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045678f8 = 1;
  }
  local_34 = 0;
  if (IHNKCJHDDKD == (ODKDFMHHLIP_o *)0x0) {
    return;
  }
  bVar1 = (CMOAIOLDOIJ_TypeInfo->_2).naturalAligment;
  if ((IHNKCJHDDKD->klass->_2).naturalAligment < bVar1) {
    return;
  }
  if ((IHNKCJHDDKD->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)CMOAIOLDOIJ_TypeInfo) {
    return;
  }
  (__this->fields).HOJBIBBGOIH = IHNKCJHDDKD[1].fields.AAOLHLPDBPN;
  pNVar7 = (__this->fields)._nick;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar7 = (__this->fields)._nick;
    if (pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0342f64c;
    (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
              (pNVar7,IHNKCJHDDKD[1].klass,(pNVar7->klass->vtable)._75_set_text.method);
  }
  pNVar6 = (__this->fields)._buttonProfile;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar6 = (__this->fields)._buttonProfile;
    if ((pNVar6 == (Nekki_SF2_GUI_TextButton_o *)0x0) ||
       (__this_00 = (pNVar6->fields).super.super.super.m_OnClick,
       __this_00 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_0342f64c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pNVar6 = (__this->fields)._buttonProfile;
    if (pNVar6 == (Nekki_SF2_GUI_TextButton_o *)0x0) goto LAB_0342f64c;
    __this_03 = (UnityEngine_Events_UnityEvent_o *)(pNVar6->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_03 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0342f64c;
    UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
  if (__this_01 != (HCKCBFOGMMJ_o *)0x0) {
    pGVar3 = HCKCBFOGMMJ__LLEJFHJIBHC(__this_01,(__this->fields).HOJBIBBGOIH,(MethodInfo *)0x0);
    pNVar7 = (__this->fields)._danLabel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((pGVar3 != (GKLPDMLELJF_o *)0x0) && (bVar2)) {
      local_34 = (pGVar3->fields).PEBHLKLGDBM;
      pNVar7 = (__this->fields)._danLabel;
      pSVar4 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
      if (pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0342f64c;
      (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                (pNVar7,pSVar4,(pNVar7->klass->vtable)._75_set_text.method);
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
    if (__this_02 != (PLIIGOCLJDL_o *)0x0) {
      pJVar5 = PLIIGOCLJDL__PDEBCPPCEJP(__this_02,(__this->fields).HOJBIBBGOIH,(MethodInfo *)0x0);
      if (pJVar5 == (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
        return;
      }
      pNVar8 = (__this->fields)._danImage;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pNVar8 = (__this->fields)._danImage;
      if (pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  (pNVar8,(pJVar5->fields).KJAIPLMIAGP,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0342f64c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

