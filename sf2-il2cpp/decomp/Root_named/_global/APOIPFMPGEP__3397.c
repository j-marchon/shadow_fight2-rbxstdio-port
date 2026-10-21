// TypeDefIndex 3397
// Namespace: 
// public class APOIPFMPGEP : QuestAction
// Fields:
//   private string DFOJKFFDFAH; // 0x68

// ===== public void .ctor()  [RVA 0x3552868]
// APOIPFMPGEP$$.ctor @ RVA 0x3552868

void APOIPFMPGEP___ctor(APOIPFMPGEP_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x3552870]
// APOIPFMPGEP$$HNIHOIAMDPC @ RVA 0x3552870

void APOIPFMPGEP__HNIHOIAMDPC
               (APOIPFMPGEP_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04568b48 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5271/*"Delay"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b48 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_5271/*"Delay"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).DFOJKFFDFAH;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL HLAGOHADLKH)  [RVA 0x355291C]
// APOIPFMPGEP$$MAHFCKJGBPP @ RVA 0x355291C

void APOIPFMPGEP__MAHFCKJGBPP(APOIPFMPGEP_o *__this,PKHMIGFEJCL_o *HLAGOHADLKH,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Action_o **ppSVar3;
  VirtualInvokeData *pVVar4;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  Fight_o *__this_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_String_o *pSVar8;
  System_Action_o *pSVar9;
  float fVar10;
  undefined4 extraout_var;
  
  if ((DAT_04568b49 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_19);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3663);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_APOIPFMPGEP_<>c_NICCDBKOBKP__);
    FUN_01bab630(&APOIPFMPGEP_<>c_TypeInfo);
    DAT_04568b49 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,HLAGOHADLKH,(MethodInfo *)0x0);
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (Fight_TypeInfo->static_fields->IGABFCCGLCO == (Fight_o *)0x0) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3663,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_19,(MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  }
  else {
    pSVar8 = (__this->fields).DFOJKFFDFAH;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar10 = MFBNFJGBPBB__DCIAJFJIMNK(HLAGOHADLKH,pSVar8,(MethodInfo *)0x0);
    if (fVar10 <= 0.0) {
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&Fight_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this_00 == (Fight_o *)0x0) goto LAB_03652c6c;
      Fight__IILEMANDADN(__this_00,false,(MethodInfo *)0x0);
    }
    else {
      pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
      if ((APOIPFMPGEP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(APOIPFMPGEP_<>c_TypeInfo);
      }
      pSVar9 = APOIPFMPGEP_<>c_TypeInfo->static_fields->__9__2_0;
      if (pSVar9 == (System_Action_o *)0x0) {
        if ((APOIPFMPGEP_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(APOIPFMPGEP_<>c_TypeInfo);
        }
        pSVar9 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        ppSVar3 = &APOIPFMPGEP_<>c_TypeInfo->static_fields->__9__2_0;
        *ppSVar3 = pSVar9;
        thunk_FUN_01c20e04(ppSVar3,pSVar9);
      }
      if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
LAB_03652c6c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + (*piVar7 + 2);
            goto LAB_03652c3c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_03652c3c:
      (*pVVar4->methodPtr)(CONCAT44(extraout_var,fVar10),pPVar2,pSVar9,pVVar4->method);
    }
  }
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

