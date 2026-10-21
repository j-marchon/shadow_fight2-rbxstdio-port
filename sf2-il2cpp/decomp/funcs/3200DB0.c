// NLPJLHOEAOE$$CAAFPEGICAI @ RVA 0x3200DB0

/* WARNING: Removing unreachable block (ram,0x033013a0) */

MEJIKMPNBNL_o *
NLPJLHOEAOE__CAAFPEGICAI
          (NLPJLHOEAOE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,bool KOGBBNEIBCO,
          MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  uint32_t JDIHKNKFJMK;
  uint32_t EHEFEIEKHJO;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  MethodInfo *__this_00;
  long *plVar9;
  undefined8 *puVar10;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  OOMHDDBCBJP_o *BANHBMINMMP;
  DNELIPCHKLK_o *__this_01;
  ACHLOMELAJE_o *__this_02;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar11;
  OOMHDDBCBJP_array *pOVar12;
  ulong uVar13;
  int *piVar14;
  
  if ((DAT_04566e2e & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_Add__);
    FUN_01bab630(&MEJIKMPNBNL_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_6396);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_12346);
    FUN_01bab630(&StringLiteral_11372);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10473);
    DAT_04566e2e = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar5,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1,(MethodInfo *)0x0);
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_6396,(MethodInfo *)0x0);
      pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1,(MethodInfo *)0x0);
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_12346,(MethodInfo *)0x0);
        iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_11372,(MethodInfo *)0x0);
          JDIHKNKFJMK = EIABCPKDEBD__FECKAJHFDJM(pSVar6,0,(MethodInfo *)0x0);
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_10473,(MethodInfo *)0x0);
            EHEFEIEKHJO = EIABCPKDEBD__FECKAJHFDJM(pSVar6,0,(MethodInfo *)0x0);
            __this_00 = (MethodInfo *)thunk_FUN_01bda818(MEJIKMPNBNL_TypeInfo);
            method_01 = (MethodInfo *)0x2;
            MEJIKMPNBNL___ctor((MEJIKMPNBNL_o *)__this_00,pSVar7,pSVar8,0 < iVar4,2,0,JDIHKNKFJMK,
                               EHEFEIEKHJO,(MethodInfo *)0x0);
            plVar9 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
            if (plVar9 != (long *)0x0) {
              plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              do {
                lVar11 = *plVar9;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_033010a0;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar10 = (undefined8 *)
                          FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_033010a0:
                uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                if ((uVar13 & 1) == 0) {
                  plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
                  if (plVar9 == (long *)0x0) {
                    return (MEJIKMPNBNL_o *)__this_00;
                  }
                  lVar11 = *plVar9;
                  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar13 == 0) goto LAB_0330132c;
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  goto LAB_03301314;
                }
                lVar11 = *plVar9;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar10 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                      goto LAB_03301100;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar10 = (undefined8 *)
                          FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_03301100:
                AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
                  bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                  if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
                     ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                      (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01babc64(AHDGNOJPPIB_00);
                  }
                }
                method_00 = __this_00;
                BANHBMINMMP = NLPJLHOEAOE__LFMNJECGNLJ
                                        (__this,AHDGNOJPPIB_00,(MEJIKMPNBNL_o *)__this_00,
                                         KOGBBNEIBCO,method_01);
                NLPJLHOEAOE__OPMPPLLIJHO((NLPJLHOEAOE_o *)BANHBMINMMP,BANHBMINMMP,method_00);
                if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                (*(BANHBMINMMP->klass->vtable)._9_GDOLJLANOKC.methodPtr)
                          (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._9_GDOLJLANOKC.method);
                if (__this_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar7 = System_String__Copy((System_String_o *)__this_00->name,(MethodInfo *)0x0);
                pSVar8 = System_String__Copy((BANHBMINMMP->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
                __this_01 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
                method_01 = (MethodInfo *)0x0;
                DNELIPCHKLK___ctor(__this_01,pSVar7,pSVar8,StringLiteral_1,(MethodInfo *)0x0);
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
                __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                if (__this_02 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar3 = ACHLOMELAJE__FPFOAMMHLFG(__this_02,__this_01,(MethodInfo *)0x0);
                bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
                if ((bVar1 <= (BANHBMINMMP->klass->_2).naturalAligment) &&
                   ((BANHBMINMMP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                    (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
                  bVar3 = *(char *)((long)&BANHBMINMMP[1].fields.LFJPDELEIHG + 4) == '\0';
                }
                (BANHBMINMMP->fields).HHDBIGKBMEC = bVar3;
                lVar11 = Method_System_Collections_Generic_List<OOMHDDBCBJP>_Add__;
                __this_03 = (System_Collections_Generic_List_OOMHDDBCBJP__o *)__this_00->parameters;
                if (__this_03 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pOVar12 = (__this_03->fields)._items;
                (__this_03->fields)._version = (__this_03->fields)._version + 1;
                if (pOVar12 == (OOMHDDBCBJP_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (__this_03->fields)._size;
                if (uVar2 < (uint)pOVar12->max_length) {
                  (__this_03->fields)._size = uVar2 + 1;
                  pOVar12->m_Items[(int)uVar2] = BANHBMINMMP;
                  thunk_FUN_01c20e04(pOVar12->m_Items + (int)uVar2,BANHBMINMMP);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_03,
                             (Il2CppObject *)BANHBMINMMP,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
              } while( true );
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_03301314:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03301348;
    }
  }
LAB_0330132c:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_03301348:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return (MEJIKMPNBNL_o *)__this_00;
}

