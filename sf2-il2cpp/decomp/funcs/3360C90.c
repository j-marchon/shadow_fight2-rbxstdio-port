// MMDDDDFHOLG$$IKDPMKOIDMP @ RVA 0x3360C90

void MMDDDDFHOLG__IKDPMKOIDMP
               (MMDDDDFHOLG_o *__this,EHCCNKFIPPA_o *GFHKAOIMLHG,OLKKAIFGGAK_o *IGMNBGIAGGK,
               NJPBBPOABKP_o *AEDJMMHJIEH,bool JDALPBMBDDO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  int32_t iVar4;
  IGJEEGBBNFC_o *__this_01;
  PHDCILJMEHO_o *__this_02;
  System_Collections_Generic_List_IGJEEGBBNFC__o *__this_03;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *DLOFGOGAGAA;
  System_Collections_Generic_List_HJNEOLCKEMD__o *__this_04;
  MMDDDDFHOLG_DOCBHLNBECF_o *__this_05;
  OLKKAIFGGAK_o *pOVar5;
  OLKKAIFGGAK_o **ppOVar6;
  HJNEOLCKEMD_o **ppHVar7;
  NILLKLHKLHG_o *__this_06;
  MMFIDKMDADC_o *__this_07;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_08;
  MethodInfo *method_00;
  IGJEEGBBNFC_array *pIVar8;
  MMDDDDFHOLG_DOCBHLNBECF_array *pMVar9;
  HEFOANCOHDC_o *EIKFGOCCOIE;
  undefined1 auVar10 [16];
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  method_00 = (MethodInfo *)AEDJMMHJIEH;
  if ((DAT_04567a85 & 1) == 0) {
    FUN_01bab630(&MMDDDDFHOLG_DOCBHLNBECF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_get_Current__);
    FUN_01bab630(&IGJEEGBBNFC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_TypeInfo);
    FUN_01bab630(&PHDCILJMEHO_TypeInfo);
    DAT_04567a85 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((AEDJMMHJIEH == (NJPBBPOABKP_o *)0x0) || (GFHKAOIMLHG == (EHCCNKFIPPA_o *)0x0))
  goto LAB_03461090;
  __this_01 = MMDDDDFHOLG__MDEAJBFLJGP
                        (__this,(GFHKAOIMLHG->fields)._HKPEJNKNEGG_k__BackingField,
                         (AEDJMMHJIEH->fields)._MEFGNAIILBJ_k__BackingField,method_00);
  if (__this_01 == (IGJEEGBBNFC_o *)0x0) {
    __this_01 = (IGJEEGBBNFC_o *)thunk_FUN_01bda818(IGJEEGBBNFC_TypeInfo);
    IGJEEGBBNFC___ctor(__this_01,(MethodInfo *)0x0);
    EIKFGOCCOIE = (AEDJMMHJIEH->fields)._MEFGNAIILBJ_k__BackingField;
    __this_02 = (PHDCILJMEHO_o *)thunk_FUN_01bda818(PHDCILJMEHO_TypeInfo);
    PHDCILJMEHO___ctor(__this_02,EIKFGOCCOIE,true,(MethodInfo *)0x0);
    if (__this_01 == (IGJEEGBBNFC_o *)0x0) goto LAB_03461090;
    (__this_01->fields).HAHNEPLFLFD = __this_02;
    thunk_FUN_01c20e04(&__this_01->fields,__this_02);
    lVar2 = Method_System_Collections_Generic_List<IGJEEGBBNFC>_Add__;
    __this_03 = (GFHKAOIMLHG->fields)._DEKNAHBMHGA_k__BackingField;
    if (__this_03 == (System_Collections_Generic_List_IGJEEGBBNFC__o *)0x0) goto LAB_03461090;
    pIVar8 = (__this_03->fields)._items;
                    /* try { // try from 03460e04 to 03560e07 has its CatchHandler @ 03460e2c */
    (__this_03->fields)._version = (__this_03->fields)._version + 1;
                    /* try { // try from 03460e08 to 03560e0f has its CatchHandler @ 03460e38 */
    if (pIVar8 == (IGJEEGBBNFC_array *)0x0) goto LAB_03461090;
    uVar1 = (__this_03->fields)._size;
                    /* try { // try from 03460e10 to 03560e13 has its CatchHandler @ 034608e8 */
                    /* try { // try from 03460e14 to 03560e17 has its CatchHandler @ 03460e20 */
                    /* try { // try from 03460e18 to 03560e47 has its CatchHandler @ 034608e8 */
    if (uVar1 < (uint)pIVar8->max_length) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03460e14 with catch @ 03460e20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03460c08 with catch @ 03460e24
                        */
      (__this_03->fields)._size = uVar1 + 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03460c54 with catch @ 03460e28
                        */
      pIVar8->m_Items[(int)uVar1] = __this_01;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03460e04 with catch @ 03460e2c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03460bac with catch @ 03460e30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03460b50 with catch @ 03460e34
                        */
      thunk_FUN_01c20e04(pIVar8->m_Items + (int)uVar1,__this_01);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03460e08 with catch @ 03460e38
                        */
    }
    else {
                    /* try { // try from 03460e48 to 03560e4b has its CatchHandler @ 03460e60 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)__this_01,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* catch() { ... } // from try @ 03460e48 with catch @ 03460e60 */
  DLOFGOGAGAA = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_TypeInfo
                                  );
                    /* try { // try from 03460e68 to 03560ecf has its CatchHandler @ 03460ee4 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)DLOFGOGAGAA,
             Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>__ctor__);
  __this_04 = (AEDJMMHJIEH->fields)._DEKNAHBMHGA_k__BackingField;
  if (__this_04 != (System_Collections_Generic_List_HJNEOLCKEMD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_04,
               Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__
                             ), __this_00 = local_80.fields._current, bVar3) {
                    /* try { // try from 03460ed0 to 03560edb has its CatchHandler @ 034608e8 */
      auVar10 = thunk_FUN_01bda818(MMDDDDFHOLG_DOCBHLNBECF_TypeInfo);
      __this_05 = auVar10._0_8_;
                    /* try { // try from 03460edc to 03560ee3 has its CatchHandler @ 03460ee4 */
      MMDDDDFHOLG_DOCBHLNBECF___ctor(__this_05,auVar10._8_8_);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03460e68 with catch @ 03460ee4
                       catch(type#2 @ 00000000) { ... } // from try @ 03460edc with catch @ 03460ee4
                        */
      if ((HJNEOLCKEMD_o *)__this_00 == (HJNEOLCKEMD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pOVar5 = HJNEOLCKEMD__PCBFLJOBLMI
                         ((HJNEOLCKEMD_o *)__this_00,
                          (GFHKAOIMLHG->fields)._HKPEJNKNEGG_k__BackingField,(MethodInfo *)0x0);
      if (__this_05 == (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (__this_05->fields).HEMGHNOOJPI = pOVar5;
      thunk_FUN_01c20e04();
      ppOVar6 = &(__this_05->fields).EMCFCMFGPME;
      *ppOVar6 = IGMNBGIAGGK;
      thunk_FUN_01c20e04(ppOVar6,IGMNBGIAGGK);
      ppHVar7 = &(__this_05->fields).EDOEMIDBEGO;
      *ppHVar7 = (HJNEOLCKEMD_o *)__this_00;
      thunk_FUN_01c20e04(ppHVar7,__this_00);
      (__this_05->fields).KBODCOAHGFG = false;
      (__this_05->fields).AEPIFFHAKJG = 0;
      (__this_05->fields).CMPJANOIJAF = 0;
      __this_06 = ((HJNEOLCKEMD_Fields *)((long)__this_00 + 0x10))->_MIOHGLOGDHL_k__BackingField;
      if (__this_06 != (NILLKLHKLHG_o *)0x0) {
        __this_07 = NILLKLHKLHG__CHKGAHCDFJF(__this_06,false,(MethodInfo *)0x0);
        if (__this_07 == (MMFIDKMDADC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar4 = MMFIDKMDADC__JBGCINPPLAC(__this_07,(MethodInfo *)0x0);
        (__this_05->fields).CMPJANOIJAF = iVar4;
      }
      lVar2 = Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Add__;
      if (JDALPBMBDDO) {
        if (DLOFGOGAGAA == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar9 = (DLOFGOGAGAA->fields)._items;
        (DLOFGOGAGAA->fields)._version = (DLOFGOGAGAA->fields)._version + 1;
        if (pMVar9 == (MMDDDDFHOLG_DOCBHLNBECF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (DLOFGOGAGAA->fields)._size;
        if (uVar1 < (uint)pMVar9->max_length) {
          (DLOFGOGAGAA->fields)._size = uVar1 + 1;
          pMVar9->m_Items[(int)uVar1] = __this_05;
          thunk_FUN_01c20e04(pMVar9->m_Items + (int)uVar1,__this_05);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)DLOFGOGAGAA,
                     (Il2CppObject *)__this_05,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        __this_08 = (__this_01->fields).FNEKKIBOEKE;
        if (__this_08 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar9 = (__this_08->fields)._items;
        (__this_08->fields)._version = (__this_08->fields)._version + 1;
        if (pMVar9 == (MMDDDDFHOLG_DOCBHLNBECF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_08->fields)._size;
        if (uVar1 < (uint)pMVar9->max_length) {
          (__this_08->fields)._size = uVar1 + 1;
          pMVar9->m_Items[(int)uVar1] = __this_05;
          thunk_FUN_01c20e04(pMVar9->m_Items + (int)uVar1,__this_05);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_08,
                     (Il2CppObject *)__this_05,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
    if (DLOFGOGAGAA != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
      if (0 < (DLOFGOGAGAA->fields)._size) {
        IGJEEGBBNFC__IKDPMKOIDMP(__this_01,DLOFGOGAGAA,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_03461090:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

