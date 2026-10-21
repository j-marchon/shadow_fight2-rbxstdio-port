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
    FUN_01bab630(&StringLiteral_2019);
    FUN_01bab630(&StringLiteral_17058);
    FUN_01bab630(&StringLiteral_17785);
    FUN_01bab630(&StringLiteral_17054);
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
    puVar13 = &StringLiteral_17058;
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
    *(undefined8 *)(lVar5 + 0x20) = StringLiteral_2019;
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
    uVar10 = StringLiteral_17054;
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
    puVar13 = &StringLiteral_17785;
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

