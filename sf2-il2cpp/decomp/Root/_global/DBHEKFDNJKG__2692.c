// TypeDefIndex 2692
// Namespace: 
// public static class DBHEKFDNJKG
// Fields:

// ===== public static void GPFIKPJDGND(ref XmlDocument LKILNGEECIJ, string LFGKEPCBPKF)  [RVA 0x33CB5CC]
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
    FUN_01bab630(&StringLiteral_22456/*"{0}{1}|"*/);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567e2a = 1;
  }
  method_01 = (MethodInfo *)0x1;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar3 = GIAMPEGMNHE__IBJOMPOLPCC(LFGKEPCBPKF,StringLiteral_1/*""*/,1,true,true,false,(MethodInfo *)0x0)
  ;
  *LKILNGEECIJ = pSVar3;
  thunk_FUN_01c20e04(LKILNGEECIJ,pSVar3);
  pSVar3 = *LKILNGEECIJ;
  method_00 = extraout_x1;
  if (pSVar3 != (System_Xml_XmlDocument_o *)0x0) {
    auVar11 = (*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                        (pSVar3,StringLiteral_10239/*"Perks"*/,(pSVar3->klass->vtable)._51_get_Item.method);
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
        bVar2 = System_String__Equals(pSVar6,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
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
                             (__this,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
          pSVar6 = StringLiteral_1/*""*/;
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
                                   (StringLiteral_22456/*"{0}{1}|"*/,(Il2CppObject *)pSVar6,
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


// ===== private static void IGKCKMGGGFM(XmlNode KENFFDHLNDA, XmlNode JGHIJMJNJLE)  [RVA 0x33CC398]
// DBHEKFDNJKG$$IGKCKMGGGFM @ RVA 0x33CC398

/* WARNING: Removing unreachable block (ram,0x034cc69c) */

void DBHEKFDNJKG__IGKCKMGGGFM
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *JGHIJMJNJLE_00;
  System_String_o *a;
  System_Xml_XmlNode_o *KENFFDHLNDA_00;
  MethodInfo *method_00;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_04567e2b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    FUN_01bab630(&StringLiteral_13924/*"Trigger"*/);
    DAT_04567e2b = 1;
  }
  if ((JGHIJMJNJLE == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JGHIJMJNJLE,(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_034cc4ac;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034cc4ac:
    uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_034cc63c;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_034cc50c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_034cc50c:
    JGHIJMJNJLE_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (JGHIJMJNJLE_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((JGHIJMJNJLE_00->klass->_2).naturalAligment < bVar1) ||
       ((JGHIJMJNJLE_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JGHIJMJNJLE_00);
    }
    a = (System_String_o *)
        (*(JGHIJMJNJLE_00->klass->vtable)._8_unknown.methodPtr)
                  (JGHIJMJNJLE_00,(JGHIJMJNJLE_00->klass->vtable)._8_unknown.method);
    if (KENFFDHLNDA == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    KENFFDHLNDA_00 =
         (System_Xml_XmlNode_o *)
         (*(KENFFDHLNDA->klass->vtable)._51_get_Item.methodPtr)
                   (KENFFDHLNDA,StringLiteral_11876/*"Set"*/,(KENFFDHLNDA->klass->vtable)._51_get_Item.method
                   );
    bVar2 = System_String__op_Equality(a,StringLiteral_13924/*"Trigger"*/,(MethodInfo *)0x0);
    if ((bVar2) ||
       (bVar2 = System_String__op_Equality(a,StringLiteral_11876/*"Set"*/,(MethodInfo *)0x0),
       KENFFDHLNDA_00 == (System_Xml_XmlNode_o *)0x0 && bVar2)) {
      EIABCPKDEBD__DGPOFACHGMP(KENFFDHLNDA,JGHIJMJNJLE_00,(MethodInfo *)0x0);
    }
    else {
      method_00 = (MethodInfo *)0x0;
      bVar2 = System_String__op_Equality(a,StringLiteral_11876/*"Set"*/,(MethodInfo *)0x0);
      if ((KENFFDHLNDA_00 != (System_Xml_XmlNode_o *)0x0) && (bVar2)) {
        DBHEKFDNJKG__INFAEBPFJFC(KENFFDHLNDA_00,JGHIJMJNJLE_00,method_00);
      }
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_034cc658;
    }
  }
LAB_034cc63c:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_034cc658:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== private static void INFAEBPFJFC(XmlNode KENFFDHLNDA, XmlNode JGHIJMJNJLE)  [RVA 0x33CC780]
// DBHEKFDNJKG$$INFAEBPFJFC @ RVA 0x33CC780

/* WARNING: Removing unreachable block (ram,0x034cca04) */

void DBHEKFDNJKG__INFAEBPFJFC
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlAttribute_o *JOHFLOEABJL;
  System_String_o *name;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_04567e2c & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    DAT_04567e2c = 1;
  }
  if ((JGHIJMJNJLE == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(JGHIJMJNJLE->klass->vtable)._16_get_Attributes.methodPtr)
                                 (JGHIJMJNJLE,(JGHIJMJNJLE->klass->vtable)._16_get_Attributes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_034cc868;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_034cc868:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_034cc9a4;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_034cc8c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_034cc8c8:
    JOHFLOEABJL = (System_Xml_XmlAttribute_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (JOHFLOEABJL == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
    if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
       ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JOHFLOEABJL);
    }
    name = (System_String_o *)
           (*(JOHFLOEABJL->klass->vtable)._8_get_Name.methodPtr)
                     (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._8_get_Name.method);
    if (KENFFDHLNDA == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(KENFFDHLNDA->klass->vtable)._16_get_Attributes.methodPtr)
                       (KENFFDHLNDA,(KENFFDHLNDA->klass->vtable)._16_get_Attributes.method);
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,name,(MethodInfo *)0x0);
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__DGPOFACHGMP(KENFFDHLNDA,JOHFLOEABJL,(MethodInfo *)0x0);
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_034cc9c0;
    }
  }
LAB_034cc9a4:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_034cc9c0:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


// ===== private static void GFFMEMGCOAG(XmlDocument LKILNGEECIJ)  [RVA 0x33CBFCC]
// DBHEKFDNJKG$$GFFMEMGCOAG @ RVA 0x33CBFCC

/* WARNING: Removing unreachable block (ram,0x034cc2bc) */

void DBHEKFDNJKG__GFFMEMGCOAG(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_String_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  int local_44;
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = LKILNGEECIJ;
  if ((DAT_04567e2d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    auVar11 = FUN_01bab630(&StringLiteral_7230/*"ID"*/);
    DAT_04567e2d = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar4 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_10239/*"Perks"*/,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    local_44 = 0;
    if (plVar4 == (long *)0x0) {
      return;
    }
    auVar11 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
    plVar4 = auVar11._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar11._8_8_;
    auVar11 = auVar2 << 0x40;
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
              goto LAB_034cc108;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_034cc108:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_034cc25c;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_034cc244;
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_034cc168;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_034cc168:
        JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
           ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(JHMENEKPIBO);
        }
        pSVar6 = (System_String_o *)
                 (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
        if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_String__Equals(pSVar6,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar7 = EIABCPKDEBD__CDDKCDCLNOP(JHMENEKPIBO,StringLiteral_7230/*"ID"*/,(MethodInfo *)0x0);
          pSVar6 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
          if (pSVar7 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8(pSVar6,pSVar6);
          }
          (*(pSVar7->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar7,pSVar6,(pSVar7->klass->vtable)._10_set_Value.method);
          local_44 = local_44 + 1;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_034cc244:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_034cc278;
    }
  }
LAB_034cc25c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_034cc278:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== private static void ODPOCCDKKOP(XmlNode KENFFDHLNDA, XmlNode JGHIJMJNJLE, List<string> LJBHPKFCENK)  [RVA 0x33CBC80]
// DBHEKFDNJKG$$ODPOCCDKKOP @ RVA 0x33CBC80

void DBHEKFDNJKG__ODPOCCDKKOP
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,
               System_Collections_Generic_List_string__o *LJBHPKFCENK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *__this_00;
  System_String_array *pSVar5;
  System_Xml_XmlNode_o *pSVar6;
  System_Xml_XmlDocument_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567e2e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_HAFJHBOPINH<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
    DAT_04567e2e = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (System_Collections_Generic_List_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (pSVar4,Method_System_Collections_Generic_List<string>__ctor__);
  if ((KENFFDHLNDA != (System_Xml_XmlNode_o *)0x0) &&
     (__this = (System_Xml_XmlAttributeCollection_o *)
               (*(KENFFDHLNDA->klass->vtable)._16_get_Attributes.methodPtr)
                         (KENFFDHLNDA,(KENFFDHLNDA->klass->vtable)._16_get_Attributes.method),
     __this != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
    if (LBJNDMNEJJB == (System_Xml_XmlAttribute_o *)0x0) {
      return;
    }
    __this_00 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      pSVar5 = System_String__Split(__this_00,0x7c,0,(MethodInfo *)0x0);
      if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
        method_00 = Method_System_Collections_Generic_List<string>_AddRange__;
        System_Collections_Generic_List<object>__AddRange
                  (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)pSVar5,
                   (MethodInfo_26E4FB8 *)Method_System_Collections_Generic_List<string>_AddRange__);
        pSVar4 = (System_Collections_Generic_List_object__o *)
                 DJNBJHPDKDP__HAFJHBOPINH<object>
                           ((System_Collections_Generic_List_T__o *)pSVar4,
                            Method_DJNBJHPDKDP_HAFJHBOPINH<string>__);
        if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_98,pSVar4,Method_System_Collections_Generic_List<string>_GetEnumerator__
                    );
          local_80.fields._index = local_98.fields._index;
          local_80.fields._version = local_98.fields._version;
          local_80.fields._list = local_98.fields._list;
          local_80.fields._current = local_98.fields._current;
          while( true ) {
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_80,
                               Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__)
            ;
            item = local_80.fields._current;
            if (!bVar3) {
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
              return;
            }
            pSVar6 = DBHEKFDNJKG__DIPCNFGOHKJ
                               (JGHIJMJNJLE,(System_String_o *)local_80.fields._current,method_00);
            if (pSVar6 != (System_Xml_XmlNode_o *)0x0) {
              __this_01 = (System_Xml_XmlDocument_o *)
                          thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
              System_Xml_XmlDocument___ctor(__this_01,(MethodInfo *)0x0);
              pSVar6 = EIABCPKDEBD__DGPOFACHGMP
                                 ((System_Xml_XmlNode_o *)__this_01,pSVar6,(MethodInfo *)0x0);
              method_00 = (MethodInfo *)LJBHPKFCENK;
              DBHEKFDNJKG__ODPOCCDKKOP(pSVar6,JGHIJMJNJLE,LJBHPKFCENK,method_01);
              DBHEKFDNJKG__INFAEBPFJFC(KENFFDHLNDA,pSVar6,method_00);
              DBHEKFDNJKG__IGKCKMGGGFM(KENFFDHLNDA,pSVar6,method_00);
            }
            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
            if (LJBHPKFCENK == (System_Collections_Generic_List_string__o *)0x0) break;
            pSVar5 = (LJBHPKFCENK->fields)._items;
            (LJBHPKFCENK->fields)._version = (LJBHPKFCENK->fields)._version + 1;
            if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (LJBHPKFCENK->fields)._size;
            if (uVar1 < (uint)pSVar5->max_length) {
              (LJBHPKFCENK->fields)._size = uVar1 + 1;
              pSVar5->m_Items[(int)uVar1] = (System_String_o *)item;
              thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,item);
            }
            else {
              method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)LJBHPKFCENK,item,
                         (MethodInfo_26E4DAC *)method_00);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static XmlNode DIPCNFGOHKJ(XmlNode ELOCKFLGKNO, string JFADJIGLMEE)  [RVA 0x33CCAE0]
// DBHEKFDNJKG$$DIPCNFGOHKJ @ RVA 0x33CCAE0

/* WARNING: Removing unreachable block (ram,0x034cce70) */

System_Xml_XmlNode_o *
DBHEKFDNJKG__DIPCNFGOHKJ
          (System_Xml_XmlNode_o *ELOCKFLGKNO,System_String_o *JFADJIGLMEE,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_String_o *pSVar6;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Object_array *args;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  
  if ((DAT_04567e2f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10240/*"Perks: tactics template '{0}' not found"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_04567e2f = 1;
  }
  if ((ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0) &&
     (plVar3 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 != (long *)0x0)) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      do {
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_034ccc14;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034ccc14:
        uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar9 & 1) == 0) {
          pSVar5 = (System_Xml_XmlNode_o *)0x0;
          iVar11 = 5;
          goto LAB_034ccd38;
        }
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_034ccc74;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_034ccc74:
        pSVar5 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (pSVar5 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
           ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar5);
        }
        pSVar6 = (System_String_o *)
                 (*(pSVar5->klass->vtable)._8_unknown.methodPtr)
                           (pSVar5,(pSVar5->klass->vtable)._8_unknown.method);
        if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(pSVar6,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
      } while (!bVar2);
      __this = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar5->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._16_get_Attributes.method);
      if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (JFADJIGLMEE == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(JFADJIGLMEE,pSVar6,(MethodInfo *)0x0);
    } while (!bVar2);
    iVar11 = 4;
LAB_034ccd38:
    plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
    if (plVar3 != (long *)0x0) {
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_034ccd98;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_034ccd98:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    if ((iVar11 == 5) || (iVar11 == 0)) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) goto LAB_034cce68;
      if ((JFADJIGLMEE != (System_String_o *)0x0) &&
         (lVar8 = thunk_FUN_01bda71c(JFADJIGLMEE,(((args->obj).klass)->_1).element_class),
         lVar8 == 0)) {
        uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar7,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)JFADJIGLMEE;
      thunk_FUN_01c20e04(args->m_Items,JFADJIGLMEE);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10240/*"Perks: tactics template '{0}' not found"*/,args,(MethodInfo *)0x0);
      pSVar5 = (System_Xml_XmlNode_o *)0x0;
    }
    return pSVar5;
  }
LAB_034cce68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

