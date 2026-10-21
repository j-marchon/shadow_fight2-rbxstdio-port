// Original name: Nekki.SF2.Core.Fights.MovesInFightVariables  (obfuscated MMDDDDFHOLG)
// TypeDefIndex 2448
// Namespace: 
// public class MovesInFightVariables : OMLLDCIMLBB<MovesInFightVariables.CFAPCBMMJIP>
// Fields:
//   private Dictionary<string, object> KECADJKAJNG; // 0x18
//   private List<EHCCNKFIPPA> PNGAKAPODKB; // 0x20
//   private List<MovesInFightVariables.DOCBHLNBECF> JOKDIFAIOKL; // 0x28
//   private static Dictionary<string, List<MovesInFightVariables.DOCBHLNBECF>> NELMGPHMBAN; // 0x0
//   private static Dictionary<string, int> HIHPADFEPFO; // 0x8
//   private readonly NKPJLEMPIKD.GBBCKIANDCN CGDFGAMKHLE; // 0x30
//   private readonly MovesInFightVariables.CFAPCBMMJIP INJKHBBGKLH; // 0x38

// ===== public void NKLGCNHLBAF()  [RVA 0x336069C]
// MovesInFightVariables$$NKLGCNHLBAF @ RVA 0x336069C

/* WARNING: Removing unreachable block (ram,0x03460800) */

