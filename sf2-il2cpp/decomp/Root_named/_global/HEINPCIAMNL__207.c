// TypeDefIndex 207
// Namespace: 
// public class HEINPCIAMNL : QuestAction
// Fields:
//   private MPAKDCNMLEG ACCIHBHMFPN; // 0x64
//   private LCKCDEKNLOA PGLINMCHKGC; // 0x68
//   private LCKCDEKNLOA EBAHJECPAHA; // 0x70
//   private LCKCDEKNLOA IOOGMJKMGDL; // 0x78
//   private bool MAKHCDPNHGE; // 0x80

// ===== private void BHECOANFKJN(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x311CE50]
// HEINPCIAMNL$$BHECOANFKJN @ RVA 0x311CE50

void HEINPCIAMNL__BHECOANFKJN(HEINPCIAMNL_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  bool bVar1;
  LCKCDEKNLOA_o *__this_00;
  MethodInfo *method_00;
  
  bVar1 = OMMDIMHOHLK__JKOMBMIBMBL(BKFOLMBMFNP,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = *(char *)&(__this->fields).IOOGMJKMGDL != '\0';
  }
  else {
    if (__this == (HEINPCIAMNL_o *)0x0) goto LAB_0321ceb4;
    bVar1 = true;
  }
  *(bool *)&(__this->fields).IOOGMJKMGDL = bVar1;
  HEINPCIAMNL__MHAMHDGMMMP(__this,method_00);
  if (*(char *)&(__this->fields).IOOGMJKMGDL == '\0') {
    __this_00 = (__this->fields).EBAHJECPAHA;
  }
  else {
    __this_00 = *(LCKCDEKNLOA_o **)&(__this->fields).ACCIHBHMFPN;
  }
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
LAB_0321ceb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x311D1D0]
// HEINPCIAMNL$$.ctor @ RVA 0x311D1D0

void HEINPCIAMNL___ctor(HEINPCIAMNL_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  int32_t *piVar2;
  LCKCDEKNLOA_o **ppLVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566600 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    DAT_04566600 = 1;
    method = extraout_x1;
  }
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  piVar2 = &(__this->fields).ACCIHBHMFPN;
  *(LCKCDEKNLOA_o **)piVar2 = pLVar1;
  thunk_FUN_01c20e04(piVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).PGLINMCHKGC;
  *ppLVar3 = pLVar1;
  thunk_FUN_01c20e04(ppLVar3,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).EBAHJECPAHA;
  *ppLVar3 = pLVar1;
  thunk_FUN_01c20e04(ppLVar3,pLVar1);
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void PKIFMKGDJJN()  [RVA 0x311D284]
// HEINPCIAMNL$$PKIFMKGDJJN @ RVA 0x311D284

void HEINPCIAMNL__PKIFMKGDJJN(HEINPCIAMNL_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  
  QuestAction__PKIFMKGDJJN((QuestAction_o *)__this,(MethodInfo *)0x0);
  pLVar1 = *(LCKCDEKNLOA_o **)&(__this->fields).ACCIHBHMFPN;
  if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).PGLINMCHKGC;
    if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
      pLVar1 = (__this->fields).EBAHJECPAHA;
      if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
        LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x311D2CC]
// HEINPCIAMNL$$OFPHPMGMCAL @ RVA 0x311D2CC

