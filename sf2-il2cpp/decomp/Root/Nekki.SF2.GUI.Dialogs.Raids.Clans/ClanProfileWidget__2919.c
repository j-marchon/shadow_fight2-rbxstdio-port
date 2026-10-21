// TypeDefIndex 2919
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class ClanProfileWidget : MonoBehaviour
// Fields:
//   public const float ATTRIBUTE_BG_SCALE_FOCUS = 1;
//   public const float ATTRIBUTE_BG_SCALE_UNFOCUS = 0.62;
//   public const float ATTRIBUTE_ARMS_SCALE_FOCUS = 1.25;
//   public const float ATTRIBUTE_ARMS_SCALE_UNFOCUS = 0.7;
//   public const float ATTRIBUTE_COLOR_SCALE_FOCUS = 0.81;
//   public const float ATTRIBUTE_COLOR_SCALE_UNFOCUS = 0.59;
//   public const string DEFAULT_RATING = "0";
//   private Action<CPAPMBPHEAB> MFOGEDBHCHA; // 0x20
//   private BKKENCMPLLF FLLHHEODKPH; // 0x28
//   private LabelAlias _title; // 0x30
//   private ClanLogoMakerWidget _logoWidget; // 0x38
//   private GameObject _joinTypePanel; // 0x40
//   private CheckBox _joinTypeCheckBox; // 0x48
//   private LabelAlias _joinTypeInfo; // 0x50
//   private EditBox _nameEditBox; // 0x58
//   private LabelAlias _nameEditBoxError; // 0x60
//   private LabelAlias _nameHeader; // 0x68
//   private EditBox _descEditBox; // 0x70
//   private LabelAlias _descEditBoxError; // 0x78
//   private LabelAlias _descHeader; // 0x80
//   private EditBox _ratingEditBox; // 0x88
//   private LabelAlias _ratingEditBoxError; // 0x90
//   private LabelAlias _ratingHeader; // 0x98
//   private Vector3 NOBBLGAGPIJ; // 0xA0
//   private Dictionary<BBJBEEEJPDC, EditBox> NOLPECJJJPE; // 0xB0
//   private Dictionary<BBJBEEEJPDC, LabelAlias> ANCLLFGPFAF; // 0xB8
//   private Dictionary<BBJBEEEJPDC, CPAPMBPHEAB> LCJAAPPDFJJ; // 0xC0
//   private BBJBEEEJPDC CHHEFFAKHDB; // 0xC8

// ===== public void SetEditRequirementsEnabled(bool CJNHFNHJHPE)  [RVA 0x344EFCC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetEditRequirementsEnabled @ RVA 0x344EFCC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditRequirementsEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *in_x3;
  
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__AAHLEFMLFFM(__this,3,CJNHFNHJHPE,in_x3);
  return;
}


