// TypeDefIndex 2806
// Namespace: 
// public class PCFNBEFFKJM : OMNMIEMIMKC
// Fields:
//   private PCFNBEFFKJM.MDDILDKNLMH GGJIFGHKMAI; // 0x14
//   private List<OMNMIEMIMKC> INAJMPIJJOG; // 0x18

// ===== private bool EGCPMNMCGDI(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA)  [RVA 0x3419D28]
// PCFNBEFFKJM$$EGCPMNMCGDI @ RVA 0x3419D28

bool PCFNBEFFKJM__EGCPMNMCGDI
               (PCFNBEFFKJM_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OMNMIEMIMKC__o *__this_00;
  ulong uVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045680be & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_Dispose__,
                 NKCMBEFHFII,(ulong)(uint)DPCEFBCDHPA);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>_GetEnumerator__);
    DAT_045680be = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).INAJMPIJJOG;
  if (__this_00 == (System_Collections_Generic_List_OMNMIEMIMKC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OMNMIEMIMKC>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_03519dfc;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                      (local_48.fields._current,NKCMBEFHFII,(ulong)(uint)DPCEFBCDHPA,
                       (local_48.fields._current)->klass->vtable[4].method);
  } while ((uVar2 & 1) == 0);
  iVar3 = 4;
LAB_03519dfc:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_Dispose__);
  return bVar1 && iVar3 == 4;
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x3419EA8]
// PCFNBEFFKJM$$RandomizeObscuredVars @ RVA 0x3419EA8

void PCFNBEFFKJM__RandomizeObscuredVars(PCFNBEFFKJM_o *__this,MethodInfo *method)

{
  System_Action_OMNMIEMIMKC__o **ppSVar1;
  System_Collections_Generic_List_OMNMIEMIMKC__o *__this_00;
  System_Action_OMNMIEMIMKC__o *action;
  
  if ((DAT_045680bf & 1) == 0) {
    FUN_01bab630(&System_Action<OMNMIEMIMKC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>_ForEach__);
    FUN_01bab630(&Method_PCFNBEFFKJM_<>c_CNDFGOHLIKK__);
    FUN_01bab630(&PCFNBEFFKJM_<>c_TypeInfo);
    DAT_045680bf = 1;
  }
  OMNMIEMIMKC__RandomizeObscuredVars((OMNMIEMIMKC_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).INAJMPIJJOG;
  if ((PCFNBEFFKJM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = PCFNBEFFKJM_<>c_TypeInfo->static_fields->__9__7_0;
  if (action == (System_Action_OMNMIEMIMKC__o *)0x0) {
    if ((PCFNBEFFKJM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_OMNMIEMIMKC__o *)thunk_FUN_01bda818(System_Action<OMNMIEMIMKC>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &PCFNBEFFKJM_<>c_TypeInfo->static_fields->__9__7_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_OMNMIEMIMKC__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<OMNMIEMIMKC>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void .ctor(XmlNode JHMENEKPIBO)  [RVA 0x3419FB8]
// PCFNBEFFKJM$$.ctor @ RVA 0x3419FB8

/* WARNING: Removing unreachable block (ram,0x0351a31c) */

void PCFNBEFFKJM___ctor(PCFNBEFFKJM_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  System_Collections_Generic_List_OMNMIEMIMKC__o *pSVar4;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *JHMENEKPIBO_00;
  OMNMIEMIMKC_o *item;
  long lVar7;
  OMNMIEMIMKC_array *pOVar8;
  ulong uVar9;
  int *piVar10;
  System_Collections_Generic_List_OMNMIEMIMKC__o **ppSVar11;
  
  if ((DAT_045680c0 & 1) == 0) {
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<PCFNBEFFKJM_MDDILDKNLMH>__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OMNMIEMIMKC>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    DAT_045680c0 = 1;
  }
  (__this->fields).GGJIFGHKMAI = 2;
  pSVar4 = (System_Collections_Generic_List_OMNMIEMIMKC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OMNMIEMIMKC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<OMNMIEMIMKC>__ctor__);
  ppSVar11 = &(__this->fields).INAJMPIJJOG;
  *ppSVar11 = pSVar4;
  thunk_FUN_01c20e04(ppSVar11,pSVar4);
  OMNMIEMIMKC___ctor((OMNMIEMIMKC_o *)__this,3,(MethodInfo *)0x0);
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
    iVar3 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                      (LBJNDMNEJJB,2,Method_EIABCPKDEBD_CKHGJBKDIID<PCFNBEFFKJM_MDDILDKNLMH>__);
    (__this->fields).GGJIFGHKMAI = iVar3;
    plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0351a174;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0351a174:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_0351a2c8;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0351a2b0;
        }
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0351a1d4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0351a1d4:
        JHMENEKPIBO_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (JHMENEKPIBO_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((JHMENEKPIBO_00->klass->_2).naturalAligment < bVar1) ||
             ((JHMENEKPIBO_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
        item = OMNMIEMIMKC__EOHMFJFFFIN(JHMENEKPIBO_00,(MethodInfo *)0x0);
        lVar7 = Method_System_Collections_Generic_List<OMNMIEMIMKC>_Add__;
        if (item != (OMNMIEMIMKC_o *)0x0) {
          pSVar4 = *ppSVar11;
          if (pSVar4 == (System_Collections_Generic_List_OMNMIEMIMKC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pOVar8 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pOVar8 == (OMNMIEMIMKC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar4->fields)._size;
          if (uVar2 < (uint)pOVar8->max_length) {
            (pSVar4->fields)._size = uVar2 + 1;
            pOVar8->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pOVar8->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0351a2b0:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0351a2e4;
    }
  }
LAB_0351a2c8:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0351a2e4:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== public override bool PPBANLLIGDK(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA)  [RVA 0x341A3E8]
// PCFNBEFFKJM$$PPBANLLIGDK @ RVA 0x341A3E8

bool PCFNBEFFKJM__PPBANLLIGDK
               (PCFNBEFFKJM_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (__this->fields).GGJIFGHKMAI;
  if (iVar1 == 1) {
    bVar2 = PCFNBEFFKJM__AJPMLNPOJLL(__this,NKCMBEFHFII,DPCEFBCDHPA,method);
    return bVar2;
  }
  if (iVar1 == 0) {
    bVar2 = PCFNBEFFKJM__EGCPMNMCGDI(__this,NKCMBEFHFII,DPCEFBCDHPA,method);
    return bVar2;
  }
  return false;
}


// ===== private bool AJPMLNPOJLL(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA)  [RVA 0x341A408]
// PCFNBEFFKJM$$AJPMLNPOJLL @ RVA 0x341A408

bool PCFNBEFFKJM__AJPMLNPOJLL
               (PCFNBEFFKJM_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OMNMIEMIMKC__o *__this_00;
  ulong uVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045680c1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_Dispose__,
                 NKCMBEFHFII,(ulong)(uint)DPCEFBCDHPA);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>_GetEnumerator__);
    DAT_045680c1 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).INAJMPIJJOG;
  if (__this_00 == (System_Collections_Generic_List_OMNMIEMIMKC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OMNMIEMIMKC>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_0351a4d8;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                      (local_48.fields._current,NKCMBEFHFII,(ulong)(uint)DPCEFBCDHPA,
                       (local_48.fields._current)->klass->vtable[4].method);
  } while ((uVar2 & 1) != 0);
  iVar3 = 4;
LAB_0351a4d8:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_Dispose__);
  return iVar3 != 4;
}

