// TypeDefIndex 89
// Namespace: 
// public class IJDEPDNLOGC : BOFEMGGNODC
// Fields:
//   private string MNFIBNPEAKF; // 0x68
//   private string FDEMMHLEOJK; // 0x70

// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x30006D8]
// IJDEPDNLOGC$$HNIHOIAMDPC @ RVA 0x30006D8

void IJDEPDNLOGC__HNIHOIAMDPC
               (IJDEPDNLOGC_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04565b21 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    FUN_01bab630(&StringLiteral_12108/*"ShowMessage"*/);
    DAT_04565b21 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).MNFIBNPEAKF = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_12108/*"ShowMessage"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).FDEMMHLEOJK;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void PKIFMKGDJJN()  [RVA 0x30007D8]
// IJDEPDNLOGC$$PKIFMKGDJJN @ RVA 0x30007D8

void IJDEPDNLOGC__PKIFMKGDJJN(IJDEPDNLOGC_o *__this,MethodInfo *method)

{
  ushort uVar1;
  FLHAOOHNCAL_o *pFVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  FLHAOOHNCAL_c *pFVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04565b22 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FLHAOOHNCAL_TypeInfo);
    FUN_01bab630(&Method_IJDEPDNLOGC_EGMHPABAGML__);
    DAT_04565b22 = 1;
  }
  BOFEMGGNODC__PKIFMKGDJJN((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  pFVar2 = Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__get_Instance
                     ((MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pFVar2 == (FLHAOOHNCAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pFVar5 = pFVar2->klass;
  uVar1._0_1_ = (pFVar5->_2).rank;
  uVar1._1_1_ = (pFVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pFVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)FLHAOOHNCAL_TypeInfo) {
        pVVar4 = pFVar5->vtable + (*piVar7 + 1);
        goto LAB_031008c4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pFVar2,FLHAOOHNCAL_TypeInfo,1);
LAB_031008c4:
                    /* WARNING: Could not recover jumptable at 0x031008dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pFVar2,uVar3,pVVar4->method);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x30008E4]
// IJDEPDNLOGC$$MAHFCKJGBPP @ RVA 0x30008E4

void IJDEPDNLOGC__MAHFCKJGBPP(IJDEPDNLOGC_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  KMJDCOABCCG_o *pKVar4;
  FLHAOOHNCAL_o *pFVar5;
  undefined8 uVar6;
  VirtualInvokeData *pVVar7;
  FLHAOOHNCAL_c *pFVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_String_o *pSVar11;
  
  if ((DAT_04565b23 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FLHAOOHNCAL_TypeInfo);
    FUN_01bab630(&Method_IJDEPDNLOGC_EGMHPABAGML__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565b23 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  pSVar11 = (__this->fields).MNFIBNPEAKF;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar11 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar11,(MethodInfo *)0x0);
  bVar3 = MFBNFJGBPBB__EDBBDECOKAF(AAJBIMFNMBB,(__this->fields).FDEMMHLEOJK,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  pKVar4 = MGNPHCAAEIO__NBKKHICFOOA(pSVar11,(MethodInfo *)0x0);
  if (pKVar4 == (KMJDCOABCCG_o *)0x0 || ((bVar3 ^ 0xffU) & 1) != 0) {
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
  pFVar5 = Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__get_Instance
                     ((MethodInfo *)0x0);
  uVar6 = thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pFVar5 != (FLHAOOHNCAL_o *)0x0) {
    pFVar8 = pFVar5->klass;
    uVar1._0_1_ = (pFVar8->_2).rank;
    uVar1._1_1_ = (pFVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pFVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)FLHAOOHNCAL_TypeInfo) {
          pVVar7 = pFVar8->vtable + *piVar10;
          goto LAB_03100a94;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pFVar5,FLHAOOHNCAL_TypeInfo,0);
LAB_03100a94:
    (*pVVar7->methodPtr)(pFVar5,uVar6,pVVar7->method);
    pFVar5 = Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__get_Instance
                       ((MethodInfo *)0x0);
    if (pFVar5 != (FLHAOOHNCAL_o *)0x0) {
      pFVar8 = pFVar5->klass;
      uVar2._0_1_ = (pFVar8->_2).rank;
      uVar2._1_1_ = (pFVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pFVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)FLHAOOHNCAL_TypeInfo) {
            pVVar7 = pFVar8->vtable + (*piVar10 + 2);
            goto LAB_03100b04;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pFVar5,FLHAOOHNCAL_TypeInfo,2);
LAB_03100b04:
                    /* WARNING: Could not recover jumptable at 0x03100b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar7->methodPtr)(pFVar5,pKVar4,pVVar7->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EGMHPABAGML()  [RVA 0x3000B24]
// IJDEPDNLOGC$$EGMHPABAGML @ RVA 0x3000B24

void IJDEPDNLOGC__EGMHPABAGML(IJDEPDNLOGC_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x3000B48]
// IJDEPDNLOGC$$.ctor @ RVA 0x3000B48

void IJDEPDNLOGC___ctor(IJDEPDNLOGC_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

