// TypeDefIndex 3221
// Namespace: 
// public class PNEKMHMACLG : AJNNHGGLGIF
// Fields:
//   protected List<AJNNHGGLGIF> LJNCACBBIBD; // 0x58

// ===== public override void RandomizeObscuredVars()  [RVA 0x3503930]
// PNEKMHMACLG$$RandomizeObscuredVars @ RVA 0x3503930

void PNEKMHMACLG__RandomizeObscuredVars(PNEKMHMACLG_o *__this,MethodInfo *method)

{
  System_Action_AJNNHGGLGIF__o **ppSVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Action_AJNNHGGLGIF__o *action;
  
  if ((DAT_04568879 & 1) == 0) {
    FUN_01bab630(&System_Action<AJNNHGGLGIF>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_ForEach__);
    FUN_01bab630(&Method_PNEKMHMACLG_<>c_NBNIOBMFCOB__);
    FUN_01bab630(&PNEKMHMACLG_<>c_TypeInfo);
    DAT_04568879 = 1;
  }
  AJNNHGGLGIF__RandomizeObscuredVars((AJNNHGGLGIF_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).LJNCACBBIBD;
  if ((PNEKMHMACLG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = PNEKMHMACLG_<>c_TypeInfo->static_fields->__9__6_0;
  if (action == (System_Action_AJNNHGGLGIF__o *)0x0) {
    if ((PNEKMHMACLG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_AJNNHGGLGIF__o *)thunk_FUN_01bda818(System_Action<AJNNHGGLGIF>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &PNEKMHMACLG_<>c_TypeInfo->static_fields->__9__6_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
                    /* try { // try from 03603a14 to 03703a1b has its CatchHandler @ 03603b08 */
  if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* try { // try from 03603a2c to 03703a3b has its CatchHandler @ 03603b00 */
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(AJNNHGGLGIF.NJHOEHEJNPH ACCIHBHMFPN, XmlNode AHDGNOJPPIB)  [RVA 0x3503A40]
// PNEKMHMACLG$$.ctor @ RVA 0x3503A40

void PNEKMHMACLG___ctor(PNEKMHMACLG_o *__this,int32_t ACCIHBHMFPN,System_Xml_XmlNode_o *AHDGNOJPPIB,
                       MethodInfo *method)

{
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o **ppSVar1;
  
                    /* try { // try from 03603a4c to 03703a4f has its CatchHandler @ 03603aec */
                    /* try { // try from 03603a58 to 03703a73 has its CatchHandler @ 03603af0 */
  if ((DAT_0456887a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
                    /* try { // try from 03603a90 to 03703a97 has its CatchHandler @ 03603af4 */
    DAT_0456887a = 1;
  }
                    /* try { // try from 03603a98 to 03703adb has its CatchHandler @ 036038f8 */
  __this_00 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
  ppSVar1 = &(__this->fields).LJNCACBBIBD;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,ACCIHBHMFPN,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* try { // try from 03603adc to 03703adf has its CatchHandler @ 03603b04 */
                    /* try { // try from 03603ae0 to 03703ae3 has its CatchHandler @ 03603afc */
                    /* try { // try from 03603ae4 to 03703ae7 has its CatchHandler @ 03603af8 */
                    /* try { // try from 03603ae8 to 03703b1f has its CatchHandler @ 036038f8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603a4c with catch @ 03603aec
                        */
                    /* WARNING: Could not recover jumptable at 0x03603af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603a58 with catch @ 03603af0
                        */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3503AF4]
// PNEKMHMACLG$$HNIHOIAMDPC @ RVA 0x3503AF4

/* WARNING: Removing unreachable block (ram,0x03603d94) */

void PNEKMHMACLG__HNIHOIAMDPC
               (PNEKMHMACLG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  AJNNHGGLGIF_o *item;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  long lVar5;
  AJNNHGGLGIF_array *pAVar6;
  ulong uVar7;
  int *piVar8;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603a90 with catch @ 03603af4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603ae4 with catch @ 03603af8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603ae0 with catch @ 03603afc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603a2c with catch @ 03603b00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603adc with catch @ 03603b04
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603a14 with catch @ 03603b08
                        */
  if ((DAT_0456887b & 1) == 0) {
                    /* try { // try from 03603b20 to 03703b23 has its CatchHandler @ 03603b50 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 03603b24 to 03703b57 has its CatchHandler @ 036038f8 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_0456887b = 1;
  }
                    /* catch() { ... } // from try @ 03603b20 with catch @ 03603b50 */
                    /* try { // try from 03603b58 to 03703b5f has its CatchHandler @ 03603b74 */
                    /* try { // try from 03603b60 to 03703b6b has its CatchHandler @ 036038f8 */
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03603b6c to 03703b73 has its CatchHandler @ 03603b74 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03603b58 with catch @ 03603b74
                       catch(type#2 @ 00000000) { ... } // from try @ 03603b6c with catch @ 03603b74
                        */
                    /* try { // try from 03603b78 to 03703cbf has its CatchHandler @ 03603b78
                       catch() { ... } // from try @ 03603b78 with catch @ 03603b78
                       catch() { ... } // from try @ 03603cc8 with catch @ 03603b78
                       catch() { ... } // from try @ 03603db8 with catch @ 03603b78
                       catch() { ... } // from try @ 03603dfc with catch @ 03603b78
                       catch() { ... } // from try @ 03603e2c with catch @ 03603b78
                       catch() { ... } // from try @ 03603e78 with catch @ 03603b78
                       catch() { ... } // from try @ 03603e94 with catch @ 03603b78
                       catch() { ... } // from try @ 03603ec4 with catch @ 03603b78 */
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03603bec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03603bec:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_03603d40;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_03603c4c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03603c4c:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
         ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    item = FCFEFEBAILK__POKFALBPBDI(AHDGNOJPPIB_00,(MethodInfo *)0x0);
    lVar5 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
    if (item != (AJNNHGGLGIF_o *)0x0) {
      __this_00 = (__this->fields).LJNCACBBIBD;
      if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pAVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pAVar6 == (AJNNHGGLGIF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_00->fields)._size;
                    /* try { // try from 03603cc0 to 03703cc7 has its CatchHandler @ 03603e78 */
      if (uVar2 < (uint)pAVar6->max_length) {
                    /* try { // try from 03603cc8 to 03703d67 has its CatchHandler @ 03603b78 */
        (__this_00->fields)._size = uVar2 + 1;
        pAVar6->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04(pAVar6->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03603d5c;
    }
  }
LAB_03603d40:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03603d5c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 03603d68 to 03703d6f has its CatchHandler @ 03603e10 */
  return;
}


// ===== public List<AJNNHGGLGIF> HKNMJCKPHHC()  [RVA 0x3503E60]
// PNEKMHMACLG$$HKNMJCKPHHC @ RVA 0x3503E60

System_Collections_Generic_List_AJNNHGGLGIF__o *
PNEKMHMACLG__HKNMJCKPHHC(PNEKMHMACLG_o *__this,MethodInfo *method)

{
                    /* try { // try from 03603e64 to 03703e77 has its CatchHandler @ 03603ed8 */
  return (__this->fields).LJNCACBBIBD;
}


// ===== public override void AFBEEALKOPE(bool CJNHFNHJHPE)  [RVA 0x3503E68]
// PNEKMHMACLG$$AFBEEALKOPE @ RVA 0x3503E68

void PNEKMHMACLG__AFBEEALKOPE(PNEKMHMACLG_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* catch() { ... } // from try @ 03603cc0 with catch @ 03603e78
                       try { // try from 03603e78 to 03703e8f has its CatchHandler @ 03603b78 */
  if ((DAT_0456887c & 1) == 0) {
                    /* try { // try from 03603e90 to 03703e93 has its CatchHandler @ 03603eb4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
                    /* try { // try from 03603e94 to 03703ebb has its CatchHandler @ 03603b78 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
                    /* catch() { ... } // from try @ 03603e90 with catch @ 03603eb4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
                    /* try { // try from 03603ebc to 03703ec3 has its CatchHandler @ 03603ed8 */
    DAT_0456887c = 1;
  }
                    /* try { // try from 03603ec4 to 03703ecf has its CatchHandler @ 03603b78 */
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
                    /* try { // try from 03603ed0 to 03703ed7 has its CatchHandler @ 03603ed8 */
  local_38.fields._current = (Il2CppObject *)0x0;
  AJNNHGGLGIF__AFBEEALKOPE((AJNNHGGLGIF_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03603e64 with catch @ 03603ed8
                       catch() { ... } // from try @ 03603ebc with catch @ 03603ed8
                       catch() { ... } // from try @ 03603ed0 with catch @ 03603ed8 */
  __this_00 = (__this->fields).LJNCACBBIBD;
                    /* try { // try from 03603edc to 0370402f has its CatchHandler @ 03603edc
                       catch() { ... } // from try @ 03603edc with catch @ 03603edc
                       catch() { ... } // from try @ 03604110 with catch @ 03603edc
                       catch() { ... } // from try @ 03604138 with catch @ 03603edc
                       catch() { ... } // from try @ 036041ac with catch @ 03603edc
                       catch() { ... } // from try @ 036041e8 with catch @ 03603edc
                       catch() { ... } // from try @ 03604224 with catch @ 03603edc */
  if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[9].methodPtr)
                (local_38.fields._current,(ulong)CJNHFNHJHPE,
                 (local_38.fields._current)->klass->vtable[9].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3503FD0]
// PNEKMHMACLG$$.ctor @ RVA 0x3503FD0

void PNEKMHMACLG___ctor(PNEKMHMACLG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o **ppSVar1;
  
  if ((DAT_0456887d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
    DAT_0456887d = 1;
  }
  __this_00 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
                    /* try { // try from 03604030 to 03704037 has its CatchHandler @ 036041d0 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
  ppSVar1 = &(__this->fields).LJNCACBBIBD;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 03604050 to 03704057 has its CatchHandler @ 036041cc */
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,0x16,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* try { // try from 0360406c to 03704073 has its CatchHandler @ 03604120 */
                    /* WARNING: Could not recover jumptable at 0x03604074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}

