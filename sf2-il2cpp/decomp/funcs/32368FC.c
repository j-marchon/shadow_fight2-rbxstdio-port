// NLGPPDPDGPH$$HNIHOIAMDPC @ RVA 0x32368FC

/* WARNING: Removing unreachable block (ram,0x03336d1c) */

bool NLGPPDPDGPH__HNIHOIAMDPC
               (NLGPPDPDGPH_o *__this,JMDPBFOCHHP_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  JMDPBFOCHHP_NFKNNOPFJEE_o *__this_00;
  undefined8 *puVar5;
  long *plVar6;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar7;
  System_String_o *str1;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_0456702a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JMDPBFOCHHP_NFKNNOPFJEE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_13826);
    FUN_01bab630(&StringLiteral_14981);
    FUN_01bab630(&StringLiteral_8588);
    FUN_01bab630(&StringLiteral_10146);
    FUN_01bab630(&StringLiteral_855);
    DAT_0456702a = 1;
  }
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  if ((LKILNGEECIJ == (System_Xml_XmlDocument_o *)0x0) ||
     (plVar4 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                                 (LKILNGEECIJ,StringLiteral_8588,
                                  (LKILNGEECIJ->klass->vtable)._51_get_Item.method),
     plVar4 == (long *)0x0)) goto LAB_03336d14;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                             (plVar4,StringLiteral_14981,*(undefined8 *)(*plVar4 + 0x470));
  __this_00 = (JMDPBFOCHHP_NFKNNOPFJEE_o *)thunk_FUN_01bda818(JMDPBFOCHHP_NFKNNOPFJEE_TypeInfo);
  JMDPBFOCHHP_NFKNNOPFJEE___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (JMDPBFOCHHP_NFKNNOPFJEE_o *)0x0) goto LAB_03336d14;
  (__this_00->fields).NPGIJEJKNKO = (__this->fields).FNBDGJPPKKO;
  thunk_FUN_01c20e04();
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03336af0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03336af0:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) goto LAB_03336cc8;
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_03336c9c;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_03336c84;
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_03336b50;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03336b50:
        plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar6);
        }
        iVar3 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
        if (iVar3 == 1) {
          __this_01 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          if (__this_01 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (__this_01,StringLiteral_13826,(MethodInfo *)0x0);
          pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
          str1 = (System_String_o *)
                 (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
          bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar7,(MethodInfo *)0x0);
          if (bVar2) {
            pSVar7 = System_String__Concat
                               (StringLiteral_10146,str1,StringLiteral_855,(MethodInfo *)0x0);
            KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar7,(MethodInfo *)0x0);
          }
          else {
            __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this_00->fields).MKOLIPBIAHP;
            if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (__this_02,(Il2CppObject *)pSVar7,(Il2CppObject *)str1,
                       Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
          }
        }
      } while( true );
    }
    goto LAB_03336d14;
  }
  goto LAB_03336cc8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03336c84:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03336cb8;
    }
  }
LAB_03336c9c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03336cb8:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_03336cc8:
  if (GALCGHPGAIB != (JMDPBFOCHHP_o *)0x0) {
    JMDPBFOCHHP__JBIIFMPKKEK(GALCGHPGAIB,__this_00,(MethodInfo *)0x0);
    return true;
  }
LAB_03336d14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

