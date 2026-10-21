// TypeDefIndex 1378
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class LinkAccountDialog : InputDialog
// Fields:

// ===== protected override bool OCJBGCEPJPJ()  [RVA 0x317083C]
// Nekki.SF2.GUI.Dialogs.Raids.LinkAccountDialog$$OCJBGCEPJPJ @ RVA 0x317083C

bool Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog__OCJBGCEPJPJ
               (Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *b;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar7;
  long lVar8;
  Il2CppClass *pIVar9;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  ulong uVar10;
  int32_t *piVar11;
  System_String_o *a;
  undefined8 uVar12;
  
  if ((DAT_0456691b & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_8466/*"LinkAccountAgreement"*/);
    DAT_0456691b = 1;
  }
  pNVar7 = (__this->fields).super._editBox;
  if (pNVar7 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
    a = (pNVar7->fields).super.m_Text;
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = Method_System_Array_Empty<string>__;
    lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar8 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar8 = *(long *)(lVar5 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01b81620();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    uVar2 = StringLiteral_8466/*"LinkAccountAgreement"*/;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar9 = pIVar4->klass;
      uVar12 = **(undefined8 **)(lVar5 + 0xb8);
      uVar1._0_1_ = (pIVar9->_2).rank;
      uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
            goto LAB_03270970;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03270970:
      b = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,uVar12,pVVar6->method);
      bVar3 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
      __this_01 = (__this->fields).super._error;
      if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,(bool)(~bVar3 & 1),(MethodInfo *)0x0);
        return bVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OOFAPAPJHJF(string IMMNELPBGIF)  [RVA 0x31709D8]
// Nekki.SF2.GUI.Dialogs.Raids.LinkAccountDialog$$OOFAPAPJHJF @ RVA 0x31709D8

void Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog__OOFAPAPJHJF
               (Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_o *__this,System_String_o *IMMNELPBGIF
               ,MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Scripts_EditBox_o *__this_02;
  
  __this_02 = (__this->fields).super._editBox;
  if ((__this_02 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) &&
     (pSVar1 = (__this_02->fields).super.m_Text, pSVar1 != (System_String_o *)0x0)) {
    pSVar1 = System_String__ToUpper(pSVar1,(MethodInfo *)0x0);
    UnityEngine_UI_InputField__set_text
              ((UnityEngine_UI_InputField_o *)__this_02,pSVar1,(MethodInfo *)0x0);
    __this_00 = (__this->fields).super._error;
    if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x3170A38]
// Nekki.SF2.GUI.Dialogs.Raids.LinkAccountDialog$$Init @ RVA 0x3170A38

void Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  NCJBDBGIPNF_o *pNVar3;
  
  if ((DAT_0456691c & 1) == 0) {
    FUN_01bab630(&NCJBDBGIPNF_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_7001/*"HackTitle"*/);
    DAT_0456691c = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (NCJBDBGIPNF_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) {
      if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)NCJBDBGIPNF_TypeInfo) {
        IMMNELPBGIF = (Il2CppObject *)0x0;
      }
      goto LAB_03270ae0;
    }
  }
  IMMNELPBGIF = (Il2CppObject *)0x0;
LAB_03270ae0:
  (__this->fields).super.GIAMLPMHEDN = (NCJBDBGIPNF_o *)IMMNELPBGIF;
  thunk_FUN_01c20e04(&(__this->fields).super.GIAMLPMHEDN);
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(System_String_o *)0x0,StringLiteral_9679/*"OK"*/,
             StringLiteral_3640/*"CANCEL"*/,3,(MethodInfo *)0x0);
  pNVar3 = (__this->fields).super.GIAMLPMHEDN;
  if ((pNVar3 != (NCJBDBGIPNF_o *)0x0) &&
     (pNVar2 = (__this->fields).super.super._header, pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,(pNVar3->fields).DONLEDMPGCF,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).super.GIAMLPMHEDN;
    if ((pNVar3 != (NCJBDBGIPNF_o *)0x0) &&
       (pNVar2 = (__this->fields).super._message, pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,(pNVar3->fields).FDLJAOACNIP,(pNVar2->klass->vtable)._75_set_text.method);
      pNVar2 = (__this->fields).super._error;
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).super._error;
        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,StringLiteral_7001/*"HackTitle"*/,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).super._error;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03270bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                      (0x3f800000,0,0,0x3f800000,pNVar2,(pNVar2->klass->vtable)._23_set_color.method
                      );
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3170BBC]
// Nekki.SF2.GUI.Dialogs.Raids.LinkAccountDialog$$.ctor @ RVA 0x3170BBC

void Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