void MovesInFightVariables__NKLGCNHLBAF(MovesInFightVariables_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567a81 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
    DAT_04567a81 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PNGAKAPODKB;
  if (__this_00 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
  local_60.fields._index = local_98.fields._index;
  local_60.fields._version = local_98.fields._version;
  local_60.fields._list = local_98.fields._list;
  local_60.fields._current = local_98.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__)
      ;
                    /* try { // try from 0346083c to 0356083f has its CatchHandler @ 03460844 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03460818 with catch @ 03460840
                       try { // try from 03460840 to 0356085b has its CatchHandler @ 034607c8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346083c with catch @ 03460844
                        */
      return;
    }
    if ((IGJEEGBBNFC_o *)local_60.fields._current == (IGJEEGBBNFC_o *)0x0) break;
    __this_01 = ((IGJEEGBBNFC_Fields *)((long)local_60.fields._current + 0x10))->FNEKKIBOEKE;
    if (__this_01 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
                    /* try { // try from 034607c8 to 03560817 has its CatchHandler @ 034607c8
                       catch() { ... } // from try @ 034607c8 with catch @ 034607c8
                       catch() { ... } // from try @ 03460820 with catch @ 034607c8
                       catch() { ... } // from try @ 03460840 with catch @ 034607c8
                       catch() { ... } // from try @ 03460874 with catch @ 034607c8
                       catch() { ... } // from try @ 034608d4 with catch @ 034607c8 */
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__
                             ), bVar1) {
      if ((IGJEEGBBNFC_o *)local_80.fields._current == (IGJEEGBBNFC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      IGJEEGBBNFC__NKLGCNHLBAF((IGJEEGBBNFC_o *)local_80.fields._current,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BGNPKMBPKDK(Model BCKBBGCOMJD, List<MovesInFightVariables.DOCBHLNBECF> JGHPAFEFEFB)  [RVA 0x3360910]
// MovesInFightVariables$$BGNPKMBPKDK @ RVA 0x3360910

void MovesInFightVariables__BGNPKMBPKDK
               (MovesInFightVariables_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *JGHPAFEFEFB,
               MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar4;
  Il2CppClass *__this_02;
  MovesInFightVariables_DOCBHLNBECF_o *item;
  MovesInFightVariables_DOCBHLNBECF_array *pMVar5;
  int index;
  int index_00;
  int index_01;
  
  if ((DAT_04567a82 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Item__);
    DAT_04567a82 = 1;
  }
  if (JGHPAFEFEFB != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
    length = (JGHPAFEFEFB->fields)._size;
    (JGHPAFEFEFB->fields)._size = 0;
    (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(JGHPAFEFEFB->fields)._items,0,length,(MethodInfo *)0x0)
      ;
    }
    __this_00 = (__this->fields).PNGAKAPODKB;
    if (__this_00 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
      index = 0;
      while( true ) {
        if ((__this_00->fields)._size <= index) {
          return;
        }
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Item__);
        if ((pIVar3 == (Il2CppObject *)0x0) ||
           (__this_01 = pIVar3[1].monitor,
           __this_01 == (System_Collections_Generic_List_object__o *)0x0)) break;
        index_00 = 0;
        while (index_00 < (__this_01->fields)._size) {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             (__this_01,index_00,
                              Method_System_Collections_Generic_List<IGJEEGBBNFC>_get_Item__);
          if ((pIVar4 == (Il2CppObject *)0x0) ||
             (__this_02 = pIVar4[2].klass, __this_02 == (Il2CppClass *)0x0)) goto LAB_03460b00;
          index_01 = 0;
          while (index_01 < *(int *)&(__this_02->_1).namespaze) {
            item = (MovesInFightVariables_DOCBHLNBECF_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_02,index_01,
                              Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_get_Item__
                             );
            lVar2 = Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Add__;
            if (item == (MovesInFightVariables_DOCBHLNBECF_o *)0x0) goto LAB_03460b00;
            if ((item->fields).HEMGHNOOJPI == BCKBBGCOMJD) {
              pMVar5 = (JGHPAFEFEFB->fields)._items;
              (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
              if (pMVar5 == (MovesInFightVariables_DOCBHLNBECF_array *)0x0) goto LAB_03460b00;
              uVar1 = (JGHPAFEFEFB->fields)._size;
              if (uVar1 < (uint)pMVar5->max_length) {
                (JGHPAFEFEFB->fields)._size = uVar1 + 1;
                pMVar5->m_Items[(int)uVar1] = item;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
                           (Il2CppObject *)item,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
            __this_02 = pIVar4[2].klass;
            index_01 = index_01 + 1;
            if (__this_02 == (Il2CppClass *)0x0) goto LAB_03460b00;
          }
          __this_01 = pIVar3[1].monitor;
          index_00 = index_00 + 1;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03460b00;
        }
        __this_00 = (__this->fields).PNGAKAPODKB;
        index = index + 1;
        if (__this_00 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) break;
      }
    }
  }
LAB_03460b00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IKDPMKOIDMP(Model IGMNBGIAGGK, NJPBBPOABKP AEDJMMHJIEH, bool JDALPBMBDDO = False)  [RVA 0x3360B20]
// MovesInFightVariables$$IKDPMKOIDMP @ RVA 0x3360B20

void MovesInFightVariables__IKDPMKOIDMP
               (MovesInFightVariables_o *__this,Model_o *IGMNBGIAGGK,NJPBBPOABKP_o *AEDJMMHJIEH,
               bool JDALPBMBDDO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  MethodInfo *in_x5;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04567a83 & 1) == 0) {
                    /* try { // try from 03460b50 to 03560b77 has its CatchHandler @ 03460e34 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
    DAT_04567a83 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PNGAKAPODKB;
  if (__this_00 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03460bac to 03560bd7 has its CatchHandler @ 03460e30 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_58,
                       Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    if (!bVar1) goto LAB_03460bf8;
    if ((EHCCNKFIPPA_o *)local_58.fields._current == (EHCCNKFIPPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (((EHCCNKFIPPA_Fields *)((long)local_58.fields._current + 0x10))->
           _HKPEJNKNEGG_k__BackingField != IGMNBGIAGGK);
  MovesInFightVariables__IKDPMKOIDMP
            (__this,(EHCCNKFIPPA_o *)local_58.fields._current,IGMNBGIAGGK,AEDJMMHJIEH,JDALPBMBDDO,
             in_x5);
LAB_03460bf8:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_58,Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
                    /* try { // try from 03460c08 to 03560c13 has its CatchHandler @ 03460e24 */
  return;
}


// ===== public static void APDPIBEJFEH(string KGLJICLJHEL)  [RVA 0x336112C]
// MovesInFightVariables$$APDPIBEJFEH @ RVA 0x336112C

void MovesInFightVariables__APDPIBEJFEH(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  
  if ((DAT_04567a84 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    FUN_01bab630(&MovesInFightVariables_TypeInfo);
    DAT_04567a84 = 1;
    method = extraout_x1;
  }
  if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  MovesInFightVariables__BGLKNLLGJHB(KGLJICLJHEL,method);
  __this = (System_Collections_Generic_Dictionary_object__int__o *)
           MovesInFightVariables_TypeInfo->static_fields->HIHPADFEPFO;
  if (__this != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                      (__this,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    System_Collections_Generic_Dictionary<object,_int>__set_Item
              (__this,(Il2CppObject *)KGLJICLJHEL,iVar1 + -1,
               Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IKDPMKOIDMP(EHCCNKFIPPA GFHKAOIMLHG, Model IGMNBGIAGGK, NJPBBPOABKP AEDJMMHJIEH, bool JDALPBMBDDO = False)  [RVA 0x3360C90]
// MovesInFightVariables$$IKDPMKOIDMP @ RVA 0x3360C90

void MovesInFightVariables__IKDPMKOIDMP
               (MovesInFightVariables_o *__this,EHCCNKFIPPA_o *GFHKAOIMLHG,Model_o *IGMNBGIAGGK,
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
  MovesInFightVariables_DOCBHLNBECF_o *__this_05;
  Model_o *pOVar5;
  Model_o **ppOVar6;
  HJNEOLCKEMD_o **ppHVar7;
  NILLKLHKLHG_o *__this_06;
  MMFIDKMDADC_o *__this_07;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_08;
  MethodInfo *method_00;
  IGJEEGBBNFC_array *pIVar8;
  MovesInFightVariables_DOCBHLNBECF_array *pMVar9;
  PerkInfoItem_o *EIKFGOCCOIE;
  undefined1 auVar10 [16];
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  method_00 = (MethodInfo *)AEDJMMHJIEH;
  if ((DAT_04567a85 & 1) == 0) {
    FUN_01bab630(&MovesInFightVariables_DOCBHLNBECF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_get_Current__);
    FUN_01bab630(&IGJEEGBBNFC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_TypeInfo);
    FUN_01bab630(&PHDCILJMEHO_TypeInfo);
    DAT_04567a85 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((AEDJMMHJIEH == (NJPBBPOABKP_o *)0x0) || (GFHKAOIMLHG == (EHCCNKFIPPA_o *)0x0))
  goto LAB_03461090;
  __this_01 = MovesInFightVariables__MDEAJBFLJGP
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
                thunk_FUN_01bda818(System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_TypeInfo
                                  );
                    /* try { // try from 03460e68 to 03560ecf has its CatchHandler @ 03460ee4 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)DLOFGOGAGAA,
             Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>__ctor__);
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
      auVar10 = thunk_FUN_01bda818(MovesInFightVariables_DOCBHLNBECF_TypeInfo);
      __this_05 = auVar10._0_8_;
                    /* try { // try from 03460edc to 03560ee3 has its CatchHandler @ 03460ee4 */
      MovesInFightVariables_DOCBHLNBECF___ctor(__this_05,auVar10._8_8_);
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
      if (__this_05 == (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
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
      lVar2 = Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Add__;
      if (JDALPBMBDDO) {
        if (DLOFGOGAGAA == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar9 = (DLOFGOGAGAA->fields)._items;
        (DLOFGOGAGAA->fields)._version = (DLOFGOGAGAA->fields)._version + 1;
        if (pMVar9 == (MovesInFightVariables_DOCBHLNBECF_array *)0x0) {
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
        if (pMVar9 == (MovesInFightVariables_DOCBHLNBECF_array *)0x0) {
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


// ===== public void BMJDNNBOAFL(List<Model> DDOAJGPFCNB)  [RVA 0x3361390]
// MovesInFightVariables$$BMJDNNBOAFL @ RVA 0x3361390

void MovesInFightVariables__BMJDNNBOAFL
               (MovesInFightVariables_o *__this,System_Collections_Generic_List_OLKKAIFGGAK__o *DDOAJGPFCNB,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_00 = (MethodInfo *)DDOAJGPFCNB;
  if ((DAT_04567a86 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_GetEnumerator__);
    DAT_04567a86 = 1;
    method_00 = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  MovesInFightVariables__MOJEFCADBCO(__this,method_00);
  if (DDOAJGPFCNB != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)DDOAJGPFCNB,
               Method_System_Collections_Generic_List<Model>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__
                             ), bVar1) {
      MovesInFightVariables__OCJCMHLABBF(__this,(Model_o *)local_48.fields._current,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IGJEEGBBNFC MDEAJBFLJGP(EHCCNKFIPPA BCKBBGCOMJD, PerkInfoItem EIKFGOCCOIE)  [RVA 0x3361300]
// MovesInFightVariables$$MDEAJBFLJGP @ RVA 0x3361300

IGJEEGBBNFC_o *
MovesInFightVariables__MDEAJBFLJGP
          (MovesInFightVariables_o *__this,EHCCNKFIPPA_o *BCKBBGCOMJD,PerkInfoItem_o *EIKFGOCCOIE,
          MethodInfo *method)

{
  IGJEEGBBNFC_o *pIVar1;
  
  if (BCKBBGCOMJD != (EHCCNKFIPPA_o *)0x0) {
    pIVar1 = MovesInFightVariables__MDEAJBFLJGP
                       (__this,(BCKBBGCOMJD->fields)._HKPEJNKNEGG_k__BackingField,EIKFGOCCOIE,method
                       );
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DGLJCGNHLIG()  [RVA 0x3361A5C]
// MovesInFightVariables$$DGLJCGNHLIG @ RVA 0x3361A5C

/* WARNING: Removing unreachable block (ram,0x03461c14) */

void MovesInFightVariables__DGLJCGNHLIG(MovesInFightVariables_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_01;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_02;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567a87 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
    FUN_01bab630(&MovesInFightVariables_TypeInfo);
    DAT_04567a87 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MovesInFightVariables_TypeInfo,method);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              MovesInFightVariables_TypeInfo->static_fields->HIHPADFEPFO;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_int>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
    __this_01 = (__this->fields).PNGAKAPODKB;
    if (__this_01 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
      local_60.fields._index = local_98.fields._index;
      local_60.fields._version = local_98.fields._version;
      local_60.fields._list = local_98.fields._list;
      local_60.fields._current = local_98.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
          return;
        }
        if ((IGJEEGBBNFC_o *)local_60.fields._current == (IGJEEGBBNFC_o *)0x0) break;
        __this_02 = ((IGJEEGBBNFC_Fields *)((long)local_60.fields._current + 0x10))->FNEKKIBOEKE;
        if (__this_02 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)__this_02,
                   Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__
                                 ), bVar1) {
          if ((IGJEEGBBNFC_o *)local_80.fields._current == (IGJEEGBBNFC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          IGJEEGBBNFC__AHJBAPBFEDD((IGJEEGBBNFC_o *)local_80.fields._current,true,(MethodInfo *)0x0)
          ;
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ELNCLIIJFDB(EHCCNKFIPPA GFHKAOIMLHG, Model IGMNBGIAGGK, NKPJLEMPIKD.GBBCKIANDCN PHCGJGCHKCM, NJPBBPOABKP AEDJMMHJIEH, bool JDALPBMBDDO = False)  [RVA 0x3361D24]
// MovesInFightVariables$$ELNCLIIJFDB @ RVA 0x3361D24

void MovesInFightVariables__ELNCLIIJFDB
               (MovesInFightVariables_o *__this,EHCCNKFIPPA_o *GFHKAOIMLHG,Model_o *IGMNBGIAGGK,
               NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,NJPBBPOABKP_o *AEDJMMHJIEH,bool JDALPBMBDDO,
               MethodInfo *method)

{
  bool bVar1;
  PHDCILJMEHO_o *pPVar2;
  IGJEEGBBNFC_o *pIVar3;
  PerkInfoItem_o *pHVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_string__o *FPEHEJBLCAO;
  
  method_01 = (MethodInfo *)(ulong)JDALPBMBDDO;
  method_00 = (MethodInfo *)PHCGJGCHKCM;
  if ((DAT_04567a88 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567a88 = 1;
  }
  if ((AEDJMMHJIEH != (NJPBBPOABKP_o *)0x0) && (GFHKAOIMLHG != (EHCCNKFIPPA_o *)0x0)) {
    pPVar2 = EHCCNKFIPPA__NBJIHGJNPGI
                       (GFHKAOIMLHG,(AEDJMMHJIEH->fields)._MEFGNAIILBJ_k__BackingField,
                        (MethodInfo *)0x0);
    if ((pPVar2 != (PHDCILJMEHO_o *)0x0) && ((pPVar2->fields).KFCEKOBOKJJ != false)) {
      pIVar3 = MovesInFightVariables__MDEAJBFLJGP
                         (__this,(GFHKAOIMLHG->fields)._HKPEJNKNEGG_k__BackingField,
                          (AEDJMMHJIEH->fields)._MEFGNAIILBJ_k__BackingField,method_00);
      if (pIVar3 == (IGJEEGBBNFC_o *)0x0) {
        FPEHEJBLCAO = (System_Collections_Generic_List_string__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)FPEHEJBLCAO,
                   Method_System_Collections_Generic_List<string>__ctor__);
      }
      else {
        FPEHEJBLCAO = (pIVar3->fields).HFICCAMAMGI;
      }
      pHVar4 = (AEDJMMHJIEH->fields)._MEFGNAIILBJ_k__BackingField;
      if (pHVar4 == (PerkInfoItem_o *)0x0) goto LAB_03461e5c;
      (pHVar4->fields)._BGCNGEAHHFN_k__BackingField =
           (GFHKAOIMLHG->fields)._HKPEJNKNEGG_k__BackingField;
      thunk_FUN_01c20e04();
      if (((PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) ||
          (bVar1 = NJPBBPOABKP__AFFNOKFNKON(AEDJMMHJIEH,PHCGJGCHKCM,(MethodInfo *)0x0), bVar1)) &&
         (bVar1 = NJPBBPOABKP__JENPGIOLJAJ
                            (AEDJMMHJIEH,(GFHKAOIMLHG->fields)._HKPEJNKNEGG_k__BackingField,
                             FPEHEJBLCAO,(MethodInfo *)0x0), bVar1)) {
        MovesInFightVariables__IKDPMKOIDMP(__this,GFHKAOIMLHG,IGMNBGIAGGK,AEDJMMHJIEH,JDALPBMBDDO,method_01);
        return;
      }
    }
    return;
  }
LAB_03461e5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BDHAMOEKNNK()  [RVA 0x3361E60]
// MovesInFightVariables$$BDHAMOEKNNK @ RVA 0x3361E60

void MovesInFightVariables__BDHAMOEKNNK(MovesInFightVariables_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_object__o *__this_01;
  IGJEEGBBNFC_o *__this_02;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *pSVar2;
  int index;
  int index_00;
  
  if ((DAT_04567a89 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Item__);
    DAT_04567a89 = 1;
  }
  pSVar2 = (__this->fields).JOKDIFAIOKL;
  if (pSVar2 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).PNGAKAPODKB;
    if (__this_00 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
      index = 0;
      while( true ) {
        if ((__this_00->fields)._size <= index) {
          return;
        }
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Item__);
        if ((pIVar1 == (Il2CppObject *)0x0) ||
           (__this_01 = pIVar1[1].monitor,
           __this_01 == (System_Collections_Generic_List_object__o *)0x0)) break;
        index_00 = 0;
        while (index_00 < (__this_01->fields)._size) {
          __this_02 = (IGJEEGBBNFC_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_01,index_00,
                                 Method_System_Collections_Generic_List<IGJEEGBBNFC>_get_Item__);
          if (__this_02 == (IGJEEGBBNFC_o *)0x0) goto LAB_03461f78;
          IGJEEGBBNFC__BDHAMOEKNNK(__this_02,(MethodInfo *)0x0);
          __this_01 = pIVar1[1].monitor;
          index_00 = index_00 + 1;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03461f78;
        }
        __this_00 = (__this->fields).PNGAKAPODKB;
        index = index + 1;
        if (__this_00 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) break;
      }
    }
  }
LAB_03461f78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EHNHAAPBCJG()  [RVA 0x3361F90]
// MovesInFightVariables$$EHNHAAPBCJG @ RVA 0x3361F90

void MovesInFightVariables__EHNHAAPBCJG(MovesInFightVariables_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  System_Action_PHDCILJMEHO__o **ppSVar2;
  MethodInfo *extraout_x1;
  Il2CppClass *__this_01;
  System_Action_PHDCILJMEHO__o *action;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567a8a & 1) == 0) {
    FUN_01bab630(&System_Action<PHDCILJMEHO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
    FUN_01bab630(&Method_MMDDDDFHOLG_<>c_JEKBLOJCCMO__);
    FUN_01bab630(&MovesInFightVariables_<>c_TypeInfo);
    DAT_04567a8a = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PNGAKAPODKB;
  if (__this_00 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__)
      ;
      return;
    }
    if (local_70.fields._current == (Il2CppObject *)0x0) break;
    __this_01 = local_70.fields._current[2].klass;
    if ((MovesInFightVariables_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MovesInFightVariables_<>c_TypeInfo);
    }
    action = MovesInFightVariables_<>c_TypeInfo->static_fields->__9__25_0;
    if (action == (System_Action_PHDCILJMEHO__o *)0x0) {
      if ((MovesInFightVariables_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MovesInFightVariables_<>c_TypeInfo);
      }
      action = (System_Action_PHDCILJMEHO__o *)
               thunk_FUN_01bda818(System_Action<PHDCILJMEHO>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &MovesInFightVariables_<>c_TypeInfo->static_fields->__9__25_0;
      *ppSVar2 = action;
      thunk_FUN_01c20e04(ppSVar2,action);
    }
    if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<PHDCILJMEHO>_ForEach__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JBADLLJFFCD(MovesInFightVariables.DOCBHLNBECF DMJCBDGIGBH)  [RVA 0x33621D8]
// MovesInFightVariables$$JBADLLJFFCD @ RVA 0x33621D8

void MovesInFightVariables__JBADLLJFFCD
               (MovesInFightVariables_o *__this,MovesInFightVariables_DOCBHLNBECF_o *DMJCBDGIGBH,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_00;
  MovesInFightVariables_DOCBHLNBECF_array *pMVar3;
  
  if ((DAT_04567a8b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Add__);
    DAT_04567a8b = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Add__;
  __this_00 = (__this->fields).JOKDIFAIOKL;
  if (__this_00 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
    pMVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pMVar3 != (MovesInFightVariables_DOCBHLNBECF_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pMVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pMVar3->m_Items[(int)uVar1] = DMJCBDGIGBH;
        thunk_FUN_01c20e04(pMVar3->m_Items + (int)uVar1,DMJCBDGIGBH);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)DMJCBDGIGBH,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Dictionary<string, object> OAMEMJPMGAA()  [RVA 0x3362284]
// MovesInFightVariables$$OAMEMJPMGAA @ RVA 0x3362284

System_Collections_Generic_Dictionary_string__object__o *
MovesInFightVariables__OAMEMJPMGAA(MovesInFightVariables_o *__this,MethodInfo *method)

{
  return (__this->fields).KECADJKAJNG;
}


// ===== private static void .cctor()  [RVA 0x336228C]
// MovesInFightVariables$$.cctor @ RVA 0x336228C

void MovesInFightVariables___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_Dictionary_string__int__o **ppSVar1;
  
  if ((DAT_04567a8c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_TypeInfo
                );
    FUN_01bab630(&MovesInFightVariables_TypeInfo);
    DAT_04567a8c = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,
             Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>__ctor__
            );
  MovesInFightVariables_TypeInfo->static_fields->NELMGPHMBAN =
       (System_Collections_Generic_Dictionary_string__List_MMDDDDFHOLG_DOCBHLNBECF___o *)__this;
  thunk_FUN_01c20e04(MovesInFightVariables_TypeInfo->static_fields,__this);
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_int>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
  ppSVar1 = &MovesInFightVariables_TypeInfo->static_fields->HIHPADFEPFO;
  *ppSVar1 = (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}


// ===== private void HAGJCFHKIKM(Model BCKBBGCOMJD, NKPJLEMPIKD.FDGCEBFPIOP ACCIHBHMFPN)  [RVA 0x336237C]
// MovesInFightVariables$$HAGJCFHKIKM @ RVA 0x336237C

void MovesInFightVariables__HAGJCFHKIKM
               (MovesInFightVariables_o *__this,Model_o *BCKBBGCOMJD,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  bool bVar1;
  MovesInFightVariables_CFAPCBMMJIP_o *pMVar2;
  MovesInFightVariables_CFAPCBMMJIP_Fields *pMVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject **ppIVar6;
  
  if ((DAT_04567a8d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&Method_OMLLDCIMLBB<MovesInFightVariables_CFAPCBMMJIP>_CallEvent__);
    FUN_01bab630(&StringLiteral_9146/*"ModExpires"*/);
    DAT_04567a8d = 1;
  }
  if (ACCIHBHMFPN != 0xe) {
    return;
  }
  pMVar2 = (__this->fields).INJKHBBGKLH;
  if (pMVar2 != (MovesInFightVariables_CFAPCBMMJIP_o *)0x0) {
    pMVar3 = &pMVar2->fields;
    pMVar3->HEMGHNOOJPI = BCKBBGCOMJD;
    thunk_FUN_01c20e04(pMVar3,BCKBBGCOMJD);
    pMVar2 = (__this->fields).INJKHBBGKLH;
    if (pMVar2 != (MovesInFightVariables_CFAPCBMMJIP_o *)0x0) {
      (pMVar2->fields).NAPEFFFIIFE = 0xe;
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).KECADJKAJNG;
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                          (pSVar4,StringLiteral_9146/*"ModExpires"*/,
                           Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__
                          );
        if (bVar1) {
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).KECADJKAJNG;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03462498;
          pIVar5 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar4,StringLiteral_9146/*"ModExpires"*/,
                              Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                             );
        }
        else {
          pIVar5 = (Il2CppObject *)0x0;
        }
        ppIVar6 = &(pMVar2->fields).KOANCCDDBDA;
        *ppIVar6 = pIVar5;
        thunk_FUN_01c20e04(ppIVar6);
        OMLLDCIMLBB<object>__CallEvent
                  ((OMLLDCIMLBB_object__o *)__this,0xe,(Il2CppObject *)(__this->fields).INJKHBBGKLH,
                   Method_OMLLDCIMLBB<MovesInFightVariables_CFAPCBMMJIP>_CallEvent__);
        return;
      }
    }
  }
LAB_03462498:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static List<MovesInFightVariables.DOCBHLNBECF> HNBACDMIHHO(string BCAEOEOGHLP)  [RVA 0x336249C]
// MovesInFightVariables$$HNBACDMIHHO @ RVA 0x336249C

System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *
MovesInFightVariables__HNBACDMIHHO(System_String_o *BCAEOEOGHLP,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *local_28;
  
  if ((DAT_04567a8e & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_TryGetValue__
                );
    FUN_01bab630(&MovesInFightVariables_TypeInfo);
    DAT_04567a8e = 1;
    method = extraout_x1;
  }
  local_28 = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0;
  if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MovesInFightVariables_TypeInfo,method);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           MovesInFightVariables_TypeInfo->static_fields->NELMGPHMBAN;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this,(Il2CppObject *)BCAEOEOGHLP,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_TryGetValue__
                      );
    if (!bVar1) {
      local_28 = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0;
    }
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GJMDFCNLBGE(EHCCNKFIPPA BCKBBGCOMJD, PerkInfoItem EIKFGOCCOIE)  [RVA 0x336253C]
// MovesInFightVariables$$GJMDFCNLBGE @ RVA 0x336253C

void MovesInFightVariables__GJMDFCNLBGE
               (MovesInFightVariables_o *__this,EHCCNKFIPPA_o *BCKBBGCOMJD,PerkInfoItem_o *EIKFGOCCOIE,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  PHDCILJMEHO_o *__this_00;
  PHDCILJMEHO_array *pPVar3;
  System_Collections_Generic_List_PHDCILJMEHO__o *__this_01;
  
  if ((DAT_04567a8f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_Add__);
    FUN_01bab630(&PHDCILJMEHO_TypeInfo);
    DAT_04567a8f = 1;
  }
  if (EIKFGOCCOIE != (PerkInfoItem_o *)0x0) {
    if (BCKBBGCOMJD != (EHCCNKFIPPA_o *)0x0) {
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._OGNGBMMEPLD_k__BackingField,4,(MethodInfo *)0x0)
      ;
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._JBCIAMDCGND_k__BackingField,2,(MethodInfo *)0x0)
      ;
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._HKKHBGHDDPN_k__BackingField,5,(MethodInfo *)0x0)
      ;
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._LBFBPAPODCK_k__BackingField,6,(MethodInfo *)0x0)
      ;
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._BNEPLANGLCO_k__BackingField,7,(MethodInfo *)0x0)
      ;
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._KHNBIJGEEKD_k__BackingField,8,(MethodInfo *)0x0)
      ;
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._FEKPIGKJNFC_k__BackingField,1,(MethodInfo *)0x0)
      ;
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._JFANEHLBMLN_k__BackingField,3,(MethodInfo *)0x0)
      ;
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._LMNDANMPFEC_k__BackingField,9,(MethodInfo *)0x0)
      ;
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._KILHFKPHAFK_k__BackingField,0xc,
                 (MethodInfo *)0x0);
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._BPDOGAAAHIP_k__BackingField,0xd,
                 (MethodInfo *)0x0);
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._GBDEKDLFBLF_k__BackingField,10,(MethodInfo *)0x0
                );
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._PFGFOOJGIHM_k__BackingField,0xb,
                 (MethodInfo *)0x0);
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._GAIIAJFJGHE_k__BackingField,0xe,
                 (MethodInfo *)0x0);
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._DKPCPHLJAAA_k__BackingField,0xf,
                 (MethodInfo *)0x0);
      PerkInfoItem__BHGINKNAHEG
                (EIKFGOCCOIE,(BCKBBGCOMJD->fields)._ODODLDOGFEP_k__BackingField,0x10,
                 (MethodInfo *)0x0);
      __this_01 = (BCKBBGCOMJD->fields)._BPHPMGBCNOO_k__BackingField;
      __this_00 = (PHDCILJMEHO_o *)thunk_FUN_01bda818(PHDCILJMEHO_TypeInfo);
      PHDCILJMEHO___ctor(__this_00,EIKFGOCCOIE,true,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<PHDCILJMEHO>_Add__;
      if (__this_01 != (System_Collections_Generic_List_PHDCILJMEHO__o *)0x0) {
        pPVar3 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pPVar3 != (PHDCILJMEHO_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pPVar3->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pPVar3->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pPVar3->m_Items + (int)uVar1,__this_00);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static void LPFBJJMANMJ(MovesInFightVariables.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x336276C]
// MovesInFightVariables$$LPFBJJMANMJ @ RVA 0x336276C

void MovesInFightVariables__LPFBJJMANMJ(MovesInFightVariables_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_List_T__o *DPMPNFJJENF;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar6;
  HJNEOLCKEMD_o *pHVar7;
  System_String_o *key;
  
  if ((DAT_04567a90 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<MovesInFightVariables_DOCBHLNBECF>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_get_Item__
                );
    FUN_01bab630(&LMJFCEPILNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_TypeInfo);
    FUN_01bab630(&MovesInFightVariables_TypeInfo);
    DAT_04567a90 = 1;
  }
  if ((CPECAEHDDDB != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) &&
     (pHVar7 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar7 != (HJNEOLCKEMD_o *)0x0)) {
    if ((pHVar7->fields)._KPCCNJJEIAN_k__BackingField == false) {
      return;
    }
    bVar1 = (LMJFCEPILNI_TypeInfo->_2).naturalAligment;
    if (((pHVar7->klass->_2).naturalAligment < bVar1) ||
       ((pHVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)LMJFCEPILNI_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar7);
    }
    if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             MovesInFightVariables_TypeInfo->static_fields->NELMGPHMBAN;
    if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        (pSVar5,(Il2CppObject *)(pHVar7->fields)._HFALHOCIDCH_k__BackingField,
                         Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_ContainsKey__
                        );
      if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MovesInFightVariables_TypeInfo);
      }
      key = (pHVar7->fields)._HFALHOCIDCH_k__BackingField;
      pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
               MovesInFightVariables_TypeInfo->static_fields->NELMGPHMBAN;
      if (bVar4) {
        if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          DPMPNFJJENF = (System_Collections_Generic_List_T__o *)
                        System_Collections_Generic_Dictionary<object,_object>__get_Item
                                  (pSVar5,(Il2CppObject *)key,
                                   Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_get_Item__
                                  );
          DJNBJHPDKDP__OFNFOGHFDML<object>
                    (DPMPNFJJENF,(Il2CppObject *)CPECAEHDDDB,
                     Method_DJNBJHPDKDP_OFNFOGHFDML<MovesInFightVariables_DOCBHLNBECF>__);
          return;
        }
      }
      else {
        __this = (System_Collections_Generic_List_object__o *)
                 thunk_FUN_01bda818(
                                   System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_TypeInfo
                                   );
        System_Collections_Generic_List<object>___ctor
                  (__this,Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>__ctor__);
        lVar3 = Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Add__;
        if (__this != (System_Collections_Generic_List_object__o *)0x0) {
          pSVar6 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pSVar6 != (System_Object_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar6->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)CPECAEHDDDB;
              thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar2,CPECAEHDDDB);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)CPECAEHDDDB,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object,_object>__Add
                        (pSVar5,(Il2CppObject *)key,(Il2CppObject *)__this,
                         Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_Add__
                        );
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IGJEEGBBNFC MDEAJBFLJGP(Model BCKBBGCOMJD, PerkInfoItem EIKFGOCCOIE)  [RVA 0x3361768]
// MovesInFightVariables$$MDEAJBFLJGP @ RVA 0x3361768

/* WARNING: Removing unreachable block (ram,0x034619c4) */

IGJEEGBBNFC_o *
MovesInFightVariables__MDEAJBFLJGP
          (MovesInFightVariables_o *__this,Model_o *BCKBBGCOMJD,PerkInfoItem_o *EIKFGOCCOIE,
          MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_01;
  PHDCILJMEHO_o *pPVar2;
  IGJEEGBBNFC_o *pIVar3;
  uint uVar4;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567a91 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
    DAT_04567a91 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PNGAKAPODKB;
  if (__this_00 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
      if (!bVar1) {
        pIVar3 = (IGJEEGBBNFC_o *)0x0;
        goto LAB_03461968;
      }
      if ((IGJEEGBBNFC_o *)local_80.fields._current == (IGJEEGBBNFC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while ((Model_o *)
             ((IGJEEGBBNFC_Fields *)((long)local_80.fields._current + 0x10))->HAHNEPLFLFD !=
             BCKBBGCOMJD);
    __this_01 = ((IGJEEGBBNFC_Fields *)((long)local_80.fields._current + 0x10))->FNEKKIBOEKE;
    if (__this_01 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__);
      if (!bVar1) {
        pIVar3 = (IGJEEGBBNFC_o *)0x0;
        uVar4 = 2;
        goto LAB_034618f4;
      }
      if ((IGJEEGBBNFC_o *)local_a0.fields._current == (IGJEEGBBNFC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pPVar2 = ((IGJEEGBBNFC_Fields *)((long)local_a0.fields._current + 0x10))->HAHNEPLFLFD;
      if (pPVar2 == (PHDCILJMEHO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while ((pPVar2->fields).MLPFFJNBKBN != EIKFGOCCOIE);
    uVar4 = 6;
    pIVar3 = (IGJEEGBBNFC_o *)local_a0.fields._current;
LAB_034618f4:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
  } while ((uVar4 | 2) == 2);
LAB_03461968:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
  return pIVar3;
}


// ===== public void ADLPEGELBLH(Model.BJHDMBGMMEP CAAHLIIEIBI)  [RVA 0x33629BC]
// MovesInFightVariables$$ADLPEGELBLH @ RVA 0x33629BC

/* WARNING: Removing unreachable block (ram,0x03462c18) */
/* WARNING: Removing unreachable block (ram,0x03462b68) */

void MovesInFightVariables__ADLPEGELBLH
               (MovesInFightVariables_o *__this,Model_BJHDMBGMMEP_o *CAAHLIIEIBI,MethodInfo *method)

{
  Il2CppObject *EIKFGOCCOIE;
  bool bVar1;
  EHCCNKFIPPA_o *__this_00;
  System_Collections_Generic_List_IGJEEGBBNFC__o *__this_01;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_02;
  PHDCILJMEHO_o *pPVar2;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567a92 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    DAT_04567a92 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if (CAAHLIIEIBI != (Model_BJHDMBGMMEP_o *)0x0) {
    __this_00 = MovesInFightVariables__KEBKKMPFMBB(__this,(CAAHLIIEIBI->fields).HEMGHNOOJPI,method);
    __this_02 = (CAAHLIIEIBI->fields).INGEFFGPJPB;
    if (__this_02 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
      local_70.fields._index = local_a8.fields._index;
      local_70.fields._version = local_a8.fields._version;
      local_70.fields._list = local_a8.fields._list;
      local_70.fields._current = local_a8.fields._current;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                          );
        EIKFGOCCOIE = local_70.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
          return;
        }
        if (__this_00 == (EHCCNKFIPPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (__this_00->fields)._DEKNAHBMHGA_k__BackingField;
        if (__this_01 == (System_Collections_Generic_List_IGJEEGBBNFC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_a8,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
        local_90.fields._index = local_a8.fields._index;
        local_90.fields._version = local_a8.fields._version;
        local_90.fields._list = local_a8.fields._list;
        local_90.fields._current = local_a8.fields._current;
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_90,
                                  Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__
                                 ), bVar1) {
          if ((PerkInfoItem_o *)local_90.fields._current == (PerkInfoItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pPVar2 = *(PHDCILJMEHO_o **)
                    &(((PerkInfoItem_Fields *)((long)local_90.fields._current + 0x10))->ICCBEPAFBFI).
                     fields;
          if (pPVar2 == (PHDCILJMEHO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((pPVar2->fields).MLPFFJNBKBN == (PerkInfoItem_o *)EIKFGOCCOIE) {
            IGJEEGBBNFC__AHJBAPBFEDD
                      ((IGJEEGBBNFC_o *)local_90.fields._current,true,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_90,
                   Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
        EHCCNKFIPPA__ACHDDKJACPF(__this_00,(PerkInfoItem_o *)EIKFGOCCOIE,false,(MethodInfo *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private EHCCNKFIPPA KEBKKMPFMBB(Model BCKBBGCOMJD)  [RVA 0x3362CA8]
// MovesInFightVariables$$KEBKKMPFMBB @ RVA 0x3362CA8

EHCCNKFIPPA_o *
MovesInFightVariables__KEBKKMPFMBB(MovesInFightVariables_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  EHCCNKFIPPA_o *pEVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_01;
  
  if ((DAT_04567a93 & 1) == 0) {
    FUN_01bab630(&Method_MMDDDDFHOLG_FPIBKMBJFIE_BBMLFJCHCGE__);
    FUN_01bab630(&MovesInFightVariables_FPIBKMBJFIE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_Find__);
    FUN_01bab630(&System_Predicate<EHCCNKFIPPA>_TypeInfo);
    DAT_04567a93 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(MovesInFightVariables_FPIBKMBJFIE_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)BCKBBGCOMJD;
    thunk_FUN_01c20e04(__this_00 + 1,BCKBBGCOMJD);
    __this_01 = (__this->fields).PNGAKAPODKB;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<EHCCNKFIPPA>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
      pEVar1 = (EHCCNKFIPPA_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<EHCCNKFIPPA>_Find__);
      return pEVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OECDKCNPMPP(Model BCKBBGCOMJD, List<MovesInFightVariables.DOCBHLNBECF> JGHPAFEFEFB)  [RVA 0x3362D94]
// MovesInFightVariables$$OECDKCNPMPP @ RVA 0x3362D94

void MovesInFightVariables__OECDKCNPMPP
               (MovesInFightVariables_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *JGHPAFEFEFB,
               MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_00;
  MovesInFightVariables_DOCBHLNBECF_o *item;
  MovesInFightVariables_DOCBHLNBECF_array *pMVar3;
  int index;
  
  if ((DAT_04567a94 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_get_Item__);
    DAT_04567a94 = 1;
  }
  if (JGHPAFEFEFB != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
    length = (JGHPAFEFEFB->fields)._size;
    (JGHPAFEFEFB->fields)._size = 0;
    (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(JGHPAFEFEFB->fields)._items,0,length,(MethodInfo *)0x0)
      ;
    }
    __this_00 = (__this->fields).JOKDIFAIOKL;
    if (__this_00 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
      index = 0;
      do {
        if ((__this_00->fields)._size <= index) {
          return;
        }
        item = (MovesInFightVariables_DOCBHLNBECF_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_get_Item__
                         );
        lVar2 = Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Add__;
        if (item == (MovesInFightVariables_DOCBHLNBECF_o *)0x0) break;
        if ((item->fields).HEMGHNOOJPI == BCKBBGCOMJD) {
          pMVar3 = (JGHPAFEFEFB->fields)._items;
          (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
          if (pMVar3 == (MovesInFightVariables_DOCBHLNBECF_array *)0x0) break;
          uVar1 = (JGHPAFEFEFB->fields)._size;
          if (uVar1 < (uint)pMVar3->max_length) {
            (JGHPAFEFEFB->fields)._size = uVar1 + 1;
            pMVar3->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,(Il2CppObject *)item
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        __this_00 = (__this->fields).JOKDIFAIOKL;
        index = index + 1;
      } while (__this_00 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KJNFLGENAAB()  [RVA 0x3362EDC]
// MovesInFightVariables$$KJNFLGENAAB @ RVA 0x3362EDC

void MovesInFightVariables__KJNFLGENAAB(MovesInFightVariables_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  System_Action_IGJEEGBBNFC__o **ppSVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_object__o *__this_01;
  System_Action_IGJEEGBBNFC__o *action;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567a95 & 1) == 0) {
    FUN_01bab630(&System_Action<IGJEEGBBNFC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
    FUN_01bab630(&Method_MMDDDDFHOLG_<>c_KAILFLCNNAF__);
    FUN_01bab630(&MovesInFightVariables_<>c_TypeInfo);
    DAT_04567a95 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PNGAKAPODKB;
  if (__this_00 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__)
      ;
      return;
    }
    if (local_70.fields._current == (Il2CppObject *)0x0) break;
    __this_01 = local_70.fields._current[1].monitor;
    if ((MovesInFightVariables_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MovesInFightVariables_<>c_TypeInfo);
    }
    action = MovesInFightVariables_<>c_TypeInfo->static_fields->__9__26_0;
    if (action == (System_Action_IGJEEGBBNFC__o *)0x0) {
      if ((MovesInFightVariables_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MovesInFightVariables_<>c_TypeInfo);
      }
      action = (System_Action_IGJEEGBBNFC__o *)
               thunk_FUN_01bda818(System_Action<IGJEEGBBNFC>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &MovesInFightVariables_<>c_TypeInfo->static_fields->__9__26_0;
      *ppSVar2 = action;
      thunk_FUN_01c20e04(ppSVar2,action);
    }
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__ForEach
              (__this_01,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<IGJEEGBBNFC>_ForEach__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool EBELLMAHLEE(string FPFPALCKOJI, string BCAEOEOGHLP)  [RVA 0x3363124]
// MovesInFightVariables$$EBELLMAHLEE @ RVA 0x3363124

bool MovesInFightVariables__EBELLMAHLEE
               (System_String_o *FPFPALCKOJI,System_String_o *BCAEOEOGHLP,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *__this_00;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567a96 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_get_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MovesInFightVariables_DOCBHLNBECF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MovesInFightVariables_DOCBHLNBECF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MovesInFightVariables_DOCBHLNBECF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_GetEnumerator__);
    FUN_01bab630(&MovesInFightVariables_TypeInfo);
    DAT_04567a96 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           MovesInFightVariables_TypeInfo->static_fields->NELMGPHMBAN;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)BCAEOEOGHLP,
                       Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_ContainsKey__
                      );
    if (bVar1) {
      if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               MovesInFightVariables_TypeInfo->static_fields->NELMGPHMBAN;
      if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (__this = (System_Collections_Generic_List_object__o *)
                   System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar3,(Il2CppObject *)BCAEOEOGHLP,
                              Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_get_Item__
                             ), __this == (System_Collections_Generic_List_object__o *)0x0))
      goto LAB_034632e0;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,__this,
                 Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<MovesInFightVariables_DOCBHLNBECF>_MoveNext__
                          );
        if (!bVar1) {
          iVar4 = 2;
          goto LAB_034632a0;
        }
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_50.fields._current[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = *(System_String_o **)((long)local_50.fields._current[2].monitor + 0x20);
        if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(__this_00,FPFPALCKOJI,(MethodInfo *)0x0);
      } while (!bVar2);
      iVar4 = 5;
LAB_034632a0:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<MovesInFightVariables_DOCBHLNBECF>_Dispose__
                );
      bVar1 = bVar1 && iVar4 == 5;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_034632e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool CFEOMJALMBB(Model IGMNBGIAGGK, NKPJLEMPIKD.FDGCEBFPIOP ACCIHBHMFPN, bool IIFELBPPMPM = False, NJPBBPOABKP AEDJMMHJIEH)  [RVA 0x3363370]
// MovesInFightVariables$$CFEOMJALMBB @ RVA 0x3363370

bool MovesInFightVariables__CFEOMJALMBB
               (MovesInFightVariables_o *__this,Model_o *IGMNBGIAGGK,int32_t ACCIHBHMFPN,
               bool IIFELBPPMPM,NJPBBPOABKP_o *AEDJMMHJIEH,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_String_o *pSVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  EHCCNKFIPPA_o *__this_01;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_02;
  NKPJLEMPIKD_GBBCKIANDCN_o *pNVar7;
  Model_o **ppOVar8;
  NJPBBPOABKP_o *AEDJMMHJIEH_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  System_Collections_Generic_Dictionary_string__object__o *pSVar9;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *pMVar10;
  MethodInfo *in_x6;
  int index;
  int index_00;
  
  pMVar10 = (MethodInfo *)(ulong)IIFELBPPMPM;
  if ((DAT_04567a97 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_get_Item__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9345/*"Namespace"*/);
    DAT_04567a97 = 1;
  }
  MovesInFightVariables__HAGJCFHKIKM(__this,IGMNBGIAGGK,ACCIHBHMFPN,pMVar10);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KECADJKAJNG;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar5,StringLiteral_9345/*"Namespace"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar4) {
      pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).KECADJKAJNG;
      if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_034635ec;
      pSVar6 = (System_String_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar5,StringLiteral_9345/*"Namespace"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      pMVar10 = extraout_x1_00;
    }
    else {
      pSVar6 = (System_String_o *)0x0;
      pMVar10 = extraout_x1;
    }
    __this_00 = (__this->fields).PNGAKAPODKB;
    if (__this_00 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 < 1) {
LAB_034635f0:
        if (AEDJMMHJIEH == (NJPBBPOABKP_o *)0x0) {
          MovesInFightVariables__NKLGCNHLBAF(__this,pMVar10);
        }
        return true;
      }
      index = 0;
      do {
        __this_01 = (EHCCNKFIPPA_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Item__);
        if (__this_01 == (EHCCNKFIPPA_o *)0x0) break;
        if (AEDJMMHJIEH == (NJPBBPOABKP_o *)0x0) {
          __this_02 = EHCCNKFIPPA__ALDNBOODDKG(__this_01,ACCIHBHMFPN,(MethodInfo *)0x0);
          pMVar10 = extraout_x1_03;
          if (__this_02 != (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
            pNVar7 = (__this->fields).CGDFGAMKHLE;
            if (pNVar7 == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) break;
            (pNVar7->fields).BGHFADDGPAD = ACCIHBHMFPN;
            if (IIFELBPPMPM) {
              pSVar9 = (__this->fields).KECADJKAJNG;
            }
            else {
              pSVar9 = (System_Collections_Generic_Dictionary_string__object__o *)0x0;
            }
            (pNVar7->fields).IGMDDJFPIJL = (Il2CppObject *)pSVar9;
            thunk_FUN_01c20e04();
            pNVar7 = (__this->fields).CGDFGAMKHLE;
            if (pNVar7 == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) break;
            (pNVar7->fields).LHNJNJMBLJM = (__this_01->fields)._HKPEJNKNEGG_k__BackingField;
            thunk_FUN_01c20e04();
            pNVar7 = (__this->fields).CGDFGAMKHLE;
            if (pNVar7 == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) break;
            ppOVar8 = &(pNVar7->fields).EMCFCMFGPME;
            *ppOVar8 = IGMNBGIAGGK;
            thunk_FUN_01c20e04(ppOVar8,IGMNBGIAGGK);
            pNVar7 = (__this->fields).CGDFGAMKHLE;
            if (pSVar6 == (System_String_o *)0x0) {
              pSVar3 = string_TypeInfo->static_fields->Empty;
            }
            else {
              pSVar3 = pSVar6;
              if (pSVar6->klass != string_TypeInfo) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(pSVar6,string_TypeInfo);
              }
            }
            if (pNVar7 == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) break;
            (pNVar7->fields).BFBIEPIDBON = pSVar3;
            thunk_FUN_01c20e04();
            iVar2 = (__this_02->fields)._size;
            pMVar10 = extraout_x1_04;
            if (0 < iVar2) {
              index_00 = 0;
              do {
                pNVar7 = (__this->fields).CGDFGAMKHLE;
                AEDJMMHJIEH_00 =
                     (NJPBBPOABKP_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index_00,
                                Method_System_Collections_Generic_List<NJPBBPOABKP>_get_Item__);
                MovesInFightVariables__ELNCLIIJFDB
                          (__this,__this_01,IGMNBGIAGGK,pNVar7,AEDJMMHJIEH_00,false,in_x6);
                index_00 = index_00 + 1;
                pMVar10 = extraout_x1_05;
              } while (iVar2 != index_00);
            }
          }
        }
        else {
          pMVar10 = extraout_x1_01;
          if ((__this_01->fields)._HKPEJNKNEGG_k__BackingField == IGMNBGIAGGK) {
            MovesInFightVariables__ELNCLIIJFDB
                      (__this,__this_01,IGMNBGIAGGK,(NKPJLEMPIKD_GBBCKIANDCN_o *)0x0,AEDJMMHJIEH,
                       true,in_x6);
            pMVar10 = extraout_x1_02;
          }
        }
        index = index + 1;
        if (index == iVar1) goto LAB_034635f0;
        __this_00 = (__this->fields).PNGAKAPODKB;
      } while (__this_00 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0);
    }
  }
LAB_034635ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void BGLKNLLGJHB(string KGLJICLJHEL)  [RVA 0x33611E0]
// MovesInFightVariables$$BGLKNLLGJHB @ RVA 0x33611E0

void MovesInFightVariables__BGLKNLLGJHB(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t value;
  System_Collections_Generic_Dictionary_object__int__o *pSVar2;
  RaidConfig_o *pJVar3;
  POLAJNLKPAK_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a98 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MovesInFightVariables_TypeInfo);
    DAT_04567a98 = 1;
    method = extraout_x1;
  }
  if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MovesInFightVariables_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
           MovesInFightVariables_TypeInfo->static_fields->HIHPADFEPFO;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    if (bVar1) {
      return;
    }
    if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
             MovesInFightVariables_TypeInfo->static_fields->HIHPADFEPFO;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar3 != (RaidConfig_o *)0x0) &&
       (__this = (pJVar3->fields).FMPOOGLPALN, __this != (POLAJNLKPAK_o *)0x0)) {
      value = POLAJNLKPAK__MGNCJHLPPFA(__this,KGLJICLJHEL,(MethodInfo *)0x0);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_int>__Add
                  (pSVar2,(Il2CppObject *)KGLJICLJHEL,value,
                   Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool MDMGLEMDCDP(string KGLJICLJHEL)  [RVA 0x336362C]
// MovesInFightVariables$$MDMGLEMDCDP @ RVA 0x336362C

bool MovesInFightVariables__MDMGLEMDCDP(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04567a99 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    FUN_01bab630(&MovesInFightVariables_TypeInfo);
    DAT_04567a99 = 1;
    method = extraout_x1;
  }
  if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  MovesInFightVariables__BGLKNLLGJHB(KGLJICLJHEL,method);
  __this = (System_Collections_Generic_Dictionary_object__int__o *)
           MovesInFightVariables_TypeInfo->static_fields->HIHPADFEPFO;
  if (__this != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                      (__this,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33636C0]
// MovesInFightVariables$$.ctor @ RVA 0x33636C0

void MovesInFightVariables___ctor(MovesInFightVariables_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__object__o **ppSVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_01;
  System_Collections_Generic_List_EHCCNKFIPPA__o **ppSVar2;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_02;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o **ppSVar3;
  NKPJLEMPIKD_GBBCKIANDCN_o *__this_03;
  NKPJLEMPIKD_GBBCKIANDCN_o **ppNVar4;
  MovesInFightVariables_CFAPCBMMJIP_o *__this_04;
  MovesInFightVariables_CFAPCBMMJIP_o **ppMVar5;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a9a & 1) == 0) {
    FUN_01bab630(&MovesInFightVariables_CFAPCBMMJIP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&NKPJLEMPIKD_GBBCKIANDCN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EHCCNKFIPPA>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<MovesInFightVariables_CFAPCBMMJIP>__ctor__);
    DAT_04567a9a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_object>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
  ppSVar1 = &(__this->fields).KECADJKAJNG;
  *ppSVar1 = (System_Collections_Generic_Dictionary_string__object__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_EHCCNKFIPPA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EHCCNKFIPPA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>__ctor__);
  ppSVar2 = &(__this->fields).PNGAKAPODKB;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  __this_02 = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>__ctor__);
  ppSVar3 = &(__this->fields).JOKDIFAIOKL;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  __this_03 = (NKPJLEMPIKD_GBBCKIANDCN_o *)thunk_FUN_01bda818(NKPJLEMPIKD_GBBCKIANDCN_TypeInfo);
  NKPJLEMPIKD_GBBCKIANDCN___ctor(__this_03,(MethodInfo *)0x0);
  ppNVar4 = &(__this->fields).CGDFGAMKHLE;
  *ppNVar4 = __this_03;
  thunk_FUN_01c20e04(ppNVar4,__this_03);
  __this_04 = (MovesInFightVariables_CFAPCBMMJIP_o *)thunk_FUN_01bda818(MovesInFightVariables_CFAPCBMMJIP_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  ppMVar5 = &(__this->fields).INJKHBBGKLH;
  *ppMVar5 = __this_04;
  thunk_FUN_01c20e04(ppMVar5,__this_04);
  OMLLDCIMLBB<object>___ctor
            ((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<MovesInFightVariables_CFAPCBMMJIP>__ctor__);
  return;
}


// ===== public static void FJOJIPKCKBK(MovesInFightVariables.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x3363884]
// MovesInFightVariables$$FJOJIPKCKBK @ RVA 0x3363884

void MovesInFightVariables__FJOJIPKCKBK(MovesInFightVariables_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_List_object__o *__this;
  HJNEOLCKEMD_o *pHVar4;
  
  if ((DAT_04567a9b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_get_Item__
                );
    FUN_01bab630(&LMJFCEPILNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Remove__);
    FUN_01bab630(&MovesInFightVariables_TypeInfo);
    DAT_04567a9b = 1;
  }
  if ((CPECAEHDDDB != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) &&
     (pHVar4 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar4 != (HJNEOLCKEMD_o *)0x0)) {
    if ((pHVar4->fields)._KPCCNJJEIAN_k__BackingField == false) {
      return;
    }
    bVar1 = (LMJFCEPILNI_TypeInfo->_2).naturalAligment;
    if (((pHVar4->klass->_2).naturalAligment < bVar1) ||
       ((pHVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)LMJFCEPILNI_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar4);
    }
    if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             MovesInFightVariables_TypeInfo->static_fields->NELMGPHMBAN;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        (pSVar3,(Il2CppObject *)(pHVar4->fields)._HFALHOCIDCH_k__BackingField,
                         Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_ContainsKey__
                        );
      if (!bVar2) {
        return;
      }
      if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               MovesInFightVariables_TypeInfo->static_fields->NELMGPHMBAN;
      if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this = (System_Collections_Generic_List_object__o *)
                   System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar3,(Il2CppObject *)(pHVar4->fields)._HFALHOCIDCH_k__BackingField,
                              Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_get_Item__
                             ), __this != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List<object>__Remove
                  (__this,(Il2CppObject *)CPECAEHDDDB,
                   Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Remove__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OCJCMHLABBF(Model BCKBBGCOMJD)  [RVA 0x3361544]
// MovesInFightVariables$$OCJCMHLABBF @ RVA 0x3361544

void MovesInFightVariables__OCJCMHLABBF(MovesInFightVariables_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  EHCCNKFIPPA_o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_01;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_02;
  MethodInfo *in_x3;
  ModelParameters_o *pPVar4;
  EHCCNKFIPPA_array *pEVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567a9c & 1) == 0) {
    FUN_01bab630(&EHCCNKFIPPA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    DAT_04567a9c = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  MovesInFightVariables__HMDJFLDLPMN(__this,BCKBBGCOMJD,method);
  __this_00 = (EHCCNKFIPPA_o *)thunk_FUN_01bda818(EHCCNKFIPPA_TypeInfo);
  EHCCNKFIPPA___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (EHCCNKFIPPA_o *)0x0) {
    (__this_00->fields)._HKPEJNKNEGG_k__BackingField = BCKBBGCOMJD;
    thunk_FUN_01c20e04(&__this_00->fields,BCKBBGCOMJD);
    if (((BCKBBGCOMJD != (Model_o *)0x0) &&
        (pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF, pPVar4 != (ModelParameters_o *)0x0)) &&
       (__this_01 = (pPVar4->fields).INGEFFGPJPB,
       __this_01 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                          );
        if (!bVar3) break;
        MovesInFightVariables__GJMDFCNLBGE
                  ((MovesInFightVariables_o *)(ulong)bVar3,__this_00,(PerkInfoItem_o *)local_48.fields._current
                   ,in_x3);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__)
      ;
      EHCCNKFIPPA__GIENGNEGHPJ(__this_00,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<EHCCNKFIPPA>_Add__;
      __this_02 = (__this->fields).PNGAKAPODKB;
      if (__this_02 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
        pEVar5 = (__this_02->fields)._items;
        (__this_02->fields)._version = (__this_02->fields)._version + 1;
        if (pEVar5 != (EHCCNKFIPPA_array *)0x0) {
          uVar1 = (__this_02->fields)._size;
          if (uVar1 < (uint)pEVar5->max_length) {
            (__this_02->fields)._size = uVar1 + 1;
            pEVar5->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pEVar5->m_Items + (int)uVar1,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MovesInFightVariables.DOCBHLNBECF BDEJAFHCONL(string FPFPALCKOJI, string BCAEOEOGHLP)  [RVA 0x3363B4C]
// MovesInFightVariables$$BDEJAFHCONL @ RVA 0x3363B4C

MovesInFightVariables_DOCBHLNBECF_o *
MovesInFightVariables__BDEJAFHCONL
          (System_String_o *FPFPALCKOJI,System_String_o *BCAEOEOGHLP,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *__this_00;
  HJNEOLCKEMD_o *pHVar3;
  MovesInFightVariables_DOCBHLNBECF_o *pMVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567a9d & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_get_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MovesInFightVariables_DOCBHLNBECF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MovesInFightVariables_DOCBHLNBECF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MovesInFightVariables_DOCBHLNBECF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_GetEnumerator__);
    FUN_01bab630(&MovesInFightVariables_TypeInfo);
    DAT_04567a9d = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           MovesInFightVariables_TypeInfo->static_fields->NELMGPHMBAN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)BCAEOEOGHLP,
                       Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_ContainsKey__
                      );
    if (bVar1) {
      if ((MovesInFightVariables_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               MovesInFightVariables_TypeInfo->static_fields->NELMGPHMBAN;
      if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (__this = (System_Collections_Generic_List_object__o *)
                   System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar2,(Il2CppObject *)BCAEOEOGHLP,
                              Method_System_Collections_Generic_Dictionary<string,_List<MovesInFightVariables_DOCBHLNBECF>>_get_Item__
                             ), __this == (System_Collections_Generic_List_object__o *)0x0))
      goto LAB_03463d04;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,__this,
                 Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<MovesInFightVariables_DOCBHLNBECF>_MoveNext__
                          );
        pMVar4 = (MovesInFightVariables_DOCBHLNBECF_o *)local_50.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<MovesInFightVariables_DOCBHLNBECF>_Dispose__
                    );
          goto LAB_03463cdc;
        }
        if ((MovesInFightVariables_DOCBHLNBECF_o *)local_50.fields._current ==
            (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar3 = ((MovesInFightVariables_DOCBHLNBECF_Fields *)((long)local_50.fields._current + 0x10))->
                 EDOEMIDBEGO;
        if (pHVar3 == (HJNEOLCKEMD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = (pHVar3->fields)._COIPKAKHDFP_k__BackingField;
        if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = System_String__Equals(__this_00,FPFPALCKOJI,(MethodInfo *)0x0);
      } while (!bVar1);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<MovesInFightVariables_DOCBHLNBECF>_Dispose__
                );
    }
    else {
LAB_03463cdc:
      pMVar4 = (MovesInFightVariables_DOCBHLNBECF_o *)0x0;
    }
    return pMVar4;
  }
LAB_03463d04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MOJEFCADBCO()  [RVA 0x33614D4]
// MovesInFightVariables$$MOJEFCADBCO @ RVA 0x33614D4

void MovesInFightVariables__MOJEFCADBCO(MovesInFightVariables_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_EHCCNKFIPPA__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567a9e & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_Clear__);
    DAT_04567a9e = 1;
  }
  pSVar1 = (__this->fields).PNGAKAPODKB;
  if (pSVar1 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void HMDJFLDLPMN(Model BCKBBGCOMJD)  [RVA 0x33639D4]
// MovesInFightVariables$$HMDJFLDLPMN @ RVA 0x33639D4

void MovesInFightVariables__HMDJFLDLPMN(MovesInFightVariables_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567a9f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_Remove__);
    DAT_04567a9f = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).PNGAKAPODKB;
  if (pSVar2 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    if (!bVar1) goto LAB_03463ab0;
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (local_48.fields._current[1].klass != (Il2CppClass *)BCKBBGCOMJD);
  pSVar2 = (__this->fields).PNGAKAPODKB;
  if (pSVar2 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__Remove
            ((System_Collections_Generic_List_object__o *)pSVar2,local_48.fields._current,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>_Remove__);
LAB_03463ab0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
  return;
}

