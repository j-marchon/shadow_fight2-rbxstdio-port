// GBAAAJLKFDA$$KCEBKFGFKIF @ RVA 0x31E16B8

/* WARNING: Removing unreachable block (ram,0x032e1d1c) */

System_Collections_Generic_List_ValueTuple_int__string___o *
GBAAAJLKFDA__KCEBKFGFKIF(GBAAAJLKFDA_o *__this,System_String_o *CJFAPGEEPLM,MethodInfo *method)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  System_ValueTuple_int__object__o item;
  System_Uri_o *uri;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_ValueTuple_int__string___o *__this_00;
  Il2CppMethodPointer *ppIVar6;
  long lVar7;
  System_String_o *pSVar8;
  undefined8 *puVar9;
  System_String_o *pSVar10;
  System_UriBuilder_o *__this_01;
  System_String_o **ppSVar11;
  MethodInfo_2BC3064 *in_x4;
  HGAPAPKMHCF_ServiceZonesConfig__c *pHVar12;
  long lVar13;
  System_ValueTuple_int__string__array *pSVar14;
  ulong uVar15;
  int32_t *piVar16;
  int *piVar17;
  long *plVar18;
  HGAPAPKMHCF_ServiceZonesConfig__o *pHVar19;
  long *plVar20;
  System_ValueTuple_int__object__o __this_02;
  Il2CppObject *local_88;
  System_String_o *pSStack_80;
  System_Uri_o *local_78;
  System_String_o *local_70;
  System_Uri_o *local_68;
  
  if ((DAT_04566d47 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<ServiceZone>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<ServiceZone>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<int,_ServiceZone>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<string,_string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ValueTuple<int,_string>>_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<ServiceZonesConfig>_TypeInfo);
    FUN_01bab630(&System_UriBuilder_TypeInfo);
    FUN_01bab630(&System_Uri_TypeInfo);
    FUN_01bab630(&Method_System_ValueTuple<int,_string>__ctor__);
    FUN_01bab630(&StringLiteral_802);
    FUN_01bab630(&StringLiteral_18862);
    FUN_01bab630(&StringLiteral_7876);
    DAT_04566d47 = 1;
  }
  local_70 = (System_String_o *)0x0;
  local_68 = (System_Uri_o *)0x0;
  local_78 = (System_Uri_o *)0x0;
  __this_00 = (System_Collections_Generic_List_ValueTuple_int__string___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ValueTuple<int,_string>>_TypeInfo);
  System_Collections_Generic_List<ValueTuple<int,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<ValueTuple<int,_string>>__ctor__);
  pHVar19 = (__this->fields).OAOMFCGPCBP;
  if (pHVar19 != (HGAPAPKMHCF_ServiceZonesConfig__o *)0x0) {
    pHVar12 = pHVar19->klass;
    uVar2._0_1_ = (pHVar12->_2).rank;
    uVar2._1_1_ = (pHVar12->_2).minimumAlignment;
    uVar15 = (ulong)uVar2;
    if (uVar15 != 0) {
      piVar16 = &((pHVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)MJPJANJNDCI<ServiceZonesConfig>_TypeInfo) {
          ppIVar6 = &pHVar12->vtable[*piVar16].methodPtr;
          goto LAB_032e1838;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    ppIVar6 = (Il2CppMethodPointer *)
              FUN_01b81914(pHVar19,MJPJANJNDCI<ServiceZonesConfig>_TypeInfo,0);
LAB_032e1838:
    lVar7 = (**ppIVar6)(pHVar19,(MethodInfo *)ppIVar6[1]);
    if (lVar7 == 0) {
      return __this_00;
    }
    if ((System_Uri_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = System_Uri__TryCreate(CJFAPGEEPLM,1,&local_68,(MethodInfo *)0x0);
    if (!bVar4) {
      pSVar8 = LOHCAIACKLI__AHFEHPEEIDJ(CJFAPGEEPLM,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat(StringLiteral_7876,pSVar8,StringLiteral_802,(MethodInfo *)0x0);
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar8,(MethodInfo *)0x0);
      return __this_00;
    }
    if (local_68 != (System_Uri_o *)0x0) {
      pSVar8 = System_Uri__get_Authority(local_68,(MethodInfo *)0x0);
      plVar18 = *(long **)(lVar7 + 0x18);
      if (plVar18 != (long *)0x0) {
        lVar7 = *plVar18;
        uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IReadOnlyDictionary_int__ServiceZone__c **)
                 (piVar17 + -2) ==
                System_Collections_Generic_IReadOnlyDictionary<int,_ServiceZone>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar17 + 4) * 0x10 + 0x138);
              goto LAB_032e1938;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01b81914(plVar18,
                              System_Collections_Generic_IReadOnlyDictionary<int,_ServiceZone>_TypeInfo
                              ,4);
LAB_032e1938:
        plVar18 = (long *)(*(code *)*puVar9)(plVar18,puVar9[1]);
        if (plVar18 != (long *)0x0) {
          lVar7 = *plVar18;
          uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerable_ServiceZone__c **)(piVar17 + -2) ==
                  System_Collections_Generic_IEnumerable<ServiceZone>_TypeInfo) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_032e19a0;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01b81914(plVar18,System_Collections_Generic_IEnumerable<ServiceZone>_TypeInfo
                                ,0);
LAB_032e19a0:
          plVar18 = (long *)(*(code *)*puVar9)(plVar18,puVar9[1]);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar7 = *plVar18;
            uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar9 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_032e1a20;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar9 = (undefined8 *)FUN_01b81914(plVar18,System_Collections_IEnumerator_TypeInfo,0);
LAB_032e1a20:
            uVar15 = (*(code *)*puVar9)(plVar18,puVar9[1]);
            if ((uVar15 & 1) == 0) {
              if (plVar18 == (long *)0x0) {
                return __this_00;
              }
              lVar7 = *plVar18;
              uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar15 == 0) goto LAB_032e1ca4;
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              goto LAB_032e1c8c;
            }
            lVar7 = *plVar18;
            uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(System_Collections_Generic_IEnumerator_ServiceZone__c **)(piVar17 + -2) ==
                    System_Collections_Generic_IEnumerator<ServiceZone>_TypeInfo) {
                  puVar9 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_032e1a7c;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_01b81914(plVar18,
                                  System_Collections_Generic_IEnumerator<ServiceZone>_TypeInfo,0);
LAB_032e1a7c:
            lVar7 = (*(code *)*puVar9)(plVar18,puVar9[1]);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            plVar20 = *(long **)(lVar7 + 0x18);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            lVar13 = *plVar20;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(System_Collections_Generic_IReadOnlyDictionary_string__string__c **)
                     (piVar17 + -2) ==
                    System_Collections_Generic_IReadOnlyDictionary<string,_string>_TypeInfo) {
                  puVar9 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_032e1ae8;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_01b81914(plVar20,
                                  System_Collections_Generic_IReadOnlyDictionary<string,_string>_TypeInfo
                                  ,1);
LAB_032e1ae8:
            uVar15 = (*(code *)*puVar9)(plVar20,pSVar8,&local_70,puVar9[1]);
            if ((uVar15 & 1) != 0) {
              pSVar10 = System_String__Concat(StringLiteral_18862,local_70,(MethodInfo *)0x0);
              if ((System_Uri_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar4 = System_Uri__TryCreate(pSVar10,1,&local_78,(MethodInfo *)0x0);
              uri = local_68;
              if (bVar4) {
                __this_01 = (System_UriBuilder_o *)thunk_FUN_01bda818(System_UriBuilder_TypeInfo);
                System_UriBuilder___ctor(__this_01,uri,(MethodInfo *)0x0);
                if (local_78 == (System_Uri_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar10 = System_Uri__get_Host(local_78,(MethodInfo *)0x0);
                if (__this_01 == (System_UriBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                System_UriBuilder__set_Host(__this_01,pSVar10,(MethodInfo *)0x0);
                if (local_78 == (System_Uri_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar4 = System_Uri__get_IsDefaultPort(local_78,(MethodInfo *)0x0);
                if (bVar4) {
                  iVar5 = -1;
                }
                else {
                  if (local_78 == (System_Uri_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  iVar5 = System_Uri__get_Port(local_78,(MethodInfo *)0x0);
                }
                System_UriBuilder__set_Port(__this_01,iVar5,(MethodInfo *)0x0);
                uVar1 = *(undefined4 *)(lVar7 + 0x10);
                iVar5 = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                                  (__this_01,(__this_01->klass->vtable)._3_ToString.method);
                local_88 = (Il2CppObject *)0x0;
                pSStack_80 = (System_String_o *)0x0;
                __this_02.fields.Item2._0_4_ = uVar1;
                __this_02.fields._0_8_ = &local_88;
                __this_02.fields.Item2._4_4_ = 0;
                System_ValueTuple<int,_object>___ctor
                          (__this_02,iVar5,Method_System_ValueTuple<int,_string>__ctor__,in_x4);
                lVar7 = Method_System_Collections_Generic_List<ValueTuple<int,_string>>_Add__;
                if (__this_00 == (System_Collections_Generic_List_ValueTuple_int__string___o *)0x0)
                {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                item.fields.Item2 = (Il2CppObject *)pSStack_80;
                item.fields._0_8_ = local_88;
                pSVar14 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pSVar14 == (System_ValueTuple_int__string__array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar3 = (__this_00->fields)._size;
                if (uVar3 < (uint)pSVar14->max_length) {
                  (__this_00->fields)._size = uVar3 + 1;
                  ppSVar11 = &pSVar14->m_Items[(int)uVar3].fields.Item2;
                  *ppSVar11 = pSStack_80;
                  *(Il2CppObject **)&pSVar14->m_Items[(int)uVar3].fields = local_88;
                  thunk_FUN_01c20e04(ppSVar11,0);
                }
                else {
                  System_Collections_Generic_List<ValueTuple<int,_object>>__AddWithResize
                            ((System_Collections_Generic_List_T__o *)__this_00,item,
                             *(MethodInfo_26954D8 **)
                              (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_032e1c8c:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_032e1cc0;
    }
  }
LAB_032e1ca4:
  puVar9 = (undefined8 *)FUN_01b81914(plVar18,System_IDisposable_TypeInfo,0);
LAB_032e1cc0:
  (*(code *)*puVar9)(plVar18,puVar9[1]);
  return __this_00;
}

