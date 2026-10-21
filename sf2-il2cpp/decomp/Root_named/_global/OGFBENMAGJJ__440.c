// TypeDefIndex 440
// Namespace: 
// public class OGFBENMAGJJ : GJFEBGNFFBA
// Fields:

// ===== private void JJLBOMEDNIJ(PKHMIGFEJCL AAJBIMFNMBB, FPPKHNNABAD NDBPOFMECGL, QuestAction CPECAEHDDDB, OGFBENMAGJJ.NLOBPGHHIEF HPACPFLKHPK, StringBuilder KHHGPLOMHBB)  [RVA 0x348DBDC]
// OGFBENMAGJJ$$JJLBOMEDNIJ @ RVA 0x348DBDC

void OGFBENMAGJJ__JJLBOMEDNIJ
               (OGFBENMAGJJ_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,FPPKHNNABAD_o *NDBPOFMECGL,
               QuestAction_o *CPECAEHDDDB,OGFBENMAGJJ_NLOBPGHHIEF_o *HPACPFLKHPK,
               System_Text_StringBuilder_o *KHHGPLOMHBB,MethodInfo *method)

{
  byte bVar1;
  EJALJLHMDHM_c *pEVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  QuestAction_c *pBVar7;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  
  if ((DAT_045683f8 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<QuestAction>__);
    FUN_01bab630(&EJALJLHMDHM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestAction>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestAction>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestAction>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestAction>_GetEnumerator__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_1116/*") variable"*/);
    FUN_01bab630(&StringLiteral_15862/*"_"*/);
    FUN_01bab630(&StringLiteral_1115/*") not found"*/);
    FUN_01bab630(&StringLiteral_220/*" ("*/);
    DAT_045683f8 = 1;
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if ((HPACPFLKHPK != (OGFBENMAGJJ_NLOBPGHHIEF_o *)0x0) &&
     ((HPACPFLKHPK->fields).KFNOHOOHFPG = (HPACPFLKHPK->fields).KFNOHOOHFPG + 1,
     pEVar2 = EJALJLHMDHM_TypeInfo, CPECAEHDDDB != (QuestAction_o *)0x0)) {
    pBVar7 = CPECAEHDDDB->klass;
    bVar1 = (EJALJLHMDHM_TypeInfo->_2).naturalAligment;
    if (((pBVar7->_2).naturalAligment < bVar1) ||
       ((pBVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)EJALJLHMDHM_TypeInfo)) {
      __this_00 = (System_Collections_Generic_List_object__o *)
                  (*(pBVar7->vtable)._7_HELIKPINEIM.methodPtr)
                            (CPECAEHDDDB,(pBVar7->vtable)._7_HELIKPINEIM.method);
      if ((__this_00 != (System_Collections_Generic_List_object__o *)0x0) &&
         (bVar3 = DJNBJHPDKDP__OBECCOPBADO<object>
                            ((System_Collections_Generic_List_T__o *)__this_00,
                             Method_DJNBJHPDKDP_OBECCOPBADO<QuestAction>__), !bVar3)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,__this_00,
                   Method_System_Collections_Generic_List<QuestAction>_GetEnumerator__);
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_68,
                                  Method_System_Collections_Generic_List_Enumerator<QuestAction>_MoveNext__
                                 ), bVar3) {
          OGFBENMAGJJ__JJLBOMEDNIJ
                    (__this,AAJBIMFNMBB,NDBPOFMECGL,(QuestAction_o *)local_68.fields._current,
                     HPACPFLKHPK,KHHGPLOMHBB,method);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_68,
                   Method_System_Collections_Generic_List_Enumerator<QuestAction>_Dispose__);
      }
      return;
    }
    (HPACPFLKHPK->fields).NHNMPHNJLHH = (HPACPFLKHPK->fields).NHNMPHNJLHH + 1;
    if (((CPECAEHDDDB->klass->_2).naturalAligment < bVar1) ||
       ((CPECAEHDDDB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pEVar2))
    goto LAB_0358e060;
    pHVar4 = EJALJLHMDHM__DHKCDPPAFFC((EJALJLHMDHM_o *)CPECAEHDDDB,AAJBIMFNMBB,(MethodInfo *)0x0);
    pBVar7 = CPECAEHDDDB[1].klass;
    if (pBVar7 == (QuestAction_c *)0x0) goto LAB_0358e060;
    bVar3 = System_String__StartsWith
                      ((System_String_o *)pBVar7,StringLiteral_15862/*"_"*/,(MethodInfo *)0x0);
    if ((!bVar3) && (pHVar4 == (HOOAAGABMBL_o *)0x0)) {
      (HPACPFLKHPK->fields).GLDHJGFLPAN = (HPACPFLKHPK->fields).GLDHJGFLPAN + 1;
      pSVar5 = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
      if ((NDBPOFMECGL == (FPPKHNNABAD_o *)0x0) || (pSVar5 == (System_String_array *)0x0))
      goto LAB_0358e060;
      if ((int)pSVar5->max_length == 0) goto LAB_0358e064;
      pSVar5->m_Items[0] = (NDBPOFMECGL->fields)._COIPKAKHDFP_k__BackingField;
      thunk_FUN_01c20e04(pSVar5->m_Items);
      if ((uint)pSVar5->max_length < 2) goto LAB_0358e064;
      pSVar5->m_Items[1] = StringLiteral_167/*" "*/;
      thunk_FUN_01c20e04(pSVar5->m_Items + 1);
      if ((uint)pSVar5->max_length < 3) goto LAB_0358e064;
      pSVar5->m_Items[2] = (CPECAEHDDDB->fields).LEMICKEFMOJ;
      thunk_FUN_01c20e04(pSVar5->m_Items + 2);
      if ((uint)pSVar5->max_length < 4) goto LAB_0358e064;
      pSVar5->m_Items[3] = StringLiteral_220/*" ("*/;
      thunk_FUN_01c20e04(pSVar5->m_Items + 3);
      if ((uint)pSVar5->max_length < 5) goto LAB_0358e064;
      pSVar5->m_Items[4] = (System_String_o *)pBVar7;
      thunk_FUN_01c20e04(pSVar5->m_Items + 4,pBVar7);
      if ((uint)pSVar5->max_length < 6) goto LAB_0358e064;
      pSVar5->m_Items[5] = StringLiteral_1115/*") not found"*/;
      thunk_FUN_01c20e04();
      pSVar6 = System_String__Concat(pSVar5,(MethodInfo *)0x0);
      if (KHHGPLOMHBB == (System_Text_StringBuilder_o *)0x0) goto LAB_0358e060;
      System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,pSVar6,(MethodInfo *)0x0);
    }
    if (pHVar4 != (HOOAAGABMBL_o *)0x0 || ((bVar3 ^ 0xffU) & 1) != 0) {
      return;
    }
    (HPACPFLKHPK->fields).HFCMMCLMHMF = (HPACPFLKHPK->fields).HFCMMCLMHMF + 1;
    pSVar5 = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
    if ((NDBPOFMECGL != (FPPKHNNABAD_o *)0x0) && (pSVar5 != (System_String_array *)0x0)) {
      if ((int)pSVar5->max_length != 0) {
        pSVar5->m_Items[0] = (NDBPOFMECGL->fields)._COIPKAKHDFP_k__BackingField;
        thunk_FUN_01c20e04(pSVar5->m_Items);
        if (1 < (uint)pSVar5->max_length) {
          pSVar5->m_Items[1] = StringLiteral_167/*" "*/;
          thunk_FUN_01c20e04(pSVar5->m_Items + 1);
          if (2 < (uint)pSVar5->max_length) {
            pSVar5->m_Items[2] = (CPECAEHDDDB->fields).LEMICKEFMOJ;
            thunk_FUN_01c20e04(pSVar5->m_Items + 2);
            if (3 < (uint)pSVar5->max_length) {
              pSVar5->m_Items[3] = StringLiteral_220/*" ("*/;
              thunk_FUN_01c20e04(pSVar5->m_Items + 3);
              if (4 < (uint)pSVar5->max_length) {
                pSVar5->m_Items[4] = (System_String_o *)pBVar7;
                thunk_FUN_01c20e04(pSVar5->m_Items + 4,pBVar7);
                if (5 < (uint)pSVar5->max_length) {
                  pSVar5->m_Items[5] = StringLiteral_1116/*") variable"*/;
                  thunk_FUN_01c20e04();
                  pSVar6 = System_String__Concat(pSVar5,(MethodInfo *)0x0);
                  if (KHHGPLOMHBB != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,pSVar6,(MethodInfo *)0x0);
                    return;
                  }
                  goto LAB_0358e060;
                }
              }
            }
          }
        }
      }
