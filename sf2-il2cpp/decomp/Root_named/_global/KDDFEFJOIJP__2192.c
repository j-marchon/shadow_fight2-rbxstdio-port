// TypeDefIndex 2192
// Namespace: 
// public class KDDFEFJOIJP
// Fields:
//   public List<MBALPICJBHF> HBDMPPHKBMP; // 0x10

// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x32E5114]
// KDDFEFJOIJP$$HNIHOIAMDPC @ RVA 0x32E5114

/* WARNING: Removing unreachable block (ram,0x033e543c) */

void KDDFEFJOIJP__HNIHOIAMDPC
               (KDDFEFJOIJP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  MBALPICJBHF_o *__this_00;
  System_Collections_Generic_List_MBALPICJBHF__o *pSVar5;
  long lVar6;
  MBALPICJBHF_array *pMVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04567605 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBALPICJBHF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBALPICJBHF>_Clear__);
    FUN_01bab630(&MBALPICJBHF_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567605 = 1;
  }
  pSVar5 = (__this->fields).HBDMPPHKBMP;
  if (pSVar5 != (System_Collections_Generic_List_MBALPICJBHF__o *)0x0) {
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_033e5260;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e5260:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_033e53d8;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_033e53c0;
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_033e52c0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_033e52c0:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 033e52dc to 034e542b has its CatchHandler @ 033e52dc
                       catch() { ... } // from try @ 033e52dc with catch @ 033e52dc
                       catch() { ... } // from try @ 033e54a0 with catch @ 033e52dc
                       catch() { ... } // from try @ 033e5504 with catch @ 033e52dc
                       catch() { ... } // from try @ 033e5540 with catch @ 033e52dc
                       catch() { ... } // from try @ 033e5580 with catch @ 033e52dc */
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB_00);
          }
        }
        __this_00 = (MBALPICJBHF_o *)thunk_FUN_01bda818(MBALPICJBHF_TypeInfo);
        MBALPICJBHF___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 == (MBALPICJBHF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033e542c to 034e5433 has its CatchHandler @ 033e5524 */
          FUN_01bab8c8();
        }
        MBALPICJBHF__HNIHOIAMDPC(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<MBALPICJBHF>_Add__;
        pSVar5 = (__this->fields).HBDMPPHKBMP;
        if (pSVar5 == (System_Collections_Generic_List_MBALPICJBHF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar7 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pMVar7 == (MBALPICJBHF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pMVar7->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pMVar7->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pMVar7->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_033e53c0:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_033e53f4;
    }
  }
LAB_033e53d8:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_033e53f4:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public MBALPICJBHF JBHBNPEBFDN(string ACCIHBHMFPN)  [RVA 0x32E5510]
// KDDFEFJOIJP$$JBHBNPEBFDN @ RVA 0x32E5510

MBALPICJBHF_o *
KDDFEFJOIJP__JBHBNPEBFDN(KDDFEFJOIJP_o *__this,System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MBALPICJBHF__o *__this_00;
  MBALPICJBHF_o *pMVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e5470 with catch @ 033e5510
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e5500 with catch @ 033e5514
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e54fc with catch @ 033e5518
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e54f8 with catch @ 033e551c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e54f4 with catch @ 033e5520
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e542c with catch @ 033e5524
                        */
  if ((DAT_04567606 & 1) == 0) {
                    /* try { // try from 033e553c to 034e553f has its CatchHandler @ 033e5568 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_Dispose__);
                    /* try { // try from 033e5540 to 034e5577 has its CatchHandler @ 033e52dc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBALPICJBHF>_GetEnumerator__);
                    /* catch() { ... } // from try @ 033e553c with catch @ 033e5568 */
    DAT_04567606 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HBDMPPHKBMP;
                    /* try { // try from 033e5578 to 034e557f has its CatchHandler @ 033e5594 */
  if (__this_00 == (System_Collections_Generic_List_MBALPICJBHF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033e5580 to 034e558b has its CatchHandler @ 033e52dc */
                    /* try { // try from 033e558c to 034e5593 has its CatchHandler @ 033e5594 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033e5578 with catch @ 033e5594
                       catch(type#2 @ 00000000) { ... } // from try @ 033e558c with catch @ 033e5594
                        */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MBALPICJBHF>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_MoveNext__);
    pMVar2 = (MBALPICJBHF_o *)local_48.fields._current;
    if (!bVar1) {
      pMVar2 = (MBALPICJBHF_o *)0x0;
      break;
    }
    if ((MBALPICJBHF_o *)local_48.fields._current == (MBALPICJBHF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((MBALPICJBHF_Fields *)((long)local_48.fields._current + 0x10))->BGHFADDGPAD,
                       ACCIHBHMFPN,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<MBALPICJBHF>_Dispose__);
  return pMVar2;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x32E566C]
// KDDFEFJOIJP$$RandomizeObscuredVars @ RVA 0x32E566C

void KDDFEFJOIJP__RandomizeObscuredVars(KDDFEFJOIJP_o *__this,MethodInfo *method)

{
  System_Action_MBALPICJBHF__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_MBALPICJBHF__o *__this_00;
  System_Action_MBALPICJBHF__o *action;
  
  if ((DAT_04567607 & 1) == 0) {
    FUN_01bab630(&System_Action<MBALPICJBHF>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBALPICJBHF>_ForEach__);
    FUN_01bab630(&Method_KDDFEFJOIJP_<>c_EOPCNNIGHFB__);
    FUN_01bab630(&KDDFEFJOIJP_<>c_TypeInfo);
    DAT_04567607 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).HBDMPPHKBMP;
  if ((KDDFEFJOIJP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KDDFEFJOIJP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = KDDFEFJOIJP_<>c_TypeInfo->static_fields->__9__3_0;
  if (action == (System_Action_MBALPICJBHF__o *)0x0) {
    if ((KDDFEFJOIJP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KDDFEFJOIJP_<>c_TypeInfo,method);
    }
    action = (System_Action_MBALPICJBHF__o *)thunk_FUN_01bda818(System_Action<MBALPICJBHF>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &KDDFEFJOIJP_<>c_TypeInfo->static_fields->__9__3_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_MBALPICJBHF__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<MBALPICJBHF>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32E5770]
// KDDFEFJOIJP$$.ctor @ RVA 0x32E5770

void KDDFEFJOIJP___ctor(KDDFEFJOIJP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MBALPICJBHF__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567608 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MBALPICJBHF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MBALPICJBHF>_TypeInfo);
    DAT_04567608 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MBALPICJBHF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MBALPICJBHF>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MBALPICJBHF>__ctor__);
  (__this->fields).HBDMPPHKBMP = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

