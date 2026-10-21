// HDBPKHNKOGI$$HNIHOIAMDPC @ RVA 0x3194274

void HDBPKHNKOGI__HNIHOIAMDPC
               (HDBPKHNKOGI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  CPAJCJHOLEJ_o *__this_00;
  long *plVar6;
  PNGKLCHKPEO_o *pPVar7;
  System_Object_array *args;
  long lVar8;
  undefined8 uVar9;
  CPAJCJHOLEJ_o **ppCVar10;
  System_String_o **ppSVar11;
  System_String_o **ppSVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_04566a57 & 1) == 0) {
    FUN_01bab630(&CPAJCJHOLEJ_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_11713);
    FUN_01bab630(&StringLiteral_2729);
    FUN_01bab630(&StringLiteral_11717);
    FUN_01bab630(&StringLiteral_8667);
    FUN_01bab630(&StringLiteral_12419);
    FUN_01bab630(&StringLiteral_10362);
    FUN_01bab630(&StringLiteral_9847);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_12370);
    FUN_01bab630(&StringLiteral_11716);
    FUN_01bab630(&StringLiteral_3158);
    FUN_01bab630(&StringLiteral_11820);
    FUN_01bab630(&StringLiteral_9848);
    FUN_01bab630(&StringLiteral_10072);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_6507);
    FUN_01bab630(&StringLiteral_13804);
    FUN_01bab630(&StringLiteral_3365);
    DAT_04566a57 = 1;
  }
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
    ppSVar11 = &(__this->fields).NPFMOEOIEKM;
    *ppSVar11 = pSVar5;
    thunk_FUN_01c20e04(ppSVar11,pSVar5);
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11820,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).MJPPLPGPHIK = pSVar5;
      thunk_FUN_01c20e04();
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_11713,(MethodInfo *)0x0);
        fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,1.0,(MethodInfo *)0x0);
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_13804,(MethodInfo *)0x0);
          fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,1.0,(MethodInfo *)0x0);
          (__this->fields).BJKDOBKIBIA = fVar14;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_8667,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
            (__this->fields).GFPACGPFOPI = bVar1;
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_9847,(MethodInfo *)0x0);
              bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
              (__this->fields).PKPOHCOEHEN = bVar1;
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,StringLiteral_9848,(MethodInfo *)0x0);
                bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                (__this->fields).FJACNELHGAK = bVar1;
                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar3,StringLiteral_3365,(MethodInfo *)0x0);
                  bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                  (__this->fields).ALOJEOEGPJO = bVar1;
                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar3,StringLiteral_11716,(MethodInfo *)0x0);
                    fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,fVar13,(MethodInfo *)0x0);
                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar3,StringLiteral_11717,(MethodInfo *)0x0);
                      fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,fVar13,(MethodInfo *)0x0);
                      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar3,StringLiteral_12370,(MethodInfo *)0x0);
                        fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
                        (__this->fields).NDGEJKPCAPM = fVar15;
                        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                           (AHDGNOJPPIB,
                                            (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar3,StringLiteral_10072,(MethodInfo *)0x0);
                          pSVar5 = EIABCPKDEBD__JPKEHIBGOEM
                                             (pSVar4,string_TypeInfo->static_fields->Empty,
                                              (MethodInfo *)0x0);
                          ppSVar12 = &(__this->fields)._IMJDKOBJMAJ_k__BackingField;
                          *ppSVar12 = pSVar5;
                          thunk_FUN_01c20e04(ppSVar12,pSVar5);
                          (__this->fields).AHODAMCBIHA.fields.x = fVar14;
                          (__this->fields).AHODAMCBIHA.fields.y = fVar13;
                          AHDGNOJPPIB_00 =
                               (System_Xml_XmlNode_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                         (AHDGNOJPPIB,StringLiteral_3158,
                                          (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                          if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
                            __this_00 = (CPAJCJHOLEJ_o *)thunk_FUN_01bda818(CPAJCJHOLEJ_TypeInfo);
                            CPAJCJHOLEJ___ctor(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
                            ppCVar10 = &(__this->fields).PKNGDBGLNEO;
                            *ppCVar10 = __this_00;
                            thunk_FUN_01c20e04(ppCVar10,__this_00);
                            (__this->fields).NMIEFOCHBNM = true;
                            return;
                          }
                          plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                                     (AHDGNOJPPIB,StringLiteral_10362,
                                                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.
                                                      method);
                          if (plVar6 == (long *)0x0) {
                            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
                            if (args != (System_Object_array *)0x0) {
                              pSVar5 = *ppSVar11;
                              if ((pSVar5 != (System_String_o *)0x0) &&
                                 (lVar8 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).
                                                                    element_class), lVar8 == 0)) {
                                uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                                FUN_01bab798(uVar9,0);
                              }
                              if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8d0();
                              }
                              args->m_Items[0] = (Il2CppObject *)pSVar5;
                              thunk_FUN_01c20e04(args->m_Items,pSVar5);
                              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                                thunk_FUN_01ba7564();
                              }
                              UnityEngine_Debug__LogErrorFormat
                                        (StringLiteral_2729,args,(MethodInfo *)0x0);
                              return;
                            }
                          }
                          else {
                            pPVar7 = (__this->fields).NDOAINJDMIH;
                            if (pPVar7 != (PNGKLCHKPEO_o *)0x0) {
                              (*(pPVar7->klass->vtable)._4_EOHMFJFFFIN.methodPtr)
                                        (pPVar7,plVar6,(pPVar7->klass->vtable)._4_EOHMFJFFFIN.method
                                        );
                              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                       (**(code **)(*plVar6 + 0x238))
                                                 (plVar6,*(undefined8 *)(*plVar6 + 0x240));
                              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                   (pSVar3,StringLiteral_6507,(MethodInfo *)0x0);
                                bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                                (__this->fields).NMIEFOCHBNM = bVar1;
                                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                         (**(code **)(*plVar6 + 0x238))
                                                   (plVar6,*(undefined8 *)(*plVar6 + 0x240));
                                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                     (pSVar3,StringLiteral_12419,(MethodInfo *)0x0);
                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,-1,(MethodInfo *)0x0);
                                  (__this->fields).CJCHAPGIHAB = iVar2;
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

