// TypeDefIndex 2404
// Namespace: 
// public class FGKGKDEJCOG : CIOBNDOOGIM
// Fields:
//   private static Action JJHOFOMAHEB; // 0x0
//   protected XmlNode INCBBOHLBND; // 0x18
//   private int AFGIAJPDOKH; // 0x20
//   private CAJHCLGOFMJ OPBLLCHJOAK; // 0x28
//   private FGKGKDEJCOG.CKFILIOCLJE FIIKIHJHLNJ; // 0x30
//   private FGKGKDEJCOG.CFNJNJBHGNA ACOFLEKJNHM; // 0x34
//   private FGKGKDEJCOG.CFNJNJBHGNA ILACIHPOGDC; // 0x38
//   private static string BDFFMDCAHGJ; // 0x8
//   private static string HABNBDAMLMP; // 0x10
//   private static float CHCLEFKLOKH; // 0x18
//   private static float NADOFNLEECE; // 0x1C
//   public bool LFINLNAPHFL; // 0x3C
//   public const int OCEAAOBFBKJ = 1;

// ===== private void CMAKHKNDMMH(XmlNode AHDGNOJPPIB)  [RVA 0x3333BA4]
// FGKGKDEJCOG$$CMAKHKNDMMH @ RVA 0x3333BA4

void FGKGKDEJCOG__CMAKHKNDMMH
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04567933 & 1) == 0) {
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<FGKGKDEJCOG_CKFILIOCLJE>__);
    FUN_01bab630(&StringLiteral_6901/*"GraphicsSettings"*/);
    DAT_04567933 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_6901/*"GraphicsSettings"*/,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                        (LBJNDMNEJJB,1,Method_EIABCPKDEBD_CKHGJBKDIID<FGKGKDEJCOG_CKFILIOCLJE>__);
      (__this->fields).FIIKIHJHLNJ = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KDKDLBDHKEK(FGKGKDEJCOG.CKFILIOCLJE CJNHFNHJHPE)  [RVA 0x3333C38]
// FGKGKDEJCOG$$KDKDLBDHKEK @ RVA 0x3333C38

void FGKGKDEJCOG__KDKDLBDHKEK(FGKGKDEJCOG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields).FIIKIHJHLNJ == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).FIIKIHJHLNJ = CJNHFNHJHPE;
  CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
  return;
}


// ===== public FGKGKDEJCOG.CKFILIOCLJE IAGMCJBNHNA()  [RVA 0x3333C58]
// FGKGKDEJCOG$$IAGMCJBNHNA @ RVA 0x3333C58

int32_t FGKGKDEJCOG__IAGMCJBNHNA(FGKGKDEJCOG_o *__this,MethodInfo *method)

{
  return (__this->fields).FIIKIHJHLNJ;
}


// ===== public void MBANNEKMPCD(XmlNode AHDGNOJPPIB)  [RVA 0x3333C60]
// FGKGKDEJCOG$$MBANNEKMPCD @ RVA 0x3333C60

void FGKGKDEJCOG__MBANNEKMPCD
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppType *handle;
  undefined8 uVar3;
  bool bVar4;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *CJNHFNHJHPE;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  System_Type_o *BKFOLMBMFNP;
  ACHLOMELAJE_o *pAVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined8 local_28;
  
  if ((DAT_04567934 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&FGKGKDEJCOG_var);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_8320/*"Language"*/);
    FUN_01bab630(&StringLiteral_10148/*"ParseLanguage: can't load language! Something went wrong! See logs above..."*/);
    DAT_04567934 = 1;
  }
  local_28 = 0;
  LBJNDMNEJJB = EIABCPKDEBD__NHPDFFAIJMF(AHDGNOJPPIB,StringLiteral_8320/*"Language"*/,(MethodInfo *)0x0);
  CJNHFNHJHPE = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
  bVar4 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar4) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar7 == (ACHLOMELAJE_o *)0x0) goto LAB_03433ec8;
    CJNHFNHJHPE = (pAVar7->fields).KKPKGEFBCGA;
  }
  pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar8 = pIVar5->klass;
    uVar1._0_1_ = (pIVar8->_2).rank;
    uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar6 = pIVar8->vtable + (*piVar10 + 0xf);
          goto LAB_03433ddc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xf);
LAB_03433ddc:
    uVar9 = (*pVVar6->methodPtr)(pIVar5,CJNHFNHJHPE,&local_28,pVVar6->method);
    handle = FGKGKDEJCOG_var;
    if ((uVar9 & 1) == 0) {
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      BKFOLMBMFNP = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA(BKFOLMBMFNP,StringLiteral_10148/*"ParseLanguage: can't load language! Something went wrong! See logs above..."*/,(MethodInfo *)0x0);
    }
    else {
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      uVar3 = local_28;
      if (pIVar5 == (Il2CppObject *)0x0) goto LAB_03433ec8;
      pIVar8 = pIVar5->klass;
      uVar2._0_1_ = (pIVar8->_2).rank;
      uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar8->vtable + (*piVar10 + 7);
            goto LAB_03433ea0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,7);
LAB_03433ea0:
      (*pVVar6->methodPtr)(pIVar5,uVar3,1,1,pVVar6->method);
    }
    return;
  }
LAB_03433ec8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CGPMJHLMPKO(XmlNode AHDGNOJPPIB)  [RVA 0x3333ECC]
// FGKGKDEJCOG$$CGPMJHLMPKO @ RVA 0x3333ECC