LAB_0358e064:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0358e060:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NPAKAMCDCNG(List<FPPKHNNABAD> OIEGJOKFIHI, StringBuilder KHHGPLOMHBB, OGFBENMAGJJ.NLOBPGHHIEF MEMJLGHJDCN)  [RVA 0x348E0E0]
// OGFBENMAGJJ$$NPAKAMCDCNG @ RVA 0x348E0E0

/* WARNING: Removing unreachable block (ram,0x0358e284) */

void OGFBENMAGJJ__NPAKAMCDCNG
               (OGFBENMAGJJ_o *__this,System_Collections_Generic_List_FPPKHNNABAD__o *OIEGJOKFIHI,
               System_Text_StringBuilder_o *KHHGPLOMHBB,OGFBENMAGJJ_NLOBPGHHIEF_o *MEMJLGHJDCN,
               MethodInfo *method)

{
  Il2CppObject *NDBPOFMECGL;
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  LCKCDEKNLOA_o *pLVar3;
  System_Collections_Generic_List_BOFEMGGNODC__o *__this_00;
  MethodInfo *in_x6;
  PKHMIGFEJCL_o *AAJBIMFNMBB;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045683f9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestAction>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestAction>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestAction>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestAction>_GetEnumerator__);
    DAT_045683f9 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
                    /* try { // try from 0358e190 to 0368e21f has its CatchHandler @ 0358e190
                       catch() { ... } // from try @ 0358e190 with catch @ 0358e190
                       catch() { ... } // from try @ 0358e244 with catch @ 0358e190
                       catch() { ... } // from try @ 0358e268 with catch @ 0358e190
                       catch() { ... } // from try @ 0358e290 with catch @ 0358e190
                       catch() { ... } // from try @ 0358e2d0 with catch @ 0358e190 */
  local_a0.fields._current = (Il2CppObject *)0x0;
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
     (OIEGJOKFIHI == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  AAJBIMFNMBB = (pNVar2->fields).QuestParameters;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)OIEGJOKFIHI,
             Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
    NDBPOFMECGL = local_80.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__)
      ;
                    /* catch() { ... } // from try @ 0358e28c with catch @ 0358e2b8 */
                    /* try { // try from 0358e2c8 to 0368e2cf has its CatchHandler @ 0358e2e4 */
      return;
    }
    if ((FPPKHNNABAD_o *)local_80.fields._current == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar3 = FPPKHNNABAD__HELIKPINEIM((FPPKHNNABAD_o *)local_80.fields._current,(MethodInfo *)0x0);
    if (pLVar3 == (LCKCDEKNLOA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pLVar3->fields).NEIJJHEFLHP;
                    /* try { // try from 0358e220 to 0368e227 has its CatchHandler @ 0358e274 */
    if (__this_00 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) break;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<QuestAction>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
                    /* try { // try from 0358e23c to 0368e243 has its CatchHandler @ 0358e270 */
    local_a0.fields._current = local_b8.fields._current;
                    /* try { // try from 0358e244 to 0368e263 has its CatchHandler @ 0358e190 */
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<QuestAction>_MoveNext__
                             ), bVar1) {
                    /* try { // try from 0358e264 to 0368e267 has its CatchHandler @ 0358e26c */
                    /* try { // try from 0358e268 to 0368e28b has its CatchHandler @ 0358e190 */
      OGFBENMAGJJ__JJLBOMEDNIJ
                (__this,AAJBIMFNMBB,(FPPKHNNABAD_o *)NDBPOFMECGL,
                 (QuestAction_o *)local_a0.fields._current,MEMJLGHJDCN,KHHGPLOMHBB,in_x6);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358e264 with catch @ 0358e26c
                        */
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358e23c with catch @ 0358e270
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358e220 with catch @ 0358e274
                        */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<QuestAction>_Dispose__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x348E39C]
