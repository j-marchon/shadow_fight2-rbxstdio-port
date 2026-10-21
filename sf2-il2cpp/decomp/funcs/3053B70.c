// NHBBOEHHEKG$$OOFFEHJNHFC @ RVA 0x3053B70

void NHBBOEHHEKG__OOFFEHJNHFC
               (System_Xml_XmlNode_o *AHDGNOJPPIB,MEHKKHFBNLM_o *DPOMBGDLHCJ,
               System_String_o *EGANPPCJHNI,UnityEngine_Sprite_o *DMMLPNCPPHD,
               UnityEngine_GameObject_o *CMMIJCJOBBF,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_Predicate_T__o *match;
  UnityEngine_Transform_o *pUVar5;
  JHHFDBLANPH_o *pJVar6;
  System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *__this;
  float fVar7;
  float fVar8;
  float zAngle;
  float fVar9;
  float fVar10;
  undefined8 in_d1;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Rect_o UVar16;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  
  uVar11 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_04565e61 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Find__);
    FUN_01bab630(&Method_NHBBOEHHEKG_POFBDJKDFAF_OGFLEOHMLGK__);
    FUN_01bab630(&NHBBOEHHEKG_POFBDJKDFAF_TypeInfo);
    FUN_01bab630(&System_Predicate<JHHFDBLANPH_MNHKJDJJINH>_TypeInfo);
    FUN_01bab630(&StringLiteral_11428);
    FUN_01bab630(&StringLiteral_14946);
    FUN_01bab630(&StringLiteral_4450);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_7065);
    DAT_04565e61 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(NHBBOEHHEKG_POFBDJKDFAF_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[1].klass = (Il2CppClass *)EGANPPCJHNI;
    thunk_FUN_01c20e04(pIVar2 + 1,EGANPPCJHNI);
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
       pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_15021,(MethodInfo *)0x0);
      fVar7 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_15134,(MethodInfo *)0x0);
        fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_11428,(MethodInfo *)0x0);
          zAngle = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_14946,(MethodInfo *)0x0);
            fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_7065,(MethodInfo *)0x0);
              fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
              if (DMMLPNCPPHD != (UnityEngine_Sprite_o *)0x0) {
                UVar16 = UnityEngine_Sprite__get_rect(DMMLPNCPPHD,(MethodInfo *)0x0);
                fVar14 = UVar16.fields.m_Width;
                UVar16 = UnityEngine_Sprite__get_rect(DMMLPNCPPHD,(MethodInfo *)0x0);
                fVar15 = UVar16.fields.m_Height;
                if (DPOMBGDLHCJ != (MEHKKHFBNLM_o *)0x0) {
                  pJVar6 = (DPOMBGDLHCJ->fields).JHHFDBLANPH;
                  if (pJVar6 == (JHHFDBLANPH_o *)0x0) {
                    bVar1 = false;
                    fVar13 = 0.0;
                    fVar12 = 0.0;
                  }
                  else {
                    __this = (pJVar6->fields).EJNOBBDDBDO;
                    match = (System_Predicate_T__o *)
                            thunk_FUN_01bda818(UVar16.fields.m_XMin,
                                               CONCAT44(uVar11,UVar16.fields.m_YMin),
                                               UVar16.fields.m_Width,
                                               System_Predicate<JHHFDBLANPH_MNHKJDJJINH>_TypeInfo);
                    System_Predicate<object>___ctor();
                    if ((__this == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0
                        ) || (pIVar2 = System_Collections_Generic_List<object>__Find
                                                 ((System_Collections_Generic_List_object__o *)
                                                  __this,match,
                                                  Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Find__
                                                 ), pIVar2 == (Il2CppObject *)0x0))
                    goto LAB_03153f90;
                    fVar12 = *(float *)&pIVar2[2].monitor;
                    fVar13 = *(float *)((long)&pIVar2[2].monitor + 4);
                    fVar14 = *(float *)((long)&pIVar2[3].klass + 4);
                    fVar15 = *(float *)&pIVar2[3].monitor;
                    bVar1 = *(char *)&pIVar2[3].klass != '\0';
                    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                    }
                    UnityEngine_Debug__LogError(StringLiteral_4450,(MethodInfo *)0x0);
                  }
                  if ((CMMIJCJOBBF != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar5 = UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0),
                     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                    value.fields.y = fVar13 - fVar8;
                    value.fields.x = fVar7 + fVar12;
                    value.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition(pUVar5,value,(MethodInfo *)0x0);
                    if (bVar1) {
                      pUVar5 = UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0);
                      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03153f90;
                      UnityEngine_Transform__Rotate(pUVar5,0.0,0.0,90.0,(MethodInfo *)0x0);
                      fVar9 = fVar9 / fVar14;
                      fVar14 = fVar10 / fVar15;
                    }
                    else {
                      fVar14 = fVar9 / fVar14;
                      fVar9 = fVar10 / fVar15;
                    }
                    pUVar5 = UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                      value_00.fields.y = fVar9;
                      value_00.fields.x = fVar14;
                      value_00.fields.z = 1.0;
                      UnityEngine_Transform__set_localScale(pUVar5,value_00,(MethodInfo *)0x0);
                      pUVar5 = UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0);
                      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                        value_01.fields.y = fVar13 * fVar9 - fVar8;
                        value_01.fields.x = fVar7 + fVar12 * fVar14;
                        value_01.fields.z = 0.0;
                        UnityEngine_Transform__set_localPosition(pUVar5,value_01,(MethodInfo *)0x0);
                        pUVar5 = UnityEngine_GameObject__get_transform
                                           (CMMIJCJOBBF,(MethodInfo *)0x0);
                        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                          UnityEngine_Transform__Rotate(pUVar5,0.0,0.0,zAngle,(MethodInfo *)0x0);
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
LAB_03153f90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