System_String_o * HEINPCIAMNL__OFPHPMGMCAL(HEINPCIAMNL_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_38;
  undefined4 local_28;
  
  if ((DAT_04566601 & 1) == 0) {
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    DAT_04566601 = 1;
  }
  local_38.klass = (System_Enum_c *)MPAKDCNMLEG_TypeInfo;
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = *(undefined4 *)&(__this->fields).super.field_0x54;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static MPAKDCNMLEG ODPFFKGFEKI(string JLNPKGGFFDD, MPAKDCNMLEG NGFCPILIEFN)  [RVA 0x311D334]
// HEINPCIAMNL$$ODPFFKGFEKI @ RVA 0x311D334

int32_t HEINPCIAMNL__ODPFFKGFEKI
                  (System_String_o *JLNPKGGFFDD,int32_t NGFCPILIEFN,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  
  if ((DAT_04566602 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12538/*"SurvivalRestart"*/);
    FUN_01bab630(&StringLiteral_8693/*"LotterySpin"*/);
    FUN_01bab630(&StringLiteral_4203/*"Cashback"*/);
    FUN_01bab630(&StringLiteral_2774/*"AdsAfterRaid"*/);
    FUN_01bab630(&StringLiteral_11376/*"RewardedVideo"*/);
    FUN_01bab630(&StringLiteral_10840/*"RaidFight"*/);
    FUN_01bab630(&StringLiteral_7627/*"Interstitial"*/);
    FUN_01bab630(&StringLiteral_14785/*"Video"*/);
    FUN_01bab630(&StringLiteral_5055/*"DailyRefresh"*/);
    FUN_01bab630(&StringLiteral_14792/*"VideoMultiplier"*/);
    FUN_01bab630(&StringLiteral_12164/*"SkipDelivery"*/);
    DAT_04566602 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(JLNPKGGFFDD,(MethodInfo *)0x0);
  if (uVar2 < 0x38940054) {
    if (uVar2 < 0xb33a0e7) {
      if (uVar2 == 0x7748e11) {
        bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_4203/*"Cashback"*/,(MethodInfo *)0x0);
        if (bVar1) {
          NGFCPILIEFN = 0xb;
        }
      }
      else if ((uVar2 == 0xb33a0e6) &&
              (bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_12538/*"SurvivalRestart"*/,(MethodInfo *)0x0)
              , bVar1)) {
        NGFCPILIEFN = 0xe;
      }
    }
    else if (uVar2 == 0xebbc236) {
      bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_11376/*"RewardedVideo"*/,(MethodInfo *)0x0);
      if (bVar1) {
        NGFCPILIEFN = 7;
      }
    }
    else if (uVar2 == 0x22f5f4a1) {
      bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_2774/*"AdsAfterRaid"*/,(MethodInfo *)0x0);
      if (bVar1) {
        NGFCPILIEFN = 0x11;
      }
    }
    else if ((uVar2 == 0x38940053) &&
            (bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_7627/*"Interstitial"*/,(MethodInfo *)0x0),
            bVar1)) {
      NGFCPILIEFN = 0x10;
    }
  }
  else if (uVar2 < 0x70892f86) {
    if (uVar2 == 0x47dce1a5) {
      bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_10840/*"RaidFight"*/,(MethodInfo *)0x0);
      if (bVar1) {
        NGFCPILIEFN = 0xf;
      }
    }
    else if (uVar2 == 0x5b67c80c) {
      bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_14785/*"Video"*/,(MethodInfo *)0x0);
      if (bVar1) {
        NGFCPILIEFN = 8;
      }
    }
    else if ((uVar2 == 0x70892f85) &&
            (bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_5055/*"DailyRefresh"*/,(MethodInfo *)0x0),
            bVar1)) {
      NGFCPILIEFN = 0xd;
    }
  }
  else if (uVar2 == 0xa13c5793) {
    bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_14792/*"VideoMultiplier"*/,(MethodInfo *)0x0);
    if (bVar1) {
      NGFCPILIEFN = 9;
    }
  }
  else if (uVar2 == 0xdf2b690e) {
    bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_8693/*"LotterySpin"*/,(MethodInfo *)0x0);
    if (bVar1) {
      NGFCPILIEFN = 0xc;
    }
  }
  else if ((uVar2 == 0x72b1c3ea) &&
          (bVar1 = System_String__op_Equality(JLNPKGGFFDD,StringLiteral_12164/*"SkipDelivery"*/,(MethodInfo *)0x0),
          bVar1)) {
    NGFCPILIEFN = 10;
  }
  return NGFCPILIEFN;
}


// ===== private void NDJAJHFFPKP()  [RVA 0x311D660]
// HEINPCIAMNL$$NDJAJHFFPKP @ RVA 0x311D660

