// NLCLFNMIEJC$$KKBFNNGJOLN @ RVA 0x31DC0B4

/* WARNING: Removing unreachable block (ram,0x032dc400) */

FMOAMIIOKNP_o * NLCLFNMIEJC__KKBFNNGJOLN(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  int64_t NMECKCPAKAA;
  System_Collections_Generic_List_object__o *__this;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  OPHDIHJPHDE_o *item;
  FMOAMIIOKNP_o *__this_00;
  System_Xml_XmlNode_c *method_00;
  long lVar6;
  System_Object_array *pSVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar10._8_8_ = method;
  auVar10._0_8_ = AHDGNOJPPIB;
  if ((DAT_04566d19 & 1) == 0) {
    FUN_01bab630(&FMOAMIIOKNP_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPHDIHJPHDE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPHDIHJPHDE>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    auVar10 = FUN_01bab630(&StringLiteral_11310);
    DAT_04566d19 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    auVar11 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                        (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar11._8_8_;
    auVar10 = auVar3 << 0x40;
    if (auVar11._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (auVar11._0_8_,StringLiteral_11310,(MethodInfo *)0x0);
      NMECKCPAKAA = EIABCPKDEBD__HNIGPBMJJOL(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      __this = (System_Collections_Generic_List_object__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<OPHDIHJPHDE>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this,Method_System_Collections_Generic_List<OPHDIHJPHDE>__ctor__);
      auVar10 = (*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
      plVar4 = auVar10._0_8_;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auVar10._8_8_;
      auVar10 = auVar11 << 0x40;
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_032dc23c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_032dc23c:
          uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar8 & 1) == 0) {
            plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
            if (plVar4 == (long *)0x0) goto LAB_032dc3ac;
            lVar6 = *plVar4;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 == 0) goto LAB_032dc384;
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_032dc36c;
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_032dc29c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_032dc29c:
          auVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          AHDGNOJPPIB_00 = auVar10._0_8_;
          method_00 = auVar10._8_8_;
          if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
               (method_00 = System_Xml_XmlNode_TypeInfo,
               (AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
               (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64();
            }
          }
          item = NLCLFNMIEJC__FDCPNKPLOID(AHDGNOJPPIB_00,(MethodInfo *)method_00);
          lVar6 = Method_System_Collections_Generic_List<OPHDIHJPHDE>_Add__;
          if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar7->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar7->m_Items[(int)uVar2] = (Il2CppObject *)item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar10._0_8_,auVar10._8_8_);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_032dc36c:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_032dc3a0;
    }
  }
LAB_032dc384:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_032dc3a0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_032dc3ac:
  __this_00 = (FMOAMIIOKNP_o *)thunk_FUN_01bda818(FMOAMIIOKNP_TypeInfo);
  FMOAMIIOKNP___ctor(__this_00,NMECKCPAKAA,
                     (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)__this,
                     (MethodInfo *)0x0);
  return __this_00;
}