void FGKGKDEJCOG__CGPMJHLMPKO
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  KMBNFNCDDBP_o *pKVar5;
  
  if ((DAT_04567935 & 1) == 0) {
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<FGKGKDEJCOG_CFNJNJBHGNA>__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&StringLiteral_8597/*"LocationsQuality"*/);
    DAT_04567935 = 1;
  }
  iVar3 = UnityEngine_SystemInfo__get_systemMemorySize((MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
  }
  if (DAT_045611dc == '\0') {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045611dc = '\x01';
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar5 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
  if (pKVar5 != (KMBNFNCDDBP_o *)0x0) {
    iVar1 = (pKVar5->fields).JJIGNBIMLCC;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar4 = EOAOCPLIKOI__KDONMCINCCB((MethodInfo *)0x0);
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,StringLiteral_8597/*"LocationsQuality"*/,(MethodInfo *)0x0);
        iVar3 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                          (LBJNDMNEJJB,(uint)(iVar4 != 0 && (iVar1 <= iVar3 || iVar4 == 1)),
                           Method_EIABCPKDEBD_CKHGJBKDIID<FGKGKDEJCOG_CFNJNJBHGNA>__);
        (__this->fields).ILACIHPOGDC = iVar3;
        iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
        bVar2 = GNAFJMPJNKI__NCOIGMBGENK(iVar3,(MethodInfo *)0x0);
        if (bVar2) {
          iVar3 = (__this->fields).ILACIHPOGDC;
        }
        else {
          iVar3 = 1;
          (__this->fields).ILACIHPOGDC = 1;
        }
        method_00 = extraout_x1;
        if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_00;
        }
        FGKGKDEJCOG__OPCKGNOBACO(iVar3,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float GIBMKEILILA()  [RVA 0x33341C0]
// FGKGKDEJCOG$$GIBMKEILILA @ RVA 0x33341C0

float FGKGKDEJCOG__GIBMKEILILA(MethodInfo *method)

{
  if ((DAT_04567936 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_04567936 = 1;
  }
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return FGKGKDEJCOG_TypeInfo->static_fields->NADOFNLEECE;
}


// ===== private void FNKGNGCMHHN(XmlNode AHDGNOJPPIB)  [RVA 0x3334218]
// FGKGKDEJCOG$$FNKGNGCMHHN @ RVA 0x3334218

void FGKGKDEJCOG__FNKGNGCMHHN
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *message;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar3;
  KMBNFNCDDBP_o *pKVar4;
  
  pMVar3 = (MethodInfo *)AHDGNOJPPIB;
  if ((DAT_04567937 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<FGKGKDEJCOG_CFNJNJBHGNA>__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&StringLiteral_5339/*"Device forced to Low TexturesQuality, device.id: "*/);
    FUN_01bab630(&StringLiteral_12942/*"TexturesQuality"*/);
    DAT_04567937 = 1;
    pMVar3 = extraout_x1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar3 = extraout_x1_00;
  }
  if (EOAOCPLIKOI_TypeInfo->static_fields->ABJLMAOEEEE == false) {
    iVar2 = FGKGKDEJCOG__IEPCAAEKFHN((FGKGKDEJCOG_o *)EOAOCPLIKOI_TypeInfo,pMVar3);
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_034343f0;
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_12942/*"TexturesQuality"*/,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                        (LBJNDMNEJJB,iVar2,Method_EIABCPKDEBD_CKHGJBKDIID<FGKGKDEJCOG_CFNJNJBHGNA>__
                        );
    }
    if (__this == (FGKGKDEJCOG_o *)0x0) goto LAB_034343f0;
  }
  else {
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045611dc == '\0') {
      FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
      DAT_045611dc = '\x01';
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pKVar4 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
    if (pKVar4 == (KMBNFNCDDBP_o *)0x0) {
LAB_034343f0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    message = System_String__Concat
                        (StringLiteral_5339/*"Device forced to Low TexturesQuality, device.id: "*/,(pKVar4->fields).IGLHCNLNIPK,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
    iVar2 = 0;
  }
  (__this->fields).ACOFLEKJNHM = iVar2;
  iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  bVar1 = GNAFJMPJNKI__NCOIGMBGENK(iVar2,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = (__this->fields).ACOFLEKJNHM;
  }
  else {
    iVar2 = 1;
    (__this->fields).ACOFLEKJNHM = 1;
  }
  pMVar3 = extraout_x1_01;
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar3 = extraout_x1_02;
  }
  FGKGKDEJCOG__MKLEBCDAJHA(iVar2,pMVar3);
  return;
}


// ===== protected override void GDCHAJOJGBH()  [RVA 0x3334680]
// FGKGKDEJCOG$$GDCHAJOJGBH @ RVA 0x3334680

void FGKGKDEJCOG__GDCHAJOJGBH(FGKGKDEJCOG_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  FGKGKDEJCOG_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  System_String_o *pSVar8;
  System_Xml_XmlDocument_o *pSVar9;
  MethodInfo *in_x2;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  System_Xml_XmlNode_o *pSVar13;
  System_Enum_o local_50;
  int32_t local_40;
  int32_t local_34;
  
  if ((DAT_04567938 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_CFNJNJBHGNA_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_CKFILIOCLJE_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8320/*"Language"*/);
    FUN_01bab630(&StringLiteral_8597/*"LocationsQuality"*/);
    FUN_01bab630(&StringLiteral_6901/*"GraphicsSettings"*/);
    FUN_01bab630(&StringLiteral_8340/*"LastSaveSlot"*/);
    FUN_01bab630(&StringLiteral_12942/*"TexturesQuality"*/);
    DAT_04567938 = 1;
  }
  local_34 = 0;
  CIOBNDOOGIM__GDCHAJOJGBH((CIOBNDOOGIM_o *)__this,(MethodInfo *)0x0);
  pSVar13 = (__this->fields).INCBBOHLBND;
  FGKGKDEJCOG__BPKJKIHLABM(__this_00,pSVar13,in_x2);
  pSVar3 = EIABCPKDEBD__NHPDFFAIJMF(pSVar13,StringLiteral_8320/*"Language"*/,(MethodInfo *)0x0);
  if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
    EIABCPKDEBD__HBGAGFJBGKD(pSVar13,StringLiteral_8320/*"Language"*/,(MethodInfo *)0x0);
  }
  if (pSVar13 != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar13->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar13,(pSVar13->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_8320/*"Language"*/,(MethodInfo *)0x0);
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      if (pIVar5 != (Il2CppObject *)0x0) {
        pIVar10 = pIVar5->klass;
        uVar1._0_1_ = (pIVar10->_2).rank;
        uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
        uVar11 = (ulong)uVar1;
        if (uVar11 != 0) {
          piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar10->vtable + (*piVar12 + 6);
              goto LAB_03434814;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,6);
LAB_03434814:
        lVar7 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
        if ((lVar7 != 0) && (pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
          (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar3,*(undefined8 *)(lVar7 + 0x10),
                     (pSVar3->klass->vtable)._10_set_Value.method);
          pSVar3 = EIABCPKDEBD__NHPDFFAIJMF(pSVar13,StringLiteral_6901/*"GraphicsSettings"*/,(MethodInfo *)0x0);
          if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
            EIABCPKDEBD__HBGAGFJBGKD(pSVar13,StringLiteral_6901/*"GraphicsSettings"*/,(MethodInfo *)0x0);
          }
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar13->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar13,(pSVar13->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_6901/*"GraphicsSettings"*/,(MethodInfo *)0x0);
            local_50.klass = (System_Enum_c *)FGKGKDEJCOG_CKFILIOCLJE_TypeInfo;
            local_40 = (__this->fields).FIIKIHJHLNJ;
            local_50.monitor = (void *)0xffffffffffffffff;
            pSVar8 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
            if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
              (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                        (pSVar3,pSVar8,(pSVar3->klass->vtable)._10_set_Value.method);
              pSVar3 = EIABCPKDEBD__NHPDFFAIJMF(pSVar13,StringLiteral_12942/*"TexturesQuality"*/,(MethodInfo *)0x0);
              if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
                EIABCPKDEBD__HBGAGFJBGKD(pSVar13,StringLiteral_12942/*"TexturesQuality"*/,(MethodInfo *)0x0);
              }
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(pSVar13->klass->vtable)._16_get_Attributes.methodPtr)
                                 (pSVar13,(pSVar13->klass->vtable)._16_get_Attributes.method);
              if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar4,StringLiteral_12942/*"TexturesQuality"*/,(MethodInfo *)0x0);
                local_50.klass = (System_Enum_c *)FGKGKDEJCOG_CFNJNJBHGNA_TypeInfo;
                local_40 = (__this->fields).ACOFLEKJNHM;
                local_50.monitor = (void *)0xffffffffffffffff;
                pSVar8 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
                if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                  (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                            (pSVar3,pSVar8,(pSVar3->klass->vtable)._10_set_Value.method);
                  pSVar3 = EIABCPKDEBD__NHPDFFAIJMF(pSVar13,StringLiteral_8597/*"LocationsQuality"*/,(MethodInfo *)0x0);
                  if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
                    EIABCPKDEBD__HBGAGFJBGKD(pSVar13,StringLiteral_8597/*"LocationsQuality"*/,(MethodInfo *)0x0);
                  }
                  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar13->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar13,(pSVar13->klass->vtable)._16_get_Attributes.method);
                  if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar4,StringLiteral_8597/*"LocationsQuality"*/,(MethodInfo *)0x0);
                    local_50.klass = (System_Enum_c *)FGKGKDEJCOG_CFNJNJBHGNA_TypeInfo;
                    local_40 = (__this->fields).ILACIHPOGDC;
                    local_50.monitor = (void *)0xffffffffffffffff;
                    pSVar8 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
                    if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                      (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                                (pSVar3,pSVar8,(pSVar3->klass->vtable)._10_set_Value.method);
                      pSVar3 = EIABCPKDEBD__NHPDFFAIJMF
                                         (pSVar13,StringLiteral_8340/*"LastSaveSlot"*/,(MethodInfo *)0x0);
                      if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
                        EIABCPKDEBD__HBGAGFJBGKD(pSVar13,StringLiteral_8340/*"LastSaveSlot"*/,(MethodInfo *)0x0);
                      }
                      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar13->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar13,(pSVar13->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar4,StringLiteral_8340/*"LastSaveSlot"*/,(MethodInfo *)0x0);
                        local_34 = (__this->fields).AFGIAJPDOKH;
                        pSVar8 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                        if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                          (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                                    (pSVar3,pSVar8,(pSVar3->klass->vtable)._10_set_Value.method);
                          pSVar13 = (__this->fields).INCBBOHLBND;
                          if (pSVar13 != (System_Xml_XmlNode_o *)0x0) {
                            pSVar9 = (System_Xml_XmlDocument_o *)
                                     (*(pSVar13->klass->vtable)._17_get_OwnerDocument.methodPtr)
                                               (pSVar13,(pSVar13->klass->vtable).
                                                        _17_get_OwnerDocument.method);
                            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
                            }
                            pSVar8 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)0x0);
                            GIAMPEGMNHE__DGLLHFNFGNO(pSVar9,pSVar8,(MethodInfo *)0x0);
                            pSVar8 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)0x0);
                            if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo);
                            }
                            bVar2 = EOOEOHKLOFJ__EGFIEDINDAC(pSVar8,(MethodInfo *)0x0);
                            if (!bVar2) {
                              pSVar13 = (__this->fields).INCBBOHLBND;
                              if (pSVar13 == (System_Xml_XmlNode_o *)0x0) goto LAB_03434b54;
                              pSVar9 = (System_Xml_XmlDocument_o *)
                                       (*(pSVar13->klass->vtable)._17_get_OwnerDocument.methodPtr)
                                                 (pSVar13,(pSVar13->klass->vtable).
                                                          _17_get_OwnerDocument.method);
                              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                                thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
                              }
                              pSVar8 = NLPJLHOEAOE__DGBOOECJDDG((MethodInfo *)0x0);
                              GIAMPEGMNHE__DGLLHFNFGNO(pSVar9,pSVar8,(MethodInfo *)0x0);
                            }
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
LAB_03434b54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public FGKGKDEJCOG.CFNJNJBHGNA PBAAEJHEPIO()  [RVA 0x3334F8C]
// FGKGKDEJCOG$$PBAAEJHEPIO @ RVA 0x3334F8C

