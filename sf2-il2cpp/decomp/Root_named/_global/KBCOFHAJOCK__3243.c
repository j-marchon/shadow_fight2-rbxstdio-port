// TypeDefIndex 3243
// Namespace: 
// public class KBCOFHAJOCK
// Fields:
//   public readonly List<PLCCJCFAFKA> AJJILEMLFOI; // 0x10

// ===== public PLCCJCFAFKA CBEELEAJKIN(string CNIELFLIKJB)  [RVA 0x350B9C8]
// KBCOFHAJOCK$$CBEELEAJKIN @ RVA 0x350B9C8

PLCCJCFAFKA_o *
KBCOFHAJOCK__CBEELEAJKIN(KBCOFHAJOCK_o *__this,System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PLCCJCFAFKA__o *__this_00;
  LGABIPDBOEP_o *pLVar2;
  PLCCJCFAFKA_o *pPVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045688cd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
    DAT_045688cd = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AJJILEMLFOI;
  if (__this_00 == (System_Collections_Generic_List_PLCCJCFAFKA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__);
    pPVar3 = (PLCCJCFAFKA_o *)local_48.fields._current;
    if (!bVar1) {
      pPVar3 = (PLCCJCFAFKA_o *)0x0;
      break;
    }
    if ((PLCCJCFAFKA_o *)local_48.fields._current == (PLCCJCFAFKA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar2 = PLCCJCFAFKA__COMOKILJDGJ
                       ((PLCCJCFAFKA_o *)local_48.fields._current,CNIELFLIKJB,(MethodInfo *)0x0);
  } while (pLVar2 == (LGABIPDBOEP_o *)0x0);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
  return pPVar3;
}


// ===== public PLCCJCFAFKA JHDDCDEENAK(string LICOECLIBEB)  [RVA 0x350BB24]
// KBCOFHAJOCK$$JHDDCDEENAK @ RVA 0x350BB24

PLCCJCFAFKA_o *
KBCOFHAJOCK__JHDDCDEENAK(KBCOFHAJOCK_o *__this,System_String_o *LICOECLIBEB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PLCCJCFAFKA__o *__this_00;
  PLCCJCFAFKA_o *pPVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045688ce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
    DAT_045688ce = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(LICOECLIBEB,(MethodInfo *)0x0);
  pPVar2 = (PLCCJCFAFKA_o *)0x0;
  if (!bVar1) {
    __this_00 = (__this->fields).AJJILEMLFOI;
    if (__this_00 == (System_Collections_Generic_List_PLCCJCFAFKA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__);
      pPVar2 = (PLCCJCFAFKA_o *)local_38.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
        return (PLCCJCFAFKA_o *)0x0;
      }
      if ((PLCCJCFAFKA_o *)local_38.fields._current == (PLCCJCFAFKA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = System_String__op_Equality
                        (((PLCCJCFAFKA_Fields *)((long)local_38.fields._current + 0x10))->
                         JIJLBFGKNJK,LICOECLIBEB,(MethodInfo *)0x0);
    } while (!bVar1);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
  }
  return pPVar2;
}


// ===== private PLCCJCFAFKA DOGHKAHOCJI()  [RVA 0x350BCB0]
// KBCOFHAJOCK$$DOGHKAHOCJI @ RVA 0x350BCB0

PLCCJCFAFKA_o * KBCOFHAJOCK__DOGHKAHOCJI(KBCOFHAJOCK_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PLCCJCFAFKA__o *__this_00;
  MethodInfo *extraout_x1;
  PLCCJCFAFKA_o *pPVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045688cf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
    DAT_045688cf = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AJJILEMLFOI;
  if (__this_00 == (System_Collections_Generic_List_PLCCJCFAFKA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__);
    pPVar2 = (PLCCJCFAFKA_o *)local_38.fields._current;
    if (!bVar1) {
      pPVar2 = (PLCCJCFAFKA_o *)0x0;
      break;
    }
    if ((PLCCJCFAFKA_o *)local_38.fields._current == (PLCCJCFAFKA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = PLCCJCFAFKA__LDKFOHPNENK((PLCCJCFAFKA_o *)local_38.fields._current,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
  return pPVar2;
}


// ===== public bool CPKKHCAIGLN(PerkInfoItem EIKFGOCCOIE)  [RVA 0x350BE14]
// KBCOFHAJOCK$$CPKKHCAIGLN @ RVA 0x350BE14

bool KBCOFHAJOCK__CPKKHCAIGLN(KBCOFHAJOCK_o *__this,PerkInfoItem_o *EIKFGOCCOIE,MethodInfo *method)

{
  bool bVar1;
  PLCCJCFAFKA_o *__this_00;
  
  if (EIKFGOCCOIE == (PerkInfoItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((EIKFGOCCOIE->fields).AKBDHOEGNNG,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    __this_00 = KBCOFHAJOCK__JHDDCDEENAK(__this,(EIKFGOCCOIE->fields).AKBDHOEGNNG,method);
    bVar1 = false;
    if (__this_00 != (PLCCJCFAFKA_o *)0x0) {
      bVar1 = PLCCJCFAFKA__PKMBANJNKBC(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return bVar1;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x350BE70]
// KBCOFHAJOCK$$HNIHOIAMDPC @ RVA 0x350BE70

/* WARNING: Removing unreachable block (ram,0x0360c14c) */

void KBCOFHAJOCK__HNIHOIAMDPC
               (KBCOFHAJOCK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  PLCCJCFAFKA_o *__this_00;
  long lVar5;
  PLCCJCFAFKA_array *pPVar6;
  ulong uVar7;
  int *piVar8;
  System_Collections_Generic_List_PLCCJCFAFKA__o *__this_01;
  
  if ((DAT_045688d0 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PLCCJCFAFKA>_Add__);
    FUN_01bab630(&PLCCJCFAFKA_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045688d0 = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
  if (plVar3 == (long *)0x0) {
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
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0360bf84;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0360bf84:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_0360c0ec;
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
          goto LAB_0360bfe4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0360bfe4:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
         ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(AHDGNOJPPIB_00);
      }
    }
    __this_01 = (__this->fields).AJJILEMLFOI;
    __this_00 = (PLCCJCFAFKA_o *)thunk_FUN_01bda818(PLCCJCFAFKA_TypeInfo);
    PLCCJCFAFKA___ctor(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
    lVar5 = Method_System_Collections_Generic_List<PLCCJCFAFKA>_Add__;
    if (__this_01 == (System_Collections_Generic_List_PLCCJCFAFKA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar6 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pPVar6 == (PLCCJCFAFKA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pPVar6->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      pPVar6->m_Items[(int)uVar2] = __this_00;
      thunk_FUN_01c20e04(pPVar6->m_Items + (int)uVar2,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0360c108;
    }
  }
LAB_0360c0ec:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0360c108:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public bool DGCIHHLLNPN(string LICOECLIBEB)  [RVA 0x350C214]
// KBCOFHAJOCK$$DGCIHHLLNPN @ RVA 0x350C214

bool KBCOFHAJOCK__DGCIHHLLNPN(KBCOFHAJOCK_o *__this,System_String_o *LICOECLIBEB,MethodInfo *method)

{
  bool bVar1;
  PLCCJCFAFKA_o *__this_00;
  
  __this_00 = KBCOFHAJOCK__JHDDCDEENAK(__this,LICOECLIBEB,method);
  if (__this_00 != (PLCCJCFAFKA_o *)0x0) {
    bVar1 = PLCCJCFAFKA__LDKFOHPNENK(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public PerkInfoItem CFIKBKJLKPH()  [RVA 0x350C234]
// KBCOFHAJOCK$$CFIKBKJLKPH @ RVA 0x350C234

PerkInfoItem_o * KBCOFHAJOCK__CFIKBKJLKPH(KBCOFHAJOCK_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  GGHCLMEFIGO_o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_HEFOANCOHDC__o *source;
  System_Func_HEFOANCOHDC__bool__o **ppSVar5;
  Il2CppClass *pIVar6;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *pIVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Roster_o *pAVar8;
  System_Object_array *pSVar9;
  PerkInfoItem_o *EIKFGOCCOIE;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  System_Func_HEFOANCOHDC__bool__o *predicate_00;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045688d1 & 1) == 0) {
    FUN_01bab630(&Method_KBCOFHAJOCK_DFAOEIOICPE_BDKDNAPOBLD__);
                    /* try { // try from 0360c278 to 0370c33f has its CatchHandler @ 0360c278
                       catch() { ... } // from try @ 0360c278 with catch @ 0360c278
                       catch() { ... } // from try @ 0360c348 with catch @ 0360c278
                       catch() { ... } // from try @ 0360c3c4 with catch @ 0360c278
                       catch() { ... } // from try @ 0360c3e8 with catch @ 0360c278
                       catch() { ... } // from try @ 0360c428 with catch @ 0360c278 */
    FUN_01bab630(&KBCOFHAJOCK_DFAOEIOICPE_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<PerkInfoItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    FUN_01bab630(&System_Func<PerkInfoItem,_bool>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_KBCOFHAJOCK_<>c_PLOGDJGMAFJ__);
                    /* try { // try from 0360c340 to 0370c347 has its CatchHandler @ 0360c3cc */
    FUN_01bab630(&KBCOFHAJOCK_<>c_TypeInfo);
                    /* try { // try from 0360c348 to 0370c3bf has its CatchHandler @ 0360c278 */
    DAT_045688d1 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_98.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_98.fields._index = 0;
  local_98.fields._version = 0;
  local_98.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar8 != (Roster_o *)0x0) &&
     (__this_00 = (pAVar8->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
                    /* try { // try from 0360c3c0 to 0370c3c3 has its CatchHandler @ 0360c3c8 */
                    /* try { // try from 0360c3c4 to 0370c3e3 has its CatchHandler @ 0360c278 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360c3c0 with catch @ 0360c3c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360c340 with catch @ 0360c3cc
                        */
    __this_01 = GGHCLMEFIGO__PDBBGCIHBFL(__this_00,(MethodInfo *)0x0);
    __this_02 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
                    /* try { // try from 0360c3e4 to 0370c3e7 has its CatchHandler @ 0360c410 */
                    /* try { // try from 0360c3e8 to 0370c41f has its CatchHandler @ 0360c278 */
    System_Collections_Generic_List<object>___ctor
              (__this_02,Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    if (__this_01 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* catch() { ... } // from try @ 0360c3e4 with catch @ 0360c410 */
                    /* try { // try from 0360c420 to 0370c427 has its CatchHandler @ 0360c43c */
                    /* try { // try from 0360c428 to 0370c433 has its CatchHandler @ 0360c278 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b0,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
      local_80.fields._index = local_b0.fields._index;
      local_80.fields._version = local_b0.fields._version;
                    /* try { // try from 0360c434 to 0370c43b has its CatchHandler @ 0360c43c */
      local_80.fields._list = local_b0.fields._list;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360c420 with catch @ 0360c43c
                       catch(type#2 @ 00000000) { ... } // from try @ 0360c434 with catch @ 0360c43c
                        */
      local_80.fields._current = local_b0.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                               ), pIVar7 = local_80.fields._current, bVar3) {
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(KBCOFHAJOCK_DFAOEIOICPE_TypeInfo);
        System_Object___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CNDPGGAFHEA = pIVar7[1].monitor;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        source = NLPJLHOEAOE__GMJMEKENPAP(CNDPGGAFHEA,true,(MethodInfo *)0x0);
        if ((KBCOFHAJOCK_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(KBCOFHAJOCK_<>c_TypeInfo);
        }
        predicate_00 = KBCOFHAJOCK_<>c_TypeInfo->static_fields->__9__7_0;
        if (predicate_00 == (System_Func_HEFOANCOHDC__bool__o *)0x0) {
          if ((KBCOFHAJOCK_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(KBCOFHAJOCK_<>c_TypeInfo);
          }
          predicate_00 = (System_Func_HEFOANCOHDC__bool__o *)
                         thunk_FUN_01bda818(System_Func<PerkInfoItem,_bool>_TypeInfo);
          System_Func<object,_bool>___ctor();
          ppSVar5 = &KBCOFHAJOCK_<>c_TypeInfo->static_fields->__9__7_0;
          *ppSVar5 = predicate_00;
          thunk_FUN_01c20e04(ppSVar5,predicate_00);
        }
        pIVar6 = (Il2CppClass *)
                 System_Linq_Enumerable__FirstOrDefault<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__bool__o *)predicate_00,
                            Method_System_Linq_Enumerable_FirstOrDefault<PerkInfoItem>__);
        if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar4 = pIVar4 + 1;
        pIVar4->klass = pIVar6;
        thunk_FUN_01c20e04(pIVar4);
        if (pIVar4->klass != (Il2CppClass *)0x0) {
          predicate = (System_Func_TSource__bool__o *)
                      thunk_FUN_01bda818(System_Func<PerkInfoItem,_bool>_TypeInfo);
          System_Func<object,_bool>___ctor();
          pIVar7 = System_Linq_Enumerable__FirstOrDefault<object>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)__this_02,
                              predicate,Method_System_Linq_Enumerable_FirstOrDefault<PerkInfoItem>__)
          ;
          lVar2 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
          if (pIVar7 == (Il2CppObject *)0x0) {
            if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar6 = pIVar4->klass;
            pSVar9 = (__this_02->fields)._items;
            (__this_02->fields)._version = (__this_02->fields)._version + 1;
            if (pSVar9 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (__this_02->fields)._size;
            if (uVar1 < (uint)pSVar9->max_length) {
              (__this_02->fields)._size = uVar1 + 1;
              pSVar9->m_Items[(int)uVar1] = (Il2CppObject *)pIVar6;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_02,(Il2CppObject *)pIVar6,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__)
      ;
      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,__this_02,
                   Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_98,
                             Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                            );
          EIKFGOCCOIE = (PerkInfoItem_o *)local_98.fields._current;
          if (!bVar3) {
            EIKFGOCCOIE = (PerkInfoItem_o *)0x0;
            break;
          }
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = GameUtils__DODJBGHCIHD(EIKFGOCCOIE,(MethodInfo *)0x0);
        } while (!bVar3);
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_98,
                   Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
        return EIKFGOCCOIE;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x350C7C4]
// KBCOFHAJOCK$$.ctor @ RVA 0x350C7C4

void KBCOFHAJOCK___ctor(KBCOFHAJOCK_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PLCCJCFAFKA__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045688d2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PLCCJCFAFKA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PLCCJCFAFKA>_TypeInfo);
    DAT_045688d2 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_PLCCJCFAFKA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PLCCJCFAFKA>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PLCCJCFAFKA>__ctor__);
  (__this->fields).AJJILEMLFOI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

