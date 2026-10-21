// TypeDefIndex 1890
// Namespace: 
// public class LPGLKMNHELJ
// Fields:
//   public MFFKCPDBFPG FGCJFGHMIOL; // 0x10
//   public RaidConfig.ENBCJNLAHAC FIJPJBGCODO; // 0x18
//   public int PJBADHPBBAF; // 0x20
//   public bool MGFFBBLHKCJ; // 0x24
//   public string JOPIEJMBFHK; // 0x28
//   public DPLBMJODBEK BGHFADDGPAD; // 0x30
//   public bool IHJFCJKCGEK; // 0x34

// ===== private static void DDIFBBGDKHD(RaidConfig.FNILDHLJBBJ.FICOAMDKLKJ PBDIPLHDHHD, MFFKCPDBFPG COPNBALDNLF)  [RVA 0x32525D4]
// LPGLKMNHELJ$$DDIFBBGDKHD @ RVA 0x32525D4

void LPGLKMNHELJ__DDIFBBGDKHD
               (RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ_o *PBDIPLHDHHD,MFFKCPDBFPG_o *COPNBALDNLF,
               MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  System_ValueTuple_object__int__o key;
  Il2CppObject *pIVar3;
  bool bVar4;
  DILGLGMKOFG_o *__this;
  System_Object_array *args;
  long lVar5;
  undefined8 uVar6;
  MethodInfo_22A3AB4 *in_x4;
  DILGLGMKOFG_array *pDVar7;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_00;
  System_Collections_Generic_Dictionary_ValueTuple_string__int___MGNPHCAAEIO_OPCJEEFOCFB__o
  *__this_01;
  System_Collections_Generic_List_DILGLGMKOFG__o *__this_02;
  Il2CppClass *pIVar8;
  System_ValueTuple_object__int__o __this_03;
  undefined1 local_110 [24];
  System_String_o *pSStack_f8;
  bool_conflict local_f0;
  undefined7 uStack_ef;
  undefined1 local_e0 [8];
  System_String_o *pSStack_d8;
  Il2CppObject *local_d0;
  System_String_o *pSStack_c8;
  bool_conflict local_c0;
  undefined7 uStack_bf;
  undefined1 local_b0 [16];
  Il2CppObject *pIStack_a0;
  System_String_o *pSStack_98;
  undefined8 local_90;
  undefined1 local_80 [8];
  undefined8 uStack_78;
  Il2CppObject *local_70;
  
  if ((DAT_0456713c & 1) == 0) {
    FUN_01bab630(&DILGLGMKOFG_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_TryGetValue__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_System_ValueTuple<string,_int>__ctor__);
    FUN_01bab630(&StringLiteral_10795/*"Raid item  [{0}] not found"*/);
    DAT_0456713c = 1;
  }
  local_80 = (undefined1  [8])0x0;
  uStack_78._0_4_ = 0;
  uStack_78._4_4_ = 0;
  local_70 = (Il2CppObject *)0x0;
  local_90._0_1_ = false;
  local_90._1_7_ = 0;
  local_b0._8_8_ = (System_String_o *)0x0;
  local_b0._0_8_ = (Il2CppClass *)0x0;
  pSStack_98 = (System_String_o *)0x0;
  pIStack_a0 = (Il2CppObject *)0x0;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((PBDIPLHDHHD == (RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) ||
     (__this_00 = (PBDIPLHDHHD->fields).GFBNJPMOEKD,
     __this_00 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_01 = GameUtils_TypeInfo->static_fields->MIIIMPBMBKA;
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_e0,
             (System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
  uStack_78 = pSStack_d8;
  local_80 = local_e0;
  local_70 = local_d0;
  while( true ) {
    while( true ) {
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                         Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
      pIVar3 = local_70;
      if (!bVar4) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                   Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
        return;
      }
      if (local_70 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_03.fields._8_8_ = local_70[1].klass;
      local_e0 = (undefined1  [8])0x0;
      pSStack_d8 = (System_String_o *)0x0;
      __this_03.fields.Item1 = (Il2CppObject *)local_e0;
      System_ValueTuple<object,_int>___ctor
                (__this_03,(Il2CppObject *)(ulong)*(uint *)&local_70[1].monitor,
                 (int32_t)Method_System_ValueTuple<string,_int>__ctor__,(MethodInfo_2BCEB60 *)in_x4)
      ;
      if (__this_01 ==
          (System_Collections_Generic_Dictionary_ValueTuple_string__int___MGNPHCAAEIO_OPCJEEFOCFB__o
           *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      key.fields._8_8_ = pSStack_d8;
      key.fields.Item1 = (Il2CppObject *)local_e0;
      in_x4 = 
      Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_TryGetValue__
      ;
      bVar4 = System_Collections_Generic_Dictionary<ValueTuple<object,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,key,
                         (GameUtils_OPCJEEFOCFB_o *)local_b0,
                         Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_TryGetValue__
                        );
      if (bVar4) break;
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar8 = pIVar3[1].klass;
      if ((pIVar8 != (Il2CppClass *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pIVar8,(((args->obj).klass)->_1).element_class), lVar5 == 0)) {
        uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar6,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)pIVar8;
      thunk_FUN_01c20e04(args->m_Items,pIVar8);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10795/*"Raid item  [{0}] not found"*/,args,(MethodInfo *)0x0);
    }
    if (COPNBALDNLF == (MFFKCPDBFPG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = (COPNBALDNLF->fields).EEIGOFDOLKN;
    pSStack_d8 = (System_String_o *)local_b0._8_8_;
    local_e0 = (undefined1  [8])local_b0._0_8_;
    pSStack_c8 = pSStack_98;
    local_d0 = pIStack_a0;
    local_c0 = local_90._0_1_;
    uStack_bf = local_90._1_7_;
    bVar1 = (PBDIPLHDHHD->fields).MBCNFGBPLEP;
    __this = (DILGLGMKOFG_o *)thunk_FUN_01bda818(DILGLGMKOFG_TypeInfo);
    local_110._8_8_ = pSStack_d8;
    local_110._0_8_ = local_e0;
    pSStack_f8 = pSStack_c8;
    local_110._16_8_ = local_d0;
    local_f0 = local_c0;
    uStack_ef = uStack_bf;
    DILGLGMKOFG___ctor(__this,(GameUtils_OPCJEEFOCFB_o *)local_110,bVar1 != false,
                       (MethodInfo *)0x0);
    lVar5 = Method_System_Collections_Generic_List<DILGLGMKOFG>_Add__;
    if (__this_02 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) break;
    pDVar7 = (__this_02->fields)._items;
    (__this_02->fields)._version = (__this_02->fields)._version + 1;
    if (pDVar7 == (DILGLGMKOFG_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this_02->fields)._size;
    if (uVar2 < (uint)pDVar7->max_length) {
      (__this_02->fields)._size = uVar2 + 1;
      pDVar7->m_Items[(int)uVar2] = __this;
      thunk_FUN_01c20e04(pDVar7->m_Items + (int)uVar2,__this);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BAKANMGEDIG(RaidConfig.ENBCJNLAHAC NPOAPJKIIOF)  [RVA 0x32529AC]
// LPGLKMNHELJ$$BAKANMGEDIG @ RVA 0x32529AC

void LPGLKMNHELJ__BAKANMGEDIG
               (LPGLKMNHELJ_o *__this,RaidConfig_ENBCJNLAHAC_o *NPOAPJKIIOF,MethodInfo *method)

{
  bool bVar1;
  RaidConfig_o *__this_00;
  RaidConfig_FNILDHLJBBJ_o *pJVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *__this_01;
  Il2CppObject *pIVar3;
  MFFKCPDBFPG_o *__this_02;
  RaidConfig_ENBCJNLAHAC_o **ppJVar4;
  System_Object_array *args;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *method_00;
  System_Collections_Generic_List_DDMHMABAHHD__o *pSVar7;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456713d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ>_get_Item__
                );
    FUN_01bab630(&MFFKCPDBFPG_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8670/*"Loot container [{0}] is empty"*/);
    FUN_01bab630(&StringLiteral_8671/*"Loot container [{0}] not found"*/);
    DAT_0456713d = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((NPOAPJKIIOF != (RaidConfig_ENBCJNLAHAC_o *)0x0) && (__this_00 != (RaidConfig_o *)0x0)) {
    pJVar2 = RaidConfig__OJOIAONADNG(__this_00,(NPOAPJKIIOF->fields).LEJBNEIJJIF,(MethodInfo *)0x0)
    ;
    if (pJVar2 == (RaidConfig_FNILDHLJBBJ_o *)0x0) {
                    /* try { // try from 03352bf0 to 03452bf7 has its CatchHandler @ 03352e50 */
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
                    /* try { // try from 03352c04 to 03452c0f has its CatchHandler @ 03352e40 */
        pSVar9 = (NPOAPJKIIOF->fields).LEJBNEIJJIF;
                    /* try { // try from 03352c14 to 03452c1b has its CatchHandler @ 03352e48 */
        if ((pSVar9 != (System_String_o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pSVar9,(((args->obj).klass)->_1).element_class), lVar5 == 0))
        {
LAB_03352d04:
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
                    /* try { // try from 03352c24 to 03452c2f has its CatchHandler @ 03352e2c */
        if ((int)args->max_length == 0) {
LAB_03352d00:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = (Il2CppObject *)pSVar9;
                    /* try { // try from 03352c34 to 03452c3b has its CatchHandler @ 03352e30 */
        thunk_FUN_01c20e04(args->m_Items,pSVar9);
                    /* try { // try from 03352c40 to 03452c4b has its CatchHandler @ 03352e44 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03352c50 to 03452c57 has its CatchHandler @ 03352e4c */
          thunk_FUN_01ba7564();
        }
        puVar8 = &StringLiteral_8671/*"Loot container [{0}] not found"*/;
LAB_03352cd0:
        UnityEngine_Debug__LogErrorFormat((System_String_o *)*puVar8,args,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_01 = (pJVar2->fields).BAPMMGFEIDM;
      if (__this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0
         ) {
        if ((__this_01->fields)._size == 0) {
                    /* try { // try from 03352c60 to 03452c6b has its CatchHandler @ 03352e20 */
                    /* try { // try from 03352c70 to 03452c7b has its CatchHandler @ 03352e24 */
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          if (args != (System_Object_array *)0x0) {
            pSVar9 = (NPOAPJKIIOF->fields).LEJBNEIJJIF;
                    /* try { // try from 03352c7c to 03452e07 has its CatchHandler @ 03352918 */
            if ((pSVar9 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar9,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_03352d04;
            if ((int)args->max_length == 0) goto LAB_03352d00;
            args->m_Items[0] = (Il2CppObject *)pSVar9;
            thunk_FUN_01c20e04(args->m_Items,pSVar9);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            puVar8 = &StringLiteral_8670/*"Loot container [{0}] is empty"*/;
            goto LAB_03352cd0;
          }
        }
        else {
          method_00 = 
          Method_System_Collections_Generic_List<RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ>_get_Item__;
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,0,
                              (MethodInfo_26E4ADC *)
                              Method_System_Collections_Generic_List<RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ>_get_Item__
                             );
          __this_02 = (MFFKCPDBFPG_o *)thunk_FUN_01bda818(MFFKCPDBFPG_TypeInfo);
          MFFKCPDBFPG___ctor(__this_02,(MethodInfo *)0x0);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (pIVar3[3].monitor != (System_Collections_Generic_List_object__o *)0x0)) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_68,pIVar3[3].monitor,
                       Method_System_Collections_Generic_List<RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                      );
            local_50.fields._index = local_68.fields._index;
            local_50.fields._version = local_68.fields._version;
            local_50.fields._list = local_68.fields._list;
            local_50.fields._current = local_68.fields._current;
            while( true ) {
              bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_50,
                                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                                );
              pIVar3 = local_50.fields._current;
              if (!bVar1) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                          );
                ppJVar4 = &(__this->fields).FIJPJBGCODO;
                *ppJVar4 = NPOAPJKIIOF;
                thunk_FUN_01c20e04(ppJVar4,NPOAPJKIIOF);
                (__this->fields).FGCJFGHMIOL = __this_02;
                thunk_FUN_01c20e04(&__this->fields,__this_02);
                (__this->fields).BGHFADDGPAD = 1;
                return;
              }
              if ((RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ_o *)local_50.fields._current ==
                  (RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) break;
              pSVar7 = ((RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ_Fields *)
                       ((long)local_50.fields._current + 0x10))->GFBNJPMOEKD;
              if (pSVar7 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if ((pSVar7->fields)._size != 0) {
                bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                                  (((RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ_Fields *)
                                   ((long)local_50.fields._current + 0x10))->JFDGLPNMELO,
                                   (MethodInfo *)0x0);
                if ((bVar1) &&
                   (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                                      (((RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ_Fields *)
                                       ((long)pIVar3 + 0x10))->CHDOCDMAJPI,(MethodInfo *)0x0), bVar1
                   )) {
                  LPGLKMNHELJ__DDIFBBGDKHD
                            ((RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ_o *)pIVar3,__this_02,method_00);
                }
                else {
                  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                                    (((RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ_Fields *)
                                     ((long)pIVar3 + 0x10))->CHDOCDMAJPI,(MethodInfo *)0x0);
                  if (bVar1) {
                    LPGLKMNHELJ__MFJHNBOEHFN
                              ((RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ_o *)pIVar3,__this_02,method_00);
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(string BCFJHEPFBOB, bool LLCJCPCKPJL = False, bool LLFFIPAKOML = False)  [RVA 0x3253008]
// LPGLKMNHELJ$$.ctor @ RVA 0x3253008

void LPGLKMNHELJ___ctor(LPGLKMNHELJ_o *__this,System_String_o *BCFJHEPFBOB,bool LLCJCPCKPJL,
                       bool LLFFIPAKOML,MethodInfo *method)

{
  RaidConfig_o *__this_00;
  RaidConfig_ENBCJNLAHAC_o *NPOAPJKIIOF;
  System_Object_array *args;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)(ulong)LLCJCPCKPJL;
  method_00 = (MethodInfo *)BCFJHEPFBOB;
  if ((DAT_0456713e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10796/*"Raid item pack [{0}] not found"*/);
    DAT_0456713e = 1;
    method_00 = extraout_x1;
  }
  LPGLKMNHELJ___ctor(__this,method_00);
  (__this->fields).IHJFCJKCGEK = LLFFIPAKOML;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this_00 != (RaidConfig_o *)0x0) {
    NPOAPJKIIOF = RaidConfig__DIFLKMKBENA(__this_00,BCFJHEPFBOB,LLCJCPCKPJL,(MethodInfo *)0x0);
    if (NPOAPJKIIOF != (RaidConfig_ENBCJNLAHAC_o *)0x0) {
      LPGLKMNHELJ__BAKANMGEDIG(__this,NPOAPJKIIOF,method_01);
      return;
    }
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args != (System_Object_array *)0x0) {
      if ((BCFJHEPFBOB != (System_String_o *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(BCFJHEPFBOB,(((args->obj).klass)->_1).element_class),
         lVar1 == 0)) {
        uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar2,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)BCFJHEPFBOB;
        thunk_FUN_01c20e04(args->m_Items,BCFJHEPFBOB);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10796/*"Raid item pack [{0}] not found"*/,args,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void MFJHNBOEHFN(RaidConfig.FNILDHLJBBJ.FICOAMDKLKJ PBDIPLHDHHD, MFFKCPDBFPG COPNBALDNLF)  [RVA 0x3252DA0]
// LPGLKMNHELJ$$MFJHNBOEHFN @ RVA 0x3252DA0

void LPGLKMNHELJ__MFJHNBOEHFN
               (RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ_o *PBDIPLHDHHD,MFFKCPDBFPG_o *COPNBALDNLF,
               MethodInfo *method)

{
  uint uVar1;
  System_ValueTuple_object__int__o key;
  bool bVar2;
  DILGLGMKOFG_o *__this;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  MethodInfo_2BCEB60 *in_x4;
  DILGLGMKOFG_array *pDVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_DILGLGMKOFG__o *__this_00;
  System_Collections_Generic_Dictionary_ValueTuple_string__int___MGNPHCAAEIO_OPCJEEFOCFB__o
  *__this_01;
  System_ValueTuple_object__int__o __this_02;
  GameUtils_OPCJEEFOCFB_o local_c0;
  Il2CppObject local_90;
  int32_t iStack_80;
  undefined4 uStack_7c;
  System_String_o *pSStack_78;
  bool_conflict local_70;
  undefined7 uStack_6f;
  GameUtils_OPCJEEFOCFB_o local_60;
  
  if ((DAT_0456713f & 1) == 0) {
    FUN_01bab630(&DILGLGMKOFG_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_TryGetValue__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_Add__);
    FUN_01bab630(&GameUtils_TypeInfo);
                    /* try { // try from 03352e08 to 03452e0b has its CatchHandler @ 03352e3c */
                    /* try { // try from 03352e0c to 03452e0f has its CatchHandler @ 03352e38 */
                    /* try { // try from 03352e10 to 03452e13 has its CatchHandler @ 03352e34 */
    FUN_01bab630(&object___TypeInfo);
                    /* try { // try from 03352e14 to 03452e17 has its CatchHandler @ 03352e28 */
                    /* try { // try from 03352e18 to 03452e1b has its CatchHandler @ 03352e1c */
                    /* catch() { ... } // from try @ 03352e18 with catch @ 03352e1c
                       try { // try from 03352e1c to 03452e67 has its CatchHandler @ 03352918 */
    FUN_01bab630(&Method_System_ValueTuple<string,_int>__ctor__);
                    /* catch() { ... } // from try @ 03352c60 with catch @ 03352e20 */
                    /* catch() { ... } // from try @ 03352c70 with catch @ 03352e24 */
                    /* catch() { ... } // from try @ 03352e14 with catch @ 03352e28 */
    FUN_01bab630(&StringLiteral_10796/*"Raid item pack [{0}] not found"*/);
                    /* catch() { ... } // from try @ 03352c24 with catch @ 03352e2c */
                    /* catch() { ... } // from try @ 03352c34 with catch @ 03352e30 */
    DAT_0456713f = 1;
  }
                    /* catch() { ... } // from try @ 03352e10 with catch @ 03352e34 */
  local_60.fields.OAPLLNNEONM = false;
  local_60.fields._33_7_ = 0;
                    /* catch() { ... } // from try @ 03352e0c with catch @ 03352e38 */
                    /* catch() { ... } // from try @ 03352e08 with catch @ 03352e3c */
                    /* catch() { ... } // from try @ 03352c04 with catch @ 03352e40 */
  local_60.fields.KPDPJONADPJ = (System_String_o *)0x0;
  local_60.fields.JIJLBFGKNJK = (System_String_o *)0x0;
  local_60.fields.GPOEEHGGIII = (System_String_o *)0x0;
  local_60.fields.ADCKCMDHIHM = 0;
  local_60.fields._20_4_ = 0;
                    /* catch() { ... } // from try @ 03352c40 with catch @ 03352e44 */
                    /* catch() { ... } // from try @ 03352c14 with catch @ 03352e48 */
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03352c50 with catch @ 03352e4c */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 03352bf0 with catch @ 03352e50 */
  }
  if (PBDIPLHDHHD != (RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) {
    __this_02.fields._8_8_ = (PBDIPLHDHHD->fields).JFDGLPNMELO;
                    /* try { // try from 03352e68 to 03452e6b has its CatchHandler @ 03352e8c */
                    /* try { // try from 03352e6c to 03452e93 has its CatchHandler @ 03352918 */
    __this_01 = GameUtils_TypeInfo->static_fields->MIIIMPBMBKA;
    local_90.klass = (Il2CppClass *)0x0;
    local_90.monitor = (System_String_o *)0x0;
    __this_02.fields.Item1 = &local_90;
    System_ValueTuple<object,_int>___ctor
              (__this_02,(Il2CppObject *)0x1,(int32_t)Method_System_ValueTuple<string,_int>__ctor__,
               in_x4);
    if (__this_01 !=
        (System_Collections_Generic_Dictionary_ValueTuple_string__int___MGNPHCAAEIO_OPCJEEFOCFB__o *
        )0x0) {
      key.fields._8_8_ = local_90.monitor;
      key.fields.Item1 = (Il2CppObject *)local_90.klass;
                    /* catch() { ... } // from try @ 03352e68 with catch @ 03352e8c */
                    /* try { // try from 03352e94 to 03452e9b has its CatchHandler @ 03352eb0 */
                    /* try { // try from 03352e9c to 03452ea7 has its CatchHandler @ 03352918 */
      bVar2 = System_Collections_Generic_Dictionary<ValueTuple<object,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,key,
                         &local_60,
                         Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_TryGetValue__
                        );
      if (bVar2) {
        if (COPNBALDNLF != (MFFKCPDBFPG_o *)0x0) {
                    /* try { // try from 03352ea8 to 03452eaf has its CatchHandler @ 03352eb0 */
          __this_00 = (COPNBALDNLF->fields).EEIGOFDOLKN;
                    /* catch() { ... } // from try @ 03352e94 with catch @ 03352eb0
                       catch() { ... } // from try @ 03352ea8 with catch @ 03352eb0 */
          local_90.monitor = local_60.fields.KPDPJONADPJ;
          local_90.klass = (Il2CppClass *)local_60.fields.JIJLBFGKNJK;
          pSStack_78 = local_60.fields.GPOEEHGGIII;
          iStack_80 = local_60.fields.ADCKCMDHIHM;
          uStack_7c = local_60.fields._20_4_;
          local_70 = local_60.fields.OAPLLNNEONM;
          uStack_6f = local_60.fields._33_7_;
          bVar2 = (PBDIPLHDHHD->fields).MBCNFGBPLEP;
          __this = (DILGLGMKOFG_o *)thunk_FUN_01bda818(DILGLGMKOFG_TypeInfo);
          local_c0.fields.KPDPJONADPJ = local_90.monitor;
          local_c0.fields.JIJLBFGKNJK = (System_String_o *)local_90.klass;
          local_c0.fields.GPOEEHGGIII = pSStack_78;
          local_c0.fields.ADCKCMDHIHM = iStack_80;
          local_c0.fields._20_4_ = uStack_7c;
          local_c0.fields.OAPLLNNEONM = local_70;
          local_c0.fields._33_7_ = uStack_6f;
          DILGLGMKOFG___ctor(__this,&local_c0,bVar2,(MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<DILGLGMKOFG>_Add__;
                    /* try { // try from 03352ef4 to 03453393 has its CatchHandler @ 03352ef4
                       catch() { ... } // from try @ 03352ef4 with catch @ 03352ef4
                       catch() { ... } // from try @ 03353568 with catch @ 03352ef4
                       catch() { ... } // from try @ 033535b8 with catch @ 03352ef4
                       catch() { ... } // from try @ 03353644 with catch @ 03352ef4
                       catch() { ... } // from try @ 03353684 with catch @ 03352ef4 */
          if (__this_00 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
            pDVar5 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pDVar5 != (DILGLGMKOFG_array *)0x0) {
              uVar1 = (__this_00->fields)._size;
              if (uVar1 < (uint)pDVar5->max_length) {
                (__this_00->fields)._size = uVar1 + 1;
                pDVar5->m_Items[(int)uVar1] = __this;
                thunk_FUN_01c20e04(pDVar5->m_Items + (int)uVar1,__this);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)__this,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
              return;
            }
          }
        }
      }
      else {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (args != (System_Object_array *)0x0) {
          pSVar6 = (PBDIPLHDHHD->fields).JFDGLPNMELO;
          if ((pSVar6 != (System_String_o *)0x0) &&
             (lVar3 = thunk_FUN_01bda71c(pSVar6,(((args->obj).klass)->_1).element_class), lVar3 == 0
             )) {
            uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar4,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = (Il2CppObject *)pSVar6;
            thunk_FUN_01c20e04(args->m_Items,pSVar6);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_10796/*"Raid item pack [{0}] not found"*/,args,(MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x325316C]
// LPGLKMNHELJ$$.ctor @ RVA 0x325316C

void LPGLKMNHELJ___ctor(LPGLKMNHELJ_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04567140 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04567140 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).PJBADHPBBAF = 0;
  (__this->fields).MGFFBBLHKCJ = false;
  ppSVar1 = &(__this->fields).JOPIEJMBFHK;
  *ppSVar1 = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(ppSVar1);
  (__this->fields).BGHFADDGPAD = 0;
  (__this->fields).IHJFCJKCGEK = false;
  return;
}


// ===== public void .ctor(RaidConfig.ENBCJNLAHAC NPOAPJKIIOF)  [RVA 0x32531E0]
// LPGLKMNHELJ$$.ctor @ RVA 0x32531E0

void LPGLKMNHELJ___ctor(LPGLKMNHELJ_o *__this,RaidConfig_ENBCJNLAHAC_o *NPOAPJKIIOF,
                       MethodInfo *method)

{
  LPGLKMNHELJ___ctor(__this,(MethodInfo *)NPOAPJKIIOF);
  LPGLKMNHELJ__BAKANMGEDIG(__this,NPOAPJKIIOF,method);
  return;
}