// ===== public void SetJoinType(BANEEHPJOIB CJNHFNHJHPE)  [RVA 0x344F11C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetJoinType @ RVA 0x344F11C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetJoinType
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar2;
  
  if ((DAT_04568295 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568295 = 1;
  }
  pNVar2 = (__this->fields)._joinTypeCheckBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = (__this->fields)._joinTypeCheckBox;
  if (pNVar2 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
    Nekki_SF2_GUI_Scripts_CheckBox__set_State(pNVar2,(uint)(CJNHFNHJHPE != 2),(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EMIKPPHJBHM(object IMMNELPBGIF)  [RVA 0x344F1B8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$EMIKPPHJBHM @ RVA 0x344F1B8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__EMIKPPHJBHM
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t LHPGDPKKMPF;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  UnityEngine_Object_o *x;
  BKKENCMPLLF_o *__this_01;
  MethodInfo *in_x3;
  
  if ((DAT_04568296 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568296 = 1;
  }
  __this_00 = (__this->fields).NOLPECJJJPE;
  if (__this_00 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
    x = (UnityEngine_Object_o *)
        System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,2,
                   Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if ((x != (UnityEngine_Object_o *)0x0) &&
       (__this_01 = (__this->fields).FLLHHEODKPH, __this_01 != (BKKENCMPLLF_o *)0x0)) {
      LHPGDPKKMPF = BKKENCMPLLF__IHIACHJKIBA
                              (__this_01,(System_String_o *)x[0x10].klass,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError(__this,2,LHPGDPKKMPF,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetEditNameEnabled(bool CJNHFNHJHPE)  [RVA 0x344F5F8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetEditNameEnabled @ RVA 0x344F5F8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditNameEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *in_x3;
  
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__AAHLEFMLFFM(__this,1,CJNHFNHJHPE,in_x3);
  return;
}


// ===== public void SetEBoxError(BBJBEEEJPDC JDMKJDPMMDO, CPAPMBPHEAB LHPGDPKKMPF)  [RVA 0x344F280]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetEBoxError @ RVA 0x344F280

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,int32_t JDMKJDPMMDO,
               int32_t LHPGDPKKMPF,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *pSVar3;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  Il2CppObject *pIVar4;
  long lVar5;
  JMDPBFOCHHP_o *pJVar6;
  System_String_o *pSVar7;
  VirtualInvokeData *pVVar8;
  UnityEngine_GameObject_o *pUVar9;
  undefined8 uVar10;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar11;
  Il2CppClass *pIVar12;
  undefined8 *puVar13;
  System_Action_CPAPMBPHEAB__o *pSVar14;
  ulong uVar15;
  int32_t *piVar16;
  
  if ((DAT_04568297 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_get_Item__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_set_Item__)
    ;
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_2019/*"3"*/);
    FUN_01bab630(&StringLiteral_17058/*"clan_warningtext_latin"*/);
    FUN_01bab630(&StringLiteral_17785/*"dlgEnterClanName"*/);
    FUN_01bab630(&StringLiteral_17054/*"clan_text_limits"*/);
    DAT_04568297 = 1;
  }
  pSVar3 = (__this->fields).LCJAAPPDFJJ;
  if (pSVar3 == (System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *)0x0)
  goto LAB_0354f5f0;
  iVar2 = System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__get_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,JDMKJDPMMDO,
                     Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_get_Item__
                    );
  if (iVar2 == LHPGDPKKMPF) {
    return;
  }
  __this_00 = (__this->fields).ANCLLFGPFAF;
  if (__this_00 == (System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *)0x0)
  goto LAB_0354f5f0;
  __this_01 = (Nekki_SF2_GUI_LabelAlias_o *)
              System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         JDMKJDPMMDO,
                         Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_get_Item__
                        );
  pSVar3 = (__this->fields).LCJAAPPDFJJ;
  if (pSVar3 == (System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *)0x0)
  goto LAB_0354f5f0;
  System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__set_Item
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,JDMKJDPMMDO,LHPGDPKKMPF
             ,Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_set_Item__);
  switch(LHPGDPKKMPF) {
  case 0:
    if ((__this_01 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0354f5f0;
    UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
    break;
  case 1:
    if ((__this_01 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0354f5f0;
    UnityEngine_GameObject__SetActive(pUVar9,true,(MethodInfo *)0x0);
    puVar13 = &StringLiteral_17058/*"clan_warningtext_latin"*/;
    goto LAB_0354f558;
  case 2:
    if ((__this_01 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0354f5f0;
    UnityEngine_GameObject__SetActive(pUVar9,true,(MethodInfo *)0x0);
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = FUN_01bab718(string___TypeInfo,2);
    if (lVar5 == 0) goto LAB_0354f5f0;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0354f5f4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(undefined8 *)(lVar5 + 0x20) = StringLiteral_2019/*"3"*/;
    thunk_FUN_01c20e04();
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar6 == (JMDPBFOCHHP_o *)0x0) ||
       (pJVar11 = (pJVar6->fields)._LGFNDLOCGPB_k__BackingField,
       pJVar11 == (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) goto LAB_0354f5f0;
    pSVar7 = System_Int32__ToString((int)pJVar11 + 0x14,(MethodInfo *)0x0);
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_0354f5f4;
    *(System_String_o **)(lVar5 + 0x28) = pSVar7;
    thunk_FUN_01c20e04();
    uVar10 = StringLiteral_17054/*"clan_text_limits"*/;
    if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0354f5f0;
    pIVar12 = pIVar4->klass;
    uVar1._0_1_ = (pIVar12->_2).rank;
    uVar1._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar15 = (ulong)uVar1;
    if (uVar15 != 0) {
      piVar16 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar8 = pIVar12->vtable + (*piVar16 + 0xc);
          goto LAB_0354f57c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0354f57c:
    uVar10 = (*pVVar8->methodPtr)(pIVar4,uVar10,lVar5,pVVar8->method);
    (*(__this_01->klass->vtable)._75_set_text.methodPtr)
              (__this_01,uVar10,(__this_01->klass->vtable)._75_set_text.method);
    break;
  case 3:
    if ((__this_01 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0354f5f0;
    UnityEngine_GameObject__SetActive(pUVar9,true,(MethodInfo *)0x0);
    puVar13 = &StringLiteral_17785/*"dlgEnterClanName"*/;
LAB_0354f558:
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,(System_String_o *)*puVar13,(MethodInfo *)0x0);
  }
  if (JDMKJDPMMDO != 1) {
    return;
  }
  pSVar14 = (__this->fields).MFOGEDBHCHA;
  if (pSVar14 != (System_Action_CPAPMBPHEAB__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0354f5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar14->fields).super.super.invoke_impl)
              ((pSVar14->fields).super.super.method_code,LHPGDPKKMPF,
               (pSVar14->fields).super.super.method);
    return;
  }
LAB_0354f5f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private EditBox BJFDEENANED(BBJBEEEJPDC ACCIHBHMFPN)  [RVA 0x344F604]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$BJFDEENANED @ RVA 0x344F604

Nekki_SF2_GUI_Scripts_EditBox_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__BJFDEENANED
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,int32_t ACCIHBHMFPN,
          MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *pSVar2;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar3;
  
  if ((DAT_04568298 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__);
    DAT_04568298 = 1;
  }
  pSVar2 = (__this->fields).NOLPECJJJPE;
  if (pSVar2 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,ACCIHBHMFPN,
                       Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_ContainsKey__
                      );
    if (!bVar1) {
      return (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0;
    }
    pSVar2 = (__this->fields).NOLPECJJJPE;
    if (pSVar2 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
      pNVar3 = (Nekki_SF2_GUI_Scripts_EditBox_o *)
               System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                          ACCIHBHMFPN,
                          Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__
                         );
      return pNVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnInput(Action<CPAPMBPHEAB> CJNHFNHJHPE)  [RVA 0x344F698]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$add_OnInput @ RVA 0x344F698

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__add_OnInput
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               System_Action_CPAPMBPHEAB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_CPAPMBPHEAB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_CPAPMBPHEAB__o *pSVar5;
  System_Action_CPAPMBPHEAB__o **ppSVar6;
  System_Action_CPAPMBPHEAB__o *a;
  
  if ((DAT_04568299 & 1) == 0) {
    FUN_01bab630(&System_Action<CPAPMBPHEAB>_TypeInfo);
    DAT_04568299 = 1;
  }
  ppSVar6 = &(__this->fields).MFOGEDBHCHA;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<CPAPMBPHEAB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<CPAPMBPHEAB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_CPAPMBPHEAB__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void LJKNOEMABCJ(BBJBEEEJPDC FBCOOGOEFGC, EditBox FCPEECECKJC)  [RVA 0x344F748]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$LJKNOEMABCJ @ RVA 0x344F748

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__LJKNOEMABCJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,int32_t FBCOOGOEFGC,
               Nekki_SF2_GUI_Scripts_EditBox_o *FCPEECECKJC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  JMDPBFOCHHP_o *pJVar3;
  System_Action_EditBox__o *CJNHFNHJHPE;
  int32_t value;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar4;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_01;
  UnityEngine_UI_InputField_OnChangeEvent_o *pUVar5;
  UnityEngine_Color_o CJNHFNHJHPE_00;
  
  if ((DAT_0456829a & 1) == 0) {
    FUN_01bab630(&System_Action<EditBox>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_BLOIEOMIJCF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_EMIKPPHJBHM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_HHHKCKLPENH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_MFIOONIHDLJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_MKHMLDCDJPC__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_Add__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<string>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    DAT_0456829a = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)FCPEECECKJC,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = (__this->fields).NOLPECJJJPE;
  if (__this_00 == (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0)
  goto LAB_0354faac;
  System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,FBCOOGOEFGC,
             (Il2CppObject *)FCPEECECKJC,
             Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_Add__);
  CJNHFNHJHPE_00 = CFBGPBCDAGA__NFFPCFGDOKG(0xa6,0x83,0x58,0xff,(MethodInfo *)0x0);
  if (FCPEECECKJC == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_0354faac;
  Nekki_SF2_GUI_Scripts_EditBox__set_BGColor(FCPEECECKJC,CJNHFNHJHPE_00,(MethodInfo *)0x0);
  if (FBCOOGOEFGC == 3) {
    UnityEngine_UI_InputField__set_contentType
              ((UnityEngine_UI_InputField_o *)FCPEECECKJC,2,(MethodInfo *)0x0);
    pUVar5 = (FCPEECECKJC->fields).super.m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (pUVar5 == (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) goto LAB_0354faac;
    UnityEngine_Events_UnityEvent<object>__AddListener
              ((UnityEngine_Events_UnityEvent_T0__o *)pUVar5,pUVar2,
               Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
  }
  else {
    if (FBCOOGOEFGC == 2) {
      UnityEngine_UI_InputField__set_lineType
                ((UnityEngine_UI_InputField_o *)FCPEECECKJC,2,(MethodInfo *)0x0);
      pUVar5 = (FCPEECECKJC->fields).super.m_OnValueChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
      UnityEngine_Events_UnityAction<object>___ctor();
      if (pUVar5 == (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) goto LAB_0354faac;
      UnityEngine_Events_UnityEvent<object>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)pUVar5,pUVar2,
                 Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if ((pJVar3 == (JMDPBFOCHHP_o *)0x0) ||
         (pJVar4 = (pJVar3->fields)._LGFNDLOCGPB_k__BackingField,
         pJVar4 == (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) goto LAB_0354faac;
      value = (pJVar4->fields).IAEGKJLKABO;
    }
    else {
      if (FBCOOGOEFGC != 1) goto LAB_0354fa18;
      UnityEngine_UI_InputField__set_lineType
                ((UnityEngine_UI_InputField_o *)FCPEECECKJC,0,(MethodInfo *)0x0);
      pUVar5 = (FCPEECECKJC->fields).super.m_OnValueChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
      UnityEngine_Events_UnityAction<object>___ctor();
      if (pUVar5 == (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) goto LAB_0354faac;
      UnityEngine_Events_UnityEvent<object>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)pUVar5,pUVar2,
                 Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if ((pJVar3 == (JMDPBFOCHHP_o *)0x0) ||
         (pJVar4 = (pJVar3->fields)._LGFNDLOCGPB_k__BackingField,
         pJVar4 == (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) goto LAB_0354faac;
      value = (pJVar4->fields).NLAKJEHAALI;
    }
    UnityEngine_UI_InputField__set_characterLimit
              ((UnityEngine_UI_InputField_o *)FCPEECECKJC,value,(MethodInfo *)0x0);
  }
LAB_0354fa18:
  CJNHFNHJHPE = (System_Action_EditBox__o *)thunk_FUN_01bda818(System_Action<EditBox>_TypeInfo);
  System_Action<object>___ctor();
  Nekki_SF2_GUI_Scripts_EditBox__add_OnShowKeyboard(FCPEECECKJC,CJNHFNHJHPE,(MethodInfo *)0x0);
  __this_01 = (FCPEECECKJC->fields).super.m_OnDidEndEdit;
  pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
  UnityEngine_Events_UnityAction<object>___ctor();
  if (__this_01 != (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__AddListener
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar2,
               Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    return;
  }
LAB_0354faac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetEditJoinTypeEnabled(bool CJNHFNHJHPE)  [RVA 0x344FAB0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetEditJoinTypeEnabled @ RVA 0x344FAB0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditJoinTypeEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar2;
  
  if ((DAT_0456829b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456829b = 1;
  }
  pNVar2 = (__this->fields)._joinTypeCheckBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._joinTypeCheckBox;
    if (pNVar2 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
      Nekki_SF2_GUI_Scripts_CheckBox__set_interactable(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public Dictionary<BBJBEEEJPDC, CPAPMBPHEAB> GetErrors()  [RVA 0x344FB44]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$GetErrors @ RVA 0x344FB44

System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__GetErrors
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,MethodInfo *method)

{
  return (__this->fields).LCJAAPPDFJJ;
}


// ===== public void remove_OnInput(Action<CPAPMBPHEAB> CJNHFNHJHPE)  [RVA 0x344FB4C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$remove_OnInput @ RVA 0x344FB4C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__remove_OnInput
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               System_Action_CPAPMBPHEAB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_CPAPMBPHEAB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_CPAPMBPHEAB__o *pSVar5;
  System_Action_CPAPMBPHEAB__o **ppSVar6;
  System_Action_CPAPMBPHEAB__o *source;
  
  if ((DAT_0456829c & 1) == 0) {
    FUN_01bab630(&System_Action<CPAPMBPHEAB>_TypeInfo);
    DAT_0456829c = 1;
  }
  ppSVar6 = &(__this->fields).MFOGEDBHCHA;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<CPAPMBPHEAB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<CPAPMBPHEAB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_CPAPMBPHEAB__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void HHHKCKLPENH(EditBox KNJOEBANLFJ)  [RVA 0x344FBFC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$HHHKCKLPENH @ RVA 0x344FBFC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__HHHKCKLPENH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               Nekki_SF2_GUI_Scripts_EditBox_o *KNJOEBANLFJ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *__this_01;
  UnityEngine_Transform_o *transform;
  float fVar3;
  float value;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_88;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_0456829d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_EditBox>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_EditBox>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_EditBox>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<BBJBEEEJPDC,_EditBox>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<BBJBEEEJPDC,_EditBox>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_0456829d = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NOLPECJJJPE;
  if (__this_00 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__GetEnumerator
              (&local_88,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_GetEnumerator__);
    local_60.fields._version = local_88.fields._version;
    local_60.fields._index = local_88.fields._index;
    local_60.fields._dictionary = local_88.fields._dictionary;
    local_60.fields._current.fields.value = local_88.fields._current.fields.value;
    local_60.fields._current.fields.key = local_88.fields._current.fields.key;
    local_60.fields._getEnumeratorRetType = local_88.fields._getEnumeratorRetType;
    local_60.fields._36_4_ = local_88.fields._36_4_;
    while (bVar2 = System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_EditBox>_MoveNext__
                             ), bVar2) {
      if ((Nekki_SF2_GUI_Scripts_EditBox_o *)local_60.fields._current.fields.value == KNJOEBANLFJ) {
        (__this->fields).CHHEFFAKHDB = (int32_t)local_60.fields._current.fields.key;
      }
      else {
        if ((Nekki_SF2_GUI_Scripts_EditBox_o *)local_60.fields._current.fields.value ==
            (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        method = (MethodInfo *)0x0;
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)local_60.fields._current.fields.value,false,
                   (MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__Dispose
              (&local_60,
               Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_EditBox>_Dispose__
              );
    if ((__this->fields).CHHEFFAKHDB == 3) {
      __this_01 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__BJFDEENANED(__this,3,method);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if (__this_01 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_0354fe00;
        bVar2 = System_String__op_Equality
                          ((__this_01->fields).super.m_Text,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
        if (bVar2) {
          UnityEngine_UI_InputField__set_text
                    ((UnityEngine_UI_InputField_o *)__this_01,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        }
      }
    }
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    iVar1 = (__this->fields).CHHEFFAKHDB;
    fVar3 = 600.0;
    if (iVar1 != 3) {
      fVar3 = 0.0;
    }
    value = 300.0;
    if (iVar1 != 2) {
      value = fVar3;
    }
    UnityEngine_TransformExtensions__AddLocalPositionY(transform,value,(MethodInfo *)0x0);
    return;
  }
LAB_0354fe00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetVisibleJoinTypePanel(bool CJNHFNHJHPE)  [RVA 0x344FEB0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetVisibleJoinTypePanel @ RVA 0x344FEB0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetVisibleJoinTypePanel
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Object_o *exists;
  
  if ((DAT_0456829e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456829e = 1;
  }
  exists = (UnityEngine_Object_o *)(__this->fields)._joinTypePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._joinTypePanel;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void MFIOONIHDLJ(object IMMNELPBGIF)  [RVA 0x344FF44]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$MFIOONIHDLJ @ RVA 0x344FF44

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__MFIOONIHDLJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *__this_01;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if ((DAT_0456829f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BBJBEEEJPDC,_EditBox>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BBJBEEEJPDC,_EditBox>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BBJBEEEJPDC,_EditBox>_get_Current__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<BBJBEEEJPDC,_EditBox>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_0456829f = 1;
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localPosition
              (__this_00,(UnityEngine_Vector3_o)(__this->fields).NOBBLGAGPIJ.fields,
               (MethodInfo *)0x0);
    if ((__this->fields).CHHEFFAKHDB == 3) {
      __this_01 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__BJFDEENANED(__this,3,method);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if (__this_01 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_035500ec;
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this_01->fields).super.m_Text,(MethodInfo *)0x0);
        if (bVar1) {
          UnityEngine_UI_InputField__set_text
                    ((UnityEngine_UI_InputField_o *)__this_01,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
        }
      }
    }
    __this_02 = (__this->fields).NOLPECJJJPE;
    (__this->fields).CHHEFFAKHDB = -1;
    if ((__this_02 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) &&
       (__this_03 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Values
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                               Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Values__
                              ),
       __this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<Int32Enum,_object>__GetEnumerator
                (&local_38,__this_03,
                 Method_System_Collections_Generic_Dictionary_ValueCollection<BBJBEEEJPDC,_EditBox>_GetEnumerator__
                );
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum,_object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BBJBEEEJPDC,_EditBox>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum,_object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BBJBEEEJPDC,_EditBox>_Dispose__
                    );
          return;
        }
        if ((UnityEngine_UI_Selectable_o *)local_38.fields._currentValue ==
            (UnityEngine_UI_Selectable_o *)0x0) break;
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)local_38.fields._currentValue,true,
                   (MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_035500ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x345016C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$.ctor @ RVA 0x345016C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,MethodInfo *method)

{
  System_Action_CPAPMBPHEAB__o **ppSVar1;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o **ppSVar2;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *__this_01;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o **ppSVar3;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *__this_02;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o **ppSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_CPAPMBPHEAB__o *pSVar5;
  
  if ((DAT_045682a0 & 1) == 0) {
    FUN_01bab630(&System_Action<CPAPMBPHEAB>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_EFCJODPJKJE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo);
    DAT_045682a0 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar5 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo->static_fields->
           __9__53_0;
  if (pSVar5 == (System_Action_CPAPMBPHEAB__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo->_2).cctor_finished == 0)
    {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo,method);
    }
    pSVar5 = (System_Action_CPAPMBPHEAB__o *)thunk_FUN_01bda818(System_Action<CPAPMBPHEAB>_TypeInfo)
    ;
    System_Action<Int32Enum>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_<>c_TypeInfo->static_fields->
               __9__53_0;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
  }
  if (__this != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
    ppSVar1 = &(__this->fields).MFOGEDBHCHA;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
    __this_00 = (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_TypeInfo
                                  );
    System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>__ctor__);
    ppSVar2 = &(__this->fields).NOLPECJJJPE;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    __this_01 = (System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_TypeInfo
                                  );
    System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>__ctor__);
    ppSVar3 = &(__this->fields).ANCLLFGPFAF;
    *ppSVar3 = __this_01;
    thunk_FUN_01c20e04(ppSVar3,__this_01);
    __this_02 = (System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_TypeInfo
                                  );
    System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
               Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>__ctor__);
    ppSVar4 = &(__this->fields).LCJAAPPDFJJ;
    *ppSVar4 = __this_02;
    thunk_FUN_01c20e04(ppSVar4,__this_02);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MKHMLDCDJPC(object IMMNELPBGIF)  [RVA 0x3450358]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$MKHMLDCDJPC @ RVA 0x3450358

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__MKHMLDCDJPC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  UnityEngine_Object_o *x;
  MethodInfo *in_x3;
  BKKENCMPLLF_o *__this_01;
  
  if ((DAT_045682a1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045682a1 = 1;
  }
  __this_00 = (__this->fields).NOLPECJJJPE;
  if (__this_00 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
    x = (UnityEngine_Object_o *)
        System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,3,
                   Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      __this_01 = (__this->fields).FLLHHEODKPH;
      iVar2 = PCOEHCPGBBG__JBGCINPPLAC((System_String_o *)x[0x10].klass,0,(MethodInfo *)0x0);
      if (__this_01 != (BKKENCMPLLF_o *)0x0) {
        iVar2 = BKKENCMPLLF__PLDIDKENFJP(__this_01,iVar2,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError(__this,3,iVar2,in_x3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateContent()  [RVA 0x3450434]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$UpdateContent @ RVA 0x3450434

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,MethodInfo *method)

{
  bool bVar1;
  BKKENCMPLLF_o *pBVar2;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar4;
  EEHFEPPDBHL_o *pEVar5;
  int32_t local_24;
  
  if ((DAT_045682a2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045682a2 = 1;
    method = extraout_x1;
  }
  local_24 = 0;
  pNVar4 = (__this->fields)._nameEditBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
  if (bVar1) {
    pBVar2 = (__this->fields).FLLHHEODKPH;
    if (pBVar2 == (BKKENCMPLLF_o *)0x0) goto LAB_035505a0;
    pNVar4 = (__this->fields)._nameEditBox;
    pSVar3 = BKKENCMPLLF__MJBHKOJAFOH(pBVar2,(MethodInfo *)0x0);
    if (pNVar4 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_035505a0;
    UnityEngine_UI_InputField__set_text
              ((UnityEngine_UI_InputField_o *)pNVar4,pSVar3,(MethodInfo *)0x0);
  }
  pBVar2 = (__this->fields).FLLHHEODKPH;
  if (pBVar2 == (BKKENCMPLLF_o *)0x0) goto LAB_035505a0;
  pEVar5 = (pBVar2->fields)._OGOHLLOEANF_k__BackingField;
  pNVar4 = (__this->fields)._descEditBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
  if (bVar1) {
    if (pEVar5 == (EEHFEPPDBHL_o *)0x0) goto LAB_035505a0;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pEVar5->fields).KKMDFLKPNNJ,(MethodInfo *)0x0);
    if (!bVar1) {
      pNVar4 = (__this->fields)._descEditBox;
      if (pNVar4 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_035505a0;
      UnityEngine_UI_InputField__set_text
                ((UnityEngine_UI_InputField_o *)pNVar4,(pEVar5->fields).KKMDFLKPNNJ,
                 (MethodInfo *)0x0);
    }
  }
  pNVar4 = (__this->fields)._ratingEditBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
  if (bVar1) {
    if (pEVar5 == (EEHFEPPDBHL_o *)0x0) goto LAB_035505a0;
    local_24 = (pEVar5->fields).IFICKDAKCHN;
    pNVar4 = (__this->fields)._ratingEditBox;
    pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    if (pNVar4 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_035505a0;
    UnityEngine_UI_InputField__set_text
              ((UnityEngine_UI_InputField_o *)pNVar4,pSVar3,(MethodInfo *)0x0);
  }
  else if (pEVar5 == (EEHFEPPDBHL_o *)0x0) goto LAB_035505a0;
  __this_00 = (__this->fields)._logoWidget;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__SetIcon
              (__this_00,(pEVar5->fields).JAAACMPGMKJ,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetJoinType
              (__this,(pEVar5->fields).JODJOLBBJNI,method_00);
    return;
  }
LAB_035505a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(BKKENCMPLLF FLMDMALCFNA)  [RVA 0x34505A4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$Init @ RVA 0x34505A4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               BKKENCMPLLF_o *FLMDMALCFNA,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  BKKENCMPLLF_o **ppBVar2;
  System_Action_string__o *JFMGOBJICBG;
  System_Action_CheckBox_EKFFAMKMBIH__o *pSVar3;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *pSVar4;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar5;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *pMVar7;
  BHEDGAKGKPO_StaticFields *pBVar8;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this_01;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar9;
  Nekki_SF2_GUI_LabelAlias_o *pNVar10;
  UnityEngine_Vector3_o UVar11;
  
  if ((DAT_045682a3 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_CGOBGFNCCEP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_MGDFLOOAIIC__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4419/*"ClanTypeEditing"*/);
    FUN_01bab630(&StringLiteral_11032/*"RatingRequiredClan"*/);
    FUN_01bab630(&StringLiteral_4379/*"ClanDescrPlaceholder"*/);
    FUN_01bab630(&StringLiteral_4398/*"ClanNamePlaceholder"*/);
    DAT_045682a3 = 1;
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar11 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
    (__this->fields).NOBBLGAGPIJ.fields.x = UVar11.fields.x;
    (__this->fields).NOBBLGAGPIJ.fields.y = UVar11.fields.y;
    (__this->fields).NOBBLGAGPIJ.fields.z = UVar11.fields.z;
    ppBVar2 = &(__this->fields).FLLHHEODKPH;
    *ppBVar2 = FLMDMALCFNA;
    thunk_FUN_01c20e04(ppBVar2,FLMDMALCFNA);
    __this_01 = (__this->fields)._logoWidget;
    JFMGOBJICBG = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__Init
                (__this_01,JFMGOBJICBG,(MethodInfo *)0x0);
      pNVar9 = (__this->fields)._joinTypeCheckBox;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar9,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar9 = (__this->fields)._joinTypeCheckBox;
        pSVar3 = (System_Action_CheckBox_EKFFAMKMBIH__o *)
                 thunk_FUN_01bda818(System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pNVar9 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) goto LAB_035509f0;
        Nekki_SF2_GUI_Scripts_CheckBox__remove_OnChangedState(pNVar9,pSVar3,(MethodInfo *)0x0);
        pNVar9 = (__this->fields)._joinTypeCheckBox;
        pSVar3 = (System_Action_CheckBox_EKFFAMKMBIH__o *)
                 thunk_FUN_01bda818(System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pNVar9 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) goto LAB_035509f0;
        Nekki_SF2_GUI_Scripts_CheckBox__add_OnChangedState(pNVar9,pSVar3,(MethodInfo *)0x0);
      }
      pNVar10 = (__this->fields)._joinTypeInfo;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar10,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar10 = (__this->fields)._joinTypeInfo;
        if (pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035509f0;
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar10,StringLiteral_4419/*"ClanTypeEditing"*/,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields).ANCLLFGPFAF;
      if (pSVar4 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *)0x0) {
        System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,1,
                   (Il2CppObject *)(__this->fields)._nameEditBoxError,
                   (MethodInfo_230F47C *)
                   Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_Add__);
        pSVar4 = (__this->fields).ANCLLFGPFAF;
        if (pSVar4 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *)0x0) {
          System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,2,
                     (Il2CppObject *)(__this->fields)._descEditBoxError,
                     (MethodInfo_230F47C *)
                     Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_Add__);
          pSVar4 = (__this->fields).ANCLLFGPFAF;
          if (pSVar4 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *)0x0) {
            pMVar7 = Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_Add__;
            System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,3,
                       (Il2CppObject *)(__this->fields)._ratingEditBoxError,
                       (MethodInfo_230F47C *)
                       Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_Add__);
            pNVar5 = (__this->fields)._nameEditBox;
            if (pNVar5 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
              Nekki_SF2_GUI_Scripts_EditBox__Clear(pNVar5,(MethodInfo *)0x0);
              pNVar5 = (__this->fields)._descEditBox;
              if (pNVar5 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
                Nekki_SF2_GUI_Scripts_EditBox__Clear(pNVar5,(MethodInfo *)0x0);
                pNVar5 = (__this->fields)._ratingEditBox;
                if (pNVar5 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
                  Nekki_SF2_GUI_Scripts_EditBox__Clear(pNVar5,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__LJKNOEMABCJ
                            (__this,1,(__this->fields)._nameEditBox,pMVar7);
                  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__LJKNOEMABCJ
                            (__this,2,(__this->fields)._descEditBox,pMVar7);
                  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__LJKNOEMABCJ
                            (__this,3,(__this->fields)._ratingEditBox,pMVar7);
                  pSVar6 = (__this->fields).LCJAAPPDFJJ;
                  if (pSVar6 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *
                                )0x0) {
                    System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,1,1,
                               (MethodInfo_230C684 *)
                               Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_Add__
                              );
                    pSVar6 = (__this->fields).LCJAAPPDFJJ;
                    if (pSVar6 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o
                                   *)0x0) {
                      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,2,1
                                 ,(MethodInfo_230C684 *)
                                  Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_Add__
                                );
                      pSVar6 = (__this->fields).LCJAAPPDFJJ;
                      if (pSVar6 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o
                                     *)0x0) {
                        pMVar7 = 
                        Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_Add__
                        ;
                        System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,3
                                   ,1,(MethodInfo_230C684 *)
                                      Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_Add__
                                  );
                        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                                  (__this,1,0,pMVar7);
                        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                                  (__this,2,0,pMVar7);
                        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                                  (__this,3,0,pMVar7);
                        pNVar10 = (__this->fields)._nameHeader;
                        (__this->fields).CHHEFFAKHDB = -1;
                        if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          Nekki_SF2_GUI_LabelAlias__set_Alias
                                    (pNVar10,StringLiteral_4398/*"ClanNamePlaceholder"*/,(MethodInfo *)0x0);
                          pNVar10 = (__this->fields)._nameHeader;
                          if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564();
                          }
                          if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                            pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
                            (*(pNVar10->klass->vtable)._23_set_color.methodPtr)
                                      ((pBVar8->FHIAKPJBBCB).fields.r,(pBVar8->FHIAKPJBBCB).fields.g
                                       ,(pBVar8->FHIAKPJBBCB).fields.b,
                                       (pBVar8->FHIAKPJBBCB).fields.a,pNVar10,
                                       (pNVar10->klass->vtable)._23_set_color.method);
                            pNVar10 = (__this->fields)._descHeader;
                            if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                              Nekki_SF2_GUI_LabelAlias__set_Alias
                                        (pNVar10,StringLiteral_4379/*"ClanDescrPlaceholder"*/,(MethodInfo *)0x0);
                              pNVar10 = (__this->fields)._descHeader;
                              if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
                                (*(pNVar10->klass->vtable)._23_set_color.methodPtr)
                                          ((pBVar8->FHIAKPJBBCB).fields.r,
                                           (pBVar8->FHIAKPJBBCB).fields.g,
                                           (pBVar8->FHIAKPJBBCB).fields.b,
                                           (pBVar8->FHIAKPJBBCB).fields.a,pNVar10,
                                           (pNVar10->klass->vtable)._23_set_color.method);
                                pNVar10 = (__this->fields)._ratingHeader;
                                if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                  Nekki_SF2_GUI_LabelAlias__set_Alias
                                            (pNVar10,StringLiteral_11032/*"RatingRequiredClan"*/,(MethodInfo *)0x0);
                                  pNVar10 = (__this->fields)._ratingHeader;
                                  if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                    pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
                                    (*(pNVar10->klass->vtable)._23_set_color.methodPtr)
                                              ((pBVar8->FHIAKPJBBCB).fields.r,
                                               (pBVar8->FHIAKPJBBCB).fields.g,
                                               (pBVar8->FHIAKPJBBCB).fields.b,
                                               (pBVar8->FHIAKPJBBCB).fields.a,pNVar10,
                                               (pNVar10->klass->vtable)._23_set_color.method);
                                    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__UpdateContent
                                              (__this,method_00);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_035509f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CGOBGFNCCEP(CheckBox.EKFFAMKMBIH FBEGCBIAPPK)  [RVA 0x34509F4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$CGOBGFNCCEP @ RVA 0x34509F4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__CGOBGFNCCEP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,int32_t FBEGCBIAPPK,
               MethodInfo *method)

{
  bool bVar1;
  BKKENCMPLLF_o *__this_00;
  int32_t CJNHFNHJHPE;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar2;
  
  if ((DAT_045682a4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,FBEGCBIAPPK);
    DAT_045682a4 = 1;
  }
  pNVar2 = (__this->fields)._joinTypeCheckBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._joinTypeCheckBox;
    if (pNVar2 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) goto LAB_03550a84;
    CJNHFNHJHPE = 1;
    if ((pNVar2->fields).OIKLOAGFFGO == 0) {
      CJNHFNHJHPE = 2;
    }
  }
  else {
    CJNHFNHJHPE = 1;
  }
  __this_00 = (__this->fields).FLLHHEODKPH;
  if (__this_00 != (BKKENCMPLLF_o *)0x0) {
    BKKENCMPLLF__PEILNGJMJEC(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_03550a84:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BLOIEOMIJCF(object IMMNELPBGIF)  [RVA 0x3450A88]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$BLOIEOMIJCF @ RVA 0x3450A88

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__BLOIEOMIJCF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t LHPGDPKKMPF;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  UnityEngine_UI_InputField_o *__this_01;
  System_String_o *pSVar2;
  MethodInfo *in_x3;
  BKKENCMPLLF_o *__this_02;
  
  if ((DAT_045682a5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045682a5 = 1;
  }
  __this_00 = (__this->fields).NOLPECJJJPE;
  if (__this_00 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
    __this_01 = (UnityEngine_UI_InputField_o *)
                System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,1,
                           Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__
                          );
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (__this_01 != (UnityEngine_UI_InputField_o *)0x0) {
      pSVar2 = PCOEHCPGBBG__DNOEDGPCFDG((__this_01->fields).m_Text,(MethodInfo *)0x0);
      pSVar2 = PCOEHCPGBBG__AINGLMLOPMO(pSVar2,(MethodInfo *)0x0);
      __this_02 = (__this->fields).FLLHHEODKPH;
      if (__this_02 != (BKKENCMPLLF_o *)0x0) {
        LHPGDPKKMPF = BKKENCMPLLF__BOENJKAFOEC(__this_02,pSVar2,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                  (__this,1,LHPGDPKKMPF,in_x3);
        UnityEngine_UI_InputField__set_text(__this_01,pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetTitleAlias(string BIBFEMCFIOI)  [RVA 0x3450B7C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetTitleAlias @ RVA 0x3450B7C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetTitleAlias
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               System_String_o *BIBFEMCFIOI,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields)._title;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,BIBFEMCFIOI,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AAHLEFMLFFM(BBJBEEEJPDC JDMKJDPMMDO, bool BLOGOHKEPHI)  [RVA 0x344EFD8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$AAHLEFMLFFM @ RVA 0x344EFD8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__AAHLEFMLFFM
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,int32_t JDMKJDPMMDO,
               bool BLOGOHKEPHI,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *__this_01;
  BHEDGAKGKPO_StaticFields *pBVar6;
  UnityEngine_Color_o CJNHFNHJHPE;
  
  if ((DAT_045682a6 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045682a6 = 1;
  }
  __this_00 = (__this->fields).NOLPECJJJPE;
  if (__this_00 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Scripts_EditBox_o *)
                System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           JDMKJDPMMDO,
                           Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__
                          );
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar5) {
      return;
    }
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_01 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
      pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
      lVar1 = 0x34;
      if (!BLOGOHKEPHI) {
        lVar1 = 0xa4;
      }
      lVar2 = 0x30;
      if (!BLOGOHKEPHI) {
        lVar2 = 0xa0;
      }
      lVar3 = 0x2c;
      if (!BLOGOHKEPHI) {
        lVar3 = 0x9c;
      }
      lVar4 = 0x28;
      if (!BLOGOHKEPHI) {
        lVar4 = 0x98;
      }
      CJNHFNHJHPE.fields.a = *(undefined4 *)((long)&(pBVar6->GNNEMOOOOCI).fields.r + lVar1);
      CJNHFNHJHPE.fields.b = *(undefined4 *)((long)&(pBVar6->GNNEMOOOOCI).fields.r + lVar2);
      CJNHFNHJHPE.fields.g = *(undefined4 *)((long)&(pBVar6->GNNEMOOOOCI).fields.r + lVar3);
      CJNHFNHJHPE.fields.r = *(undefined4 *)((long)&(pBVar6->GNNEMOOOOCI).fields.r + lVar4);
      Nekki_SF2_GUI_Scripts_EditBox__set_FontColor(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_01,BLOGOHKEPHI,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetEditIconEnabled(bool CJNHFNHJHPE)  [RVA 0x3450B98]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetEditIconEnabled @ RVA 0x3450B98

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditIconEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this_00;
  
  __this_00 = (__this->fields)._logoWidget;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__SetEditEnabled
              (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private float GMJAHBIPINI()  [RVA 0x344FE80]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$GMJAHBIPINI @ RVA 0x344FE80

float Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__GMJAHBIPINI
                (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (__this->fields).CHHEFFAKHDB;
  if (iVar1 == 2) {
    return 300.0;
  }
  fVar2 = 600.0;
  if (iVar1 != 3) {
    fVar2 = 0.0;
  }
  return fVar2;
}


// ===== public void SetEditDescriptionEnabled(bool CJNHFNHJHPE)  [RVA 0x3450BB8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetEditDescriptionEnabled @ RVA 0x3450BB8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditDescriptionEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *in_x3;
  
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__AAHLEFMLFFM(__this,2,CJNHFNHJHPE,in_x3);
  return;
}


// ===== private void MGDFLOOAIIC(string GPPDAEOOLLN)  [RVA 0x3450BC4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$MGDFLOOAIIC @ RVA 0x3450BC4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__MGDFLOOAIIC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               System_String_o *GPPDAEOOLLN,MethodInfo *method)

{
  BKKENCMPLLF_o *__this_00;
  
  __this_00 = (__this->fields).FLLHHEODKPH;
  if (__this_00 != (BKKENCMPLLF_o *)0x0) {
    BKKENCMPLLF__AMGKOBMPBJA(__this_00,GPPDAEOOLLN,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

