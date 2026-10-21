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
    FUN_01bab630(&StringLiteral_8320);
    FUN_01bab630(&StringLiteral_8597);
    FUN_01bab630(&StringLiteral_6901);
    FUN_01bab630(&StringLiteral_8340);
    FUN_01bab630(&StringLiteral_12942);
    DAT_04567938 = 1;
  }
  local_34 = 0;
  CIOBNDOOGIM__GDCHAJOJGBH((CIOBNDOOGIM_o *)__this,(MethodInfo *)0x0);
  pSVar13 = (__this->fields).INCBBOHLBND;
  FGKGKDEJCOG__BPKJKIHLABM(__this_00,pSVar13,in_x2);
  pSVar3 = EIABCPKDEBD__NHPDFFAIJMF(pSVar13,StringLiteral_8320,(MethodInfo *)0x0);
  if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
    EIABCPKDEBD__HBGAGFJBGKD(pSVar13,StringLiteral_8320,(MethodInfo *)0x0);
  }
  if (pSVar13 != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar13->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar13,(pSVar13->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_8320,(MethodInfo *)0x0);
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
          pSVar3 = EIABCPKDEBD__NHPDFFAIJMF(pSVar13,StringLiteral_6901,(MethodInfo *)0x0);
          if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
            EIABCPKDEBD__HBGAGFJBGKD(pSVar13,StringLiteral_6901,(MethodInfo *)0x0);
          }
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar13->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar13,(pSVar13->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_6901,(MethodInfo *)0x0);
            local_50.klass = (System_Enum_c *)FGKGKDEJCOG_CKFILIOCLJE_TypeInfo;
            local_40 = (__this->fields).FIIKIHJHLNJ;
            local_50.monitor = (void *)0xffffffffffffffff;
            pSVar8 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
            if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
              (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                        (pSVar3,pSVar8,(pSVar3->klass->vtable)._10_set_Value.method);
              pSVar3 = EIABCPKDEBD__NHPDFFAIJMF(pSVar13,StringLiteral_12942,(MethodInfo *)0x0);
              if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
                EIABCPKDEBD__HBGAGFJBGKD(pSVar13,StringLiteral_12942,(MethodInfo *)0x0);
              }
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(pSVar13->klass->vtable)._16_get_Attributes.methodPtr)
                                 (pSVar13,(pSVar13->klass->vtable)._16_get_Attributes.method);
              if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar4,StringLiteral_12942,(MethodInfo *)0x0);
                local_50.klass = (System_Enum_c *)FGKGKDEJCOG_CFNJNJBHGNA_TypeInfo;
                local_40 = (__this->fields).ACOFLEKJNHM;
                local_50.monitor = (void *)0xffffffffffffffff;
                pSVar8 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
                if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                  (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                            (pSVar3,pSVar8,(pSVar3->klass->vtable)._10_set_Value.method);
                  pSVar3 = EIABCPKDEBD__NHPDFFAIJMF(pSVar13,StringLiteral_8597,(MethodInfo *)0x0);
                  if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
                    EIABCPKDEBD__HBGAGFJBGKD(pSVar13,StringLiteral_8597,(MethodInfo *)0x0);
                  }
                  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar13->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar13,(pSVar13->klass->vtable)._16_get_Attributes.method);
                  if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar4,StringLiteral_8597,(MethodInfo *)0x0);
                    local_50.klass = (System_Enum_c *)FGKGKDEJCOG_CFNJNJBHGNA_TypeInfo;
                    local_40 = (__this->fields).ILACIHPOGDC;
                    local_50.monitor = (void *)0xffffffffffffffff;
                    pSVar8 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
                    if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                      (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                                (pSVar3,pSVar8,(pSVar3->klass->vtable)._10_set_Value.method);
                      pSVar3 = EIABCPKDEBD__NHPDFFAIJMF
                                         (pSVar13,StringLiteral_8340,(MethodInfo *)0x0);
                      if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
                        EIABCPKDEBD__HBGAGFJBGKD(pSVar13,StringLiteral_8340,(MethodInfo *)0x0);
                      }
                      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar13->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar13,(pSVar13->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar4,StringLiteral_8340,(MethodInfo *)0x0);
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

