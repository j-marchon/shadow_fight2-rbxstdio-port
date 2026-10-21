// TypeDefIndex 3335
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class MessageItem : BaseScrollItem
// Fields:
//   private Image _background; // 0x130
//   private Text _message; // 0x138
//   private LabelAlias _timeLabel; // 0x140
//   private GameObject _memberMessageItemContentPrefab; // 0x148
//   private GameObject _raidInvitationMessageItemContentPrefab; // 0x150
//   private GameObject _systemMessageItemContentPrefab; // 0x158
//   private string _TimeHourShort; // 0x160
//   private string _TimeMinuteShort; // 0x168
//   private string _TimeAgo; // 0x170
//   private string _TimeLessMinute; // 0x178
//   private MessageItemContent JDLPKBDPEBL; // 0x180
//   private long NBMPEEDDGKD; // 0x188
//   private long IOOGFEOIEPK; // 0x190
//   private long CCIKLAFHFAH; // 0x198
//   private ODKDFMHHLIP <DOMCENNEEFM>k__BackingField; // 0x1A0

// ===== public void .ctor()  [RVA 0x352D314]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$.ctor @ RVA 0x352D314

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,MethodInfo *method)

{
  if ((DAT_04568a37 & 1) == 0) {
    FUN_01bab630(&StringLiteral_13800/*"TimeMinuteShort"*/);
    FUN_01bab630(&StringLiteral_13798/*"TimeLessMinute"*/);
    FUN_01bab630(&StringLiteral_13796/*"TimeHourShort"*/);
    FUN_01bab630(&StringLiteral_13788/*"TimeAgo"*/);
    DAT_04568a37 = 1;
  }
  (__this->fields)._TimeHourShort = StringLiteral_13796/*"TimeHourShort"*/;
  thunk_FUN_01c20e04(&(__this->fields)._TimeHourShort);
  (__this->fields)._TimeMinuteShort = StringLiteral_13800/*"TimeMinuteShort"*/;
  thunk_FUN_01c20e04(&(__this->fields)._TimeMinuteShort);
  (__this->fields)._TimeAgo = StringLiteral_13788/*"TimeAgo"*/;
  thunk_FUN_01c20e04(&(__this->fields)._TimeAgo);
  (__this->fields)._TimeLessMinute = StringLiteral_13798/*"TimeLessMinute"*/;
  thunk_FUN_01c20e04(&(__this->fields)._TimeLessMinute);
  (__this->fields).IOOGFEOIEPK = -1;
  (__this->fields).CCIKLAFHFAH = -1;
  (__this->fields).NBMPEEDDGKD = -1;
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public Color get_ColorBG()  [RVA 0x352D3F4]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$get_ColorBG @ RVA 0x352D3F4

UnityEngine_Color_o
Nekki_SF2_GUI_Dialogs_Raids_MessageItem__get_ColorBG
          (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Image_o *pUVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_o UVar4;
  
  if ((DAT_04568a38 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a38 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._background;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._background;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0362d46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UVar3.fields.r =
           (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                     (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
      UVar3.fields.g = (float)in_s1;
      UVar3.fields.a = (float)in_s3;
      UVar3.fields.b = (float)in_s2;
      return (UnityEngine_Color_o)UVar3.fields;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UVar4.fields.g = 1.0;
  UVar4.fields.r = 1.0;
  UVar4.fields.a = 1.0;
  UVar4.fields.b = 1.0;
  return (UnityEngine_Color_o)UVar4.fields;
}


// ===== public ODKDFMHHLIP get_MessageInfo()  [RVA 0x352D490]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$get_MessageInfo @ RVA 0x352D490

ODKDFMHHLIP_o *
Nekki_SF2_GUI_Dialogs_Raids_MessageItem__get_MessageInfo
          (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._DOMCENNEEFM_k__BackingField;
}


// ===== private void GBPDDFOIDPG()  [RVA 0x352D498]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$GBPDDFOIDPG @ RVA 0x352D498

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem__GBPDDFOIDPG
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,MethodInfo *method)

{
  (__this->fields).IOOGFEOIEPK = -1;
  (__this->fields).CCIKLAFHFAH = -1;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItem__OnTimerTick(__this,method);
  return;
}


// ===== public void OnTimerTick()  [RVA 0x352D4A4]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$OnTimerTick @ RVA 0x352D4A4

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem__OnTimerTick
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  PGICCMFLDPI_o *pPVar1;
  MethodInfo *in_x2;
  
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
     (pPVar1 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0), pPVar1 != (PGICCMFLDPI_o *)0x0
     )) {
    Nekki_SF2_GUI_Dialogs_Raids_MessageItem__DLOCFGMOEFN(__this,(pPVar1->fields).GDKPGIBMFPA,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DLOCFGMOEFN(long ANDHBPGOCOM)  [RVA 0x352D4D8]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$DLOCFGMOEFN @ RVA 0x352D4D8

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem__DLOCFGMOEFN
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,int64_t ANDHBPGOCOM,
               MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  System_Text_StringBuilder_o *__this_00;
  System_Text_StringBuilder_o *pSVar7;
  Il2CppObject *pIVar8;
  long lVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *b;
  long lVar11;
  Il2CppClass *pIVar12;
  ulong uVar13;
  int32_t *piVar14;
  Nekki_SF2_GUI_LabelAlias_o *pNVar15;
  long lVar16;
  System_String_o *pSVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  
  if ((DAT_04568a39 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    DAT_04568a39 = 1;
  }
  if ((__this->fields).NBMPEEDDGKD < 0) {
    return;
  }
  pNVar15 = (__this->fields)._timeLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  lVar19 = ANDHBPGOCOM - (__this->fields).NBMPEEDDGKD;
  if (lVar19 < -999) {
    return;
  }
  lVar20 = (lVar19 / 1000) % 0xe10;
  lVar9 = lVar19 / 3600000;
  uVar1 = (int)((ulong)((long)(int)(short)lVar20 * -0x77777777) >> 0x20) + (int)(short)lVar20;
  lVar16 = (long)(short)((short)(uVar1 >> 5) - (short)((int)uVar1 >> 0x1f));
  if ((lVar9 == (__this->fields).IOOGFEOIEPK) && ((__this->fields).CCIKLAFHFAH == lVar16)) {
    return;
  }
  (__this->fields).IOOGFEOIEPK = lVar9;
  (__this->fields).CCIKLAFHFAH = lVar16;
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (3599999 < lVar19) {
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_0362db00;
    pSVar7 = System_Text_StringBuilder__Append(__this_00,lVar9,(MethodInfo *)0x0);
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar9 = Method_System_Array_Empty<string>__;
    pSVar17 = (__this->fields)._TimeHourShort;
    lVar11 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar11 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar11 = *(long *)(lVar9 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01b81620();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0362db00;
    pIVar12 = pIVar8->klass;
    uVar18 = **(undefined8 **)(lVar9 + 0xb8);
    uVar2._0_1_ = (pIVar12->_2).rank;
    uVar2._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar13 = (ulong)uVar2;
    if (uVar13 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar10 = pIVar12->vtable + (*piVar14 + 0xc);
          goto LAB_0362d74c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0362d74c:
    pSVar17 = (System_String_o *)(*pVVar10->methodPtr)(pIVar8,pSVar17,uVar18,pVVar10->method);
    if ((pSVar7 == (System_Text_StringBuilder_o *)0x0) ||
       (pSVar7 = System_Text_StringBuilder__Append(pSVar7,pSVar17,(MethodInfo *)0x0),
       pSVar7 == (System_Text_StringBuilder_o *)0x0)) goto LAB_0362db00;
    System_Text_StringBuilder__Append(pSVar7,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
  }
  if (0x3b < lVar20) {
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_0362db00;
    pSVar7 = System_Text_StringBuilder__Append(__this_00,lVar16,(MethodInfo *)0x0);
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar9 = Method_System_Array_Empty<string>__;
    pSVar17 = (__this->fields)._TimeMinuteShort;
    lVar16 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar16 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar16 = *(long *)(lVar9 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_01b81620();
    }
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0362db00;
    pIVar12 = pIVar8->klass;
    uVar18 = **(undefined8 **)(lVar9 + 0xb8);
    uVar3._0_1_ = (pIVar12->_2).rank;
    uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar13 = (ulong)uVar3;
    if (uVar13 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar10 = pIVar12->vtable + (*piVar14 + 0xc);
          goto LAB_0362d87c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0362d87c:
    pSVar17 = (System_String_o *)(*pVVar10->methodPtr)(pIVar8,pSVar17,uVar18,pVVar10->method);
    if ((pSVar7 == (System_Text_StringBuilder_o *)0x0) ||
       (pSVar7 = System_Text_StringBuilder__Append(pSVar7,pSVar17,(MethodInfo *)0x0),
       pSVar7 == (System_Text_StringBuilder_o *)0x0)) goto LAB_0362db00;
    System_Text_StringBuilder__Append(pSVar7,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
  }
  pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar9 = Method_System_Array_Empty<string>__;
  if ((lVar19 < 3600000) && (lVar20 < 0x3c)) {
    pSVar17 = (__this->fields)._TimeLessMinute;
    lVar19 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar19 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar19 = *(long *)(lVar9 + 0x38);
    }
    lVar19 = *(long *)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_01b81620();
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar19 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_01b81620();
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0362db00;
    pIVar12 = pIVar8->klass;
    uVar18 = **(undefined8 **)(lVar19 + 0xb8);
    uVar4._0_1_ = (pIVar12->_2).rank;
    uVar4._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar13 = (ulong)uVar4;
    if (uVar13 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_0362da28;
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
  }
  else {
    pSVar17 = (__this->fields)._TimeAgo;
    lVar19 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar19 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar19 = *(long *)(lVar9 + 0x38);
    }
    lVar19 = *(long *)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_01b81620();
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar19 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_01b81620();
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0362db00;
    pIVar12 = pIVar8->klass;
    uVar18 = **(undefined8 **)(lVar19 + 0xb8);
    uVar5._0_1_ = (pIVar12->_2).rank;
    uVar5._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar13 = (ulong)uVar5;
    if (uVar13 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_0362da28;
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
  }
  pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0362da38:
  pSVar17 = (System_String_o *)(*pVVar10->methodPtr)(pIVar8,pSVar17,uVar18,pVVar10->method);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append(__this_00,pSVar17,(MethodInfo *)0x0);
    pSVar17 = (System_String_o *)
              (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    if (pSVar17 != (System_String_o *)0x0) {
      if ((pSVar17->fields)._stringLength < 1) {
        return;
      }
      pNVar15 = (__this->fields)._timeLabel;
      if (pNVar15 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        b = (System_String_o *)
            (*(pNVar15->klass->vtable)._74_get_text.methodPtr)
                      (pNVar15,(pNVar15->klass->vtable)._74_get_text.method);
        bVar6 = System_String__op_Inequality(pSVar17,b,(MethodInfo *)0x0);
        if (!bVar6) {
          return;
        }
        pNVar15 = (__this->fields)._timeLabel;
        if (pNVar15 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0362dae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar15->klass->vtable)._75_set_text.methodPtr)
                    (pNVar15,pSVar17,(pNVar15->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
LAB_0362db00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_0362da28:
  pVVar10 = pIVar12->vtable + (*piVar14 + 0xc);
  goto LAB_0362da38;
}


// ===== private void NGKAMMODKNF(Unit HOKBHLPPCAH)  [RVA 0x352DB04]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$NGKAMMODKNF @ RVA 0x352DB04

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem__NGKAMMODKNF
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,MethodInfo *param_2)

{
  (__this->fields).IOOGFEOIEPK = -1;
  (__this->fields).CCIKLAFHFAH = -1;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItem__OnTimerTick(__this,param_2);
  return;
}


// ===== public void set_ColorBG(Color CJNHFNHJHPE)  [RVA 0x352DB10]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$set_ColorBG @ RVA 0x352DB10

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem__set_ColorBG
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,UnityEngine_Color_o CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Image_o *pUVar2;
  
  if ((DAT_04568a3a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a3a = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._background;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._background;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0362dbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                (CONCAT44((int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20),CJNHFNHJHPE.fields.r),
                 CONCAT44((int)((ulong)CJNHFNHJHPE.fields._4_8_ >> 0x20),CJNHFNHJHPE.fields.g),
                 CONCAT44((int)((ulong)CJNHFNHJHPE.fields._8_8_ >> 0x20),CJNHFNHJHPE.fields.b),
                 CONCAT44((int)((ulong)register0x00005060 >> 0x20),CJNHFNHJHPE.fields.a),pUVar2,
                 (pUVar2->klass->vtable)._23_set_color.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private MessageItemContent OHNGNOIEJLH(GameObject DKIDCBPNMPD)  [RVA 0x352DBD4]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$OHNGNOIEJLH @ RVA 0x352DBD4

Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *
Nekki_SF2_GUI_Dialogs_Raids_MessageItem__OHNGNOIEJLH
          (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,UnityEngine_GameObject_o *DKIDCBPNMPD,
          MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *pNVar2;
  
  if ((DAT_04568a3b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MessageItemContent>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a3b = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)DKIDCBPNMPD,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    return (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)0x0;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = (UnityEngine_GameObject_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)DKIDCBPNMPD,
                         Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_GetComponent<MessageItemContent>__);
    return pNVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HHOLKGEHGAB(Unit HOKBHLPPCAH)  [RVA 0x352DC98]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$HHOLKGEHGAB @ RVA 0x352DC98

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem__HHOLKGEHGAB
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,undefined8 param_2,
               MethodInfo *param_3)

{
  KKLJIDJBFEI_o *__this_00;
  PGICCMFLDPI_o *pPVar1;
  
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
     (pPVar1 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0), pPVar1 != (PGICCMFLDPI_o *)0x0
     )) {
    Nekki_SF2_GUI_Dialogs_Raids_MessageItem__DLOCFGMOEFN
              (__this,(pPVar1->fields).GDKPGIBMFPA,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void Init(ODKDFMHHLIP IHNKCJHDDKD)  [RVA 0x352DC9C]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$Init @ RVA 0x352DC9C

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem__Init
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,ODKDFMHHLIP_o *IHNKCJHDDKD,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_TextGenerator_o *__this_01;
  UnityEngine_RectTransform_o *pUVar3;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *extraout_x0;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_RectTransform_o *__this_02;
  Il2CppObject *pIVar6;
  System_IObservable_Unit__o *pSVar7;
  System_Action_T__o *pSVar8;
  System_Action_Action__o **ppSVar9;
  UnityEngine_GameObject_o *pUVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar11;
  System_Action_Action__o *addHandler;
  UnityEngine_UI_Text_o *pUVar12;
  System_String_o *str;
  System_Action_Action__o *removeHandler;
  float fVar13;
  UnityEngine_Vector2_o UVar14;
  UnityEngine_Vector2_o value;
  UnityEngine_Rect_o UVar15;
  UnityEngine_TextGenerationSettings_o UStack_190;
  UnityEngine_TextGenerationSettings_o UStack_130;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this_00;
  
  pMVar11 = (MethodInfo *)&UStack_190;
  if ((DAT_04568a3c & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MessageItem_HHOLKGEHGAB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MessageItem_NGKAMMODKNF__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&UnityEngine_TextGenerator_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_FJFIMOHEBBM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_MINHBFCDGEC__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo);
    DAT_04568a3c = 1;
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  (__this->fields)._DOMCENNEEFM_k__BackingField = IHNKCJHDDKD;
  thunk_FUN_01c20e04(&(__this->fields)._DOMCENNEEFM_k__BackingField,IHNKCJHDDKD);
  if (IHNKCJHDDKD == (ODKDFMHHLIP_o *)0x0) goto LAB_0362e300;
  pUVar12 = (__this->fields)._message;
  (__this->fields).NBMPEEDDGKD = (IHNKCJHDDKD->fields).HCNDEELOKHA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_01 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *)(ulong)bVar2;
  fVar13 = 0.0;
  if (bVar2) {
    pUVar12 = (__this->fields)._message;
    if (pUVar12 == (UnityEngine_UI_Text_o *)0x0) goto LAB_0362e300;
    str = (IHNKCJHDDKD->fields).ABCHAOKFLGL;
    (*(pUVar12->klass->vtable)._75_set_text.methodPtr)
              (pUVar12,str,(pUVar12->klass->vtable)._75_set_text.method);
    __this_01 = (UnityEngine_TextGenerator_o *)
                thunk_FUN_01bda818(UnityEngine_TextGenerator_TypeInfo);
    UnityEngine_TextGenerator___ctor(__this_01,(MethodInfo *)0x0);
    pUVar12 = (__this->fields)._message;
    if ((pUVar12 == (UnityEngine_UI_Text_o *)0x0) ||
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pUVar12,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0362e300;
    UVar15 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    UnityEngine_UI_Text__GetGenerationSettings
              (&UStack_130,pUVar12,(UnityEngine_Vector2_o)UVar15.fields._8_8_,(MethodInfo *)0x0);
    memcpy(&local_d0,&UStack_130,0x60);
    memcpy(&UStack_130,&local_d0,0x60);
    if (__this_01 == (UnityEngine_TextGenerator_o *)0x0) goto LAB_0362e300;
    memcpy(&UStack_190,&UStack_130,0x60);
    fVar13 = UnityEngine_TextGenerator__GetPreferredHeight
                       (__this_01,str,&UStack_190,(MethodInfo *)0x0);
    fVar13 = fVar13 + -40.0;
    __this_00 = extraout_x0;
    method_01 = pMVar11;
  }
  iVar1 = (IHNKCJHDDKD->fields).DNPAFIFHKIP;
  if (iVar1 == 0) {
    pUVar10 = (__this->fields)._systemMessageItemContentPrefab;
LAB_0362decc:
    pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_MessageItem__OHNGNOIEJLH(__this_00,pUVar10,method_01);
    (__this->fields).JDLPKBDPEBL = pNVar4;
    thunk_FUN_01c20e04(&(__this->fields).JDLPKBDPEBL);
  }
  else if (iVar1 == 2) {
    pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_MessageItem__OHNGNOIEJLH
                       (__this_00,(__this->fields)._raidInvitationMessageItemContentPrefab,method_01
                       );
    (__this->fields).JDLPKBDPEBL = pNVar4;
    thunk_FUN_01c20e04(&(__this->fields).JDLPKBDPEBL);
    pUVar12 = (__this->fields)._message;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar2) {
      pUVar12 = (__this->fields)._message;
      if ((pUVar12 == (UnityEngine_UI_Text_o *)0x0) ||
         (pUVar10 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
         pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0362e300;
      UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
    }
  }
  else if (iVar1 == 1) {
    pUVar10 = (__this->fields)._memberMessageItemContentPrefab;
    goto LAB_0362decc;
  }
  pNVar4 = (__this->fields).JDLPKBDPEBL;
                    /* try { // try from 0362df4c to 0372e0b3 has its CatchHandler @ 0362df4c
                       catch() { ... } // from try @ 0362df4c with catch @ 0362df4c
                       catch() { ... } // from try @ 0362e0f0 with catch @ 0362df4c
                       catch() { ... } // from try @ 0362e124 with catch @ 0362df4c
                       catch() { ... } // from try @ 0362e158 with catch @ 0362df4c
                       catch() { ... } // from try @ 0362e188 with catch @ 0362df4c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) goto LAB_0362e0f4;
  pUVar3 = (__this->fields).super._visibilityRoot;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = (__this->fields).super._visibilityRoot;
  }
  else {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields).JDLPKBDPEBL;
  if ((pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent
              (pUVar5,(UnityEngine_Transform_o *)pUVar3,false,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).JDLPKBDPEBL;
    if ((pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetAsLastSibling(pUVar5,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).JDLPKBDPEBL;
      if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)0x0) {
        (*pNVar4->klass[1]._1.image)(pNVar4,IHNKCJHDDKD,pNVar4->klass[1]._1.gc_desc);
        pUVar3 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
          pUVar3 = (UnityEngine_RectTransform_o *)0x0;
        }
        else if (pUVar3->klass != UnityEngine_RectTransform_TypeInfo) {
          pUVar3 = (UnityEngine_RectTransform_o *)0x0;
        }
        pNVar4 = (__this->fields).JDLPKBDPEBL;
        if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)0x0) {
          __this_02 = (UnityEngine_RectTransform_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
          if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
            __this_02 = (UnityEngine_RectTransform_o *)0x0;
          }
          else if (__this_02->klass != UnityEngine_RectTransform_TypeInfo) {
            __this_02 = (UnityEngine_RectTransform_o *)0x0;
          }
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar2) {
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar2) {
                    /* try { // try from 0362e0b4 to 0372e0bb has its CatchHandler @ 0362e13c */
              if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                UVar14 = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0);
                fVar13 = fVar13 + UVar14.fields.y;
                UVar14.fields.y = fVar13;
                    /* try { // try from 0362e0d0 to 0372e0db has its CatchHandler @ 0362e138 */
                UnityEngine_RectTransform__set_sizeDelta(__this_02,UVar14,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  value.fields.y = fVar13;
                  value.fields.x = UVar14.fields.x;
                    /* try { // try from 0362e0e4 to 0372e0ef has its CatchHandler @ 0362e134 */
                    /* try { // try from 0362e0f0 to 0372e117 has its CatchHandler @ 0362df4c */
                  UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
                  goto LAB_0362e0f4;
                }
              }
              goto LAB_0362e300;
            }
          }
LAB_0362e0f4:
                    /* try { // try from 0362e118 to 0372e11b has its CatchHandler @ 0362e130 */
                    /* try { // try from 0362e11c to 0372e11f has its CatchHandler @ 0362e12c */
                    /* try { // try from 0362e120 to 0372e123 has its CatchHandler @ 0362e128 */
                    /* try { // try from 0362e124 to 0372e153 has its CatchHandler @ 0362df4c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362e120 with catch @ 0362e128
                        */
          pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362e11c with catch @ 0362e12c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362e118 with catch @ 0362e130
                        */
          pSVar7 = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar6,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362e0e4 with catch @ 0362e134
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362e0d0 with catch @ 0362e138
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362e0b4 with catch @ 0362e13c
                        */
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
                    /* try { // try from 0362e154 to 0372e157 has its CatchHandler @ 0362e178 */
          System_Action<Unit>___ctor();
                    /* try { // try from 0362e158 to 0372e17f has its CatchHandler @ 0362df4c */
          pIVar6 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<Unit>
                             ((System_IObservable_T__o *)pSVar7,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar6,(UnityEngine_Component_o *)__this,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* catch() { ... } // from try @ 0362e154 with catch @ 0362e178 */
          if ((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0362e180 to 0372e187 has its CatchHandler @ 0362e19c */
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 0362e188 to 0372e193 has its CatchHandler @ 0362df4c */
          addHandler = Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->static_fields->
                       __9__21_1;
          if (addHandler == (System_Action_Action__o *)0x0) {
                    /* try { // try from 0362e194 to 0372e19b has its CatchHandler @ 0362e19c */
            if ((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0362e180 with catch @ 0362e19c
                       catch(type#2 @ 00000000) { ... } // from try @ 0362e194 with catch @ 0362e19c
                        */
              thunk_FUN_01ba7564();
            }
            addHandler = (System_Action_Action__o *)
                         thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
            System_Action<object>___ctor();
            ppSVar9 = &Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->static_fields->
                       __9__21_1;
            *ppSVar9 = addHandler;
            thunk_FUN_01c20e04(ppSVar9,addHandler);
          }
          if ((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          removeHandler =
               Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->static_fields->__9__21_2;
          if (removeHandler == (System_Action_Action__o *)0x0) {
            if ((Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            removeHandler =
                 (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
            System_Action<object>___ctor();
            ppSVar9 = &Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c_TypeInfo->static_fields->
                       __9__21_2;
            *ppSVar9 = removeHandler;
            thunk_FUN_01c20e04(ppSVar9,removeHandler);
          }
          if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar7 = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
          System_Action<Unit>___ctor();
          pIVar6 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<Unit>
                             ((System_IObservable_T__o *)pSVar7,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar6,(UnityEngine_Component_o *)__this,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          Nekki_SF2_GUI_Dialogs_Raids_MessageItem__OnTimerTick(__this,method_00);
          return;
        }
      }
    }
  }
LAB_0362e300:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void UpdateContent(ODKDFMHHLIP IHNKCJHDDKD)  [RVA 0x352E304]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$UpdateContent @ RVA 0x352E304

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,ODKDFMHHLIP_o *IHNKCJHDDKD,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Text_o *pUVar2;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *pNVar3;
  
  if ((DAT_04568a3d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a3d = 1;
  }
  pUVar2 = (__this->fields)._message;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((IHNKCJHDDKD == (ODKDFMHHLIP_o *)0x0) ||
       (pUVar2 = (__this->fields)._message, pUVar2 == (UnityEngine_UI_Text_o *)0x0))
    goto LAB_0362e3e8;
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,(IHNKCJHDDKD->fields).ABCHAOKFLGL,(pUVar2->klass->vtable)._75_set_text.method)
    ;
  }
  pNVar3 = (__this->fields).JDLPKBDPEBL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).JDLPKBDPEBL;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)0x0) {
                    /* try { // try from 0362e3cc to 0372e503 has its CatchHandler @ 0362e3cc
                       catch() { ... } // from try @ 0362e3cc with catch @ 0362e3cc
                       catch() { ... } // from try @ 0362e6a8 with catch @ 0362e3cc
                       catch() { ... } // from try @ 0362e6e4 with catch @ 0362e3cc
                       catch() { ... } // from try @ 0362e758 with catch @ 0362e3cc
                       catch() { ... } // from try @ 0362e7b0 with catch @ 0362e3cc
                       catch() { ... } // from try @ 0362e7e8 with catch @ 0362e3cc */
                    /* WARNING: Could not recover jumptable at 0x0362e3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pNVar3->klass[1]._1.image)(pNVar3,IHNKCJHDDKD,pNVar3->klass[1]._1.gc_desc);
    return;
  }
LAB_0362e3e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void POMKHIHKDIB(ODKDFMHHLIP CJNHFNHJHPE)  [RVA 0x352E3EC]
// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$POMKHIHKDIB @ RVA 0x352E3EC

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem__POMKHIHKDIB
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,ODKDFMHHLIP_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._DOMCENNEEFM_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._DOMCENNEEFM_k__BackingField);
  return;
}

