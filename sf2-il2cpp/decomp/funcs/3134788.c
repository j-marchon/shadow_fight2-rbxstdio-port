// EIABCPKDEBD$$KBMBOMFNMNH @ RVA 0x3134788

/* WARNING: Removing unreachable block (ram,0x03234a14) */

System_Xml_XmlAttribute_o *
EIABCPKDEBD__KBMBOMFNMNH
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *BMEDCFOKBDH,
          System_String_o *MCAGJECFCOH,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_045666f3 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    DAT_045666f3 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttribute_o *)0x0;
  }
  else {
    plVar3 = (long *)(*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      do {
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03234870;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03234870:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          pSVar5 = (System_Xml_XmlAttribute_o *)0x0;
          goto LAB_03234968;
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_032348d0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_032348d0:
        pSVar5 = (System_Xml_XmlAttribute_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
        if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
           ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar5);
        }
        pSVar6 = (System_String_o *)
                 (*(pSVar5->klass->vtable)._8_get_Name.methodPtr)
                           (pSVar5,(pSVar5->klass->vtable)._8_get_Name.method);
        if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(pSVar6,BMEDCFOKBDH,(MethodInfo *)0x0);
      } while (!bVar2);
      pSVar6 = (System_String_o *)
               (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
      if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(pSVar6,MCAGJECFCOH,(MethodInfo *)0x0);
    } while (!bVar2);
LAB_03234968:
    plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_032349d0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_032349d0:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
  return pSVar5;
}

