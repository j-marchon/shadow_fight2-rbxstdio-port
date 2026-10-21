// IPPEHAJADOO$$ICOOHCONHBC @ RVA 0x314243C

/* WARNING: Removing unreachable block (ram,0x03242800) */
/* WARNING: Removing unreachable block (ram,0x03242a10) */

bool IPPEHAJADOO__ICOOHCONHBC
               (OLKKAIFGGAK_o *BCKBBGCOMJD,ABNLGBHKOCE_o *AEDJMMHJIEH,
               System_Collections_Generic_List_IENLNOEDCFF__o *PBCGCHIKCOE,
               KJFPGDFNFCL_o *FKDOMEBPFPF,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  Il2CppObject *__this;
  KAFMFFDFDBL_o *__this_00;
  bool bVar3;
  int32_t iVar4;
  System_Text_StringBuilder_o *__this_01;
  long lVar5;
  KJFPGDFNFCL_o **ppKVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_02;
  ABNLGBHKOCE_JBMHDDKONHC_o *pAVar9;
  int iVar10;
  NJPBHDMCLIN_o *pNVar11;
  Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this_03;
  UnityEngine_Color_o EFJKPCADGJH;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  undefined1 local_b8 [8];
  void *pvStack_b0;
  int32_t local_a8;
  undefined4 uStack_a4;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  byte local_84 [4];
  undefined1 local_80 [8];
  undefined8 uStack_78;
  KAFMFFDFDBL_o *local_70;
  
                    /* try { // try from 03242440 to 03342443 has its CatchHandler @ 03242a20 */
                    /* try { // try from 03242454 to 0334245b has its CatchHandler @ 03242a24 */
                    /* try { // try from 03242470 to 03342477 has its CatchHandler @ 032427f4 */
  if ((DAT_0456675b & 1) == 0) {
    FUN_01bab630(&IENLNOEDCFF_ACAJADECPLB_TypeInfo);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
                    /* try { // try from 032424a0 to 033424ab has its CatchHandler @ 032427d0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
                    /* try { // try from 032424c0 to 033424c7 has its CatchHandler @ 032426bc */
    FUN_01bab630(&KAFMFFDFDBL_LIHIFIABAJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 032424e4 to 033424eb has its CatchHandler @ 032426b4 */
    FUN_01bab630(&StringLiteral_38);
                    /* try { // try from 032424f4 to 033424fb has its CatchHandler @ 032426b0 */
    FUN_01bab630(&StringLiteral_520);
    DAT_0456675b = 1;
  }
  local_80 = (undefined1  [8])0x0;
  uStack_78._0_4_ = 0;
  uStack_78._4_4_ = 0;
  local_70 = (KAFMFFDFDBL_o *)0x0;
                    /* try { // try from 03242508 to 0334250f has its CatchHandler @ 032426a4 */
  local_84[0] = 0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* try { // try from 03242518 to 0334251f has its CatchHandler @ 032426ac */
    if ((AEDJMMHJIEH == (ABNLGBHKOCE_o *)0x0) ||
       (pAVar9 = (AEDJMMHJIEH->fields).CKNFEFFGHLC, pAVar9 == (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0))
    goto LAB_03242a0c;
    PBCGCHIKCOE = (pAVar9->fields).KPFGHBEKJIM;
  }
                    /* try { // try from 0324252c to 03342533 has its CatchHandler @ 032426a8 */
  __this_01 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
  if (PBCGCHIKCOE != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* try { // try from 0324254c to 0334254f has its CatchHandler @ 0324268c */
                    /* try { // try from 03242564 to 0334256b has its CatchHandler @ 03242698 */
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
               (System_Collections_Generic_List_object__o *)PBCGCHIKCOE,
               Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    local_70 = (KAFMFFDFDBL_o *)CONCAT44(uStack_a4,local_a8);
    uStack_78 = pvStack_b0;
    local_80 = local_b8;
                    /* try { // try from 03242588 to 0334258b has its CatchHandler @ 03242684 */
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                         Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
      __this_00 = local_70;
      if (!bVar3) {
        iVar10 = 0xf;
        goto LAB_03242980;
      }
                    /* try { // try from 032425a0 to 033425af has its CatchHandler @ 03242690 */
      if (local_70 == (KAFMFFDFDBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (local_70->fields).super.LOAFPIOGJAF;
      lVar5 = (*(local_70->klass->vtable)._6_BMADCIAHJFL.methodPtr)
                        (local_70,BCKBBGCOMJD,(ulong)uVar1,
                         (local_70->klass->vtable)._6_BMADCIAHJFL.method);
      if (lVar5 == 0) break;
      if (FKDOMEBPFPF != (KJFPGDFNFCL_o *)0x0) {
                    /* try { // try from 032425cc to 033425cf has its CatchHandler @ 03242680 */
        pNVar11 = *(NJPBHDMCLIN_o **)(lVar5 + 0x248);
                    /* try { // try from 032425d0 to 033425db has its CatchHandler @ 03242688 */
        if (pNVar11 == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ppKVar6 = &(pNVar11->fields).FKBLDBLGMIH;
        *ppKVar6 = FKDOMEBPFPF;
        thunk_FUN_01c20e04(ppKVar6,FKDOMEBPFPF);
        (FKDOMEBPFPF->fields).KPFGHBEKJIM = pNVar11;
                    /* try { // try from 032425f0 to 033425fb has its CatchHandler @ 03242694 */
        thunk_FUN_01c20e04(&FKDOMEBPFPF->fields,pNVar11);
      }
                    /* try { // try from 03242604 to 03342627 has its CatchHandler @ 032426a0 */
      (*(__this_00->klass->vtable)._5_ENEJIHFIBFM.methodPtr)
                (__this_00,1,(__this_00->klass->vtable)._5_ENEJIHFIBFM.method);
      local_84[0] = 0;
      iVar4 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
      if (iVar4 == 8) {
                    /* try { // try from 0324262c to 03342633 has its CatchHandler @ 0324269c */
        bVar2 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
        if ((bVar2 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
            (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
          if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032429cc with catch @ 03242a1c */
            FUN_01bab8c8();
          }
                    /* try { // try from 0324265c to 03342663 has its CatchHandler @ 032427d4 */
          local_84[0] = KAFMFFDFDBL__CFANNGPGDPJ
                                  (__this_00,(BCKBBGCOMJD->fields).FNEAAHOOHAA,BCKBBGCOMJD,
                                   FKDOMEBPFPF,(MethodInfo *)0x0);
                    /* try { // try from 03242678 to 0334267b has its CatchHandler @ 032426b8 */
                    /* try { // try from 0324267c to 033426d7 has its CatchHandler @ 03241cd4 */
                    /* catch() { ... } // from try @ 032425cc with catch @ 03242680 */
          local_a8 = (__this_00->fields).HHHHNPIKMMJ;
                    /* catch() { ... } // from try @ 03242588 with catch @ 03242684 */
          local_b8 = (undefined1  [8])KAFMFFDFDBL_LIHIFIABAJF_TypeInfo;
                    /* catch() { ... } // from try @ 032425d0 with catch @ 03242688 */
                    /* catch() { ... } // from try @ 0324254c with catch @ 0324268c */
          pvStack_b0 = (void *)0xffffffffffffffff;
                    /* catch() { ... } // from try @ 032425a0 with catch @ 03242690 */
                    /* catch() { ... } // from try @ 032425f0 with catch @ 03242694 */
                    /* catch() { ... } // from try @ 03242564 with catch @ 03242698 */
          pSVar7 = System_Enum__ToString((System_Enum_o *)local_b8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0324262c with catch @ 0324269c */
                    /* catch() { ... } // from try @ 03242604 with catch @ 032426a0 */
                    /* catch() { ... } // from try @ 03242508 with catch @ 032426a4 */
                    /* catch() { ... } // from try @ 0324252c with catch @ 032426a8 */
                    /* catch() { ... } // from try @ 03242518 with catch @ 032426ac */
                    /* catch() { ... } // from try @ 032424f4 with catch @ 032426b0 */
          if ((bool_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 032424e4 with catch @ 032426b4 */
            thunk_FUN_01ba7564();
          }
                    /* catch() { ... } // from try @ 03242678 with catch @ 032426b8 */
                    /* catch() { ... } // from try @ 032424c0 with catch @ 032426bc */
          pSVar8 = System_Boolean__ToString(SUB81(local_84,0),(MethodInfo *)0x0);
          pSVar7 = System_String__Concat(pSVar7,StringLiteral_520,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 032426d8 to 033426db has its CatchHandler @ 032427b4 */
          if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Text_StringBuilder__AppendLine(__this_01,pSVar7,(MethodInfo *)0x0);
          __this_02 = (__this_00->fields).INAJMPIJJOG;
          if (__this_02 == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 03242700 to 03342707 has its CatchHandler @ 03242a04 */
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_d0,(System_Collections_Generic_List_object__o *)__this_02,
                     Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
          local_a0.fields._index = local_d0.fields._index;
          local_a0.fields._version = local_d0.fields._version;
          local_a0.fields._list = local_d0.fields._list;
          local_a0.fields._current = local_d0.fields._current;
          while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_a0,
                                    Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__
                                   ), __this = local_a0.fields._current, bVar3) {
            if ((IENLNOEDCFF_o *)local_a0.fields._current == (IENLNOEDCFF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 0324273c to 0334273f has its CatchHandler @ 032427f0 */
            local_84[0] = (*(((IENLNOEDCFF_c *)(local_a0.fields._current)->klass)->vtable).
                            _4_EPBENPDCBFE.methodPtr)
                                    (local_a0.fields._current,(BCKBBGCOMJD->fields).FNEAAHOOHAA,
                                     (((IENLNOEDCFF_c *)(local_a0.fields._current)->klass)->vtable).
                                     _4_EPBENPDCBFE.method);
                    /* try { // try from 03242744 to 03342747 has its CatchHandler @ 032427ec */
            local_84[0] = local_84[0] & 1;
                    /* try { // try from 0324274c to 0334274f has its CatchHandler @ 032427e8 */
                    /* try { // try from 03242754 to 03342757 has its CatchHandler @ 032427e4 */
            local_a8 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this,(MethodInfo *)0x0);
            local_b8 = (undefined1  [8])IENLNOEDCFF_ACAJADECPLB_TypeInfo;
            pvStack_b0 = (void *)0xffffffffffffffff;
                    /* try { // try from 0324276c to 03342793 has its CatchHandler @ 03242b44 */
            pSVar7 = System_Enum__ToString((System_Enum_o *)local_b8,(MethodInfo *)0x0);
            if ((bool_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 0324279c to 033427a3 has its CatchHandler @ 032427d8 */
            pSVar8 = System_Boolean__ToString(SUB81(local_84,0),(MethodInfo *)0x0);
                    /* try { // try from 032427a8 to 033427af has its CatchHandler @ 032427cc */
                    /* try { // try from 032427b0 to 0334280f has its CatchHandler @ 03241cd4 */
                    /* catch() { ... } // from try @ 032426d8 with catch @ 032427b4 */
            pSVar7 = System_String__Concat
                               (StringLiteral_38,pSVar7,StringLiteral_520,pSVar8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032423f4 with catch @ 032427c0 */
                    /* catch() { ... } // from try @ 032427a8 with catch @ 032427cc */
            System_Text_StringBuilder__AppendLine(__this_01,pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032424a0 with catch @ 032427d0 */
          }
                    /* catch() { ... } // from try @ 0324265c with catch @ 032427d4 */
                    /* catch() { ... } // from try @ 0324279c with catch @ 032427d8 */
                    /* catch() { ... } // from try @ 03242194 with catch @ 032427dc */
                    /* catch() { ... } // from try @ 03242360 with catch @ 032427e0 */
                    /* catch() { ... } // from try @ 03242754 with catch @ 032427e4 */
                    /* catch() { ... } // from try @ 0324274c with catch @ 032427e8 */
                    /* catch() { ... } // from try @ 03242744 with catch @ 032427ec */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
                    /* catch() { ... } // from try @ 0324273c with catch @ 032427f0 */
                    /* catch() { ... } // from try @ 03242470 with catch @ 032427f4 */
        }
      }
      else {
                    /* try { // try from 03242810 to 03342813 has its CatchHandler @ 032429e8 */
                    /* try { // try from 03242814 to 0334283b has its CatchHandler @ 03241cd4 */
        local_84[0] = (*(__this_00->klass->vtable)._4_EPBENPDCBFE.methodPtr)
                                (__this_00,*(undefined8 *)(lVar5 + 0x248),
                                 (__this_00->klass->vtable)._4_EPBENPDCBFE.method);
        local_84[0] = local_84[0] & 1;
                    /* catch() { ... } // from try @ 03242164 with catch @ 0324281c */
        local_a8 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
        local_b8 = (undefined1  [8])IENLNOEDCFF_ACAJADECPLB_TypeInfo;
                    /* try { // try from 0324283c to 0334283f has its CatchHandler @ 032429f4 */
        pvStack_b0 = (void *)0xffffffffffffffff;
        pSVar7 = System_Enum__ToString((System_Enum_o *)local_b8,(MethodInfo *)0x0);
                    /* try { // try from 0324285c to 0334286b has its CatchHandler @ 03242b74 */
        if ((bool_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar8 = System_Boolean__ToString(SUB81(local_84,0),(MethodInfo *)0x0);
        pSVar7 = System_String__Concat(pSVar7,StringLiteral_520,pSVar8,(MethodInfo *)0x0);
        if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032429dc with catch @ 03242a08 */
          FUN_01bab8c8();
        }
        System_Text_StringBuilder__AppendLine(__this_01,pSVar7,(MethodInfo *)0x0);
      }
                    /* try { // try from 0324289c to 0334289f has its CatchHandler @ 03242b48 */
      if (AEDJMMHJIEH == (ABNLGBHKOCE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032429c0 to 033429c7 has its CatchHandler @ 03242a34 */
        FUN_01bab8c8();
      }
      if ((AEDJMMHJIEH->fields).DMNOONNKPKP != false) {
        if (DAT_0456684a == '\0') {
                    /* try { // try from 032428b8 to 033428bf has its CatchHandler @ 03242b58 */
          FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo);
          DAT_0456684a = '\x01';
        }
        if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03242700 with catch @ 03242a04 */
          FUN_01bab8c8();
        }
                    /* try { // try from 032428dc to 033428e3 has its CatchHandler @ 03242b60 */
        pSVar8 = (AEDJMMHJIEH->fields).JIJLBFGKNJK;
        __this_03 = Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields->FFOLFLCMFCH;
        pSVar7 = (System_String_o *)
                 (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                           (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        if (__this_03 == (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032420f8 with catch @ 03242a00 */
          FUN_01bab8c8();
        }
        EFJKPCADGJH.fields.b = 0.0;
        EFJKPCADGJH.fields.a = 1.0;
        EFJKPCADGJH.fields.r = 1.0;
        EFJKPCADGJH.fields.g = 0.0;
                    /* try { // try from 03242900 to 0334290b has its CatchHandler @ 03242b4c */
        Nekki_SF2_GUI_DebugModules_ScreenDebug__ShowDebugLine
                  (__this_03,pSVar8,pSVar7,EFJKPCADGJH,(MethodInfo *)0x0);
      }
      (__this_00->fields).super.LOAFPIOGJAF = uVar1;
                    /* try { // try from 03242928 to 03342933 has its CatchHandler @ 03242b5c */
    } while (local_84[0] != 0);
    iVar10 = 7;
                    /* try { // try from 03242978 to 0334299f has its CatchHandler @ 03242b40 */
LAB_03242980:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
               Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
                    /* try { // try from 032429a8 to 033429ab has its CatchHandler @ 03242a44 */
                    /* try { // try from 032429b0 to 033429b3 has its CatchHandler @ 03242a40 */
                    /* try { // try from 032429b8 to 033429bb has its CatchHandler @ 03242a3c */
    return iVar10 != 7;
  }
LAB_03242a0c:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032429d4 with catch @ 03242a0c */
  FUN_01bab8c8();
}

