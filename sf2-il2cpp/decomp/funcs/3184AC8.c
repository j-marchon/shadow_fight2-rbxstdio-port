// CAJHCLGOFMJ$$CODMHIEOCJM @ RVA 0x3184AC8

/* WARNING: Removing unreachable block (ram,0x03284f08) */

void CAJHCLGOFMJ__CODMHIEOCJM(CAJHCLGOFMJ_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_Dictionary_object__int__o *pSVar6;
  System_Xml_XmlNode_o *pSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  long *plVar10;
  System_Xml_XmlAttributeCollection_o *pSVar11;
  System_Xml_XmlAttribute_o *pSVar12;
  System_String_o *pSVar13;
  undefined8 *puVar14;
  System_Collections_IEnumerator_c *pSVar15;
  long lVar16;
  ulong uVar17;
  int32_t *piVar18;
  int *piVar19;
  int local_44;
  
  if ((DAT_045669d3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14864);
    FUN_01bab630(&StringLiteral_14785);
    FUN_01bab630(&StringLiteral_1606);
    DAT_045669d3 = 1;
  }
  local_44 = 0;
  bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                      (pSVar6,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    if (bVar4) {
      pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
      if (pSVar6 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        iVar5 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                          (pSVar6,(Il2CppObject *)KGLJICLJHEL,
                           Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
        local_44 = iVar5 + 1;
        pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)
                 (__this->fields).OCFIONIBFOF;
        if (pSVar6 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          System_Collections_Generic_Dictionary<object,_int>__set_Item
                    (pSVar6,(Il2CppObject *)KGLJICLJHEL,local_44,
                     Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
          pSVar7 = (__this->fields).HJKLIDCAEOE;
          if (pSVar7 != (System_Xml_XmlNode_o *)0x0) {
            pSVar8 = System_Xml_XmlNode__GetEnumerator(pSVar7,(MethodInfo *)0x0);
            if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              pSVar15 = pSVar8->klass;
              uVar2._0_1_ = (pSVar15->_2).rank;
              uVar2._1_1_ = (pSVar15->_2).minimumAlignment;
              uVar17 = (ulong)uVar2;
              if (uVar17 != 0) {
                piVar18 = &((pSVar15->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                      (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                    pVVar9 = pSVar15->vtable + *piVar18;
                    goto LAB_03284c74;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              pVVar9 = (VirtualInvokeData *)
                       FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_03284c74:
              uVar17 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
              if ((uVar17 & 1) == 0) {
                plVar10 = (long *)thunk_FUN_01bda71c(pSVar8,System_IDisposable_TypeInfo);
                if (plVar10 == (long *)0x0) {
                  return;
                }
                lVar16 = *plVar10;
                uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar17 == 0) goto LAB_03284e00;
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                goto LAB_03284de8;
              }
              pSVar15 = pSVar8->klass;
              uVar3._0_1_ = (pSVar15->_2).rank;
              uVar3._1_1_ = (pSVar15->_2).minimumAlignment;
              uVar17 = (ulong)uVar3;
              if (uVar17 != 0) {
                piVar18 = &((pSVar15->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                      (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                    pVVar9 = pSVar15->vtable + (*piVar18 + 1);
                    goto LAB_03284cd4;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              pVVar9 = (VirtualInvokeData *)
                       FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_03284cd4:
              plVar10 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(System_Xml_XmlNode_c **)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(plVar10);
              }
              pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                        (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
              if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (pSVar11,StringLiteral_9327,(MethodInfo *)0x0);
              if (pSVar12 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar13 = (System_String_o *)
                        (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                  (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method);
              if (pSVar13 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar4 = System_String__Equals(pSVar13,KGLJICLJHEL,(MethodInfo *)0x0);
              if (bVar4) {
                pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                          (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240))
                ;
                if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar11,StringLiteral_14864,(MethodInfo *)0x0);
                pSVar13 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
                if (pSVar12 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8(pSVar13,pSVar13);
                }
                (*(pSVar12->klass->vtable)._10_set_Value.methodPtr)
                          (pSVar12,pSVar13,(pSVar12->klass->vtable)._10_set_Value.method);
              }
            } while( true );
          }
        }
      }
    }
    else {
      pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
      if (pSVar6 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_int>__Add
                  (pSVar6,(Il2CppObject *)KGLJICLJHEL,1,
                   Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
        pSVar7 = EIABCPKDEBD__KPODFFHOHGK
                           ((__this->fields).HJKLIDCAEOE,StringLiteral_14785,(MethodInfo *)0x0);
        pSVar12 = EIABCPKDEBD__HBGAGFJBGKD(pSVar7,StringLiteral_9327,(MethodInfo *)0x0);
        if (pSVar12 != (System_Xml_XmlAttribute_o *)0x0) {
          (*(pSVar12->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar12,KGLJICLJHEL,(pSVar12->klass->vtable)._10_set_Value.method);
          pSVar12 = EIABCPKDEBD__HBGAGFJBGKD(pSVar7,StringLiteral_14864,(MethodInfo *)0x0);
          if (pSVar12 != (System_Xml_XmlAttribute_o *)0x0) {
            (*(pSVar12->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar12,StringLiteral_1606,(pSVar12->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_03284de8:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar14 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_03284e1c;
    }
  }
LAB_03284e00:
  puVar14 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_03284e1c:
  (*(code *)*puVar14)(plVar10,puVar14[1]);
  return;
}

