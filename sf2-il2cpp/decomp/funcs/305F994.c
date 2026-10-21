// ACHLOMELAJE$$JGGBOFPNLOK @ RVA 0x305F994

/* WARNING: Removing unreachable block (ram,0x0315fc8c) */
/* WARNING: Removing unreachable block (ram,0x0315fd2c) */

void ACHLOMELAJE__JGGBOFPNLOK
               (ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,bool BGLBPHDOCGK,
               MethodInfo *method)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  System_Xml_XmlNode_o *pSVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  System_Collections_Generic_List_string__o *pSVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_04565eb7 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Remove__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_9951);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565eb7 = 1;
  }
  uVar2 = StringLiteral_9951;
  pSVar4 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
    lVar5 = (*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                      (pSVar4,StringLiteral_9951,(pSVar4->klass->vtable)._51_get_Item.method);
    if (lVar5 == 0) {
      return;
    }
    pSVar4 = (__this->fields).super.HJKLIDCAEOE;
    if (((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
        (plVar6 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                                    (pSVar4,uVar2,(pSVar4->klass->vtable)._51_get_Item.method),
        plVar6 != (long *)0x0)) &&
       (plVar7 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210)),
       plVar7 != (long *)0x0)) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar5 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0315fb18;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_0315fb18:
        uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar11 & 1) == 0) goto LAB_0315fc0c;
        lVar5 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0315fb78;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0315fb78:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar5 = *plVar9;
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar9);
        }
        __this_00 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(lVar5 + 0x238))(plVar9,*(undefined8 *)(lVar5 + 0x240));
        if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
        a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
        bVar3 = System_String__op_Equality(a,KGLJICLJHEL,(MethodInfo *)0x0);
      } while (!bVar3);
      (**(code **)(*plVar6 + 0x2c8))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x2d0));
LAB_0315fc0c:
      plVar6 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0315fc74;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0315fc74:
        (*(code *)*puVar8)(plVar6,puVar8[1]);
      }
      pSVar10 = (__this->fields).MPBEGAIIEAC;
      if (pSVar10 != (System_Collections_Generic_List_string__o *)0x0) {
        bVar3 = System_Collections_Generic_List<object>__Contains
                          ((System_Collections_Generic_List_object__o *)pSVar10,
                           (Il2CppObject *)KGLJICLJHEL,
                           Method_System_Collections_Generic_List<string>_Contains__);
        if (bVar3) {
          pSVar10 = (__this->fields).MPBEGAIIEAC;
          if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0315fd24;
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar10,
                     (Il2CppObject *)KGLJICLJHEL,
                     Method_System_Collections_Generic_List<string>_Remove__);
        }
        if (!BGLBPHDOCGK) {
          return;
        }
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0315fd24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