int32_t FGKGKDEJCOG__PBAAEJHEPIO(FGKGKDEJCOG_o *__this,MethodInfo *method)

{
                    /* try { // try from 03434f90 to 03534f97 has its CatchHandler @ 03434f98 */
  return (__this->fields).ILACIHPOGDC;
}


// ===== private static void OPCKGNOBACO(FGKGKDEJCOG.CFNJNJBHGNA DBJLIBHKKGP)  [RVA 0x3334068]
// FGKGKDEJCOG$$OPCKGNOBACO @ RVA 0x3334068

void FGKGKDEJCOG__OPCKGNOBACO(int32_t DBJLIBHKKGP,MethodInfo *method)

{
  FGKGKDEJCOG_StaticFields *pFVar1;
  System_String_o **ppSVar2;
  MethodInfo *extraout_x1;
  System_String_o *pSVar3;
  float fVar4;
  
  if ((DAT_04567939 & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&StringLiteral_16205/*"_low"*/);
    DAT_04567939 = 1;
    method = extraout_x1;
  }
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo,method);
  }
  AMHFFFODDOC__NDNPGAKJLHM((MethodInfo *)0x0);
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NGCBNMBJMOE__NDNPGAKJLHM((MethodInfo *)0x0);
  UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
  if (DBJLIBHKKGP == 2) {
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar1 = FGKGKDEJCOG_TypeInfo->static_fields;
    fVar4 = 0.5;
  }
  else {
    if (DBJLIBHKKGP != 1) {
      if (DBJLIBHKKGP != 0) {
        return;
      }
      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar1 = FGKGKDEJCOG_TypeInfo->static_fields;
      pFVar1->NADOFNLEECE = 2.0;
      pSVar3 = StringLiteral_16205/*"_low"*/;
      ppSVar2 = &pFVar1->BDFFMDCAHGJ;
      *ppSVar2 = StringLiteral_16205/*"_low"*/;
      goto LAB_034341a8;
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar1 = FGKGKDEJCOG_TypeInfo->static_fields;
    fVar4 = 1.0;
  }
  ppSVar2 = &pFVar1->BDFFMDCAHGJ;
  *ppSVar2 = (System_String_o *)0x0;
  pSVar3 = (System_String_o *)0x0;
  pFVar1->NADOFNLEECE = fVar4;
LAB_034341a8:
  thunk_FUN_01c20e04(ppSVar2,pSVar3);
  return;
}


