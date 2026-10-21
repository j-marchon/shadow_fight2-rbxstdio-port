// IFKFDFGNMMN$$CDEIIJGKFBB @ RVA 0x31B9B38

/* WARNING: Removing unreachable block (ram,0x032ba084) */
/* WARNING: Removing unreachable block (ram,0x032b9ff8) */
/* WARNING: Removing unreachable block (ram,0x032ba00c) */
/* WARNING: Removing unreachable block (ram,0x032ba010) */

void IFKFDFGNMMN__CDEIIJGKFBB
               (IFKFDFGNMMN_o *__this,System_Xml_XmlNode_o *EDEHNHIHDDH,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  HOOAAGABMBL_array *pHVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_String_o *pSVar10;
  HOOAAGABMBL_o *pHVar11;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined8 uVar12;
  long lVar13;
  System_Collections_Generic_List_PKKLIJLIKGF__o *pSVar14;
  ulong uVar15;
  int *piVar16;
  HOOAAGABMBL_array **ppHVar17;
  DOPEEDABNEK_o *__this_00;
  long lVar18;
  uint local_64;
  
  if ((DAT_04566bd3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HOOAAGABMBL___TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Clear__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5594);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_10602);
    FUN_01bab630(&StringLiteral_464);
    FUN_01bab630(&StringLiteral_5703);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566bd3 = 1;
  }
  if ((EDEHNHIHDDH != (System_Xml_XmlNode_o *)0x0) &&
     (plVar4 = (long *)(*(EDEHNHIHDDH->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (EDEHNHIHDDH,(EDEHNHIHDDH->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar4 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    pHVar5 = (HOOAAGABMBL_array *)FUN_01bab718(HOOAAGABMBL___TypeInfo,uVar3);
    ppHVar17 = &(__this->fields).HJCHDJBLAAG;
    *ppHVar17 = pHVar5;
    thunk_FUN_01c20e04(ppHVar17,pHVar5);
    local_64 = 0;
    plVar4 = (long *)(*(EDEHNHIHDDH->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (EDEHNHIHDDH,(EDEHNHIHDDH->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar13 = *plVar4;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_032b9d04;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_032b9d04:
        uVar15 = (*(code *)*puVar6)(plVar4,puVar6[1]);
        if ((uVar15 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar13 = *plVar4;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 == 0) goto LAB_032b9fc8;
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_032b9fb0;
        }
        lVar13 = *plVar4;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_032b9d64;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_032b9d64:
        plVar7 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar7);
        }
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_9327,(MethodInfo *)0x0);
        if (pSVar9 == (System_Xml_XmlAttribute_o *)0x0) {
          pSVar10 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
          pSVar10 = System_String__Concat
                              (StringLiteral_10602,pSVar10,StringLiteral_464,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
        }
        else {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04563eaa == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04563eaa = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
          if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_9327,(MethodInfo *)0x0);
          pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1,(MethodInfo *)0x0);
          if (__this_00 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar11 = DOPEEDABNEK__CKKIPBAIEMN(__this_00,pSVar10,(MethodInfo *)0x0);
          if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar11 = (HOOAAGABMBL_o *)
                    (*(pHVar11->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                              (pHVar11,(pHVar11->klass->vtable)._7_FAOBHLCDKJI.method);
          AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                        (**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_5703,*(undefined8 *)(*plVar7 + 0x470));
          if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar14 = (pHVar11->fields)._LCJBEIKDDNA_k__BackingField;
          if (pSVar14 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          length = (pSVar14->fields)._size;
          (pSVar14->fields)._size = 0;
          (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar14->fields)._items,0,length,
                                (MethodInfo *)0x0);
          }
          HOOAAGABMBL__FLDHLLKFPLJ(pHVar11,AHDGNOJPPIB,(MethodInfo *)0x0);
          uVar2 = local_64;
          pHVar5 = *ppHVar17;
          if (pHVar5 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          lVar18 = (long)(int)local_64;
          lVar13 = thunk_FUN_01bda71c(pHVar11,(((pHVar5->obj).klass)->_1).element_class);
          if (lVar13 == 0) {
            uVar12 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar12,0);
          }
          if ((uint)pHVar5->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pHVar5->m_Items[lVar18] = pHVar11;
          thunk_FUN_01c20e04(pHVar5->m_Items + lVar18,pHVar11);
        }
        local_64 = local_64 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_032b9fb0:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_032b9fe4;
    }
  }
LAB_032b9fc8:
  puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_032b9fe4:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
  return;
}

