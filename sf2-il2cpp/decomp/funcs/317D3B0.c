// JADGCGOJLJB$$GIENGNEGHPJ @ RVA 0x317D3B0

void JADGCGOJLJB__GIENGNEGHPJ(JADGCGOJLJB_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int CJNHFNHJHPE;
  int32_t iVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  System_Object_array *args;
  Il2CppObject *pIVar8;
  long lVar9;
  undefined8 uVar10;
  System_Xml_XmlNode_o **ppSVar11;
  System_String_o **ppSVar12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar15;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_04566996 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&StringLiteral_7629);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_12346);
    FUN_01bab630(&StringLiteral_5717);
    FUN_01bab630(&StringLiteral_11798);
    FUN_01bab630(&StringLiteral_14411);
    FUN_01bab630(&StringLiteral_14546);
    DAT_04566996 = 1;
  }
  ppSVar11 = &(__this->fields).PFONAMNDHOH;
  pSVar4 = *ppSVar11;
  if (pSVar4 == (System_Xml_XmlNode_o *)0x0) goto LAB_0327d780;
  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
           (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                     (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
  if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0327d780;
  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar5,StringLiteral_9327,(MethodInfo *)0x0);
  pSVar7 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
  ppSVar12 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar12 = pSVar7;
  thunk_FUN_01c20e04(ppSVar12,pSVar7);
  bVar1 = System_String__op_Equality(*ppSVar12,StringLiteral_14546,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
LAB_0327d510:
    CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar2,(MethodInfo *)0x0);
    (__this->fields).JDNKKGPNHPB.fields = CVar15;
  }
  else {
    bVar1 = System_String__op_Equality(*ppSVar12,StringLiteral_14411,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
      goto LAB_0327d510;
    }
    bVar1 = System_String__op_Equality(*ppSVar12,StringLiteral_11798,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 3;
      goto LAB_0327d510;
    }
  }
  pSVar4 = *ppSVar11;
  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_12346,(MethodInfo *)0x0);
      iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar6,0,(MethodInfo *)0x0);
      CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar2,(MethodInfo *)0x0);
      pCVar13 = &(__this->fields).IELLEFEFFJD;
      pSVar4 = (__this->fields).PFONAMNDHOH;
      pCVar13->fields = CVar15;
      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_5717,(MethodInfo *)0x0);
          if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) {
            iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (__this->fields).GIIJLCDFJAG.fields,(MethodInfo *)0x0);
            CJNHFNHJHPE = iVar2 + 2;
          }
          else {
            pSVar4 = *ppSVar11;
            if (pSVar4 == (System_Xml_XmlNode_o *)0x0) goto LAB_0327d780;
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0327d780;
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_5717,(MethodInfo *)0x0);
            CJNHFNHJHPE = GIAMPEGMNHE__NANCFCIGNEE(pSVar6,0x7fffffff,(MethodInfo *)0x0);
          }
          CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                   CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                             (CJNHFNHJHPE,(MethodInfo *)0x0);
          pCVar14 = &(__this->fields).DMNCBADHGJP;
          pCVar14->fields = CVar15;
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).IELLEFEFFJD.fields,(MethodInfo *)0x0);
          iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)pCVar14->fields,
                             (MethodInfo *)0x0);
          if (iVar2 <= iVar3) {
LAB_0327d748:
            (*(__this->klass->vtable)._4_BBFCCAOAJII.methodPtr)
                      (__this,(__this->klass->vtable)._4_BBFCCAOAJII.method);
            (__this->fields).PFONAMNDHOH = (System_Xml_XmlNode_o *)0x0;
            thunk_FUN_01c20e04(ppSVar11,0);
            return;
          }
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
          uStack_48._0_4_ = (__this->fields).IELLEFEFFJD.fields.fakeValue;
          uStack_48._4_1_ = (__this->fields).IELLEFEFFJD.fields.fakeValueActive;
          uStack_48._5_1_ = (__this->fields).IELLEFEFFJD.fields.inited;
          uStack_48._6_2_ = *(undefined2 *)&(__this->fields).IELLEFEFFJD.fields.field_0xe;
          local_50._0_4_ = (pCVar13->fields).currentCryptoKey;
          local_50._4_4_ = (pCVar13->fields).hiddenValue;
          pIVar8 = (Il2CppObject *)
                   thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      &local_50);
          if (args != (System_Object_array *)0x0) {
            if ((pIVar8 != (Il2CppObject *)0x0) &&
               (lVar9 = thunk_FUN_01bda71c(pIVar8,(((args->obj).klass)->_1).element_class),
               lVar9 == 0)) {
LAB_0327d788:
              uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar10,0);
            }
            if ((int)args->max_length != 0) {
              args->m_Items[0] = pIVar8;
              thunk_FUN_01c20e04(args->m_Items,pIVar8);
              uStack_58._0_4_ = (__this->fields).DMNCBADHGJP.fields.fakeValue;
              uStack_58._4_1_ = (__this->fields).DMNCBADHGJP.fields.fakeValueActive;
              uStack_58._5_1_ = (__this->fields).DMNCBADHGJP.fields.inited;
              uStack_58._6_2_ = *(undefined2 *)&(__this->fields).DMNCBADHGJP.fields.field_0xe;
              local_60._0_4_ = (pCVar14->fields).currentCryptoKey;
              local_60._4_4_ = (pCVar14->fields).hiddenValue;
              pIVar8 = (Il2CppObject *)
                       thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                          &local_60);
              if ((pIVar8 != (Il2CppObject *)0x0) &&
                 (lVar9 = thunk_FUN_01bda71c(pIVar8,(((args->obj).klass)->_1).element_class),
                 lVar9 == 0)) goto LAB_0327d788;
              if (1 < (uint)args->max_length) {
                args->m_Items[1] = pIVar8;
                thunk_FUN_01c20e04(args->m_Items + 1,pIVar8);
                pSVar7 = *ppSVar12;
                if ((pSVar7 != (System_String_o *)0x0) &&
                   (lVar9 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto LAB_0327d788;
                if (2 < (uint)args->max_length) {
                  args->m_Items[2] = (Il2CppObject *)pSVar7;
                  thunk_FUN_01c20e04(args->m_Items + 2,pSVar7);
                  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  UnityEngine_Debug__LogErrorFormat(StringLiteral_7629,args,(MethodInfo *)0x0);
                  goto LAB_0327d748;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
      }
    }
  }
LAB_0327d780:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

