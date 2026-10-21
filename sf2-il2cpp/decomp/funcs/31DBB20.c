// NLCLFNMIEJC$$LCOGFACJLDA @ RVA 0x31DBB20

/* WARNING: Removing unreachable block (ram,0x032dbef8) */

void NLCLFNMIEJC__LCOGFACJLDA
               (System_Xml_XmlNode_o *AHDGNOJPPIB,FMOAMIIOKNP_o *EHBFEFHLLBB,MethodInfo *method)

{
  ushort uVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlElement_o *pSVar7;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__c *pSVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *pSVar13;
  undefined1 local_70 [4];
  undefined4 local_6c;
  int64_t local_68;
  
  if ((DAT_04566d17 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_4824);
    FUN_01bab630(&StringLiteral_5106);
    FUN_01bab630(&StringLiteral_7293);
    FUN_01bab630(&StringLiteral_11310);
    FUN_01bab630(&StringLiteral_4371);
    DAT_04566d17 = 1;
  }
  local_6c = 0;
  local_70[0] = 0;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    (*(AHDGNOJPPIB->klass->vtable)._49_RemoveAll.methodPtr)
              (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._49_RemoveAll.method);
    pSVar2 = EIABCPKDEBD__DGJFLNGMBKG(AHDGNOJPPIB,StringLiteral_11310,(MethodInfo *)0x0);
    if (EHBFEFHLLBB != (FMOAMIIOKNP_o *)0x0) {
      local_68 = (EHBFEFHLLBB->fields)._EPMGDFKEOOJ_k__BackingField;
      pSVar3 = System_Int64__ToString((int64_t)&local_68,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        pSVar13 = (EHBFEFHLLBB->fields)._APDMACJCLEG_k__BackingField;
        if (pSVar13 != (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)0x0) {
          pSVar8 = pSVar13->klass;
          uVar1._0_1_ = (pSVar8->_2).rank;
          uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
          uVar10 = (ulong)uVar1;
          if (uVar10 != 0) {
            piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo) {
                pVVar4 = pSVar8->vtable + *piVar11;
                goto LAB_032dbc98;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar4 = (VirtualInvokeData *)
                   FUN_01b81914(pSVar13,System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo
                                ,0);
LAB_032dbc98:
          plVar5 = (long *)(*pVVar4->methodPtr)(pSVar13,pVVar4->method);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar9 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_032dbd30;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_032dbd30:
            uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if ((uVar10 & 1) == 0) {
              if (plVar5 == (long *)0x0) {
                return;
              }
              lVar9 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 == 0) goto LAB_032dbe9c;
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_032dbe84;
            }
            lVar9 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_Generic_IEnumerator_OPHDIHJPHDE__c **)(piVar12 + -2) ==
                    System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_032dbd8c;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_01b81914(plVar5,
                                  System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo,0);
LAB_032dbd8c:
            lVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            pSVar7 = EIABCPKDEBD__BHPIHHJHELJ(AHDGNOJPPIB,StringLiteral_5106,(MethodInfo *)0x0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            local_6c = *(undefined4 *)(lVar9 + 0x10);
            pSVar3 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
            if (pSVar7 == (System_Xml_XmlElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (*(pSVar7->klass->vtable)._66_SetAttribute.methodPtr)
                      (pSVar7,StringLiteral_7293,pSVar3,
                       (pSVar7->klass->vtable)._66_SetAttribute.method);
            local_6c = *(undefined4 *)(lVar9 + 0x14);
            pSVar3 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
            (*(pSVar7->klass->vtable)._66_SetAttribute.methodPtr)
                      (pSVar7,StringLiteral_4824,pSVar3,
                       (pSVar7->klass->vtable)._66_SetAttribute.method);
            local_70[0] = *(undefined1 *)(lVar9 + 0x18);
            if ((bool_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar3 = System_Boolean__ToString(SUB81(local_70,0),(MethodInfo *)0x0);
            (*(pSVar7->klass->vtable)._66_SetAttribute.methodPtr)
                      (pSVar7,StringLiteral_4371,pSVar3,
                       (pSVar7->klass->vtable)._66_SetAttribute.method);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_032dbe84:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_032dbeb8;
    }
  }
LAB_032dbe9c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_032dbeb8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

