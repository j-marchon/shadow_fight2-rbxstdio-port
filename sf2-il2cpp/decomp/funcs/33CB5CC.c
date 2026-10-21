// DBHEKFDNJKG$$GPFIKPJDGND @ RVA 0x33CB5CC

/* WARNING: Removing unreachable block (ram,0x034cbb48) */
/* WARNING: Removing unreachable block (ram,0x034cbb5c) */

void DBHEKFDNJKG__GPFIKPJDGND
               (System_Xml_XmlDocument_o **LKILNGEECIJ,System_String_o *LFGKEPCBPKF,
               MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  bool bVar2;
  System_Xml_XmlDocument_o *pSVar3;
  System_Xml_XmlNode_o *JGHIJMJNJLE;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *KENFFDHLNDA;
  System_String_o *pSVar6;
  System_Collections_Generic_List_string__o *LJBHPKFCENK;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 034cb5cc to 035cb5d3 has its CatchHandler @ 034cb5d4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034cb598 with catch @ 034cb5d4
                       catch(type#2 @ 00000000) { ... } // from try @ 034cb5cc with catch @ 034cb5d4
                        */
  if ((DAT_04567e2a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_22456);
    FUN_01bab630(&StringLiteral_10239);
    FUN_01bab630(&StringLiteral_12864);
    FUN_01bab630(&StringLiteral_10213);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567e2a = 1;
  }
  method_01 = (MethodInfo *)0x1;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar3 = GIAMPEGMNHE__IBJOMPOLPCC(LFGKEPCBPKF,StringLiteral_1,1,true,true,false,(MethodInfo *)0x0)
  ;
  *LKILNGEECIJ = pSVar3;
  thunk_FUN_01c20e04(LKILNGEECIJ,pSVar3);
  pSVar3 = *LKILNGEECIJ;
  method_00 = extraout_x1;
  if (pSVar3 != (System_Xml_XmlDocument_o *)0x0) {
    auVar11 = (*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                        (pSVar3,StringLiteral_10239,(pSVar3->klass->vtable)._51_get_Item.method);
    method_00 = auVar11._8_8_;
    JGHIJMJNJLE = auVar11._0_8_;
    if (JGHIJMJNJLE != (System_Xml_XmlNode_o *)0x0) {
      plVar4 = (long *)(*(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JGHIJMJNJLE,(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
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
              goto LAB_034cb7e0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_034cb7e0:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          auVar11 = thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          method_00 = auVar11._8_8_;
          plVar4 = auVar11._0_8_;
          if (plVar4 == (long *)0x0) break;
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_034cbaa0;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_034cba88;
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_034cb840;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_034cb840:
        KENFFDHLNDA = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (KENFFDHLNDA == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((KENFFDHLNDA->klass->_2).naturalAligment < bVar1) ||
           ((KENFFDHLNDA->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(KENFFDHLNDA);
        }
        pSVar6 = (System_String_o *)
                 (*(KENFFDHLNDA->klass->vtable)._8_unknown.methodPtr)
                           (KENFFDHLNDA,(KENFFDHLNDA->klass->vtable)._8_unknown.method);
        if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(pSVar6,StringLiteral_10213,(MethodInfo *)0x0);
        if (bVar2) {
          LJBHPKFCENK = (System_Collections_Generic_List_string__o *)
                        thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)LJBHPKFCENK,
                     Method_System_Collections_Generic_List<string>__ctor__);
          DBHEKFDNJKG__ODPOCCDKKOP(KENFFDHLNDA,JGHIJMJNJLE,LJBHPKFCENK,method_01);
          __this = (System_Xml_XmlAttributeCollection_o *)
                   (*(KENFFDHLNDA->klass->vtable)._16_get_Attributes.methodPtr)
                             (KENFFDHLNDA,(KENFFDHLNDA->klass->vtable)._16_get_Attributes.method);
          if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (__this,StringLiteral_12864,(MethodInfo *)0x0);
          pSVar6 = StringLiteral_1;
          if (pSVar7 == (System_Xml_XmlAttribute_o *)0x0) {
LAB_034cba04:
            if (LJBHPKFCENK == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
          else {
            if (LJBHPKFCENK == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (0 < (LJBHPKFCENK->fields)._size) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_98,(System_Collections_Generic_List_object__o *)LJBHPKFCENK,
                         Method_System_Collections_Generic_List<string>_GetEnumerator__);
              local_80.fields._index = local_98.fields._index;
              local_80.fields._version = local_98.fields._version;
              local_80.fields._list = local_98.fields._list;
              local_80.fields._current = local_98.fields._current;
              while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                       (&local_80,
                                        Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                       ), bVar2) {
                method_01 = (MethodInfo *)0x0;
                pSVar6 = System_String__Format
                                   (StringLiteral_22456,(Il2CppObject *)pSVar6,
                                    local_80.fields._current,(MethodInfo *)0x0);
              }
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
              bVar2 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
              if (!bVar2) {
                if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar6 = System_String__Remove
                                   (pSVar6,(pSVar6->fields)._stringLength + -1,(MethodInfo *)0x0);
              }
              (*(pSVar7->klass->vtable)._10_set_Value.methodPtr)
                        (pSVar7,pSVar6,(pSVar7->klass->vtable)._10_set_Value.method);
              goto LAB_034cba04;
            }
          }
          length = (LJBHPKFCENK->fields)._size;
          (LJBHPKFCENK->fields)._size = 0;
          (LJBHPKFCENK->fields)._version = (LJBHPKFCENK->fields)._version + 1;
          if (0 < length) {
            method_01 = (MethodInfo *)0x0;
            System_Array__Clear((System_Array_o *)(LJBHPKFCENK->fields)._items,0,length,
                                (MethodInfo *)0x0);
          }
        }
      } while( true );
    }
  }
  goto LAB_034cbacc;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_034cba88:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_034cbabc;
    }
  }
LAB_034cbaa0:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_034cbabc:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  method_00 = extraout_x1_00;
LAB_034cbacc:
  DBHEKFDNJKG__GFFMEMGCOAG(*LKILNGEECIJ,method_00);
  return;
}

