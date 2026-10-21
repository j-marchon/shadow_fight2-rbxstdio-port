// LMDGNPDFNKF$$HNIHOIAMDPC @ RVA 0x3111564

/* WARNING: Removing unreachable block (ram,0x03211984) */

void LMDGNPDFNKF__HNIHOIAMDPC
               (LMDGNPDFNKF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t value;
  System_Collections_Generic_Dictionary_object__int__o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_String_o *pSVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_04566586 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_15424);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_5707);
    FUN_01bab630(&StringLiteral_8095);
                    /* try { // try from 03211614 to 0331161b has its CatchHandler @ 032116ac */
    FUN_01bab630(&StringLiteral_5706);
                    /* try { // try from 03211624 to 0331162b has its CatchHandler @ 032116a8 */
    DAT_04566586 = 1;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).NMCOKPCMEPE;
                    /* try { // try from 03211638 to 0331163f has its CatchHandler @ 032116a4 */
                    /* try { // try from 03211640 to 03311697 has its CatchHandler @ 03211534 */
  if ((pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) &&
     (System_Collections_Generic_Dictionary<object,_int>__Clear
                (pSVar3,Method_System_Collections_Generic_Dictionary<string,_int>_Clear__),
     AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) {
    plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_5707,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar9 = *plVar4;
                    /* try { // try from 032116c4 to 033116c7 has its CatchHandler @ 032116f0 */
                    /* try { // try from 032116c8 to 033116ff has its CatchHandler @ 03211534 */
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 03211700 to 03311707 has its CatchHandler @ 0321171c */
                    /* try { // try from 03211708 to 03311713 has its CatchHandler @ 03211534 */
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0321170c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
                    /* catch() { ... } // from try @ 032116c4 with catch @ 032116f0 */
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0321170c:
                    /* try { // try from 03211714 to 0331171b has its CatchHandler @ 0321171c */
        uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar10 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_03211918;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03211900;
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03211700 with catch @ 0321171c
                       catch(type#2 @ 00000000) { ... } // from try @ 03211714 with catch @ 0321171c
                        */
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0321176c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0321176c:
        JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
             ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(JHMENEKPIBO);
          }
        }
        bVar2 = EIABCPKDEBD__LGKNNMNPKGD(JHMENEKPIBO,(MethodInfo *)0x0);
        if (!bVar2) {
          if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = (System_String_o *)
                   (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
          bVar2 = System_String__op_Equality(pSVar6,StringLiteral_8095,(MethodInfo *)0x0);
          if (bVar2) {
            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar7,StringLiteral_9327,(MethodInfo *)0x0);
            pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
            pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
                     (__this->fields).NMCOKPCMEPE;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar2 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                              (pSVar3,(Il2CppObject *)pSVar6,
                               Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__
                              );
            if (bVar2) {
              pSVar6 = System_String__Concat(StringLiteral_15424,pSVar6,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
            }
            else {
              pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
                       (__this->fields).NMCOKPCMEPE;
              pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                       (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar7,StringLiteral_5706,(MethodInfo *)0x0);
              value = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
              if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_int>__Add
                        (pSVar3,(Il2CppObject *)pSVar6,value,
                         Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03211900:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03211934;
    }
  }
LAB_03211918:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03211934:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

