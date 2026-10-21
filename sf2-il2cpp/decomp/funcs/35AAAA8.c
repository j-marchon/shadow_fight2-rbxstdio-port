// PMFNDKKBEKN$$HNIHOIAMDPC @ RVA 0x35AAAA8

/* WARNING: Removing unreachable block (ram,0x036aae38) */

void PMFNDKKBEKN__HNIHOIAMDPC
               (PMFNDKKBEKN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  System_Xml_XmlNode_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_String_o *a;
  NLPJLHOEAOE_o *__this_00;
  PJKHAJKEHEL_o *item;
  long lVar7;
  PJKHAJKEHEL_array *pPVar8;
  ulong uVar9;
  int *piVar10;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_01;
  
  if ((DAT_04568e4f & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14862);
    FUN_01bab630(&StringLiteral_11462);
    FUN_01bab630(&StringLiteral_14859);
    DAT_04568e4f = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_11462,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    FCFEFEBAILK__FAEKHJHILGP(pSVar4,(__this->fields).LJNCACBBIBD,(MethodInfo *)0x0);
    plVar5 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_14862,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_036aac34;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_036aac34:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_036aadd0;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_036aadb8;
        }
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_036aac94;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_036aac94:
        pSVar4 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (pSVar4 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar4->klass->_2).naturalAligment < bVar1) ||
           ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar4);
        }
        a = (System_String_o *)
            (*(pSVar4->klass->vtable)._8_unknown.methodPtr)
                      (pSVar4,(pSVar4->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(a,StringLiteral_14859,(MethodInfo *)0x0);
        if (bVar3) {
          __this_01 = (__this->fields).PKBACCIJGGD;
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
          if (__this_00 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          item = NLPJLHOEAOE__MDEGKNMDKPN
                           (__this_00,pSVar4,(PJKHAJKEHEL_o *)0x0,false,(MethodInfo *)0x0);
          lVar7 = Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__;
          if (__this_01 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pPVar8 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pPVar8 == (PJKHAJKEHEL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pPVar8->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pPVar8->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_036aadb8:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_036aadec;
    }
  }
LAB_036aadd0:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_036aadec:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