// ===== private static void MKLEBCDAJHA(FGKGKDEJCOG.CFNJNJBHGNA DBJLIBHKKGP)  [RVA 0x3334508]
// FGKGKDEJCOG$$MKLEBCDAJHA @ RVA 0x3334508

void FGKGKDEJCOG__MKLEBCDAJHA(int32_t DBJLIBHKKGP,MethodInfo *method)

{
  FGKGKDEJCOG_StaticFields *pFVar1;
  System_String_o **ppSVar2;
  MethodInfo *extraout_x1;
  System_String_o *pSVar3;
  float fVar4;
  System_Action_o *pSVar5;
  
  if ((DAT_0456793a & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&StringLiteral_16205/*"_low"*/);
    DAT_0456793a = 1;
    method = extraout_x1;
  }
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo,method);
  }
  AMHFFFODDOC__NDNPGAKJLHM((MethodInfo *)0x0);
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NGCBNMBJMOE__NDNPGAKJLHM((MethodInfo *)0x0);
  UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
  if (DBJLIBHKKGP == 2) {
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar1 = FGKGKDEJCOG_TypeInfo->static_fields;
    fVar4 = 0.5;
LAB_0343462c:
    ppSVar2 = &pFVar1->HABNBDAMLMP;
    *ppSVar2 = (System_String_o *)0x0;
    pSVar3 = (System_String_o *)0x0;
    pFVar1->CHCLEFKLOKH = fVar4;
  }
  else {
    if (DBJLIBHKKGP == 1) {
      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar1 = FGKGKDEJCOG_TypeInfo->static_fields;
      fVar4 = 1.0;
      goto LAB_0343462c;
    }
    if (DBJLIBHKKGP != 0) goto LAB_0343463c;
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar1 = FGKGKDEJCOG_TypeInfo->static_fields;
    pFVar1->CHCLEFKLOKH = 2.0;
    pSVar3 = StringLiteral_16205/*"_low"*/;
    ppSVar2 = &pFVar1->HABNBDAMLMP;
    *ppSVar2 = StringLiteral_16205/*"_low"*/;
  }
  thunk_FUN_01c20e04(ppSVar2,pSVar3);
LAB_0343463c:
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar5 = FGKGKDEJCOG_TypeInfo->static_fields->JJHOFOMAHEB;
  if (pSVar5 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03434670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar5->fields).super.super.invoke_impl)
              ((pSVar5->fields).super.super.method_code,(pSVar5->fields).super.super.method);
    return;
  }
  return;
}


// ===== public void .ctor(XmlNode JIFEPAFBENM, XmlNode NMGANDPPOLH)  [RVA 0x3334F94]
// FGKGKDEJCOG$$.ctor @ RVA 0x3334F94