void HEINPCIAMNL__NDJAJHFFPKP(HEINPCIAMNL_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,false,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LFHIBFCAKPH()  [RVA 0x311D694]
// HEINPCIAMNL$$LFHIBFCAKPH @ RVA 0x311D694

void HEINPCIAMNL__LFHIBFCAKPH(HEINPCIAMNL_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  KKEKKPIDGBK_o *pKVar5;
  undefined8 uVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *extraout_x1;
  KKEKKPIDGBK_c *pKVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04566603 & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&Method_HEINPCIAMNL_BDAMEFBOKGF__);
    FUN_01bab630(&Method_HEINPCIAMNL_BHECOANFKJN__);
    FUN_01bab630(&Method_HEINPCIAMNL_FIELNNIEFOG__);
    FUN_01bab630(&Method_HEINPCIAMNL_OCMBKFFDNOP__);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_04566603 = 1;
    method = extraout_x1;
  }
  *(undefined1 *)&(__this->fields).IOOGMJKMGDL = 0;
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MKFAKELPPAC_TypeInfo,method);
  }
  pKVar5 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
  uVar6 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (pKVar5 != (KKEKKPIDGBK_o *)0x0) {
    pKVar8 = pKVar5->klass;
    uVar1._0_1_ = (pKVar8->_2).rank;
    uVar1._1_1_ = (pKVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pKVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
          pVVar7 = pKVar8->vtable + (*piVar10 + 0x10);
          goto LAB_0321d7cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar5,KKEKKPIDGBK_TypeInfo,0x10);
LAB_0321d7cc:
    (*pVVar7->methodPtr)(pKVar5,uVar6,pVVar7->method);
    pKVar5 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
    uVar6 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (pKVar5 != (KKEKKPIDGBK_o *)0x0) {
      pKVar8 = pKVar5->klass;
      uVar2._0_1_ = (pKVar8->_2).rank;
      uVar2._1_1_ = (pKVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pKVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
            pVVar7 = pKVar8->vtable + (*piVar10 + 0x14);
            goto LAB_0321d864;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar5,KKEKKPIDGBK_TypeInfo,0x14);
LAB_0321d864:
      (*pVVar7->methodPtr)(pKVar5,uVar6,pVVar7->method);
      pKVar5 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
      uVar6 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (pKVar5 != (KKEKKPIDGBK_o *)0x0) {
        pKVar8 = pKVar5->klass;
        uVar3._0_1_ = (pKVar8->_2).rank;
        uVar3._1_1_ = (pKVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar3;
        if (uVar9 != 0) {
          piVar10 = &((pKVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar7 = pKVar8->vtable + (*piVar10 + 0x18);
              goto LAB_0321d8fc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar5,KKEKKPIDGBK_TypeInfo,0x18);
LAB_0321d8fc:
        (*pVVar7->methodPtr)(pKVar5,uVar6,pVVar7->method);
        pKVar5 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
        uVar6 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pKVar5 != (KKEKKPIDGBK_o *)0x0) {
          pKVar8 = pKVar5->klass;
          uVar4._0_1_ = (pKVar8->_2).rank;
          uVar4._1_1_ = (pKVar8->_2).minimumAlignment;
          uVar9 = (ulong)uVar4;
          if (uVar9 != 0) {
            piVar10 = &((pKVar8->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                  (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                pVVar7 = pKVar8->vtable + (*piVar10 + 1);
                goto LAB_0321d98c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar5,KKEKKPIDGBK_TypeInfo,1);
LAB_0321d98c:
                    /* WARNING: Could not recover jumptable at 0x0321d9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar7->methodPtr)(pKVar5,uVar6,pVVar7->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OCMBKFFDNOP(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x311D9B0]
// HEINPCIAMNL$$OCMBKFFDNOP @ RVA 0x311D9B0

void HEINPCIAMNL__OCMBKFFDNOP(HEINPCIAMNL_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields).IOOGMJKMGDL = 1;
  return;
}


// ===== private void BDAMEFBOKGF(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x311D9BC]
// HEINPCIAMNL$$BDAMEFBOKGF @ RVA 0x311D9BC

void HEINPCIAMNL__BDAMEFBOKGF(HEINPCIAMNL_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  
  HEINPCIAMNL__MHAMHDGMMMP(__this,(MethodInfo *)(ulong)(uint)BKFOLMBMFNP);
  __this_00 = (__this->fields).PGLINMCHKGC;
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x311D9E4]
// HEINPCIAMNL$$HNIHOIAMDPC @ RVA 0x311D9E4

void HEINPCIAMNL__HNIHOIAMDPC
               (HEINPCIAMNL_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Func_string__T__T__o *KECKMFEOIKH;
  System_Xml_XmlNode_o *pSVar2;
  System_Action_o *pSVar3;
  LCKCDEKNLOA_o *pLVar4;
  
  if ((DAT_04566604 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<MPAKDCNMLEG>__);
    FUN_01bab630(&System_Func<string,_MPAKDCNMLEG,_MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&Method_HEINPCIAMNL_NDJAJHFFPKP__);
    FUN_01bab630(&Method_HEINPCIAMNL_ODPFFKGFEKI__);
    FUN_01bab630(&StringLiteral_12524/*"Success"*/);
    FUN_01bab630(&StringLiteral_3856/*"Cancel"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_5840/*"Error"*/);
    DAT_04566604 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      KECKMFEOIKH = (System_Func_string__T__T__o *)
                    thunk_FUN_01bda818(System_Func<string,_MPAKDCNMLEG,_MPAKDCNMLEG>_TypeInfo);
      System_Func<object,_Int32Enum,_Int32Enum>___ctor();
      iVar1 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                        (LBJNDMNEJJB,KECKMFEOIKH,0,Method_EIABCPKDEBD_CKHGJBKDIID<MPAKDCNMLEG>__);
      *(int32_t *)&(__this->fields).super.field_0x54 = iVar1;
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                         (NPLGCIFGFOK,StringLiteral_12524/*"Success"*/,
                          (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
      pLVar4 = *(LCKCDEKNLOA_o **)&(__this->fields).ACCIHBHMFPN;
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      QuestAction__KIBBEDPGMBB((QuestAction_o *)__this,pSVar2,pLVar4,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0321db98 to 0331dc6b has its CatchHandler @ 0321db98
                       catch() { ... } // from try @ 0321db98 with catch @ 0321db98
                       catch() { ... } // from try @ 0321dcb8 with catch @ 0321db98
                       catch() { ... } // from try @ 0321dce0 with catch @ 0321db98
                       catch() { ... } // from try @ 0321dd04 with catch @ 0321db98
                       catch() { ... } // from try @ 0321dd38 with catch @ 0321db98 */
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                         (NPLGCIFGFOK,StringLiteral_5840/*"Error"*/,
                          (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
      pLVar4 = (__this->fields).PGLINMCHKGC;
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      QuestAction__KIBBEDPGMBB((QuestAction_o *)__this,pSVar2,pLVar4,pSVar3,(MethodInfo *)0x0);
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                         (NPLGCIFGFOK,StringLiteral_3856/*"Cancel"*/,
                          (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
      pLVar4 = (__this->fields).EBAHJECPAHA;
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      QuestAction__KIBBEDPGMBB((QuestAction_o *)__this,pSVar2,pLVar4,pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MHAMHDGMMMP()  [RVA 0x311CEB8]
// HEINPCIAMNL$$MHAMHDGMMMP @ RVA 0x311CEB8

void HEINPCIAMNL__MHAMHDGMMMP(HEINPCIAMNL_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  KKEKKPIDGBK_o *pKVar5;
  undefined8 uVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *extraout_x1;
  KKEKKPIDGBK_c *pKVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04566605 & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&Method_HEINPCIAMNL_BDAMEFBOKGF__);
    FUN_01bab630(&Method_HEINPCIAMNL_BHECOANFKJN__);
    FUN_01bab630(&Method_HEINPCIAMNL_FIELNNIEFOG__);
    FUN_01bab630(&Method_HEINPCIAMNL_OCMBKFFDNOP__);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_04566605 = 1;
    method = extraout_x1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MKFAKELPPAC_TypeInfo,method);
  }
  pKVar5 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
  uVar6 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (pKVar5 != (KKEKKPIDGBK_o *)0x0) {
    pKVar8 = pKVar5->klass;
    uVar1._0_1_ = (pKVar8->_2).rank;
    uVar1._1_1_ = (pKVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pKVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
          pVVar7 = pKVar8->vtable + (*piVar10 + 5);
          goto LAB_0321cfec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar5,KKEKKPIDGBK_TypeInfo,5);
LAB_0321cfec:
    (*pVVar7->methodPtr)(pKVar5,uVar6,pVVar7->method);
    pKVar5 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
    uVar6 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (pKVar5 != (KKEKKPIDGBK_o *)0x0) {
      pKVar8 = pKVar5->klass;
      uVar2._0_1_ = (pKVar8->_2).rank;
      uVar2._1_1_ = (pKVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pKVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
            pVVar7 = pKVar8->vtable + (*piVar10 + 0x16);
            goto LAB_0321d084;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar5,KKEKKPIDGBK_TypeInfo,0x16);
LAB_0321d084:
      (*pVVar7->methodPtr)(pKVar5,uVar6,pVVar7->method);
      pKVar5 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
      uVar6 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (pKVar5 != (KKEKKPIDGBK_o *)0x0) {
        pKVar8 = pKVar5->klass;
        uVar3._0_1_ = (pKVar8->_2).rank;
        uVar3._1_1_ = (pKVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar3;
        if (uVar9 != 0) {
          piVar10 = &((pKVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar7 = pKVar8->vtable + (*piVar10 + 0x11);
              goto LAB_0321d11c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar5,KKEKKPIDGBK_TypeInfo,0x11);
LAB_0321d11c:
        (*pVVar7->methodPtr)(pKVar5,uVar6,pVVar7->method);
        pKVar5 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
        uVar6 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pKVar5 != (KKEKKPIDGBK_o *)0x0) {
          pKVar8 = pKVar5->klass;
          uVar4._0_1_ = (pKVar8->_2).rank;
          uVar4._1_1_ = (pKVar8->_2).minimumAlignment;
          uVar9 = (ulong)uVar4;
          if (uVar9 != 0) {
            piVar10 = &((pKVar8->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                  (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                pVVar7 = pKVar8->vtable + (*piVar10 + 0xf);
                goto LAB_0321d1ac;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar5,KKEKKPIDGBK_TypeInfo,0xf);
LAB_0321d1ac:
                    /* WARNING: Could not recover jumptable at 0x0321d1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar7->methodPtr)(pKVar5,uVar6,pVVar7->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FIELNNIEFOG(MPAKDCNMLEG BKFOLMBMFNP)  [RVA 0x311DC64]
// HEINPCIAMNL$$FIELNNIEFOG @ RVA 0x311DC64

void HEINPCIAMNL__FIELNNIEFOG(HEINPCIAMNL_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  
                    /* try { // try from 0321dc6c to 0331dc73 has its CatchHandler @ 0321dce8 */
  HEINPCIAMNL__MHAMHDGMMMP(__this,(MethodInfo *)(ulong)(uint)BKFOLMBMFNP);
  __this_00 = (__this->fields).PGLINMCHKGC;
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x311DC8C]
// HEINPCIAMNL$$MAHFCKJGBPP @ RVA 0x311DC8C

void HEINPCIAMNL__MAHFCKJGBPP(HEINPCIAMNL_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  KKEKKPIDGBK_o *pKVar3;
  VirtualInvokeData *pVVar4;
  LCKCDEKNLOA_o *__this_01;
  MethodInfo *method_00;
  KKEKKPIDGBK_c *pKVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04566606 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
                    /* try { // try from 0321dcb4 to 0331dcb7 has its CatchHandler @ 0321dce4 */
                    /* try { // try from 0321dcb8 to 0331dcd7 has its CatchHandler @ 0321db98 */
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_04566606 = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
                    /* try { // try from 0321dcd8 to 0331dcdf has its CatchHandler @ 0321dcec */
                    /* try { // try from 0321dce0 to 0331dcff has its CatchHandler @ 0321db98 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321dcb4 with catch @ 0321dce4
                        */
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321dc6c with catch @ 0321dce8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321dcd8 with catch @ 0321dcec
                        */
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,true,(MethodInfo *)0x0);
                    /* try { // try from 0321dd00 to 0331dd03 has its CatchHandler @ 0321dd28 */
                    /* try { // try from 0321dd04 to 0331dd2f has its CatchHandler @ 0321db98 */
    if (*(int *)&(__this->fields).super.field_0x54 == 0) {
      __this_01 = (__this->fields).PGLINMCHKGC;
      if (__this_01 != (LCKCDEKNLOA_o *)0x0) {
        LCKCDEKNLOA__MAHFCKJGBPP(__this_01,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      HEINPCIAMNL__LFHIBFCAKPH(__this,method_00);
      if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 0321dd00 with catch @ 0321dd28 */
      pKVar3 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0321dd30 to 0331dd37 has its CatchHandler @ 0321dd50 */
      if (pKVar3 != (KKEKKPIDGBK_o *)0x0) {
                    /* try { // try from 0321dd38 to 0331dd47 has its CatchHandler @ 0321db98 */
        pKVar5 = pKVar3->klass;
        uVar1 = *(uint *)&(__this->fields).super.field_0x54;
        uVar2._0_1_ = (pKVar5->_2).rank;
        uVar2._1_1_ = (pKVar5->_2).minimumAlignment;
                    /* try { // try from 0321dd48 to 0331dd4f has its CatchHandler @ 0321dd50 */
        uVar6 = (ulong)uVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0321dd30 with catch @ 0321dd50
                       catch(type#2 @ 00000000) { ... } // from try @ 0321dd48 with catch @ 0321dd50
                        */
        if (uVar6 != 0) {
          piVar7 = &((pKVar5->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar4 = pKVar5->vtable + (*piVar7 + 4);
              goto LAB_0321ddb0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pKVar3,KKEKKPIDGBK_TypeInfo,4);
LAB_0321ddb0:
                    /* WARNING: Could not recover jumptable at 0x0321ddcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar4->methodPtr)(pKVar3,(ulong)uVar1,1,1,pVVar4->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

