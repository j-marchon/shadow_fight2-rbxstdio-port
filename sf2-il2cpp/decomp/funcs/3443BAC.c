// CGALNIOABHK$$MKJOEPDDOJP @ RVA 0x3443BAC

/* WARNING: Removing unreachable block (ram,0x03544068) */

System_Collections_Generic_List_KAFCPHCBLPL__o *
CGALNIOABHK__MKJOEPDDOJP(System_Xml_XmlNode_o *OBDMHHJBLKL,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int32_t iVar5;
  System_Collections_Generic_List_KAFCPHCBLPL__o *__this;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *OBDMHHJBLKL_00;
  System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK;
  KAFCPHCBLPL_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  MethodInfo *in_x3;
  long lVar10;
  KAFCPHCBLPL_array *pKVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar15;
  
  auVar14._8_8_ = method;
  auVar14._0_8_ = OBDMHHJBLKL;
  if ((DAT_04568238 & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&KAFCPHCBLPL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAFCPHCBLPL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAFCPHCBLPL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KAFCPHCBLPL>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4577);
    FUN_01bab630(&StringLiteral_6581);
    auVar14 = FUN_01bab630(&StringLiteral_6477);
    DAT_04568238 = 1;
  }
  if (OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) {
    auVar14 = (*(OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.methodPtr)
                        (OBDMHHJBLKL,(OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.method);
    plVar6 = auVar14._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar14._8_8_;
    auVar14 = auVar3 << 0x40;
    if (plVar6 != (long *)0x0) {
      iVar5 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      __this = (System_Collections_Generic_List_KAFCPHCBLPL__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<KAFCPHCBLPL>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this,iVar5,
                 Method_System_Collections_Generic_List<KAFCPHCBLPL>__ctor__);
      auVar14 = (*(OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.methodPtr)
                          (OBDMHHJBLKL,(OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.method);
      plVar6 = auVar14._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar14._8_8_;
      auVar14 = auVar4 << 0x40;
      if (plVar6 != (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_03543d60;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03543d60:
          uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar12 & 1) == 0) {
            plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
            if (plVar6 == (long *)0x0) {
              return __this;
            }
            lVar10 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 == 0) goto LAB_03543fe8;
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_03543fd0;
          }
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_03543dc0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_03543dc0:
          OBDMHHJBLKL_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (OBDMHHJBLKL_00 != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((OBDMHHJBLKL_00->klass->_2).naturalAligment < bVar1) ||
               ((OBDMHHJBLKL_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(OBDMHHJBLKL_00);
            }
          }
          if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          AHEFOIOKDOK = CGALNIOABHK__MLJDPILPJDE
                                  (StringLiteral_4577,OBDMHHJBLKL_00,
                                   (System_Collections_Generic_List_XmlNode__o *)0x0,in_x3);
          __this_00 = (KAFCPHCBLPL_o *)thunk_FUN_01bda818(KAFCPHCBLPL_TypeInfo);
          KAFCPHCBLPL___ctor(__this_00,AHEFOIOKDOK,(MethodInfo *)0x0);
          if (OBDMHHJBLKL_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (*(OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.methodPtr)
                             (OBDMHHJBLKL_00,
                              (OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.method);
          if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_6477,(MethodInfo *)0x0);
          if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
            if (__this_00 == (KAFCPHCBLPL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (__this_00->fields).FMGLHJDODPA = false;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.methodPtr)
                               (OBDMHHJBLKL_00,
                                (OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_6477,(MethodInfo *)0x0);
            iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                     CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               (iVar5,(MethodInfo *)0x0);
            (__this_00->fields).JAHFGPMFLGN.fields = CVar15;
          }
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (*(OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.methodPtr)
                             (OBDMHHJBLKL_00,
                              (OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.method);
          if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_6581,(MethodInfo *)0x0);
          if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
            if (__this_00 == (KAFCPHCBLPL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (__this_00->fields).FMGLHJDODPA = true;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.methodPtr)
                               (OBDMHHJBLKL_00,
                                (OBDMHHJBLKL_00->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_6581,(MethodInfo *)0x0);
            iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                     CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               (iVar5,(MethodInfo *)0x0);
            (__this_00->fields).JAHFGPMFLGN.fields = CVar15;
          }
          lVar10 = Method_System_Collections_Generic_List<KAFCPHCBLPL>_Add__;
          if (__this == (System_Collections_Generic_List_KAFCPHCBLPL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pKVar11 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pKVar11 == (KAFCPHCBLPL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pKVar11->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pKVar11->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pKVar11->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
            ;
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar14._0_8_,auVar14._8_8_);
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03543fd0:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03544004;
    }
  }
LAB_03543fe8:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03544004:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return __this;
}