void FGKGKDEJCOG___ctor(FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *JIFEPAFBENM,
                       System_Xml_XmlNode_o *NMGANDPPOLH,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlNode_o **ppSVar2;
  FGKGKDEJCOG_o *__this_00;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *method_00;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03434f7c with catch @ 03434f98
                       catch(type#2 @ 00000000) { ... } // from try @ 03434f90 with catch @ 03434f98
                        */
  if ((DAT_0456793b & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&StringLiteral_8340/*"LastSaveSlot"*/);
    FUN_01bab630(&StringLiteral_12228/*"Sounds"*/);
    DAT_0456793b = 1;
  }
  (__this->fields).FIIKIHJHLNJ = 1;
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CIOBNDOOGIM___ctor((CIOBNDOOGIM_o *)__this,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).INCBBOHLBND;
  *ppSVar2 = JIFEPAFBENM;
  thunk_FUN_01c20e04(ppSVar2,JIFEPAFBENM);
  if (JIFEPAFBENM != (System_Xml_XmlNode_o *)0x0) {
    method_00 = (JIFEPAFBENM->klass->vtable)._51_get_Item.method;
    __this_00 = (FGKGKDEJCOG_o *)
                (*(JIFEPAFBENM->klass->vtable)._51_get_Item.methodPtr)
                          (JIFEPAFBENM,StringLiteral_12228/*"Sounds"*/);
    FGKGKDEJCOG__OJOGIDJOKMK(__this_00,(System_Xml_XmlNode_o *)__this_00,method_00);
    FGKGKDEJCOG__DLKPAPOBKKO(__this,JIFEPAFBENM,NMGANDPPOLH,method);
    FGKGKDEJCOG__CMAKHKNDMMH(__this,JIFEPAFBENM,(MethodInfo *)NMGANDPPOLH);
    FGKGKDEJCOG__FNKGNGCMHHN(__this,JIFEPAFBENM,(MethodInfo *)NMGANDPPOLH);
    FGKGKDEJCOG__CGPMJHLMPKO(__this,JIFEPAFBENM,(MethodInfo *)NMGANDPPOLH);
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(JIFEPAFBENM->klass->vtable)._16_get_Attributes.methodPtr)
                          (JIFEPAFBENM,(JIFEPAFBENM->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_01,StringLiteral_8340/*"LastSaveSlot"*/,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      (__this->fields).AFGIAJPDOKH = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string BMMBKMCAKOC()  [RVA 0x3335488]
// FGKGKDEJCOG$$BMMBKMCAKOC @ RVA 0x3335488

System_String_o * FGKGKDEJCOG__BMMBKMCAKOC(MethodInfo *method)

{
  if ((DAT_0456793c & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_0456793c = 1;
  }
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return FGKGKDEJCOG_TypeInfo->static_fields->BDFFMDCAHGJ;
}


// ===== private void OJOGIDJOKMK(XmlNode DBKIEKFPFOH)  [RVA 0x33350D0]
// FGKGKDEJCOG$$OJOGIDJOKMK @ RVA 0x33350D0

void FGKGKDEJCOG__OJOGIDJOKMK
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *DBKIEKFPFOH,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  long *plVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  float fVar6;
  
  if ((DAT_0456793d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_9277/*"Mute"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_9259/*"Music"*/);
    FUN_01bab630(&StringLiteral_12226/*"Sound"*/);
    FUN_01bab630(&StringLiteral_8800/*"MainSettings::parseSounds ERROR - Tag Sounds not found"*/);
    DAT_0456793d = 1;
  }
  if (DBKIEKFPFOH != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(DBKIEKFPFOH->klass->vtable)._51_get_Item.methodPtr)
                               (DBKIEKFPFOH,StringLiteral_12226/*"Sound"*/,
                                (DBKIEKFPFOH->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,1.0,(MethodInfo *)0x0);
        if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        PNLFHHJGDLI__IMFBLHDOHFL(fVar6,(MethodInfo *)0x0);
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_9277/*"Mute"*/,(MethodInfo *)0x0);
          bVar2 = EIABCPKDEBD__FMBMNDIGLIG(pSVar5,false,(MethodInfo *)0x0);
          PNLFHHJGDLI__NEKJIEEEPFO(bVar2,(MethodInfo *)0x0);
          plVar3 = (long *)(*(DBKIEKFPFOH->klass->vtable)._51_get_Item.methodPtr)
                                     (DBKIEKFPFOH,StringLiteral_9259/*"Music"*/,
                                      (DBKIEKFPFOH->klass->vtable)._51_get_Item.method);
          if (plVar3 != (long *)0x0) {
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
            if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03435268 to 035352ff has its CatchHandler @ 03435268
                       catch() { ... } // from try @ 03435268 with catch @ 03435268
                       catch() { ... } // from try @ 03435328 with catch @ 03435268
                       catch() { ... } // from try @ 03435378 with catch @ 03435268
                       catch() { ... } // from try @ 034353a0 with catch @ 03435268
                       catch() { ... } // from try @ 034353e0 with catch @ 03435268 */
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
              fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,1.0,(MethodInfo *)0x0);
              PNLFHHJGDLI__GJBPODCHLNP(fVar6,(MethodInfo *)0x0);
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
              if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar4,StringLiteral_9277/*"Mute"*/,(MethodInfo *)0x0);
                bVar2 = EIABCPKDEBD__FMBMNDIGLIG(pSVar5,false,(MethodInfo *)0x0);
                PNLFHHJGDLI__FDOGCCOEHPL(bVar2,(MethodInfo *)0x0);
                if (DAT_04565f32 == '\0') {
                  FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                  DAT_04565f32 = '\x01';
                }
                if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                    /* try { // try from 03435300 to 03535307 has its CatchHandler @ 03435380 */
                bVar1 = PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK;
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03435314 to 03535327 has its CatchHandler @ 03435384 */
                }
                NLPJLHOEAOE_TypeInfo->static_fields->OFCMOHAEENG = bVar1;
                    /* try { // try from 03435328 to 03535373 has its CatchHandler @ 03435268 */
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
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_8800/*"MainSettings::parseSounds ERROR - Tag Sounds not found"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void JDAMFAMMNKM(int CJNHFNHJHPE)  [RVA 0x33354E0]
// FGKGKDEJCOG$$JDAMFAMMNKM @ RVA 0x33354E0

void FGKGKDEJCOG__JDAMFAMMNKM(FGKGKDEJCOG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).AFGIAJPDOKH = CJNHFNHJHPE;
  CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,true,(MethodInfo *)0x0);
  return;
}


// ===== public static string CFLLAKDFCAH()  [RVA 0x33354F4]
// FGKGKDEJCOG$$CFLLAKDFCAH @ RVA 0x33354F4

System_String_o * FGKGKDEJCOG__CFLLAKDFCAH(MethodInfo *method)

{
  if ((DAT_0456793e & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_0456793e = 1;
  }
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return FGKGKDEJCOG_TypeInfo->static_fields->HABNBDAMLMP;
}


// ===== public static float JNKPALLPJCM()  [RVA 0x333554C]
// FGKGKDEJCOG$$JNKPALLPJCM @ RVA 0x333554C

float FGKGKDEJCOG__JNKPALLPJCM(MethodInfo *method)

{
  if ((DAT_0456793f & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_0456793f = 1;
  }
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
}


// ===== public static void APKCEPAKKDG(Action CJNHFNHJHPE)  [RVA 0x33355A4]
// FGKGKDEJCOG$$APKCEPAKKDG @ RVA 0x33355A4

void FGKGKDEJCOG__APKCEPAKKDG(System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *source;
  
  if ((DAT_04567940 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_04567940 = 1;
    method = extraout_x1;
  }
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FGKGKDEJCOG_TypeInfo,method);
  }
  source = FGKGKDEJCOG_TypeInfo->static_fields->JJHOFOMAHEB;
  do {
    pSVar2 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)FUN_01c07368(FGKGKDEJCOG_TypeInfo->static_fields,pSVar2,source);
    bVar1 = source != pSVar3;
    source = pSVar3;
  } while (bVar1);
  return;
}


// ===== private void DLKPAPOBKKO(XmlNode AHDGNOJPPIB, XmlNode NMGANDPPOLH)  [RVA 0x3335374]
// FGKGKDEJCOG$$DLKPAPOBKKO @ RVA 0x3335374

void FGKGKDEJCOG__DLKPAPOBKKO
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Xml_XmlNode_o *NMGANDPPOLH,MethodInfo *method)

{
  CAJHCLGOFMJ_o *pCVar1;
  System_Xml_XmlNode_o *pSVar2;
  CAJHCLGOFMJ_o **ppCVar3;
  
                    /* try { // try from 03435374 to 03535377 has its CatchHandler @ 0343537c */
                    /* try { // try from 03435378 to 0353539b has its CatchHandler @ 03435268 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03435374 with catch @ 0343537c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03435300 with catch @ 03435380
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03435314 with catch @ 03435384
                        */
  if ((DAT_04567941 & 1) == 0) {
                    /* try { // try from 0343539c to 0353539f has its CatchHandler @ 034353c8 */
                    /* try { // try from 034353a0 to 035353d7 has its CatchHandler @ 03435268 */
    FUN_01bab630(&CAJHCLGOFMJ_TypeInfo);
    FUN_01bab630(&StringLiteral_14866/*"WatchedVideos"*/);
    DAT_04567941 = 1;
  }
                    /* catch() { ... } // from try @ 0343539c with catch @ 034353c8 */
  if (NMGANDPPOLH != (System_Xml_XmlNode_o *)0x0) {
    pCVar1 = (CAJHCLGOFMJ_o *)thunk_FUN_01bda818(CAJHCLGOFMJ_TypeInfo);
                    /* try { // try from 034353d8 to 035353df has its CatchHandler @ 034353f4 */
                    /* try { // try from 034353e0 to 035353eb has its CatchHandler @ 03435268 */
    CAJHCLGOFMJ___ctor(pCVar1,NMGANDPPOLH,(MethodInfo *)0x0);
    ppCVar3 = &(__this->fields).OPBLLCHJOAK;
    *ppCVar3 = pCVar1;
                    /* try { // try from 034353ec to 035353f3 has its CatchHandler @ 034353f4 */
    thunk_FUN_01c20e04(ppCVar3,pCVar1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034353d8 with catch @ 034353f4
                       catch(type#2 @ 00000000) { ... } // from try @ 034353ec with catch @ 034353f4
                        */
    EIABCPKDEBD__LKPNNANEJKF(AHDGNOJPPIB,StringLiteral_14866/*"WatchedVideos"*/,(MethodInfo *)0x0);
    pSVar2 = EIABCPKDEBD__KPODFFHOHGK(AHDGNOJPPIB,StringLiteral_14866/*"WatchedVideos"*/,(MethodInfo *)0x0);
    if (*ppCVar3 != (CAJHCLGOFMJ_o *)0x0) {
      CAJHCLGOFMJ__MDGJPBHDFHN(*ppCVar3,pSVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar2 = EIABCPKDEBD__DJGFHLMINNB(AHDGNOJPPIB,StringLiteral_14866/*"WatchedVideos"*/,(MethodInfo *)0x0);
  pCVar1 = (CAJHCLGOFMJ_o *)thunk_FUN_01bda818(CAJHCLGOFMJ_TypeInfo);
  CAJHCLGOFMJ___ctor(pCVar1,pSVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).OPBLLCHJOAK;
  *ppCVar3 = pCVar1;
  thunk_FUN_01c20e04(ppCVar3,pCVar1);
  return;
}


// ===== public void CODMHIEOCJM(string KGLJICLJHEL)  [RVA 0x333567C]
// FGKGKDEJCOG$$CODMHIEOCJM @ RVA 0x333567C

void FGKGKDEJCOG__CODMHIEOCJM(FGKGKDEJCOG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  CAJHCLGOFMJ_o *__this_00;
  
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = (__this->fields).OPBLLCHJOAK;
  if (__this_00 != (CAJHCLGOFMJ_o *)0x0) {
    CAJHCLGOFMJ__CODMHIEOCJM(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HLAPEBKNMEK(FGKGKDEJCOG.CFNJNJBHGNA CJNHFNHJHPE)  [RVA 0x33356D8]
// FGKGKDEJCOG$$HLAPEBKNMEK @ RVA 0x33356D8

void FGKGKDEJCOG__HLAPEBKNMEK(FGKGKDEJCOG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int32_t DBJLIBHKKGP;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04567942 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_04567942 = 1;
  }
  if ((__this->fields).ACOFLEKJNHM == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).ACOFLEKJNHM = CJNHFNHJHPE;
  CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
  DBJLIBHKKGP = (__this->fields).ACOFLEKJNHM;
  method_00 = extraout_x1;
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  FGKGKDEJCOG__MKLEBCDAJHA(DBJLIBHKKGP,method_00);
  return;
}


// ===== public static void GJOHNMGHOAF(Action CJNHFNHJHPE)  [RVA 0x3335760]
// FGKGKDEJCOG$$GJOHNMGHOAF @ RVA 0x3335760

void FGKGKDEJCOG__GJOHNMGHOAF(System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *a;
  
  if ((DAT_04567943 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_04567943 = 1;
    method = extraout_x1;
  }
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FGKGKDEJCOG_TypeInfo,method);
  }
  a = FGKGKDEJCOG_TypeInfo->static_fields->JJHOFOMAHEB;
  do {
    pSVar2 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)FUN_01c07368(FGKGKDEJCOG_TypeInfo->static_fields,pSVar2,a);
    bVar1 = a != pSVar3;
    a = pSVar3;
  } while (bVar1);
  return;
}


// ===== public int CHAJNCDGODG()  [RVA 0x3335838]
// FGKGKDEJCOG$$CHAJNCDGODG @ RVA 0x3335838

int32_t FGKGKDEJCOG__CHAJNCDGODG(FGKGKDEJCOG_o *__this,MethodInfo *method)

{
  return (__this->fields).AFGIAJPDOKH;
}


// ===== public void GAGOKIINCLC()  [RVA 0x3335840]
// FGKGKDEJCOG$$GAGOKIINCLC @ RVA 0x3335840

void FGKGKDEJCOG__GAGOKIINCLC(FGKGKDEJCOG_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  FGKGKDEJCOG__MBANNEKMPCD(__this,(__this->fields).INCBBOHLBND,in_x2);
  return;
}


// ===== public static Color IALPNFOEEBP()  [RVA 0x3335848]
// FGKGKDEJCOG$$IALPNFOEEBP @ RVA 0x3335848

UnityEngine_Color_o FGKGKDEJCOG__IALPNFOEEBP(MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Color_o UVar7;
  System_Nullable_Color__Fields local_48;
  float fVar6;
  
  if ((DAT_04567944 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15989/*"_NotEnoughCurrencyColor"*/);
    DAT_04567944 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
    pMVar2 = ACHLOMELAJE__HKIEGNBOFCD(__this,StringLiteral_15989/*"_NotEnoughCurrencyColor"*/,0,(MethodInfo *)0x0);
    fVar6 = 1.0;
    fVar3 = 0.0;
    if (pMVar2 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
      fVar4 = 0.0;
      fVar5 = 0.0;
    }
    else {
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pMVar2->fields).JAICMIMBIOA,(MethodInfo *)0x0);
      fVar4 = 0.0;
      fVar5 = 0.0;
      fVar6 = 1.0;
      fVar3 = 0.0;
      if (!bVar1) {
        local_48.hasValue = false;
        local_48._1_3_ = 0;
        local_48.value.fields.r = 0.0;
        local_48.value.fields.g = 0.0;
        local_48.value.fields.b = 0.0;
        local_48.value.fields.a = 0.0;
        UVar7 = CFBGPBCDAGA__HPBCENEFAMD
                          ((pMVar2->fields).JAICMIMBIOA,1.0,(System_Nullable_Color__o *)&local_48,
                           (MethodInfo *)0x0);
        fVar6 = UVar7.fields.a;
        fVar5 = UVar7.fields.b;
        fVar4 = UVar7.fields.g;
        fVar3 = UVar7.fields.r;
      }
    }
    UVar7.fields.g = fVar4;
    UVar7.fields.r = fVar3;
    UVar7.fields.a = fVar6;
    UVar7.fields.b = fVar5;
    return (UnityEngine_Color_o)UVar7.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BPKJKIHLABM(XmlNode BAKIMFMMFMP)  [RVA 0x3334B58]
// FGKGKDEJCOG$$BPKJKIHLABM @ RVA 0x3334B58

void FGKGKDEJCOG__BPKJKIHLABM
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *BAKIMFMMFMP,MethodInfo *method)

{
  undefined8 *puVar1;
  long lVar2;
  System_Xml_XmlElement_o *pSVar3;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  float local_54;
  
  if ((DAT_04567945 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_9277/*"Mute"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_9259/*"Music"*/);
    FUN_01bab630(&StringLiteral_12226/*"Sound"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_12228/*"Sounds"*/);
    __this = (FGKGKDEJCOG_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04567945 = 1;
  }
  local_54 = 0.0;
  if (BAKIMFMMFMP != (System_Xml_XmlNode_o *)0x0) {
    lVar2 = (*(BAKIMFMMFMP->klass->vtable)._51_get_Item.methodPtr)
                      (BAKIMFMMFMP,StringLiteral_12228/*"Sounds"*/,
                       (BAKIMFMMFMP->klass->vtable)._51_get_Item.method);
    if (lVar2 == 0) {
      pSVar3 = EIABCPKDEBD__BHPIHHJHELJ(BAKIMFMMFMP,StringLiteral_12228/*"Sounds"*/,(MethodInfo *)0x0);
      JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ
                              ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_12226/*"Sound"*/,(MethodInfo *)0x0)
      ;
      EIABCPKDEBD__HBGAGFJBGKD
                ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      EIABCPKDEBD__HBGAGFJBGKD
                ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_9277/*"Mute"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__BHPIHHJHELJ
                         ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_9259/*"Music"*/,(MethodInfo *)0x0);
      EIABCPKDEBD__HBGAGFJBGKD((System_Xml_XmlNode_o *)pSVar3,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0)
      ;
      EIABCPKDEBD__HBGAGFJBGKD((System_Xml_XmlNode_o *)pSVar3,StringLiteral_9277/*"Mute"*/,(MethodInfo *)0x0);
    }
    plVar4 = (long *)(*(BAKIMFMMFMP->klass->vtable)._51_get_Item.methodPtr)
                               (BAKIMFMMFMP,StringLiteral_12228/*"Sounds"*/,
                                (BAKIMFMMFMP->klass->vtable)._51_get_Item.method);
    __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                                 (plVar4,StringLiteral_12226/*"Sound"*/,*(undefined8 *)(*plVar4 + 0x470));
      __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
      if (plVar4 != (long *)0x0) {
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
        __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
          if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
          }
          if (DAT_045677be == '\0') {
            FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
            DAT_045677be = '\x01';
          }
          if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          local_54 = PNLFHHJGDLI_TypeInfo->static_fields->EHPFFCGFFOO;
          __this = (FGKGKDEJCOG_o *)System_Single__ToString(local_54,(MethodInfo *)&local_54);
          if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
            (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar6,__this,(pSVar6->klass->vtable)._10_set_Value.method);
                    /* try { // try from 03434d88 to 03534ea7 has its CatchHandler @ 03434d88
                       catch() { ... } // from try @ 03434d88 with catch @ 03434d88
                       catch() { ... } // from try @ 03434eec with catch @ 03434d88
                       catch() { ... } // from try @ 03434f20 with catch @ 03434d88
                       catch() { ... } // from try @ 03434f54 with catch @ 03434d88
                       catch() { ... } // from try @ 03434f84 with catch @ 03434d88 */
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
            __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_9277/*"Mute"*/,(MethodInfo *)0x0);
              if (DAT_045677bd == '\0') {
                FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                DAT_045677bd = '\x01';
              }
              if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this = (FGKGKDEJCOG_o *)PNLFHHJGDLI_TypeInfo;
              if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
                puVar1 = &StringLiteral_1567/*"0"*/;
                if (PNLFHHJGDLI_TypeInfo->static_fields->GBBBAEHFPLH != false) {
                  puVar1 = &StringLiteral_1606/*"1"*/;
                }
                (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                          (pSVar6,*puVar1,(pSVar6->klass->vtable)._10_set_Value.method);
                plVar4 = (long *)(*(BAKIMFMMFMP->klass->vtable)._51_get_Item.methodPtr)
                                           (BAKIMFMMFMP,StringLiteral_12228/*"Sounds"*/,
                                            (BAKIMFMMFMP->klass->vtable)._51_get_Item.method);
                __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
                if (plVar4 != (long *)0x0) {
                  plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                                             (plVar4,StringLiteral_9259/*"Music"*/,
                                              *(undefined8 *)(*plVar4 + 0x470));
                  __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
                  if (plVar4 != (long *)0x0) {
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240))
                    ;
                    __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
                    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar5,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
                      }
                      if (DAT_045677bf == '\0') {
                        FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                        DAT_045677bf = '\x01';
                      }
                    /* try { // try from 03434ea8 to 03534eaf has its CatchHandler @ 03434f38 */
                      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                    /* try { // try from 03434ebc to 03534ec7 has its CatchHandler @ 03434f34 */
                      local_54 = PNLFHHJGDLI_TypeInfo->static_fields->AGBNCFPOLOE;
                      __this = (FGKGKDEJCOG_o *)
                               System_Single__ToString(local_54,(MethodInfo *)&local_54);
                      if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03434ee4 to 03534eeb has its CatchHandler @ 03434f30 */
                        (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                  (pSVar6,__this,(pSVar6->klass->vtable)._10_set_Value.method);
                    /* try { // try from 03434eec to 03534f13 has its CatchHandler @ 03434d88 */
                        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                 (**(code **)(*plVar4 + 0x238))
                                           (plVar4,*(undefined8 *)(*plVar4 + 0x240));
                        __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
                        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar5,StringLiteral_9277/*"Mute"*/,(MethodInfo *)0x0);
                    /* try { // try from 03434f14 to 03534f17 has its CatchHandler @ 03434f2c */
                    /* try { // try from 03434f18 to 03534f1b has its CatchHandler @ 03434f28 */
                          if (DAT_04565f32 == '\0') {
                    /* try { // try from 03434f1c to 03534f1f has its CatchHandler @ 03434f24 */
                    /* try { // try from 03434f20 to 03534f4f has its CatchHandler @ 03434d88 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03434f1c with catch @ 03434f24
                        */
                            FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03434f18 with catch @ 03434f28
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03434f14 with catch @ 03434f2c
                        */
                            DAT_04565f32 = '\x01';
                          }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03434ee4 with catch @ 03434f30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03434ebc with catch @ 03434f34
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03434ea8 with catch @ 03434f38
                        */
                          if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564();
                          }
                          __this = (FGKGKDEJCOG_o *)PNLFHHJGDLI_TypeInfo;
                          if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03434f50 to 03534f53 has its CatchHandler @ 03434f74 */
                    /* try { // try from 03434f54 to 03534f7b has its CatchHandler @ 03434d88 */
                            puVar1 = &StringLiteral_1567/*"0"*/;
                            if (PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK != false) {
                              puVar1 = &StringLiteral_1606/*"1"*/;
                            }
                            (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                      (pSVar6,*puVar1,(pSVar6->klass->vtable)._10_set_Value.method);
                    /* catch() { ... } // from try @ 03434f50 with catch @ 03434f74 */
                    /* try { // try from 03434f7c to 03534f83 has its CatchHandler @ 03434f98 */
                    /* try { // try from 03434f84 to 03534f8f has its CatchHandler @ 03434d88 */
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void GGJHFLDKMHA()  [RVA 0x333596C]
// FGKGKDEJCOG$$GGJHFLDKMHA @ RVA 0x333596C

void FGKGKDEJCOG__GGJHFLDKMHA(FGKGKDEJCOG_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  FGKGKDEJCOG__FNKGNGCMHHN(__this,(System_Xml_XmlNode_o *)0x0,in_x2);
  return;
}


// ===== public FGKGKDEJCOG.CFNJNJBHGNA ADMGNPAICAP()  [RVA 0x3335974]
// FGKGKDEJCOG$$ADMGNPAICAP @ RVA 0x3335974

int32_t FGKGKDEJCOG__ADMGNPAICAP(FGKGKDEJCOG_o *__this,MethodInfo *method)

{
  return (__this->fields).ACOFLEKJNHM;
}


// ===== private static void .cctor()  [RVA 0x333597C]
// FGKGKDEJCOG$$.cctor @ RVA 0x333597C

void FGKGKDEJCOG___cctor(MethodInfo *method)

{
  System_String_o **ppSVar1;
  FGKGKDEJCOG_StaticFields *pFVar2;
  undefined8 uVar3;
  
  if ((DAT_04567946 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_04567946 = 1;
  }
  ppSVar1 = &FGKGKDEJCOG_TypeInfo->static_fields->BDFFMDCAHGJ;
  *ppSVar1 = (System_String_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  ppSVar1 = &FGKGKDEJCOG_TypeInfo->static_fields->HABNBDAMLMP;
  *ppSVar1 = (System_String_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  uVar3 = NEON_fmov(0x3f800000,4);
  pFVar2 = FGKGKDEJCOG_TypeInfo->static_fields;
  pFVar2->CHCLEFKLOKH = (float)(int)uVar3;
  pFVar2->NADOFNLEECE = (float)(int)((ulong)uVar3 >> 0x20);
  return;
}


// ===== public bool KPAEAHPADBL(string KGLJICLJHEL)  [RVA 0x33359F0]
// FGKGKDEJCOG$$KPAEAHPADBL @ RVA 0x33359F0

bool FGKGKDEJCOG__KPAEAHPADBL(FGKGKDEJCOG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  CAJHCLGOFMJ_o *__this_00;
  
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  __this_00 = (__this->fields).OPBLLCHJOAK;
  if (__this_00 != (CAJHCLGOFMJ_o *)0x0) {
    bVar1 = CAJHCLGOFMJ__KPAEAHPADBL(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public FGKGKDEJCOG.CFNJNJBHGNA IEPCAAEKFHN()  [RVA 0x33343F4]
// FGKGKDEJCOG$$IEPCAAEKFHN @ RVA 0x33343F4

int32_t FGKGKDEJCOG__IEPCAAEKFHN(FGKGKDEJCOG_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  uint uVar4;
  int32_t iVar5;
  KMBNFNCDDBP_o *pKVar6;
  
  if ((DAT_04567947 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04567947 = 1;
  }
  iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  bVar2 = GNAFJMPJNKI__NCOIGMBGENK(iVar3,(MethodInfo *)0x0);
  if (bVar2) {
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (EOAOCPLIKOI_TypeInfo->static_fields->ABJLMAOEEEE == false) {
      iVar3 = UnityEngine_SystemInfo__get_systemMemorySize((MethodInfo *)0x0);
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      if (DAT_045611dc == '\0') {
        FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
        DAT_045611dc = '\x01';
      }
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pKVar6 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
      if (pKVar6 == (KMBNFNCDDBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = (pKVar6->fields).JJIGNBIMLCC;
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar5 = EOAOCPLIKOI__PNPFJEGMOPC((MethodInfo *)0x0);
      uVar4 = 0;
      if (iVar5 != 0) {
        uVar4 = (uint)(iVar1 <= iVar3 || iVar5 == 1);
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


// ===== public static bool PBHLPMFKMAH()  [RVA 0x3335A40]
// FGKGKDEJCOG$$PBHLPMFKMAH @ RVA 0x3335A40

bool FGKGKDEJCOG__PBHLPMFKMAH(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  ACHLOMELAJE_o *__this;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar3;
  
  if ((DAT_04567948 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15921/*"_AutoShowRaidDailyWindow"*/);
    DAT_04567948 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
    pMVar3 = ACHLOMELAJE__HKIEGNBOFCD(__this,StringLiteral_15921/*"_AutoShowRaidDailyWindow"*/,0,(MethodInfo *)0x0);
    bVar1 = false;
    if (pMVar3 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
      iVar2 = System_Int32__Parse((pMVar3->fields).JAICMIMBIOA,(MethodInfo *)0x0);
      bVar1 = 0 < iVar2;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GEEFPKCAMNE()  [RVA 0x3335B0C]
// FGKGKDEJCOG$$GEEFPKCAMNE @ RVA 0x3335B0C

void FGKGKDEJCOG__GEEFPKCAMNE(FGKGKDEJCOG_o *__this,MethodInfo *method)

{
  CAJHCLGOFMJ_o *__this_00;
  
  __this_00 = (__this->fields).OPBLLCHJOAK;
  if (__this_00 != (CAJHCLGOFMJ_o *)0x0) {
    CAJHCLGOFMJ__GEEFPKCAMNE(__this_00,(MethodInfo *)0x0);
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MJCNICLHEKC(FGKGKDEJCOG.CFNJNJBHGNA CJNHFNHJHPE)  [RVA 0x3335B3C]
// FGKGKDEJCOG$$MJCNICLHEKC @ RVA 0x3335B3C

void FGKGKDEJCOG__MJCNICLHEKC(FGKGKDEJCOG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int32_t DBJLIBHKKGP;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04567949 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_04567949 = 1;
  }
  if ((__this->fields).ILACIHPOGDC == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).ILACIHPOGDC = CJNHFNHJHPE;
  CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
  DBJLIBHKKGP = (__this->fields).ILACIHPOGDC;
  method_00 = extraout_x1;
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  FGKGKDEJCOG__OPCKGNOBACO(DBJLIBHKKGP,method_00);
  return;
}