// OGFBENMAGJJ$$.ctor @ RVA 0x348E39C

void OGFBENMAGJJ___ctor(OGFBENMAGJJ_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045683fa & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_045683fa = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string FGBGAKLKONL()  [RVA 0x348E3F4]
// OGFBENMAGJJ$$FGBGAKLKONL @ RVA 0x348E3F4

/* WARNING: Removing unreachable block (ram,0x0358e880) */

System_String_o * OGFBENMAGJJ__FGBGAKLKONL(OGFBENMAGJJ_o *__this,MethodInfo *method)

{
  int32_t HIHCBMNGGEO;
  ushort uVar1;
  ushort uVar2;
  Il2CppType *handle;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_List_FPPKHNNABAD__o *OIEGJOKFIHI;
  System_Type_o *enumType;
  System_Array_o *__this_01;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  int32_t *piVar6;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_02;
  System_Collections_Generic_List_FPPKHNNABAD__o *collection;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  OGFBENMAGJJ_NLOBPGHHIEF_o *__this_03;
  System_String_o *str1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  System_Collections_IEnumerator_c *pSVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int32_t local_54;
  
  if ((DAT_045683fb & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&OGFBENMAGJJ_NLOBPGHHIEF_TypeInfo);
    FUN_01bab630(&KFKFNDEJLKK_PCJFAKMBHCE_var);
    FUN_01bab630(&KFKFNDEJLKK_PCJFAKMBHCE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_264/*" <color=red>with errors</color>"*/);
    FUN_01bab630(&StringLiteral_10716/*"QuestStageBuyItem tests processed "*/);
    FUN_01bab630(&StringLiteral_10715/*"QuestStageBuyItem Tests"*/);
    FUN_01bab630(&StringLiteral_514/*" quests"*/);
    FUN_01bab630(&StringLiteral_21558/*"total : "*/);
    DAT_045683fb = 1;
    method = extraout_x1;
  }
  local_54 = 0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  OIEGJOKFIHI = (System_Collections_Generic_List_FPPKHNNABAD__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)OIEGJOKFIHI,
             Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
  handle = KFKFNDEJLKK_PCJFAKMBHCE_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
  __this_01 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_01 != (System_Array_o *)0x0) {
    pSVar3 = System_Array__GetEnumerator(__this_01,(MethodInfo *)0x0);
    if (pSVar3 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar9 = pSVar3->klass;
      uVar1._0_1_ = (pSVar9->_2).rank;
      uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
      uVar11 = (ulong)uVar1;
      if (uVar11 != 0) {
        piVar6 = &((pSVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar4 = pSVar9->vtable + *piVar6;
            goto LAB_0358e610;
          }
          uVar11 = uVar11 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar11 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0358e610:
      uVar11 = (*pVVar4->methodPtr)(pSVar3,pVVar4->method);
      if ((uVar11 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_01bda71c(pSVar3,System_IDisposable_TypeInfo);
        if (plVar5 == (long *)0x0) goto LAB_0358e750;
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 == 0) goto LAB_0358e728;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_0358e710;
      }
      pSVar9 = pSVar3->klass;
      uVar2._0_1_ = (pSVar9->_2).rank;
      uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
      uVar11 = (ulong)uVar2;
      if (uVar11 != 0) {
        piVar6 = &((pSVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar4 = pSVar9->vtable + (*piVar6 + 1);
            goto LAB_0358e670;
          }
          uVar11 = uVar11 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar11 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0358e670:
      plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(Il2CppClass **)(*plVar5 + 0x40) != (KFKFNDEJLKK_PCJFAKMBHCE_TypeInfo->_1).element_class)
      {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      piVar6 = (int32_t *)thunk_FUN_01bda96c();
      HIHCBMNGGEO = *piVar6;
      __this_02 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (__this_02 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      collection = Nekki_SF2_Core_Quests_QuestsManager__GetQuestsForTests
                             (__this_02,HIHCBMNGGEO,(MethodInfo *)0x0);
      if (collection == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((collection->fields)._size != 0) {
        if (OIEGJOKFIHI == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)OIEGJOKFIHI,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   Method_System_Collections_Generic_List<FPPKHNNABAD>_AddRange__);
      }
    } while( true );
  }
  goto LAB_0358e878;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0358e710:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0358e744;
    }
  }
LAB_0358e728:
  puVar7 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0358e744:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_0358e750:
  if (OIEGJOKFIHI != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    local_54 = (OIEGJOKFIHI->fields)._size;
    pSVar8 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat(StringLiteral_21558/*"total : "*/,pSVar8,(MethodInfo *)0x0);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(__this_00,pSVar8,(MethodInfo *)0x0);
      __this_03 = (OGFBENMAGJJ_NLOBPGHHIEF_o *)thunk_FUN_01bda818(OGFBENMAGJJ_NLOBPGHHIEF_TypeInfo);
      OGFBENMAGJJ_NLOBPGHHIEF___ctor(__this_03,(MethodInfo *)0x0);
      OGFBENMAGJJ__NPAKAMCDCNG(__this,OIEGJOKFIHI,__this_00,__this_03,in_x4);
      if (__this_03 != (OGFBENMAGJJ_NLOBPGHHIEF_o *)0x0) {
        GJFEBGNFFBA__ILHNDPBPGAN
                  ((GJFEBGNFFBA_o *)__this,0 < (__this_03->fields).GLDHJGFLPAN,StringLiteral_10715/*"QuestStageBuyItem Tests"*/,
                   __this_00,(MethodInfo *)0x0);
        local_54 = (OIEGJOKFIHI->fields)._size;
        str1 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
        pSVar8 = StringLiteral_264/*" <color=red>with errors</color>"*/;
        if ((__this_03->fields).GLDHJGFLPAN < 1) {
          pSVar8 = (System_String_o *)0x0;
        }
        pSVar8 = System_String__Concat
                           (StringLiteral_10716/*"QuestStageBuyItem tests processed "*/,str1,StringLiteral_514/*" quests"*/,pSVar8,(MethodInfo *)0x0);
        return pSVar8;
      }
    }
  }
LAB_0358e878:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

