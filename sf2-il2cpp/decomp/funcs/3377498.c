// IOIKBGAJIGO$$NJEMOPJFJAF @ RVA 0x3377498

/* WARNING: Removing unreachable block (ram,0x03477a68) */
/* WARNING: Removing unreachable block (ram,0x03477a6c) */
/* WARNING: Removing unreachable block (ram,0x03477af0) */
/* WARNING: Removing unreachable block (ram,0x03477b08) */

void IOIKBGAJIGO__NJEMOPJFJAF(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Il2CppObject *DDGBMJNBFPF;
  Il2CppObject *IFDOANCFKJD;
  bool bVar3;
  System_String_o *pSVar4;
  System_Xml_XmlDocument_o *pSVar5;
  long *plVar6;
  System_Collections_Generic_List_object__o *__this;
  undefined8 *puVar7;
  long *plVar8;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Object_array *pSVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567b53 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8116);
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_11934);
    FUN_01bab630(&StringLiteral_4558);
    FUN_01bab630(&StringLiteral_14877);
    FUN_01bab630(&StringLiteral_9998);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_12810);
    DAT_04567b53 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar5 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar4,StringLiteral_4558,1,true,true,false,(MethodInfo *)0x0);
  if ((((pSVar5 != (System_Xml_XmlDocument_o *)0x0) &&
       (plVar6 = (long *)(*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                                   (pSVar5,StringLiteral_11934,
                                    (pSVar5->klass->vtable)._51_get_Item.method),
       plVar6 != (long *)0x0)) &&
      (plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                                  (plVar6,StringLiteral_9998,*(undefined8 *)(*plVar6 + 0x470)),
      plVar6 != (long *)0x0)) &&
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                                 (plVar6,StringLiteral_8116,*(undefined8 *)(*plVar6 + 0x470)),
     plVar6 != (long *)0x0)) {
    method_01 = *(MethodInfo **)(*plVar6 + 0x470);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x468))(plVar6,StringLiteral_14877);
    __this = (System_Collections_Generic_List_object__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this,Method_System_Collections_Generic_List<string>__ctor__);
    pSVar4 = StringLiteral_1;
    lVar10 = Method_System_Collections_Generic_List<string>_Add__;
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar9 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar9 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar9->m_Items[(int)uVar2] = (Il2CppObject *)pSVar4;
          thunk_FUN_01c20e04();
        }
        else {
          method_01 = *(MethodInfo **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,(Il2CppObject *)pSVar4,(MethodInfo_26E4DAC *)method_01);
        }
        if ((plVar6 != (long *)0x0) &&
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210))
           , plVar6 != (long *)0x0)) {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_034777c8;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            method_01 = (MethodInfo *)0x0;
            puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_034777c8:
            uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            if ((uVar11 & 1) == 0) {
              plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
              if (plVar6 == (long *)0x0) goto LAB_03477984;
              lVar10 = *plVar6;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 == 0) goto LAB_0347795c;
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_03477944;
            }
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                  goto LAB_03477828;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_03477828:
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
              FUN_01babc64(plVar8);
            }
            pSVar4 = (System_String_o *)
                     (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
            method_01 = (MethodInfo *)0x0;
            bVar3 = System_String__op_Equality(pSVar4,StringLiteral_14870,(MethodInfo *)0x0);
            if (bVar3) {
              __this_00 = (System_Xml_XmlAttributeCollection_o *)
                          (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
              if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (__this_00,StringLiteral_12810,(MethodInfo *)0x0);
              method_01 = (MethodInfo *)0x0;
              pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
              lVar10 = Method_System_Collections_Generic_List<string>_Add__;
              pSVar9 = (__this->fields)._items;
              (__this->fields)._version = (__this->fields)._version + 1;
              if (pSVar9 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar9->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar9->m_Items[(int)uVar2] = (Il2CppObject *)pSVar4;
                thunk_FUN_01c20e04();
              }
              else {
                method_01 = *(MethodInfo **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
                System_Collections_Generic_List<object>__AddWithResize
                          (__this,(Il2CppObject *)pSVar4,(MethodInfo_26E4DAC *)method_01);
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
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03477944:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03477978;
    }
  }
LAB_0347795c:
  method_01 = (MethodInfo *)0x0;
  puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_03477978:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03477984:
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,__this,Method_System_Collections_Generic_List<string>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_80,
                            Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
        IFDOANCFKJD = local_80.fields._current, bVar3) {
    method_00 = extraout_x1;
    if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    IOIKBGAJIGO__NJEMOPJFJAF((System_String_o *)IFDOANCFKJD,method_00);
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,__this,Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          DDGBMJNBFPF = local_a0.fields._current, bVar3) {
      if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      IOIKBGAJIGO__NJEMOPJFJAF
                ((System_String_o *)IFDOANCFKJD,(System_String_o *)DDGBMJNBFPF,method_01);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return;
}

