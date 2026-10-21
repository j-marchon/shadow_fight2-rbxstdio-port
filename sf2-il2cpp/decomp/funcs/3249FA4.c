// JJBMNHGADNC$$HNIHOIAMDPC @ RVA 0x3249FA4

/* WARNING: Removing unreachable block (ram,0x0334a344) */

void JJBMNHGADNC__HNIHOIAMDPC
               (JJBMNHGADNC_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  GEIHBHEDJJM_o *__this_00;
  long lVar9;
  GEIHBHEDJJM_array *pGVar10;
  ulong uVar11;
  int *piVar12;
  System_Collections_Generic_List_GEIHBHEDJJM__o *__this_01;
  
  if ((DAT_045670e8 & 1) == 0) {
    FUN_01bab630(&GEIHBHEDJJM_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEIHBHEDJJM>_Add__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14694);
    DAT_045670e8 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
    (__this->fields).DEKCPPOJFEH = pSVar5;
    thunk_FUN_01c20e04();
    plVar6 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0334a13c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0334a13c:
        uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar11 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 == 0) goto LAB_0334a2e0;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0334a2c8;
        }
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0334a19c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0334a19c:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        __this_01 = (__this->fields).KDAEMPOJNJJ;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_14694,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar4,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        __this_00 = (GEIHBHEDJJM_o *)thunk_FUN_01bda818(GEIHBHEDJJM_TypeInfo);
        GEIHBHEDJJM___ctor(__this_00,pSVar5,(MethodInfo *)0x0);
        lVar9 = Method_System_Collections_Generic_List<GEIHBHEDJJM>_Add__;
        if (__this_01 == (System_Collections_Generic_List_GEIHBHEDJJM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pGVar10 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pGVar10 == (GEIHBHEDJJM_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pGVar10->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pGVar10->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pGVar10->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0334a2c8:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0334a2fc;
    }
  }
LAB_0334a2e0:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0334a2fc:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

