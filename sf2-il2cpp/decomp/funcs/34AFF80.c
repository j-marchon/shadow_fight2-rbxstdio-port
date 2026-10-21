// KDPDBGNOFEN$$DFINCBCDDKJ @ RVA 0x34AFF80

/* WARNING: Removing unreachable block (ram,0x035b04c0) */

void KDPDBGNOFEN__DFINCBCDDKJ
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  int32_t CEOLOKFCKIG;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int32_t OGPGLGPMEPD;
  Il2CppMethodPointer *ppIVar5;
  System_String_o *pSVar6;
  Sfs2X_Entities_Data_SFSObject_o *AIHDHHOFOMB;
  FLBBKMOHIOG_o *__this_00;
  JCPHJPJJLCK_o *pJVar7;
  System_Type_o *left;
  long lVar8;
  System_Type_o *right;
  HCKCBFOGMMJ_o *pHVar9;
  IKCANHIFLGJ_o *__this_01;
  ACAEKBNCODE_o *pAVar10;
  ONPHBGJDFBM_o *__this_02;
  KEFHDOHHHML_o *__this_03;
  System_String_o *pSVar11;
  MOEEMFAHGPL_string__o *__this_04;
  DCHAJIMIFHP_o *__this_05;
  System_String_o *str2;
  System_Exception_o *__this_06;
  undefined8 uVar12;
  System_Collections_Hashtable_c *pSVar13;
  System_Action_int__o *pSVar14;
  ulong uVar15;
  int32_t *piVar16;
  System_Collections_Hashtable_o *pSVar17;
  Google_Protobuf_IMessage_o *IKKAMAMLIKA;
  System_Byte_array *LLAICPOILGF;
  MethodInfo *method_00;
  Il2CppObject *IMMNELPBGIF;
  int32_t local_54;
  
  if ((DAT_04568552 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    FUN_01bab630(&System_Collections_IDictionary_TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<string>,_string>_FLOAPDCEIDB__);
    FUN_01bab630(&KEFHDOHHHML_TypeInfo);
    FUN_01bab630(&Sfs2X_Entities_Data_SFSObject_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_11852);
    FUN_01bab630(&StringLiteral_16576);
    FUN_01bab630(&StringLiteral_20761);
    FUN_01bab630(&StringLiteral_17100);
    FUN_01bab630(&StringLiteral_20152);
    FUN_01bab630(&StringLiteral_18911);
    DAT_04568552 = 1;
  }
  uVar12 = StringLiteral_17100;
  local_54 = 0;
  if ((JPLEIGKMFDA == (Sfs2X_Core_BaseEvent_o *)0x0) ||
     (pSVar17 = (JPLEIGKMFDA->fields).arguments, pSVar17 == (System_Collections_Hashtable_o *)0x0))
  goto LAB_035b0870;
  pSVar13 = pSVar17->klass;
  uVar2._0_1_ = (pSVar13->_2).rank;
  uVar2._1_1_ = (pSVar13->_2).minimumAlignment;
  uVar15 = (ulong)uVar2;
  if (uVar15 != 0) {
    piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_IDictionary_TypeInfo) {
        ppIVar5 = &(&(pSVar13->vtable)._0_Equals)[*piVar16].methodPtr;
        goto LAB_035b00cc;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  ppIVar5 = (Il2CppMethodPointer *)FUN_01b81914(pSVar17,System_Collections_IDictionary_TypeInfo,0);
LAB_035b00cc:
  pSVar6 = (System_String_o *)(**ppIVar5)(pSVar17,uVar12,(MethodInfo *)ppIVar5[1]);
  uVar12 = StringLiteral_20152;
  if ((pSVar6 != (System_String_o *)0x0) && (pSVar6->klass != string_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(pSVar6);
  }
  pSVar17 = (JPLEIGKMFDA->fields).arguments;
  if (pSVar17 == (System_Collections_Hashtable_o *)0x0) goto LAB_035b0870;
  pSVar13 = pSVar17->klass;
  uVar3._0_1_ = (pSVar13->_2).rank;
  uVar3._1_1_ = (pSVar13->_2).minimumAlignment;
  uVar15 = (ulong)uVar3;
  if (uVar15 != 0) {
    piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_IDictionary_TypeInfo) {
        ppIVar5 = &(&(pSVar13->vtable)._0_Equals)[*piVar16].methodPtr;
        goto LAB_035b015c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  ppIVar5 = (Il2CppMethodPointer *)FUN_01b81914(pSVar17,System_Collections_IDictionary_TypeInfo,0);
LAB_035b015c:
  AIHDHHOFOMB = (Sfs2X_Entities_Data_SFSObject_o *)
                (**ppIVar5)(pSVar17,uVar12,(MethodInfo *)ppIVar5[1]);
  if (AIHDHHOFOMB != (Sfs2X_Entities_Data_SFSObject_o *)0x0) {
    bVar1 = (Sfs2X_Entities_Data_SFSObject_TypeInfo->_2).naturalAligment;
    if (((AIHDHHOFOMB->klass->_2).naturalAligment < bVar1) ||
       ((AIHDHHOFOMB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Sfs2X_Entities_Data_SFSObject_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AIHDHHOFOMB);
    }
  }
  __this_00 = (__this->fields).KPDFPANJBJB;
  if (__this_00 == (FLBBKMOHIOG_o *)0x0) goto LAB_035b0870;
  pJVar7 = FLBBKMOHIOG__MJJIIFENDHL(__this_00,AIHDHHOFOMB,(MethodInfo *)0x0);
  if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ICOEHFKOMGO_TypeInfo);
  }
  left = ICOEHFKOMGO__AAANKDGBOKJ(pSVar6,(MethodInfo *)0x0);
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo);
  }
  bVar4 = System_Type__op_Equality(left,(System_Type_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if (pJVar7 == (JCPHJPJJLCK_o *)0x0) goto LAB_035b0870;
  if ((pJVar7->fields).ODECJNJDMPF == 0) {
    if ((AIHDHHOFOMB == (Sfs2X_Entities_Data_SFSObject_o *)0x0) ||
       (lVar8 = (*(AIHDHHOFOMB->klass->vtable)._37_GetByteArray.methodPtr)
                          (AIHDHHOFOMB,StringLiteral_16576,
                           (AIHDHHOFOMB->klass->vtable)._37_GetByteArray.method), lVar8 == 0)) {
LAB_035b02b8:
      right = JLAHCMDABIM__JKNEODPGLPM((MethodInfo *)0x0);
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = System_Type__op_Inequality(left,right,(MethodInfo *)0x0);
      if (bVar4) {
        if (left == (System_Type_o *)0x0) {
          pSVar6 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_12525);
          pSVar11 = (System_String_o *)0x0;
        }
        else {
          pSVar6 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_12525);
          pSVar11 = (System_String_o *)
                    (*(left->klass->vtable)._3_ToString.methodPtr)
                              (left,(left->klass->vtable)._3_ToString.method);
        }
        str2 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_21005);
        pSVar6 = System_String__Concat(pSVar6,pSVar11,str2,(MethodInfo *)0x0);
        thunk_FUN_01bb9178(&System_Exception_TypeInfo);
        __this_06 = (System_Exception_o *)thunk_FUN_01bda818();
        System_Exception___ctor(__this_06,pSVar6,(MethodInfo *)0x0);
        uVar12 = thunk_FUN_01bb9178(&Method_KDPDBGNOFEN_DFINCBCDDKJ__);
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(__this_06,uVar12);
      }
      IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
    }
    else {
      LLAICPOILGF = *(System_Byte_array **)(lVar8 + 0x10);
      if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(ICOEHFKOMGO_TypeInfo);
      }
      bVar4 = ICOEHFKOMGO__PMEDJDGCDIN(pSVar6,(MethodInfo *)0x0);
      if (bVar4) {
        LLAICPOILGF = (System_Byte_array *)
                      (*(__this->klass->vtable)._10_MIEEHIBEMNH.methodPtr)
                                (__this,pSVar6,LLAICPOILGF,
                                 (__this->klass->vtable)._10_MIEEHIBEMNH.method);
      }
      IKKAMAMLIKA = CIGGKLMOMJN__GIGMOMOGDAC(LLAICPOILGF,left,(MethodInfo *)0x0);
      if (IKKAMAMLIKA == (Google_Protobuf_IMessage_o *)0x0) goto LAB_035b02b8;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pHVar9 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    if (pHVar9 == (HCKCBFOGMMJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = (pHVar9->fields).HDPMNCIAOFO;
    if (__this_01 == (IKCANHIFLGJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IKCANHIFLGJ__KNANFMMEGHO(__this_01,IKKAMAMLIKA,left,(MethodInfo *)0x0);
  }
  else {
    IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
  }
  if (AIHDHHOFOMB != (Sfs2X_Entities_Data_SFSObject_o *)0x0) {
    bVar4 = Sfs2X_Entities_Data_SFSObject__ContainsKey
                      (AIHDHHOFOMB,StringLiteral_18911,(MethodInfo *)0x0);
    if (bVar4) {
      OGPGLGPMEPD = (*(AIHDHHOFOMB->klass->vtable)._34_GetInt.methodPtr)
                              (AIHDHHOFOMB,StringLiteral_18911,
                               (AIHDHHOFOMB->klass->vtable)._34_GetInt.method);
    }
    else {
      OGPGLGPMEPD = -1;
    }
    pAVar10 = (__this->fields).PGDGCNKLKMN;
    local_54 = OGPGLGPMEPD;
    if (pAVar10 != (ACAEKBNCODE_o *)0x0) {
      __this_02 = ACAEKBNCODE__AOPEMKAGCCD(pAVar10,OGPGLGPMEPD,(MethodInfo *)0x0);
      pAVar10 = (__this->fields).PGDGCNKLKMN;
      if (pAVar10 != (ACAEKBNCODE_o *)0x0) {
        ACAEKBNCODE__MELCGNHNCDA(pAVar10,OGPGLGPMEPD,true,(MethodInfo *)0x0);
        CEOLOKFCKIG = (pJVar7->fields).ODECJNJDMPF;
        method_00 = (MethodInfo *)(pJVar7->fields).EBCALIJLIFB;
        if (__this_02 == (ONPHBGJDFBM_o *)0x0) {
          IMMNELPBGIF = (Il2CppObject *)0x0;
        }
        else {
          IMMNELPBGIF = (__this_02->fields).KOANCCDDBDA;
        }
        __this_03 = (KEFHDOHHHML_o *)thunk_FUN_01bda818(KEFHDOHHHML_TypeInfo);
        KEFHDOHHHML___ctor(__this_03,pSVar6,IKKAMAMLIKA,CEOLOKFCKIG,(System_String_o *)method_00,
                           OGPGLGPMEPD,IMMNELPBGIF,(MethodInfo *)0x0);
        if (OGPGLGPMEPD == -1) {
          KDPDBGNOFEN__DALMFMJBAOJ(__this,pSVar6,left,IKKAMAMLIKA,method_00);
          __this_04 = (__this->fields).LECCKLBDCEN;
          if (((__this_04 != (MOEEMFAHGPL_string__o *)0x0) &&
              (JGGEJJLPMNL<object,_object>__FLOAPDCEIDB
                         ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_04,(Il2CppObject *)pSVar6,
                          (Il2CppObject *)__this_03,
                          Method_JGGEJJLPMNL<MDOKGPFICNK<string>,_string>_FLOAPDCEIDB__),
              __this_03 != (KEFHDOHHHML_o *)0x0)) &&
             (__this_05 = (__this->fields).FNHOHLGNHGN, __this_05 != (DCHAJIMIFHP_o *)0x0)) {
            DCHAJIMIFHP__MJKJHFHHFNG
                      (__this_05,(__this_03->fields)._GOBNFBDNIHO_k__BackingField,__this_03,
                       (MethodInfo *)0x0);
            return;
          }
        }
        else {
          if (__this_02 == (ONPHBGJDFBM_o *)0x0) {
            return;
          }
          ONPHBGJDFBM__DCLABJGIAIG(__this_02,(MethodInfo *)0x0);
          pSVar11 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
          pSVar11 = System_String__Concat(StringLiteral_20761,pSVar11,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._5_CHMEICFBNAK.methodPtr)
                    (__this,StringLiteral_11852,pSVar6,pSVar11,left,IKKAMAMLIKA,
                     (__this->klass->vtable)._5_CHMEICFBNAK.method);
          ONPHBGJDFBM__HCBAKFNPGDN(__this_02,__this_03,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._11_AGODKOENJLC.methodPtr)
                    (__this,__this_03,(__this->klass->vtable)._11_AGODKOENJLC.method);
          if (__this_03 != (KEFHDOHHHML_o *)0x0) {
            KEFHDOHHHML__BOJJBGPIKDP(__this_03,(MethodInfo *)0x0);
            KEFHDOHHHML__LLJAPEFCDLD(__this_03,(MethodInfo *)0x0);
            pSVar14 = (__this->fields).NDNBEBJGGPF;
            if (pSVar14 != (System_Action_int__o *)0x0) {
              (*(code *)(pSVar14->fields).super.super.invoke_impl)
                        ((pSVar14->fields).super.super.method_code,local_54,
                         (pSVar14->fields).super.super.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_035b0870:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

