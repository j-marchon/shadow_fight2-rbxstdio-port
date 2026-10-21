// Original name: Nekki.SF2.Core.Fights.Model.AI.Data.TacticsArchiver  (obfuscated IOIKBGAJIGO)
// TypeDefIndex 2486
// Namespace: 
// public class TacticsArchiver
// Fields:
//   public static TacticsArchiver.DMIOKBAEKJB IPIMOJKDGPN; // 0x0
//   public static string[] OMPNOMAKALF; // 0x8
//   private static bool IGHADNLJLIF; // 0x10

// ===== private static void .cctor()  [RVA 0x337384C]
// TacticsArchiver$$.cctor @ RVA 0x337384C

void TacticsArchiver___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  
                    /* try { // try from 03473858 to 03573867 has its CatchHandler @ 0347399c */
                    /* try { // try from 03473868 to 035738f7 has its CatchHandler @ 034732c4 */
  if ((DAT_04567b3f & 1) == 0) {
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_16229/*"_swords"*/);
    FUN_01bab630(&StringLiteral_16222/*"_sai"*/);
    FUN_01bab630(&StringLiteral_16194/*"_fists"*/);
    FUN_01bab630(&StringLiteral_16202/*"_knives"*/);
    DAT_04567b3f = 1;
  }
  TacticsArchiver_TypeInfo->static_fields->IPIMOJKDGPN = 3;
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,4);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 034738f8 to 035738fb has its CatchHandler @ 03473a10 */
                    /* try { // try from 034738fc to 035738ff has its CatchHandler @ 03473a0c */
      pSVar1->m_Items[0] = StringLiteral_16194/*"_fists"*/;
                    /* try { // try from 03473900 to 03573903 has its CatchHandler @ 03473a08 */
                    /* try { // try from 03473904 to 03573907 has its CatchHandler @ 034739f8 */
      thunk_FUN_01c20e04(pSVar1->m_Items);
                    /* try { // try from 03473908 to 0357390b has its CatchHandler @ 034739d8 */
                    /* try { // try from 0347390c to 0357390f has its CatchHandler @ 034739f4 */
                    /* try { // try from 03473910 to 03573913 has its CatchHandler @ 034739c4 */
      if (1 < (uint)pSVar1->max_length) {
                    /* try { // try from 03473914 to 03573917 has its CatchHandler @ 034739c0 */
                    /* try { // try from 03473918 to 0357391b has its CatchHandler @ 034739f4 */
                    /* try { // try from 0347391c to 0357391f has its CatchHandler @ 034739b4 */
                    /* try { // try from 03473920 to 03573923 has its CatchHandler @ 034739ac */
                    /* try { // try from 03473924 to 03573927 has its CatchHandler @ 03473998 */
        pSVar1->m_Items[1] = StringLiteral_16222/*"_sai"*/;
                    /* try { // try from 03473928 to 0357392b has its CatchHandler @ 03473990 */
                    /* try { // try from 0347392c to 0357392f has its CatchHandler @ 0347398c */
        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
                    /* try { // try from 03473930 to 03573933 has its CatchHandler @ 034739cc */
                    /* try { // try from 03473934 to 03573937 has its CatchHandler @ 0347397c */
                    /* try { // try from 03473938 to 0357393b has its CatchHandler @ 03473978 */
        if (2 < (uint)pSVar1->max_length) {
                    /* try { // try from 0347393c to 0357393f has its CatchHandler @ 03473974 */
                    /* try { // try from 03473940 to 03573943 has its CatchHandler @ 034739cc */
                    /* try { // try from 03473944 to 03573947 has its CatchHandler @ 03473970 */
                    /* try { // try from 03473948 to 0357394b has its CatchHandler @ 0347396c */
                    /* try { // try from 0347394c to 0357394f has its CatchHandler @ 034732c4 */
          pSVar1->m_Items[2] = StringLiteral_16202/*"_knives"*/;
                    /* try { // try from 03473950 to 03573953 has its CatchHandler @ 0347395c */
                    /* try { // try from 03473954 to 03573a2f has its CatchHandler @ 034732c4 */
          thunk_FUN_01c20e04(pSVar1->m_Items + 2);
                    /* catch() { ... } // from try @ 03473950 with catch @ 0347395c */
                    /* catch() { ... } // from try @ 03473830 with catch @ 03473960 */
          if (3 < (uint)pSVar1->max_length) {
                    /* catch() { ... } // from try @ 03473844 with catch @ 03473964 */
                    /* catch() { ... } // from try @ 03473698 with catch @ 03473968 */
                    /* catch() { ... } // from try @ 03473948 with catch @ 0347396c */
                    /* catch() { ... } // from try @ 03473944 with catch @ 03473970 */
                    /* catch() { ... } // from try @ 0347393c with catch @ 03473974 */
            pSVar1->m_Items[3] = StringLiteral_16229/*"_swords"*/;
                    /* catch() { ... } // from try @ 03473938 with catch @ 03473978 */
            thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03473934 with catch @ 0347397c */
                    /* catch() { ... } // from try @ 03473604 with catch @ 03473980 */
                    /* catch() { ... } // from try @ 034736f4 with catch @ 03473984 */
            ppSVar2 = &TacticsArchiver_TypeInfo->static_fields->OMPNOMAKALF;
                    /* catch() { ... } // from try @ 0347367c with catch @ 03473988 */
            *ppSVar2 = pSVar1;
                    /* catch() { ... } // from try @ 0347392c with catch @ 0347398c */
            thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* catch() { ... } // from try @ 03473928 with catch @ 03473990 */
                    /* catch() { ... } // from try @ 034736d8 with catch @ 03473994 */
                    /* catch() { ... } // from try @ 03473924 with catch @ 03473998 */
                    /* catch() { ... } // from try @ 03473858 with catch @ 0347399c */
            TacticsArchiver_TypeInfo->static_fields->IGHADNLJLIF = false;
                    /* catch() { ... } // from try @ 034736bc with catch @ 034739a0 */
                    /* catch() { ... } // from try @ 03473630 with catch @ 034739a4 */
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03473780 with catch @ 034739a8 */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03473920 with catch @ 034739ac */
  FUN_01bab8c8();
}


// ===== private static void AEJJGGKAHBN()  [RVA 0x33739B0]
// TacticsArchiver$$AEJJGGKAHBN @ RVA 0x33739B0

/* WARNING: Removing unreachable block (ram,0x03473c0c) */

void TacticsArchiver__AEJJGGKAHBN(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *DDGBMJNBFPF;
  bool bVar4;
  System_Collections_Generic_List_object__o *__this;
  MethodInfo *in_x2;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* catch() { ... } // from try @ 034737c4 with catch @ 034739b0 */
                    /* catch() { ... } // from try @ 0347391c with catch @ 034739b4 */
                    /* catch() { ... } // from try @ 03473748 with catch @ 034739b8 */
                    /* catch() { ... } // from try @ 0347371c with catch @ 034739bc */
                    /* catch() { ... } // from try @ 03473914 with catch @ 034739c0 */
                    /* catch() { ... } // from try @ 03473910 with catch @ 034739c4 */
                    /* catch() { ... } // from try @ 03473764 with catch @ 034739c8 */
                    /* catch() { ... } // from try @ 03473930 with catch @ 034739cc
                       catch() { ... } // from try @ 03473940 with catch @ 034739cc */
                    /* catch() { ... } // from try @ 034736f8 with catch @ 034739d0 */
                    /* catch() { ... } // from try @ 034735f4 with catch @ 034739d4 */
                    /* catch() { ... } // from try @ 03473908 with catch @ 034739d8 */
                    /* catch() { ... } // from try @ 03473634 with catch @ 034739dc */
  if ((DAT_04567b40 & 1) == 0) {
                    /* catch() { ... } // from try @ 034737f0 with catch @ 034739e0 */
                    /* catch() { ... } // from try @ 034735a0 with catch @ 034739e4 */
                    /* catch() { ... } // from try @ 034735b4 with catch @ 034739e8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
                    /* catch() { ... } // from try @ 034737c8 with catch @ 034739ec */
                    /* catch() { ... } // from try @ 03473784 with catch @ 034739f0 */
                    /* catch() { ... } // from try @ 0347390c with catch @ 034739f4
                       catch() { ... } // from try @ 03473918 with catch @ 034739f4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
                    /* catch() { ... } // from try @ 03473904 with catch @ 034739f8 */
                    /* catch() { ... } // from try @ 034735d8 with catch @ 034739fc */
                    /* catch() { ... } // from try @ 03473588 with catch @ 03473a00 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
                    /* catch() { ... } // from try @ 03473578 with catch @ 03473a04 */
                    /* catch() { ... } // from try @ 03473900 with catch @ 03473a08 */
                    /* catch() { ... } // from try @ 034738fc with catch @ 03473a0c */
    FUN_01bab630(&TacticsArchiver_TypeInfo);
                    /* catch() { ... } // from try @ 034738f8 with catch @ 03473a10 */
                    /* catch() { ... } // from try @ 03473534 with catch @ 03473a14 */
                    /* catch() { ... } // from try @ 034734d8 with catch @ 03473a18 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
                    /* try { // try from 03473a30 to 03573a33 has its CatchHandler @ 03473a40 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* catch() { ... } // from try @ 03473a30 with catch @ 03473a40 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_6489/*"Fists"*/);
    DAT_04567b40 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_List_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
                    /* try { // try from 03473a80 to 03573aa7 has its CatchHandler @ 03473abc */
  System_Collections_Generic_List<object>___ctor
            (__this,Method_System_Collections_Generic_List<string>__ctor__);
  pIVar3 = StringLiteral_1/*""*/;
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar5 = (__this->fields)._items;
                    /* try { // try from 03473aa8 to 03573ab3 has its CatchHandler @ 034732c4 */
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar5 != (System_Object_array *)0x0) {
                    /* try { // try from 03473ab4 to 03573abb has its CatchHandler @ 03473abc */
      uVar1 = (__this->fields)._size;
                    /* catch() { ... } // from try @ 03473a80 with catch @ 03473abc
                       catch() { ... } // from try @ 03473ab4 with catch @ 03473abc */
      if (uVar1 < (uint)pSVar5->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pSVar5->m_Items[(int)uVar1] = pIVar3;
        thunk_FUN_01c20e04();
      }
      else {
        in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        System_Collections_Generic_List<object>__AddWithResize
                  (__this,pIVar3,(MethodInfo_26E4DAC *)in_x2);
      }
      pIVar3 = StringLiteral_6489/*"Fists"*/;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar5 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = pIVar3;
          thunk_FUN_01c20e04();
        }
        else {
          in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,pIVar3,(MethodInfo_26E4DAC *)in_x2);
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,__this,Method_System_Collections_Generic_List<string>_GetEnumerator__);
        local_60.fields._index = local_98.fields._index;
        local_60.fields._version = local_98.fields._version;
        local_60.fields._list = local_98.fields._list;
        local_60.fields._current = local_98.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                 ), pIVar3 = local_60.fields._current, bVar4) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_98,__this,Method_System_Collections_Generic_List<string>_GetEnumerator__
                    );
          local_80.fields._index = local_98.fields._index;
          local_80.fields._version = local_98.fields._version;
          local_80.fields._list = local_98.fields._list;
          local_80.fields._current = local_98.fields._current;
          while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_80,
                                    Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                   ), DDGBMJNBFPF = local_80.fields._current, bVar4) {
            if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            TacticsArchiver__AEJJGGKAHBN((System_String_o *)pIVar3,(System_String_o *)DDGBMJNBFPF,in_x2)
            ;
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string PIPGAPGKBLM(string IFDOANCFKJD, Nullable<TacticsArchiver.DMIOKBAEKJB> LKLBFFJPPOO)  [RVA 0x3374690]
// TacticsArchiver$$PIPGAPGKBLM @ RVA 0x3374690

System_String_o *
TacticsArchiver__PIPGAPGKBLM
          (System_String_o *IFDOANCFKJD,System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o LKLBFFJPPOO,
          MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  System_String_o *message;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  void *pvVar3;
  
  if ((DAT_04567b41 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_184/*"   for weapon: "*/);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_21899/*"using filename: "*/);
    FUN_01bab630(&StringLiteral_1461/*".bytes"*/);
    DAT_04567b41 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo);
  }
  pSVar1 = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
  if (values == (System_String_array *)0x0) goto LAB_0347494c;
  if ((int)values->max_length != 0) {
    values->m_Items[0] = pSVar1;
    thunk_FUN_01c20e04(values->m_Items,pSVar1);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = StringLiteral_1492/*"/"*/;
      thunk_FUN_01c20e04();
      method_00 = extraout_x1;
      if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      pSVar1 = TacticsArchiver__KELDIALFCDL(LKLBFFJPPOO,method_00);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = pSVar1;
        thunk_FUN_01c20e04(values->m_Items + 2,pSVar1);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = StringLiteral_1492/*"/"*/;
          thunk_FUN_01c20e04();
          if (IFDOANCFKJD == (System_String_o *)0x0) {
LAB_0347494c:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar1 = System_String__ToLower(IFDOANCFKJD,(MethodInfo *)0x0);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 4,pSVar1);
            pSVar1 = TacticsArchiver__LGDAPGDDLEI(LKLBFFJPPOO,method_01);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = pSVar1;
              thunk_FUN_01c20e04(values->m_Items + 5,pSVar1);
              if (6 < (uint)values->max_length) {
                values->m_Items[6] = StringLiteral_1461/*".bytes"*/;
                thunk_FUN_01c20e04();
                pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
                }
                pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>
                                   (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                if (((pIVar2 != (Il2CppObject *)0x0) && (pIVar2[9].klass != (Il2CppClass *)0x0)) &&
                   (pvVar3 = ((pIVar2[9].klass)->_1).this_arg.data, pvVar3 != (void *)0x0)) {
                  if (*(char *)((long)pvVar3 + 0x11) != '\0') {
                    message = System_String__Concat
                                        (StringLiteral_21899/*"using filename: "*/,pSVar1,StringLiteral_184/*"   for weapon: "*/,IFDOANCFKJD,
                                         (MethodInfo *)0x0);
                    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                    }
                    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
                  }
                  return pSVar1;
                }
                goto LAB_0347494c;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private static void MPENCGPEPEE(string IIDPDAKKFFN, string DDGBMJNBFPF, ref byte[] GCOICEAJHDL)  [RVA 0x3374B78]
// TacticsArchiver$$MPENCGPEPEE @ RVA 0x3374B78

void TacticsArchiver__MPENCGPEPEE
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,
               System_Byte_array **GCOICEAJHDL,MethodInfo *method)

{
  MethodInfo *pMVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_Text_Encoding_o *pSVar6;
  System_Byte_array *pSVar7;
  
  if ((DAT_04567b42 & 1) == 0) {
                    /* try { // try from 03474bc0 to 03574be7 has its CatchHandler @ 03474ce8 */
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1551/*"/tactics/movements/"*/);
    FUN_01bab630(&StringLiteral_15862/*"_"*/);
    FUN_01bab630(&StringLiteral_1552/*"/tactics/outcometablesforattack/"*/);
    FUN_01bab630(&StringLiteral_1484/*".tbs"*/);
    DAT_04567b42 = 1;
  }
                    /* try { // try from 03474c1c to 03574c47 has its CatchHandler @ 03474ce4 */
  pMVar1 = (MethodInfo *)
           System_String__Concat
                     (IIDPDAKKFFN,StringLiteral_15862/*"_"*/,DDGBMJNBFPF,StringLiteral_1484/*".tbs"*/,
                      (MethodInfo *)0x0);
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo);
  }
                    /* try { // try from 03474c48 to 03574c4f has its CatchHandler @ 03474ce0 */
  pSVar2 = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
                    /* try { // try from 03474c50 to 03574ccf has its CatchHandler @ 034749e4 */
  pSVar2 = System_String__Concat
                     (pSVar2,StringLiteral_1551/*"/tactics/movements/"*/,(System_String_o *)pMVar1,(MethodInfo *)0x0);
  pSVar3 = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar3 = System_String__Concat
                     (pSVar3,StringLiteral_1552/*"/tactics/outcometablesforattack/"*/,(System_String_o *)pMVar1,(MethodInfo *)0x0);
  pSVar4 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar2,(MethodInfo *)0x0);
  if ((pSVar4 != (System_Byte_array *)0x0) && (pSVar4->max_length != 0)) {
    pSVar7 = *GCOICEAJHDL;
    pSVar5 = System_BitConverter__GetBytes(1,(MethodInfo *)0x0);
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(TacticsArchiver_TypeInfo);
    }
                    /* try { // try from 03474cd0 to 03574cd3 has its CatchHandler @ 03474cdc */
                    /* try { // try from 03474cd4 to 03574cf7 has its CatchHandler @ 034749e4 */
    pSVar5 = TacticsArchiver__ABJJDDOFODH(pSVar7,pSVar5,pMVar1);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03474cd0 with catch @ 03474cdc
                        */
    *GCOICEAJHDL = pSVar5;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03474c48 with catch @ 03474ce0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03474c1c with catch @ 03474ce4
                        */
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar5);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03474bc0 with catch @ 03474ce8
                        */
    pSVar5 = *GCOICEAJHDL;
    pSVar6 = System_Text_Encoding__get_ASCII((MethodInfo *)0x0);
    if (pSVar6 == (System_Text_Encoding_o *)0x0) goto LAB_03474eac;
                    /* try { // try from 03474cf8 to 03574cfb has its CatchHandler @ 03474d0c */
    pMVar1 = (pSVar6->klass->vtable)._19_GetBytes.method;
    pSVar7 = (System_Byte_array *)
             (*(pSVar6->klass->vtable)._19_GetBytes.methodPtr)(pSVar6,IIDPDAKKFFN);
                    /* catch() { ... } // from try @ 03474cf8 with catch @ 03474d0c */
    pSVar5 = TacticsArchiver__ABJJDDOFODH(pSVar5,pSVar7,pMVar1);
    *GCOICEAJHDL = pSVar5;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar5);
    pSVar5 = *GCOICEAJHDL;
    pSVar6 = System_Text_Encoding__get_ASCII((MethodInfo *)0x0);
    if (pSVar6 == (System_Text_Encoding_o *)0x0) goto LAB_03474eac;
                    /* try { // try from 03474d44 to 03574d6b has its CatchHandler @ 03474d80 */
    pMVar1 = (pSVar6->klass->vtable)._19_GetBytes.method;
    pSVar7 = (System_Byte_array *)
             (*(pSVar6->klass->vtable)._19_GetBytes.methodPtr)(pSVar6,DDGBMJNBFPF);
    pSVar5 = TacticsArchiver__ABJJDDOFODH(pSVar5,pSVar7,pMVar1);
    *GCOICEAJHDL = pSVar5;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar5);
                    /* try { // try from 03474d6c to 03574d77 has its CatchHandler @ 034749e4 */
    pSVar4 = TacticsArchiver__ABJJDDOFODH(*GCOICEAJHDL,pSVar4,pMVar1);
                    /* try { // try from 03474d78 to 03574d7f has its CatchHandler @ 03474d80 */
    *GCOICEAJHDL = pSVar4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03474d44 with catch @ 03474d80
                       catch(type#2 @ 00000000) { ... } // from try @ 03474d78 with catch @ 03474d80
                        */
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar4);
  }
                    /* try { // try from 03474d84 to 035751b3 has its CatchHandler @ 03474d84
                       catch() { ... } // from try @ 03474d84 with catch @ 03474d84
                       catch() { ... } // from try @ 03475244 with catch @ 03474d84
                       catch() { ... } // from try @ 034752d0 with catch @ 03474d84
                       catch() { ... } // from try @ 03475374 with catch @ 03474d84 */
  pSVar4 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar3,(MethodInfo *)0x0);
  if ((pSVar4 == (System_Byte_array *)0x0) || (pSVar4->max_length == 0)) {
    return;
  }
  pSVar7 = *GCOICEAJHDL;
  pSVar5 = System_BitConverter__GetBytes(0,(MethodInfo *)0x0);
  if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(TacticsArchiver_TypeInfo);
  }
  pSVar5 = TacticsArchiver__ABJJDDOFODH(pSVar7,pSVar5,pMVar1);
  *GCOICEAJHDL = pSVar5;
  thunk_FUN_01c20e04(GCOICEAJHDL,pSVar5);
  pSVar5 = *GCOICEAJHDL;
  pSVar6 = System_Text_Encoding__get_ASCII((MethodInfo *)0x0);
  if (pSVar6 != (System_Text_Encoding_o *)0x0) {
    pMVar1 = (pSVar6->klass->vtable)._19_GetBytes.method;
    pSVar7 = (System_Byte_array *)
             (*(pSVar6->klass->vtable)._19_GetBytes.methodPtr)(pSVar6,IIDPDAKKFFN);
    pSVar5 = TacticsArchiver__ABJJDDOFODH(pSVar5,pSVar7,pMVar1);
    *GCOICEAJHDL = pSVar5;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar5);
    pSVar5 = *GCOICEAJHDL;
    pSVar6 = System_Text_Encoding__get_ASCII((MethodInfo *)0x0);
    if (pSVar6 != (System_Text_Encoding_o *)0x0) {
      pMVar1 = (pSVar6->klass->vtable)._19_GetBytes.method;
      pSVar7 = (System_Byte_array *)
               (*(pSVar6->klass->vtable)._19_GetBytes.methodPtr)(pSVar6,DDGBMJNBFPF);
      pSVar5 = TacticsArchiver__ABJJDDOFODH(pSVar5,pSVar7,pMVar1);
      *GCOICEAJHDL = pSVar5;
      thunk_FUN_01c20e04(GCOICEAJHDL,pSVar5);
      pSVar4 = TacticsArchiver__ABJJDDOFODH(*GCOICEAJHDL,pSVar4,pMVar1);
      *GCOICEAJHDL = pSVar4;
      thunk_FUN_01c20e04(GCOICEAJHDL,pSVar4);
      return;
    }
  }
LAB_03474eac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void MPENCGPEPEE(string IFDOANCFKJD, ref byte[] GCOICEAJHDL)  [RVA 0x3374F44]
// TacticsArchiver$$MPENCGPEPEE @ RVA 0x3374F44

void TacticsArchiver__MPENCGPEPEE
               (System_String_o *IFDOANCFKJD,System_Byte_array **GCOICEAJHDL,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_Text_Encoding_o *pSVar5;
  MethodInfo *pMVar6;
  System_Byte_array *pSVar7;
  
  if ((DAT_04567b43 & 1) == 0) {
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1550/*"/tactics/dodge/"*/);
    FUN_01bab630(&StringLiteral_1553/*"/tactics/shiftTables/"*/);
    FUN_01bab630(&StringLiteral_1483/*".sts"*/);
    FUN_01bab630(&StringLiteral_1484/*".tbs"*/);
    DAT_04567b43 = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = System_String__Concat
                     (pSVar1,StringLiteral_1550/*"/tactics/dodge/"*/,IFDOANCFKJD,StringLiteral_1484/*".tbs"*/,(MethodInfo *)0x0);
  pSVar2 = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
  pMVar6 = (MethodInfo *)IFDOANCFKJD;
  pSVar2 = System_String__Concat
                     (pSVar2,StringLiteral_1553/*"/tactics/shiftTables/"*/,IFDOANCFKJD,StringLiteral_1483/*".sts"*/,(MethodInfo *)0x0);
  pSVar3 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar1,(MethodInfo *)0x0);
  if ((pSVar3 != (System_Byte_array *)0x0) && (pSVar3->max_length != 0)) {
    pSVar7 = *GCOICEAJHDL;
    pSVar4 = System_BitConverter__GetBytes(2,(MethodInfo *)0x0);
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(TacticsArchiver_TypeInfo);
    }
    pSVar4 = TacticsArchiver__ABJJDDOFODH(pSVar7,pSVar4,pMVar6);
    *GCOICEAJHDL = pSVar4;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar4);
    pSVar4 = *GCOICEAJHDL;
    pSVar5 = System_Text_Encoding__get_ASCII((MethodInfo *)0x0);
    if (pSVar5 == (System_Text_Encoding_o *)0x0) goto LAB_034751dc;
    pMVar6 = (pSVar5->klass->vtable)._19_GetBytes.method;
    pSVar7 = (System_Byte_array *)
             (*(pSVar5->klass->vtable)._19_GetBytes.methodPtr)(pSVar5,IFDOANCFKJD);
    pSVar4 = TacticsArchiver__ABJJDDOFODH(pSVar4,pSVar7,pMVar6);
    *GCOICEAJHDL = pSVar4;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar4);
    pSVar3 = TacticsArchiver__ABJJDDOFODH(*GCOICEAJHDL,pSVar3,pMVar6);
    *GCOICEAJHDL = pSVar3;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar3);
  }
  pSVar3 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar2,(MethodInfo *)0x0);
  if ((pSVar3 == (System_Byte_array *)0x0) || (pSVar3->max_length == 0)) {
    return;
  }
  pSVar7 = *GCOICEAJHDL;
  pSVar4 = System_BitConverter__GetBytes(7,(MethodInfo *)0x0);
  if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(TacticsArchiver_TypeInfo);
  }
  pSVar4 = TacticsArchiver__ABJJDDOFODH(pSVar7,pSVar4,pMVar6);
  *GCOICEAJHDL = pSVar4;
  thunk_FUN_01c20e04(GCOICEAJHDL,pSVar4);
  pSVar4 = *GCOICEAJHDL;
  pSVar5 = System_Text_Encoding__get_ASCII((MethodInfo *)0x0);
  if (pSVar5 != (System_Text_Encoding_o *)0x0) {
    pMVar6 = (pSVar5->klass->vtable)._19_GetBytes.method;
    pSVar7 = (System_Byte_array *)
             (*(pSVar5->klass->vtable)._19_GetBytes.methodPtr)(pSVar5,IFDOANCFKJD);
    pSVar4 = TacticsArchiver__ABJJDDOFODH(pSVar4,pSVar7,pMVar6);
    *GCOICEAJHDL = pSVar4;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar4);
    pSVar3 = TacticsArchiver__ABJJDDOFODH(*GCOICEAJHDL,pSVar3,pMVar6);
    *GCOICEAJHDL = pSVar3;
                    /* try { // try from 034751b4 to 035751db has its CatchHandler @ 034752e4 */
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar3);
    return;
  }
LAB_034751dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void PCPILFKFNFJ()  [RVA 0x33751E0]
// TacticsArchiver$$PCPILFKFNFJ @ RVA 0x33751E0

void TacticsArchiver__PCPILFKFNFJ(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  MethodInfo *in_x1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *extraout_x1_08;
  MethodInfo *extraout_x1_09;
  MethodInfo *pMVar4;
  TacticsArchiver_StaticFields *pIVar5;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04567b44 & 1) == 0) {
    FUN_01bab630(&TacticsArchiver_DMIOKBAEKJB_TypeInfo);
                    /* try { // try from 03475210 to 0357523b has its CatchHandler @ 034752e0 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
                    /* try { // try from 0347523c to 03575243 has its CatchHandler @ 034752dc */
                    /* try { // try from 03475244 to 035752cb has its CatchHandler @ 03474d84 */
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__);
    FUN_01bab630(&StringLiteral_686/*"#ERROR There are no tactics files to process,  shutting down Tactics loading."*/);
    FUN_01bab630(&StringLiteral_21322/*"switched to DecomressMethod: "*/);
    FUN_01bab630(&StringLiteral_685/*"#ERROR TacticsArchiver::CheckDecompressionMethodUsability: Code-pre-selected DecompressMethod is not reachable, tryin..."*/);
    DAT_04567b44 = 1;
    in_x1 = extraout_x1;
  }
  if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    in_x1 = extraout_x1_00;
  }
  pIVar5 = TacticsArchiver_TypeInfo->static_fields;
  if (pIVar5->IGHADNLJLIF == false) {
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pIVar5 = TacticsArchiver_TypeInfo->static_fields;
      in_x1 = extraout_x1_01;
    }
    pIVar5->IGHADNLJLIF = true;
    bVar1 = TacticsArchiver__GBBPADICKNL((System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x1);
    if (!bVar1) {
                    /* try { // try from 034752cc to 035752cf has its CatchHandler @ 034752d8 */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034752d0 to 035752fb has its CatchHandler @ 03474d84 */
        thunk_FUN_01ba7564();
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034752cc with catch @ 034752d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0347523c with catch @ 034752dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03475210 with catch @ 034752e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034751b4 with catch @ 034752e4
                        */
      UnityEngine_Debug__LogError(StringLiteral_685/*"#ERROR TacticsArchiver::CheckDecompressionMethodUsability: Code-pre-selected DecompressMethod is not reachable, tryin..."*/,(MethodInfo *)0x0);
      local_38.klass = (System_Enum_c *)0x0;
                    /* try { // try from 034752fc to 035752ff has its CatchHandler @ 0347530c */
      System_Nullable<Int32Enum>___ctor
                ((System_Nullable_Int32Enum__o)&local_38,3,
                 Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__);
                    /* catch() { ... } // from try @ 034752fc with catch @ 0347530c */
      pMVar4 = extraout_x1_02;
      if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar4 = extraout_x1_03;
      }
      bVar1 = TacticsArchiver__GBBPADICKNL
                        ((System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_38.klass,pMVar4);
      if (!bVar1) {
        local_38.klass = (System_Enum_c *)0x0;
        System_Nullable<Int32Enum>___ctor
                  ((System_Nullable_Int32Enum__o)&local_38,1,
                   Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__);
        pMVar4 = extraout_x1_04;
        if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar4 = extraout_x1_05;
        }
        bVar1 = TacticsArchiver__GBBPADICKNL
                          ((System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_38.klass,pMVar4);
                    /* try { // try from 0347534c to 03575373 has its CatchHandler @ 03475388 */
        if (!bVar1) {
          local_38.klass = (System_Enum_c *)0x0;
          System_Nullable<Int32Enum>___ctor
                    ((System_Nullable_Int32Enum__o)&local_38,2,
                     Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__);
          pMVar4 = extraout_x1_06;
          if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pMVar4 = extraout_x1_07;
          }
                    /* try { // try from 03475374 to 0357537f has its CatchHandler @ 03474d84 */
          bVar1 = TacticsArchiver__GBBPADICKNL
                            ((System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_38.klass,pMVar4);
          if (!bVar1) {
                    /* try { // try from 03475380 to 03575387 has its CatchHandler @ 03475388 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0347534c with catch @ 03475388
                       catch(type#2 @ 00000000) { ... } // from try @ 03475380 with catch @ 03475388
                        */
            local_38.klass = (System_Enum_c *)0x0;
            System_Nullable<Int32Enum>___ctor
                      ((System_Nullable_Int32Enum__o)&local_38,0,
                       Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__);
            pMVar4 = extraout_x1_08;
            if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar4 = extraout_x1_09;
            }
            bVar1 = TacticsArchiver__GBBPADICKNL
                              ((System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_38.klass,pMVar4);
            if (!bVar1) {
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError(StringLiteral_686/*"#ERROR There are no tactics files to process,  shutting down Tactics loading."*/,(MethodInfo *)0x0);
              if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                                 (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
              if (pIVar3 != (Il2CppObject *)0x0) {
                *(undefined1 *)((long)&pIVar3[1].klass + 2) = 0;
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
        }
      }
      if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_38.klass = (System_Enum_c *)TacticsArchiver_DMIOKBAEKJB_TypeInfo;
      local_38.monitor = (void *)0xffffffffffffffff;
      local_28 = TacticsArchiver_TypeInfo->static_fields->IPIMOJKDGPN;
      pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_21322/*"switched to DecomressMethod: "*/,pSVar2,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    }
  }
  return;
}


// ===== public static void AEJJGGKAHBN(string IIDPDAKKFFN, string DDGBMJNBFPF)  [RVA 0x3373D00]
// TacticsArchiver$$AEJJGGKAHBN @ RVA 0x3373D00

/* WARNING: Removing unreachable block (ram,0x0347444c) */
/* WARNING: Removing unreachable block (ram,0x03474338) */
/* WARNING: Removing unreachable block (ram,0x03474458) */

void TacticsArchiver__AEJJGGKAHBN
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,MethodInfo *method)

{
  uint32_t uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  int32_t DJFJIEDMAMJ;
  uint uVar6;
  System_String_o *pSVar7;
  System_Byte_array *pSVar8;
  System_IO_MemoryStream_o *__this;
  System_IO_BinaryReader_o *__this_00;
  long *plVar9;
  long lVar10;
  long lVar11;
  Il2CppObject *pIVar12;
  System_Object_array *pSVar13;
  System_String_o *IELJFIKHNIE;
  TacticalTableHolder_o *__this_01;
  VirtualInvokeData *pVVar14;
  undefined8 uVar15;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  void *pvVar16;
  System_IO_BinaryReader_c *pSVar17;
  System_IO_MemoryStream_c *pSVar18;
  ulong uVar19;
  int32_t *piVar20;
  int iVar21;
  
  if ((DAT_04567b45 & 1) == 0) {
    FUN_01bab630(&System_IO_BinaryReader_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_GC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&TacticalTableHolder_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&AiData_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_12172/*"Skipping - table {0}/{1} !"*/);
    FUN_01bab630(&StringLiteral_12816/*"TacticsArchiver::TacticsUnzip: doesn't exist: "*/);
    FUN_01bab630(&StringLiteral_11067/*"Reading - table {0}/{1} !"*/);
    DAT_04567b45 = 1;
  }
  if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = TacticsArchiver__JJDDMIBJDKG(IIDPDAKKFFN,DDGBMJNBFPF,method);
  if (bVar4) {
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    pSVar7 = TacticsArchiver__PIPGAPGKBLM
                       (IIDPDAKKFFN,DDGBMJNBFPF,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,
                        in_x3);
    pSVar8 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar7,(MethodInfo *)0x0);
    if ((pSVar8 == (System_Byte_array *)0x0) || (pSVar8->max_length == 0)) {
      pSVar7 = System_String__Concat(StringLiteral_12816/*"TacticsArchiver::TacticsUnzip: doesn't exist: "*/,pSVar7,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
                    /* try { // try from 03474174 to 0357419b has its CatchHandler @ 03474338 */
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      return;
    }
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = TacticsArchiver__ABNDLGMOFKJ
                       (pSVar8,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,method_00);
    __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(__this,pSVar8,(MethodInfo *)0x0);
    __this_00 = (System_IO_BinaryReader_o *)thunk_FUN_01bda818(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(__this_00,(System_IO_Stream_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (System_IO_BinaryReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar4 = false;
    while( true ) {
      plVar9 = (long *)(*(__this_00->klass->vtable)._5_get_BaseStream.methodPtr)
                                 (__this_00,(__this_00->klass->vtable)._5_get_BaseStream.method);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar10 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
      plVar9 = (long *)(*(__this_00->klass->vtable)._5_get_BaseStream.methodPtr)
                                 (__this_00,(__this_00->klass->vtable)._5_get_BaseStream.method);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar11 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
      if (lVar10 == lVar11) break;
      DJFJIEDMAMJ = (*(__this_00->klass->vtable)._16_ReadUInt32.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._16_ReadUInt32.method);
      if ((AiData_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar5 = AiData__IKLNIACILPM(IIDPDAKKFFN,DDGBMJNBFPF,DJFJIEDMAMJ,(MethodInfo *)0x0);
      uVar1 = (IFAMAAGNCBJ_TypeInfo->_2).cctor_finished;
      if (bVar5) {
        if (uVar1 == 0) {
          thunk_FUN_01ba7564();
        }
        pIVar12 = IFAMAAGNCBJ__GPBMELHDADN<object>
                            (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
        if (pIVar12 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (pIVar12[9].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 034741d0 to 035741f7 has its CatchHandler @ 03474334 */
        pvVar16 = ((pIVar12[9].klass)->_1).this_arg.data;
        if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (bVar4 || *(char *)((long)pvVar16 + 0x11) == '\0') {
          iVar21 = 9;
          goto LAB_034741f8;
        }
                    /* try { // try from 03474214 to 0357421b has its CatchHandler @ 0347432c */
        pSVar13 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        if (pSVar13 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 03474224 to 0357422f has its CatchHandler @ 0347431c */
                    /* try { // try from 03474234 to 03574247 has its CatchHandler @ 03474318 */
        if ((IIDPDAKKFFN != (System_String_o *)0x0) &&
           (lVar10 = thunk_FUN_01bda71c(IIDPDAKKFFN,(((pSVar13->obj).klass)->_1).element_class),
           lVar10 == 0)) {
          uVar15 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar15,0);
        }
        if ((int)pSVar13->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar13->m_Items[0] = (Il2CppObject *)IIDPDAKKFFN;
        thunk_FUN_01c20e04(pSVar13->m_Items,IIDPDAKKFFN);
                    /* try { // try from 03474258 to 0357426f has its CatchHandler @ 03474330 */
        if ((DDGBMJNBFPF != (System_String_o *)0x0) &&
           (lVar10 = thunk_FUN_01bda71c(DDGBMJNBFPF,(((pSVar13->obj).klass)->_1).element_class),
           lVar10 == 0)) {
          uVar15 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar15,0);
        }
                    /* try { // try from 03474270 to 035742f7 has its CatchHandler @ 0347402c */
        if ((uint)pSVar13->max_length < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar13->m_Items[1] = (Il2CppObject *)DDGBMJNBFPF;
        thunk_FUN_01c20e04(pSVar13->m_Items + 1,DDGBMJNBFPF);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogFormat(StringLiteral_12172/*"Skipping - table {0}/{1} !"*/,pSVar13,(MethodInfo *)0x0);
        iVar21 = 9;
        if (__this_00 != (System_IO_BinaryReader_o *)0x0) goto LAB_034742c8;
        goto LAB_03474328;
      }
      if (uVar1 == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar12 = IFAMAAGNCBJ__GPBMELHDADN<object>
                          (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      if (pIVar12 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (pIVar12[9].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pvVar16 = ((pIVar12[9].klass)->_1).this_arg.data;
      if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (!bVar4 && *(char *)((long)pvVar16 + 0x11) != '\0') {
        pSVar13 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        if (pSVar13 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((IIDPDAKKFFN != (System_String_o *)0x0) &&
           (lVar10 = thunk_FUN_01bda71c(IIDPDAKKFFN,(((pSVar13->obj).klass)->_1).element_class),
           lVar10 == 0)) {
          uVar15 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar15,0);
        }
        if ((int)pSVar13->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar13->m_Items[0] = (Il2CppObject *)IIDPDAKKFFN;
        thunk_FUN_01c20e04(pSVar13->m_Items,IIDPDAKKFFN);
        if ((DDGBMJNBFPF != (System_String_o *)0x0) &&
           (lVar10 = thunk_FUN_01bda71c(DDGBMJNBFPF,(((pSVar13->obj).klass)->_1).element_class),
           lVar10 == 0)) {
          uVar15 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar15,0);
        }
        if ((uint)pSVar13->max_length < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar13->m_Items[1] = (Il2CppObject *)DDGBMJNBFPF;
                    /* try { // try from 0347402c to 03574173 has its CatchHandler @ 0347402c
                       catch() { ... } // from try @ 0347402c with catch @ 0347402c
                       catch() { ... } // from try @ 03474270 with catch @ 0347402c
                       catch() { ... } // from try @ 03474304 with catch @ 0347402c
                       catch() { ... } // from try @ 0347430c with catch @ 0347402c
                       catch() { ... } // from try @ 034743c8 with catch @ 0347402c */
        thunk_FUN_01c20e04(pSVar13->m_Items + 1,DDGBMJNBFPF);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogFormat(StringLiteral_11067/*"Reading - table {0}/{1} !"*/,pSVar13,(MethodInfo *)0x0);
        bVar4 = true;
      }
      if ((TacticalTableHolder_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar7 = TacticalTableHolder__IIADICPGOMI(__this_00,(MethodInfo *)0x0);
      IELJFIKHNIE = TacticalTableHolder__IIADICPGOMI(__this_00,(MethodInfo *)0x0);
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0);
      uVar6 = (*(__this_00->klass->vtable)._16_ReadUInt32.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._16_ReadUInt32.method);
      if (uVar6 != 0) {
        pSVar8 = (System_Byte_array *)
                 (*(__this_00->klass->vtable)._25_ReadBytes.methodPtr)
                           (__this_00,(ulong)uVar6,(__this_00->klass->vtable)._25_ReadBytes.method);
      }
      __this_01 = (TacticalTableHolder_o *)thunk_FUN_01bda818(TacticalTableHolder_TypeInfo);
      TacticalTableHolder___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (TacticalTableHolder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      TacticalTableHolder__BKCFPHNEONL(__this_01,pSVar8,DJFJIEDMAMJ,IELJFIKHNIE,(MethodInfo *)0x0);
      if ((AiData_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      AiData__EGJMBCFCADF(__this_01,pSVar7,IELJFIKHNIE,DJFJIEDMAMJ,(MethodInfo *)0x0);
    }
    iVar21 = 0xc;
LAB_034741f8:
    if (__this_00 == (System_IO_BinaryReader_o *)0x0) goto LAB_03474328;
LAB_034742c8:
    pSVar17 = __this_00->klass;
    uVar2._0_1_ = (pSVar17->_2).rank;
    uVar2._1_1_ = (pSVar17->_2).minimumAlignment;
    uVar19 = (ulong)uVar2;
    if (uVar19 != 0) {
      piVar20 = &((pSVar17->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
                    /* catch() { ... } // from try @ 03474308 with catch @ 03474314 */
                    /* catch() { ... } // from try @ 03474234 with catch @ 03474318 */
          pVVar14 = &(pSVar17->vtable)._0_Equals + *piVar20;
          goto LAB_0347431c;
        }
        uVar19 = uVar19 - 1;
                    /* try { // try from 034742f8 to 035742fb has its CatchHandler @ 03474328 */
        piVar20 = piVar20 + 4;
                    /* try { // try from 034742fc to 035742ff has its CatchHandler @ 03474324 */
      } while (uVar19 != 0);
    }
                    /* try { // try from 03474300 to 03574303 has its CatchHandler @ 03474320 */
                    /* try { // try from 03474304 to 03574307 has its CatchHandler @ 0347402c */
                    /* try { // try from 03474308 to 0357430b has its CatchHandler @ 03474314 */
    pVVar14 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
                    /* try { // try from 0347430c to 0357434f has its CatchHandler @ 0347402c */
LAB_0347431c:
                    /* catch() { ... } // from try @ 03474224 with catch @ 0347431c */
                    /* catch() { ... } // from try @ 03474300 with catch @ 03474320 */
                    /* catch() { ... } // from try @ 034742fc with catch @ 03474324 */
    (*pVVar14->methodPtr)(__this_00,pVVar14->method);
LAB_03474328:
                    /* catch() { ... } // from try @ 034742f8 with catch @ 03474328 */
                    /* catch() { ... } // from try @ 03474214 with catch @ 0347432c */
                    /* catch() { ... } // from try @ 03474258 with catch @ 03474330 */
                    /* catch() { ... } // from try @ 034741d0 with catch @ 03474334 */
    if (__this != (System_IO_MemoryStream_o *)0x0) {
      pSVar18 = __this->klass;
      uVar3._0_1_ = (pSVar18->_2).rank;
      uVar3._1_1_ = (pSVar18->_2).minimumAlignment;
                    /* try { // try from 03474350 to 03574353 has its CatchHandler @ 03474360 */
      uVar19 = (ulong)uVar3;
      if (uVar19 != 0) {
                    /* catch() { ... } // from try @ 03474350 with catch @ 03474360 */
        piVar20 = &((pSVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar14 = &(pSVar18->vtable)._0_Equals + *piVar20;
            goto LAB_03474398;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      pVVar14 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_03474398:
                    /* try { // try from 034743a0 to 035743c7 has its CatchHandler @ 034743dc */
      (*pVVar14->methodPtr)(__this,pVVar14->method);
    }
    if ((iVar21 == 0xc) || (iVar21 == 0)) {
      if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034743c8 to 035743d3 has its CatchHandler @ 0347402c */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 034743d4 to 035743db has its CatchHandler @ 034743dc */
                    /* catch() { ... } // from try @ 034743a0 with catch @ 034743dc
                       catch() { ... } // from try @ 034743d4 with catch @ 034743dc */
      System_GC__Collect((MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== private static bool JJDDMIBJDKG(string IIDPDAKKFFN, string DDGBMJNBFPF)  [RVA 0x3375660]
// TacticsArchiver$$JJDDMIBJDKG @ RVA 0x3375660

bool TacticsArchiver__JJDDMIBJDKG
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04567b46 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567b46 = 1;
  }
  bVar1 = System_String__op_Equality(IIDPDAKKFFN,DDGBMJNBFPF,(MethodInfo *)0x0);
  if ((!bVar1) &&
     (bVar1 = System_String__op_Equality(IIDPDAKKFFN,StringLiteral_1/*""*/,(MethodInfo *)0x0), !bVar1)) {
    bVar1 = System_String__op_Inequality(DDGBMJNBFPF,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = System_String__Compare(IIDPDAKKFFN,DDGBMJNBFPF,(MethodInfo *)0x0);
      return SUB41((uint)iVar2 >> 0x1f,0);
    }
    return false;
  }
  return true;
}


// ===== private static void JHFDCPKENHD(string LFGKEPCBPKF)  [RVA 0x3375C48]
// TacticsArchiver$$JHFDCPKENHD @ RVA 0x3375C48

void TacticsArchiver__JHFDCPKENHD(System_String_o *LFGKEPCBPKF,MethodInfo *method)

{
  System_Byte_array *inArray;
  System_String_o *pSVar1;
  
  if ((DAT_04567b47 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_57/*"\n\n\n"*/);
    FUN_01bab630(&StringLiteral_5046/*"DUMP of "*/);
    FUN_01bab630(&StringLiteral_56/*"\n\n"*/);
    DAT_04567b47 = 1;
  }
  inArray = CMEBCBKGFFL__JKGGKELPNKJ(LFGKEPCBPKF,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_5046/*"DUMP of "*/,LFGKEPCBPKF,StringLiteral_56/*"\n\n"*/,(MethodInfo *)0x0);
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo);
  }
  OCLJMFBDKOA__JAFHOLNKKBD(pSVar1,(MethodInfo *)0x0);
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
  OCLJMFBDKOA__JAFHOLNKKBD(pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_57/*"\n\n\n"*/,(MethodInfo *)0x0);
  return;
}


// ===== public static void KIDFPECFLPB(string IIDPDAKKFFN, string DDGBMJNBFPF)  [RVA 0x3375D7C]
// TacticsArchiver$$KIDFPECFLPB @ RVA 0x3375D7C

void TacticsArchiver__KIDFPECFLPB
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,MethodInfo *method)

{
  uint uVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_Exception_o *__this;
  undefined8 uVar5;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  uint uVar6;
  System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__Fields local_48;
  System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__Fields local_40;
  System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__Fields local_38;
  
  if ((DAT_04567b48 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__);
    FUN_01bab630(&StringLiteral_12523/*"Succeeded to compare compressed-decompressed!"*/);
    DAT_04567b48 = 1;
  }
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value = 0;
  System_Nullable<Int32Enum>___ctor
            ((System_Nullable_Int32Enum__o)&local_38,0,
             (MethodInfo_27F8328 *)Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__);
  if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = TacticsArchiver__PIPGAPGKBLM
                     (IIDPDAKKFFN,DDGBMJNBFPF,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_38,
                      in_x3);
  pSVar3 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar2,(MethodInfo *)0x0);
  local_40.hasValue = false;
  local_40._1_3_ = 0;
  local_40.value = 0;
  System_Nullable<Int32Enum>___ctor
            ((System_Nullable_Int32Enum__o)&local_40,2,
             (MethodInfo_27F8328 *)Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__);
  pSVar2 = TacticsArchiver__PIPGAPGKBLM
                     (IIDPDAKKFFN,DDGBMJNBFPF,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_40,
                      in_x3);
  pSVar4 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar2,(MethodInfo *)0x0);
  local_48.hasValue = false;
  local_48._1_3_ = 0;
  local_48.value = 0;
  method_00 = Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__;
  System_Nullable<Int32Enum>___ctor
            ((System_Nullable_Int32Enum__o)&local_48,2,
             (MethodInfo_27F8328 *)Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__);
  pSVar4 = TacticsArchiver__ABNDLGMOFKJ
                     (pSVar4,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_48,method_00);
  if (pSVar4 == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (pSVar3 == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  uVar1 = System_Math__Max((int32_t)pSVar4->max_length,(int32_t)pSVar3->max_length,(MethodInfo *)0x0
                          );
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      if ((uint)pSVar4->max_length == uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if ((uint)pSVar3->max_length <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (pSVar4->m_Items[(int)uVar6] != pSVar3->m_Items[(int)uVar6]) {
        thunk_FUN_01bb9178(&System_Exception_TypeInfo);
        __this = (System_Exception_o *)thunk_FUN_01bda818();
        System_Exception___ctor(__this,(MethodInfo *)0x0);
        uVar5 = thunk_FUN_01bb9178(&Method_IOIKBGAJIGO_KIDFPECFLPB__);
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(__this,uVar5);
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_12523/*"Succeeded to compare compressed-decompressed!"*/,(MethodInfo *)0x0);
  return;
}


// ===== public static void MFLNKDNPLKJ(int DFIBGGDJPLM, string IIDPDAKKFFN, string DDGBMJNBFPF, int GOLKDPJDOJM)  [RVA 0x337618C]
// TacticsArchiver$$MFLNKDNPLKJ @ RVA 0x337618C

/* WARNING: Removing unreachable block (ram,0x03476404) */
/* WARNING: Removing unreachable block (ram,0x034764a8) */
/* WARNING: Removing unreachable block (ram,0x0347647c) */
/* WARNING: Removing unreachable block (ram,0x03476658) */

void TacticsArchiver__MFLNKDNPLKJ
               (int32_t DFIBGGDJPLM,System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,
               int32_t GOLKDPJDOJM,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Byte_array *pSVar5;
  System_IO_MemoryStream_o *__this;
  System_IO_BinaryReader_o *__this_00;
  long *plVar6;
  long lVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_IO_BinaryReader_c *pSVar10;
  System_IO_MemoryStream_c *pSVar11;
  ulong uVar12;
  int32_t *piVar13;
  int iVar14;
  
  method_01 = (MethodInfo *)(ulong)(uint)GOLKDPJDOJM;
  method_00 = (MethodInfo *)DDGBMJNBFPF;
  if ((DAT_04567b49 & 1) == 0) {
    FUN_01bab630(&System_IO_BinaryReader_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_GC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&StringLiteral_12817/*"TacticsArchiver::TestUnzip: doesn't exist: "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567b49 = 1;
  }
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(IIDPDAKKFFN,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_1/*""*/;
  if (!bVar3) {
    pSVar4 = IIDPDAKKFFN;
  }
  if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(TacticsArchiver_TypeInfo);
  }
  if (DDGBMJNBFPF == (System_String_o *)0x0) {
    pSVar4 = TacticsArchiver__PIPGAPGKBLM
                       (pSVar4,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,method_00);
  }
  else {
    method_00 = (MethodInfo *)0x0;
    pSVar4 = TacticsArchiver__PIPGAPGKBLM
                       (pSVar4,DDGBMJNBFPF,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,method_01
                       );
  }
  if (0 < DFIBGGDJPLM) {
    iVar14 = 0;
    do {
      pSVar5 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar4,(MethodInfo *)0x0);
      if (GOLKDPJDOJM < 1) {
        return;
      }
      if ((pSVar5 == (System_Byte_array *)0x0) || (pSVar5->max_length == 0)) {
        pSVar4 = System_String__Concat(StringLiteral_12817/*"TacticsArchiver::TestUnzip: doesn't exist: "*/,pSVar4,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
        return;
      }
      if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = TacticsArchiver__ABNDLGMOFKJ
                         (pSVar5,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,method_00);
      if (GOLKDPJDOJM < 2) {
        return;
      }
      __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
      System_IO_MemoryStream___ctor(__this,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03476308 to 0357632f has its CatchHandler @ 03476438 */
      __this_00 = (System_IO_BinaryReader_o *)thunk_FUN_01bda818(System_IO_BinaryReader_TypeInfo);
      method_00 = (MethodInfo *)0x0;
      System_IO_BinaryReader___ctor(__this_00,(System_IO_Stream_o *)__this,(MethodInfo *)0x0);
      if (__this_00 == (System_IO_BinaryReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034764a0 to 035764c7 has its CatchHandler @ 034764dc */
        FUN_01bab8c8();
      }
      while( true ) {
        plVar6 = (long *)(*(__this_00->klass->vtable)._5_get_BaseStream.methodPtr)
                                   (__this_00,(__this_00->klass->vtable)._5_get_BaseStream.method);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar7 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
        plVar6 = (long *)(*(__this_00->klass->vtable)._5_get_BaseStream.methodPtr)
                                   (__this_00,(__this_00->klass->vtable)._5_get_BaseStream.method);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 03476364 to 0357638f has its CatchHandler @ 03476434 */
        lVar8 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
        if (lVar7 == lVar8) break;
        (*(__this_00->klass->vtable)._10_ReadByte.methodPtr)
                  (__this_00,(__this_00->klass->vtable)._10_ReadByte.method);
      }
                    /* try { // try from 03476390 to 03576397 has its CatchHandler @ 03476430 */
      if (__this_00 != (System_IO_BinaryReader_o *)0x0) {
        pSVar10 = __this_00->klass;
        uVar1._0_1_ = (pSVar10->_2).rank;
        uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
                    /* try { // try from 03476398 to 0357641f has its CatchHandler @ 034760d0 */
        uVar12 = (ulong)uVar1;
        if (uVar12 != 0) {
          piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)System_IDisposable_TypeInfo) {
              pVVar9 = &(pSVar10->vtable)._0_Equals + *piVar13;
              goto LAB_034763e8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        method_00 = (MethodInfo *)0x0;
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(__this_00);
LAB_034763e8:
        (*pVVar9->methodPtr)(__this_00,pVVar9->method);
      }
      if (__this != (System_IO_MemoryStream_o *)0x0) {
        pSVar11 = __this->klass;
        uVar2._0_1_ = (pSVar11->_2).rank;
        uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
        uVar12 = (ulong)uVar2;
                    /* try { // try from 03476420 to 03576423 has its CatchHandler @ 0347642c */
                    /* try { // try from 03476424 to 0357644f has its CatchHandler @ 034760d0 */
        if (uVar12 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03476420 with catch @ 0347642c
                        */
          piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
          do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03476390 with catch @ 03476430
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03476364 with catch @ 03476434
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03476308 with catch @ 03476438
                        */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)System_IDisposable_TypeInfo) {
                    /* catch() { ... } // from try @ 03476450 with catch @ 03476460 */
              pVVar9 = &(pSVar11->vtable)._0_Equals + *piVar13;
              goto LAB_03476464;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        method_00 = (MethodInfo *)0x0;
                    /* try { // try from 03476450 to 03576453 has its CatchHandler @ 03476460 */
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(__this);
LAB_03476464:
        (*pVVar9->methodPtr)(__this,pVVar9->method);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != DFIBGGDJPLM);
  }
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_GC__Collect((MethodInfo *)0x0);
  return;
}


// ===== private static byte[] ABJJDDOFODH(byte[] NGHMDCIKIPM, byte[] BCNOHGECKOP)  [RVA 0x3374EB0]
// TacticsArchiver$$ABJJDDOFODH @ RVA 0x3374EB0

System_Byte_array *
TacticsArchiver__ABJJDDOFODH
          (System_Byte_array *NGHMDCIKIPM,System_Byte_array *BCNOHGECKOP,MethodInfo *method)

{
  System_Byte_array *array;
  
  if ((DAT_04567b4a & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567b4a = 1;
  }
  if ((NGHMDCIKIPM != (System_Byte_array *)0x0) && (BCNOHGECKOP != (System_Byte_array *)0x0)) {
    array = (System_Byte_array *)
            FUN_01bab718(byte___TypeInfo,(int)BCNOHGECKOP->max_length + (int)NGHMDCIKIPM->max_length
                        );
    System_Array__CopyTo((System_Array_o *)NGHMDCIKIPM,(System_Array_o *)array,0,(MethodInfo *)0x0);
    System_Array__CopyTo
              ((System_Array_o *)BCNOHGECKOP,(System_Array_o *)array,
               (int32_t)NGHMDCIKIPM->max_length,(MethodInfo *)0x0);
    return array;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AEJJGGKAHBN(string IFDOANCFKJD)  [RVA 0x33766F4]
// TacticsArchiver$$AEJJGGKAHBN @ RVA 0x33766F4

/* WARNING: Removing unreachable block (ram,0x03476f70) */
/* WARNING: Removing unreachable block (ram,0x03476f38) */
/* WARNING: Removing unreachable block (ram,0x03476f64) */
/* WARNING: Removing unreachable block (ram,0x03476c14) */
/* WARNING: Removing unreachable block (ram,0x03476b7c) */
/* WARNING: Removing unreachable block (ram,0x03476bf8) */
/* WARNING: Removing unreachable block (ram,0x03476ed8) */
/* WARNING: Removing unreachable block (ram,0x03476df4) */
/* WARNING: Removing unreachable block (ram,0x03476e6c) */
/* WARNING: Removing unreachable block (ram,0x03476eac) */

void TacticsArchiver__AEJJGGKAHBN(System_String_o *IFDOANCFKJD,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  System_String_o *pSVar8;
  System_Byte_array *pSVar9;
  System_IO_MemoryStream_o *__this;
  System_IO_BinaryReader_o *__this_00;
  long *plVar10;
  long lVar11;
  long lVar12;
  System_IO_MemoryStream_o *__this_01;
  System_IO_BinaryReader_o *__this_02;
  InfoAnimation_o *NLEBDPHNIDI;
  ModelShiftTable_o *pKVar13;
  TacticalTableHolder_o *__this_03;
  VirtualInvokeData *pVVar14;
  System_String_o *pSVar15;
  MethodInfo *in_x2;
  Il2CppMethodPointer pIVar16;
  System_IO_MemoryStream_c *pSVar17;
  System_IO_BinaryReader_c *pSVar18;
  ulong uVar19;
  int32_t *piVar20;
  
  if ((DAT_04567b4b & 1) == 0) {
    FUN_01bab630(&System_IO_BinaryReader_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_GC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&TacticalTableHolder_TypeInfo);
    FUN_01bab630(&ModelShiftTable_TypeInfo);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&AiData_TypeInfo);
    FUN_01bab630(&StringLiteral_17650/*"default"*/);
    FUN_01bab630(&StringLiteral_12816/*"TacticsArchiver::TacticsUnzip: doesn't exist: "*/);
    DAT_04567b4b = 1;
  }
  bVar5 = PCOEHCPGBBG__BDLEIEHBFAD(IFDOANCFKJD,(MethodInfo *)0x0);
  pSVar15 = StringLiteral_17650/*"default"*/;
  if (!bVar5) {
    pSVar15 = IFDOANCFKJD;
  }
  if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(TacticsArchiver_TypeInfo);
  }
  pSVar8 = TacticsArchiver__PIPGAPGKBLM(pSVar15,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x2);
  pSVar9 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar8,(MethodInfo *)0x0);
  if ((pSVar9 == (System_Byte_array *)0x0) || (pSVar9->max_length == 0)) {
    pSVar15 = System_String__Concat(StringLiteral_12816/*"TacticsArchiver::TacticsUnzip: doesn't exist: "*/,pSVar8,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
    return;
  }
  if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar9 = TacticsArchiver__ABNDLGMOFKJ(pSVar9,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x2);
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this,pSVar9,(MethodInfo *)0x0);
  __this_00 = (System_IO_BinaryReader_o *)thunk_FUN_01bda818(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(__this_00,(System_IO_Stream_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (System_IO_BinaryReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  while( true ) {
    plVar10 = (long *)(*(__this_00->klass->vtable)._5_get_BaseStream.methodPtr)
                                (__this_00,(__this_00->klass->vtable)._5_get_BaseStream.method);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar11 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200));
    plVar10 = (long *)(*(__this_00->klass->vtable)._5_get_BaseStream.methodPtr)
                                (__this_00,(__this_00->klass->vtable)._5_get_BaseStream.method);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar12 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
    if (lVar12 <= lVar11) break;
    iVar6 = (*(__this_00->klass->vtable)._16_ReadUInt32.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._16_ReadUInt32.method);
    if ((TacticalTableHolder_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = TacticalTableHolder__IIADICPGOMI(__this_00,(MethodInfo *)0x0);
    pIVar16 = (__this_00->klass->vtable)._16_ReadUInt32.methodPtr;
    if (iVar6 == 7) {
      uVar7 = (*pIVar16)(__this_00);
      if (uVar7 != 0) {
        pSVar9 = (System_Byte_array *)
                 (*(__this_00->klass->vtable)._25_ReadBytes.methodPtr)
                           (__this_00,(ulong)uVar7,(__this_00->klass->vtable)._25_ReadBytes.method);
        __this_01 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
        System_IO_MemoryStream___ctor(__this_01,pSVar9,(MethodInfo *)0x0);
        __this_02 = (System_IO_BinaryReader_o *)thunk_FUN_01bda818(System_IO_BinaryReader_TypeInfo);
        System_IO_BinaryReader___ctor(__this_02,(System_IO_Stream_o *)__this_01,(MethodInfo *)0x0);
        if (__this_02 == (System_IO_BinaryReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar7 = (*(__this_02->klass->vtable)._16_ReadUInt32.methodPtr)
                          (__this_02,(__this_02->klass->vtable)._16_ReadUInt32.method);
        if (uVar7 == 0) {
LAB_03476b0c:
          pSVar18 = __this_02->klass;
          uVar1._0_1_ = (pSVar18->_2).rank;
          uVar1._1_1_ = (pSVar18->_2).minimumAlignment;
          uVar19 = (ulong)uVar1;
          if (uVar19 != 0) {
            piVar20 = &((pSVar18->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
                  (Il2CppClass *)System_IDisposable_TypeInfo) {
                pVVar14 = &(pSVar18->vtable)._0_Equals + *piVar20;
                goto LAB_03476b60;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          pVVar14 = (VirtualInvokeData *)FUN_01b81914(__this_02,System_IDisposable_TypeInfo,0);
LAB_03476b60:
          (*pVVar14->methodPtr)(__this_02,pVVar14->method);
        }
        else {
          iVar6 = 1;
          do {
            if ((TacticalTableHolder_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar8 = TacticalTableHolder__IIADICPGOMI(__this_02,(MethodInfo *)0x0);
            if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            NLEBDPHNIDI = AnimationData__CCBEONOLBID(pSVar8,true,(MethodInfo *)0x0);
            if (NLEBDPHNIDI == (InfoAnimation_o *)0x0) {
              pKVar13 = (ModelShiftTable_o *)thunk_FUN_01bda818(ModelShiftTable_TypeInfo);
              ModelShiftTable___ctor(pKVar13,(MethodInfo *)0x0);
              if (pKVar13 == (ModelShiftTable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              ModelShiftTable__ICNKLIDJEBG(pKVar13,(InfoAnimation_o *)0x0,__this_02,(MethodInfo *)0x0);
            }
            else {
              pKVar13 = (NLEBDPHNIDI->fields).BEHFDAIGOAJ;
              if (pKVar13 == (ModelShiftTable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              ModelShiftTable__ICNKLIDJEBG(pKVar13,NLEBDPHNIDI,__this_02,(MethodInfo *)0x0);
            }
            lVar11 = (long)iVar6;
            iVar6 = iVar6 + 1;
          } while (lVar11 < (long)(ulong)uVar7);
          if (__this_02 != (System_IO_BinaryReader_o *)0x0) goto LAB_03476b0c;
        }
        if (__this_01 != (System_IO_MemoryStream_o *)0x0) {
          pSVar17 = __this_01->klass;
          uVar2._0_1_ = (pSVar17->_2).rank;
          uVar2._1_1_ = (pSVar17->_2).minimumAlignment;
          uVar19 = (ulong)uVar2;
          if (uVar19 != 0) {
            piVar20 = &((pSVar17->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
                  (Il2CppClass *)System_IDisposable_TypeInfo) {
                pVVar14 = &(pSVar17->vtable)._0_Equals + *piVar20;
                goto LAB_03476bdc;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          pVVar14 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_03476bdc:
          (*pVVar14->methodPtr)(__this_01,pVVar14->method);
        }
      }
    }
    else {
      uVar7 = (*pIVar16)(__this_00,(__this_00->klass->vtable)._16_ReadUInt32.method);
      if (uVar7 != 0) {
        pSVar9 = (System_Byte_array *)
                 (*(__this_00->klass->vtable)._25_ReadBytes.methodPtr)
                           (__this_00,(ulong)uVar7,(__this_00->klass->vtable)._25_ReadBytes.method);
        __this_03 = (TacticalTableHolder_o *)thunk_FUN_01bda818(TacticalTableHolder_TypeInfo);
        TacticalTableHolder___ctor(__this_03,(MethodInfo *)0x0);
        if (__this_03 == (TacticalTableHolder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        TacticalTableHolder__BKCFPHNEONL(__this_03,pSVar9,iVar6,pSVar15,(MethodInfo *)0x0);
        if ((AiData_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        AiData__EGJMBCFCADF(__this_03,pSVar8,pSVar8,iVar6,(MethodInfo *)0x0);
      }
    }
  }
  pSVar18 = __this_00->klass;
  uVar3._0_1_ = (pSVar18->_2).rank;
  uVar3._1_1_ = (pSVar18->_2).minimumAlignment;
  uVar19 = (ulong)uVar3;
  if (uVar19 != 0) {
    piVar20 = &((pSVar18->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar14 = &(pSVar18->vtable)._0_Equals + *piVar20;
        goto LAB_03476ddc;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  pVVar14 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_03476ddc:
  (*pVVar14->methodPtr)(__this_00,pVVar14->method);
  if (__this != (System_IO_MemoryStream_o *)0x0) {
    pSVar17 = __this->klass;
    uVar4._0_1_ = (pSVar17->_2).rank;
    uVar4._1_1_ = (pSVar17->_2).minimumAlignment;
    uVar19 = (ulong)uVar4;
    if (uVar19 != 0) {
      piVar20 = &((pSVar17->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar14 = &(pSVar17->vtable)._0_Equals + *piVar20;
          goto LAB_03476e54;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    pVVar14 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_03476e54:
    (*pVVar14->methodPtr)(__this,pVVar14->method);
  }
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_GC__Collect((MethodInfo *)0x0);
  return;
}


// ===== public static string LGDAPGDDLEI(Nullable<TacticsArchiver.DMIOKBAEKJB> LKLBFFJPPOO)  [RVA 0x3374A64]
// TacticsArchiver$$LGDAPGDDLEI @ RVA 0x3374A64

System_String_o *
TacticsArchiver__LGDAPGDDLEI(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o LKLBFFJPPOO,MethodInfo *method)

{
  System_Exception_o *__this;
  System_String_o *message;
  undefined8 uVar1;
  MethodInfo *extraout_x1;
  uint uVar2;
  
  if ((DAT_04567b4c & 1) == 0) {
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>_get_HasValue__);
    FUN_01bab630(&StringLiteral_1341/*"-decompressed"*/);
    FUN_01bab630(&StringLiteral_1348/*"-ionic_zlib"*/);
    FUN_01bab630(&StringLiteral_1344/*"-icsharp_bzip2"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567b4c = 1;
    method = extraout_x1;
  }
  if (((ulong)LKLBFFJPPOO.fields & 0xff) == 0) {
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(TacticsArchiver_TypeInfo,method);
    }
    uVar2 = TacticsArchiver_TypeInfo->static_fields->IPIMOJKDGPN;
  }
  else {
    uVar2 = LKLBFFJPPOO.fields.value;
  }
  if (uVar2 < 4) {
    return *(System_String_o **)(&PTR_StringLiteral_1341/*"-decompressed"*/_03fc67a8)[(int)uVar2];
  }
  thunk_FUN_01bb9178(&System_Exception_TypeInfo);
  __this = (System_Exception_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_12814/*"TacticsArchiver::GetTacticsFileSuffix: DecompressionMethod undefined"*/);
  System_Exception___ctor(__this,message,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_IOIKBGAJIGO_LGDAPGDDLEI__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this,uVar1);
}


// ===== public void .ctor()  [RVA 0x3377150]
// TacticsArchiver$$.ctor @ RVA 0x3377150

void TacticsArchiver___ctor(TacticsArchiver_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static void EHJMIBMHCMD(string IIDPDAKKFFN, string DDGBMJNBFPF, TacticsArchiver.DMIOKBAEKJB LKLBFFJPPOO)  [RVA 0x3377158]
// TacticsArchiver$$EHJMIBMHCMD @ RVA 0x3377158

void TacticsArchiver__EHJMIBMHCMD
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,int32_t LKLBFFJPPOO,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar3;
  System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__Fields local_38;
  
  if ((DAT_04567b4d & 1) == 0) {
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567b4d = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(IIDPDAKKFFN,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_1/*""*/;
  if (!bVar1) {
    pSVar2 = IIDPDAKKFFN;
  }
  if (DDGBMJNBFPF == (System_String_o *)0x0) {
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value = 0;
    pMVar3 = Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__;
    System_Nullable<Int32Enum>___ctor
              ((System_Nullable_Int32Enum__o)&local_38,LKLBFFJPPOO,
               (MethodInfo_27F8328 *)Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__);
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = TacticsArchiver__PIPGAPGKBLM
                       (pSVar2,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_38,pMVar3);
    pMVar3 = extraout_x1_00;
  }
  else {
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value = 0;
    System_Nullable<Int32Enum>___ctor
              ((System_Nullable_Int32Enum__o)&local_38,LKLBFFJPPOO,
               (MethodInfo_27F8328 *)Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>__ctor__);
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = TacticsArchiver__PIPGAPGKBLM
                       (pSVar2,DDGBMJNBFPF,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_38,
                        method);
    pMVar3 = extraout_x1;
  }
  TacticsArchiver__JHFDCPKENHD(pSVar2,pMVar3);
  return;
}


// ===== private static byte[] ABNDLGMOFKJ(byte[] JGHIJMJNJLE, Nullable<TacticsArchiver.DMIOKBAEKJB> LKLBFFJPPOO)  [RVA 0x3375AF0]
// TacticsArchiver$$ABNDLGMOFKJ @ RVA 0x3375AF0

System_Byte_array *
TacticsArchiver__ABNDLGMOFKJ
          (System_Byte_array *JGHIJMJNJLE,System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o LKLBFFJPPOO,
          MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Exception_o *__this;
  System_String_o *message;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((DAT_04567b4e & 1) == 0) {
    FUN_01bab630(&GCFMDIJNNBO_TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>_get_HasValue__);
    DAT_04567b4e = 1;
  }
  if (((ulong)LKLBFFJPPOO.fields & 0xff) == 0) {
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = (ulong)(uint)TacticsArchiver_TypeInfo->static_fields->IPIMOJKDGPN;
  }
  else {
    uVar3 = (ulong)LKLBFFJPPOO.fields >> 0x20;
  }
  switch(uVar3) {
  case 0:
    return JGHIJMJNJLE;
  case 1:
    pSVar1 = DBIJLEGANCE__CNDPKDGCGGO(JGHIJMJNJLE,(MethodInfo *)0x0);
    return pSVar1;
  case 2:
    break;
  case 3:
    pSVar1 = DBIJLEGANCE__AFMECNJHNDI(JGHIJMJNJLE,(MethodInfo *)0x0);
    return pSVar1;
  default:
    thunk_FUN_01bb9178(&System_Exception_TypeInfo);
    __this = (System_Exception_o *)thunk_FUN_01bda818();
    message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_12813/*"TacticsArchiver::Decompress: DecompressionMethod undefined"*/);
    System_Exception___ctor(__this,message,(MethodInfo *)0x0);
    uVar2 = thunk_FUN_01bb9178(&Method_IOIKBGAJIGO_ABNDLGMOFKJ__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this,uVar2);
  }
  if ((GCFMDIJNNBO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = GCFMDIJNNBO__LKOIJMPGNDA(JGHIJMJNJLE,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static string PIPGAPGKBLM(string IIDPDAKKFFN, string DDGBMJNBFPF, Nullable<TacticsArchiver.DMIOKBAEKJB> LKLBFFJPPOO)  [RVA 0x3375704]
// TacticsArchiver$$PIPGAPGKBLM @ RVA 0x3375704

System_String_o *
TacticsArchiver__PIPGAPGKBLM
          (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,
          System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o LKLBFFJPPOO,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_o *message;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  void *pvVar4;
  
  if ((DAT_04567b4f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_15862/*"_"*/);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_21899/*"using filename: "*/);
    FUN_01bab630(&StringLiteral_185/*"   for weapons: "*/);
    FUN_01bab630(&StringLiteral_1461/*".bytes"*/);
    DAT_04567b4f = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,9);
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo);
  }
  pSVar2 = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
  if (pSVar1 == (System_String_array *)0x0) goto LAB_03475aec;
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = pSVar2;
    thunk_FUN_01c20e04(pSVar1->m_Items,pSVar2);
    if (1 < (uint)pSVar1->max_length) {
      pSVar1->m_Items[1] = StringLiteral_1492/*"/"*/;
      thunk_FUN_01c20e04();
      method_00 = extraout_x1;
      if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      pSVar2 = TacticsArchiver__KELDIALFCDL(LKLBFFJPPOO,method_00);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = pSVar2;
        thunk_FUN_01c20e04(pSVar1->m_Items + 2,pSVar2);
                    /* try { // try from 0347587c to 035758a3 has its CatchHandler @ 034759ac */
        if (3 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[3] = StringLiteral_1492/*"/"*/;
          thunk_FUN_01c20e04();
          if (IIDPDAKKFFN == (System_String_o *)0x0) goto LAB_03475aec;
          pSVar2 = System_String__ToLower(IIDPDAKKFFN,(MethodInfo *)0x0);
          if (4 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[4] = pSVar2;
            thunk_FUN_01c20e04(pSVar1->m_Items + 4,pSVar2);
            if (5 < (uint)pSVar1->max_length) {
                    /* try { // try from 034758d8 to 03575903 has its CatchHandler @ 034759a8 */
              pSVar1->m_Items[5] = StringLiteral_15862/*"_"*/;
              thunk_FUN_01c20e04();
              if (DDGBMJNBFPF == (System_String_o *)0x0) goto LAB_03475aec;
              pSVar2 = System_String__ToLower(DDGBMJNBFPF,(MethodInfo *)0x0);
              if (6 < (uint)pSVar1->max_length) {
                    /* try { // try from 03475904 to 0357590b has its CatchHandler @ 034759a4 */
                pSVar1->m_Items[6] = pSVar2;
                    /* try { // try from 0347590c to 03575993 has its CatchHandler @ 03475644 */
                thunk_FUN_01c20e04(pSVar1->m_Items + 6,pSVar2);
                pSVar2 = TacticsArchiver__LGDAPGDDLEI(LKLBFFJPPOO,method_01);
                if (7 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[7] = pSVar2;
                  thunk_FUN_01c20e04(pSVar1->m_Items + 7,pSVar2);
                  if (8 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[8] = StringLiteral_1461/*".bytes"*/;
                    thunk_FUN_01c20e04();
                    pSVar2 = System_String__Concat(pSVar1,(MethodInfo *)0x0);
                    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03475994 to 03575997 has its CatchHandler @ 034759a0 */
                      thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
                    }
                    /* try { // try from 03475998 to 035759c3 has its CatchHandler @ 03475644 */
                    pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                                       (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03475994 with catch @ 034759a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03475904 with catch @ 034759a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034758d8 with catch @ 034759a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0347587c with catch @ 034759ac
                        */
                    if (((pIVar3 != (Il2CppObject *)0x0) && (pIVar3[9].klass != (Il2CppClass *)0x0))
                       && (pvVar4 = ((pIVar3[9].klass)->_1).this_arg.data, pvVar4 != (void *)0x0)) {
                      if (*(char *)((long)pvVar4 + 0x11) == '\0') {
                        return pSVar2;
                      }
                    /* try { // try from 034759c4 to 035759c7 has its CatchHandler @ 034759d4 */
                      pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
                      if (pSVar1 != (System_String_array *)0x0) {
                    /* catch() { ... } // from try @ 034759c4 with catch @ 034759d4 */
                        if ((int)pSVar1->max_length != 0) {
                          pSVar1->m_Items[0] = StringLiteral_21899/*"using filename: "*/;
                          thunk_FUN_01c20e04(pSVar1->m_Items);
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = pSVar2;
                            thunk_FUN_01c20e04(pSVar1->m_Items + 1,pSVar2);
                    /* try { // try from 03475a14 to 03575a3b has its CatchHandler @ 03475a50 */
                            if (2 < (uint)pSVar1->max_length) {
                              pSVar1->m_Items[2] = StringLiteral_185/*"   for weapons: "*/;
                              thunk_FUN_01c20e04(pSVar1->m_Items + 2);
                    /* try { // try from 03475a3c to 03575a47 has its CatchHandler @ 03475644 */
                              if (3 < (uint)pSVar1->max_length) {
                    /* try { // try from 03475a48 to 03575a4f has its CatchHandler @ 03475a50 */
                                pSVar1->m_Items[3] = IIDPDAKKFFN;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03475a14 with catch @ 03475a50
                       catch(type#2 @ 00000000) { ... } // from try @ 03475a48 with catch @ 03475a50
                        */
                                thunk_FUN_01c20e04(pSVar1->m_Items + 3,IIDPDAKKFFN);
                                if (4 < (uint)pSVar1->max_length) {
                                  pSVar1->m_Items[4] = StringLiteral_15862/*"_"*/;
                                  thunk_FUN_01c20e04(pSVar1->m_Items + 4);
                                  if (5 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[5] = DDGBMJNBFPF;
                                    thunk_FUN_01c20e04(pSVar1->m_Items + 5,DDGBMJNBFPF);
                                    message = System_String__Concat(pSVar1,(MethodInfo *)0x0);
                                    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                                      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                                    }
                                    UnityEngine_Debug__Log
                                              ((Il2CppObject *)message,(MethodInfo *)0x0);
                                    return pSVar2;
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_03475ae8;
                      }
                    }
LAB_03475aec:
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03475ae8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private static void NJEMOPJFJAF(string IFDOANCFKJD)  [RVA 0x3377260]
// TacticsArchiver$$NJEMOPJFJAF @ RVA 0x3377260

void TacticsArchiver__NJEMOPJFJAF(System_String_o *IFDOANCFKJD,MethodInfo *method)

{
  System_String_o *AAIHDEKMIJG;
  System_Byte_array *MMEEMFOLKPP;
  MethodInfo *in_x2;
  System_Byte_array *local_28;
  
  if ((DAT_04567b50 & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    DAT_04567b50 = 1;
  }
  local_28 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0);
  if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(TacticsArchiver_TypeInfo);
  }
  TacticsArchiver__MPENCGPEPEE(IFDOANCFKJD,&local_28,in_x2);
  if (local_28 != (System_Byte_array *)0x0) {
    if (local_28->max_length != 0) {
      if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      AAIHDEKMIJG = TacticsArchiver__PIPGAPGKBLM
                              (IFDOANCFKJD,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x2);
      MMEEMFOLKPP = TacticsArchiver__GPDMJPBHCJF
                              (local_28,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x2);
      NEHNBJKKABI__IGOPCLNJIGA(AAIHDEKMIJG,MMEEMFOLKPP,(MethodInfo *)0x0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool GBBPADICKNL(Nullable<TacticsArchiver.DMIOKBAEKJB> OCCABHBJNLI)  [RVA 0x337549C]
// TacticsArchiver$$GBBPADICKNL @ RVA 0x337549C

bool TacticsArchiver__GBBPADICKNL
               (System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o OCCABHBJNLI,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Object_o *x;
  System_Byte_array *pSVar4;
  MethodInfo *in_x2;
  int iVar5;
  TacticsArchiver_c *pIVar6;
  ulong uVar7;
  System_String_o *pSVar8;
  System_String_array *pSVar9;
  bool bVar10;
  ulong uVar11;
  System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__Fields local_48;
  
  local_48 = OCCABHBJNLI.fields;
  if ((DAT_04567b51 & 1) == 0) {
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<TextAsset>__);
    DAT_04567b51 = 1;
  }
  pIVar6 = TacticsArchiver_TypeInfo;
  if (((ulong)OCCABHBJNLI.fields & 0xff) != 0) {
    iVar3 = System_Nullable<Int32Enum>__get_Value
                      ((System_Nullable_Int32Enum__o)&local_48,
                       Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>_get_Value__);
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(TacticsArchiver_TypeInfo);
    }
    pIVar6 = TacticsArchiver_TypeInfo;
    TacticsArchiver_TypeInfo->static_fields->IPIMOJKDGPN = iVar3;
  }
  if ((pIVar6->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(pIVar6);
    pIVar6 = TacticsArchiver_TypeInfo;
  }
  pSVar9 = pIVar6->static_fields->OMPNOMAKALF;
  if (pSVar9 != (System_String_array *)0x0) {
    iVar5 = (int)pSVar9->max_length;
    bVar10 = 0 < iVar5;
    if (0 < iVar5) {
      uVar11 = 0;
      uVar7 = pSVar9->max_length & 0xffffffff;
      do {
        if (uVar7 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar8 = pSVar9->m_Items[uVar11];
        if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar8 = TacticsArchiver__PIPGAPGKBLM
                           (pSVar8,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x2);
        pSVar8 = CMEBCBKGFFL__NFBODKMCAMM(pSVar8,(MethodInfo *)0x0);
        x = (UnityEngine_Object_o *)
            UnityEngine_Resources__Load<object>
                      (pSVar8,Method_UnityEngine_Resources_Load<TextAsset>__);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        in_x2 = (MethodInfo *)0x0;
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (pSVar4 = UnityEngine_TextAsset__get_bytes
                                 ((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0),
             pSVar4 == (System_Byte_array *)0x0)) goto LAB_0347565c;
          if (pSVar4->max_length != 0) {
            return bVar10;
          }
        }
        uVar1 = (uint)pSVar9->max_length;
        uVar7 = (ulong)uVar1;
        uVar11 = uVar11 + 1;
        bVar10 = (long)uVar11 < (long)(int)uVar1;
      } while ((long)uVar11 < (long)(int)uVar1);
    }
                    /* try { // try from 03475644 to 0357587b has its CatchHandler @ 03475644
                       catch() { ... } // from try @ 03475644 with catch @ 03475644
                       catch() { ... } // from try @ 0347590c with catch @ 03475644
                       catch() { ... } // from try @ 03475998 with catch @ 03475644
                       catch() { ... } // from try @ 03475a3c with catch @ 03475644 */
    return bVar10;
  }
LAB_0347565c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static byte[] GPDMJPBHCJF(byte[] JGHIJMJNJLE, Nullable<TacticsArchiver.DMIOKBAEKJB> LKLBFFJPPOO)  [RVA 0x3377340]
// TacticsArchiver$$GPDMJPBHCJF @ RVA 0x3377340

System_Byte_array *
TacticsArchiver__GPDMJPBHCJF
          (System_Byte_array *JGHIJMJNJLE,System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o LKLBFFJPPOO,
          MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Exception_o *__this;
  System_String_o *message;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((DAT_04567b52 & 1) == 0) {
    FUN_01bab630(&GCFMDIJNNBO_TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>_get_HasValue__);
    DAT_04567b52 = 1;
  }
  if (((ulong)LKLBFFJPPOO.fields & 0xff) == 0) {
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = (ulong)(uint)TacticsArchiver_TypeInfo->static_fields->IPIMOJKDGPN;
  }
  else {
    uVar3 = (ulong)LKLBFFJPPOO.fields >> 0x20;
  }
  switch(uVar3) {
  case 0:
    return JGHIJMJNJLE;
  case 1:
    pSVar1 = DBIJLEGANCE__KEIDOJDOFNN(JGHIJMJNJLE,(MethodInfo *)0x0);
    return pSVar1;
  case 2:
    break;
  case 3:
    pSVar1 = DBIJLEGANCE__LJBMFNHPKCB(JGHIJMJNJLE,(MethodInfo *)0x0);
    return pSVar1;
  default:
    thunk_FUN_01bb9178(&System_Exception_TypeInfo);
    __this = (System_Exception_o *)thunk_FUN_01bda818();
    message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_12812/*"TacticsArchiver::Compress: DecompressionMethod undefined"*/);
    System_Exception___ctor(__this,message,(MethodInfo *)0x0);
    uVar2 = thunk_FUN_01bb9178(&Method_IOIKBGAJIGO_GPDMJPBHCJF__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this,uVar2);
  }
  if ((GCFMDIJNNBO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = GCFMDIJNNBO__PBDHJGKDPML(JGHIJMJNJLE,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static void NJEMOPJFJAF()  [RVA 0x3377498]
// TacticsArchiver$$NJEMOPJFJAF @ RVA 0x3377498

/* WARNING: Removing unreachable block (ram,0x03477a68) */
/* WARNING: Removing unreachable block (ram,0x03477a6c) */
/* WARNING: Removing unreachable block (ram,0x03477af0) */
/* WARNING: Removing unreachable block (ram,0x03477b08) */

void TacticsArchiver__NJEMOPJFJAF(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Il2CppObject *DDGBMJNBFPF;
  Il2CppObject *IFDOANCFKJD;
  bool bVar3;
  System_String_o *pSVar4;
  System_Xml_XmlDocument_o *pSVar5;
  long *plVar6;
  System_Collections_Generic_List_object__o *__this;
  undefined8 *puVar7;
  long *plVar8;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Object_array *pSVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567b53 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8116/*"Items"*/);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_11934/*"Settings"*/);
    FUN_01bab630(&StringLiteral_4558/*"ComputerSettings.xml"*/);
    FUN_01bab630(&StringLiteral_14877/*"Weapons"*/);
    FUN_01bab630(&StringLiteral_9998/*"OutcomeTables"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_12810/*"TacticWeapon"*/);
    DAT_04567b53 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar5 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar4,StringLiteral_4558/*"ComputerSettings.xml"*/,1,true,true,false,(MethodInfo *)0x0);
  if ((((pSVar5 != (System_Xml_XmlDocument_o *)0x0) &&
       (plVar6 = (long *)(*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                                   (pSVar5,StringLiteral_11934/*"Settings"*/,
                                    (pSVar5->klass->vtable)._51_get_Item.method),
       plVar6 != (long *)0x0)) &&
      (plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                                  (plVar6,StringLiteral_9998/*"OutcomeTables"*/,*(undefined8 *)(*plVar6 + 0x470)),
      plVar6 != (long *)0x0)) &&
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                                 (plVar6,StringLiteral_8116/*"Items"*/,*(undefined8 *)(*plVar6 + 0x470)),
     plVar6 != (long *)0x0)) {
    method_01 = *(MethodInfo **)(*plVar6 + 0x470);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x468))(plVar6,StringLiteral_14877/*"Weapons"*/);
    __this = (System_Collections_Generic_List_object__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this,Method_System_Collections_Generic_List<string>__ctor__);
    pSVar4 = StringLiteral_1/*""*/;
    lVar10 = Method_System_Collections_Generic_List<string>_Add__;
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar9 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar9 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar9->m_Items[(int)uVar2] = (Il2CppObject *)pSVar4;
          thunk_FUN_01c20e04();
        }
        else {
          method_01 = *(MethodInfo **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,(Il2CppObject *)pSVar4,(MethodInfo_26E4DAC *)method_01);
        }
        if ((plVar6 != (long *)0x0) &&
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210))
           , plVar6 != (long *)0x0)) {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_034777c8;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            method_01 = (MethodInfo *)0x0;
            puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_034777c8:
            uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            if ((uVar11 & 1) == 0) {
              plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
              if (plVar6 == (long *)0x0) goto LAB_03477984;
              lVar10 = *plVar6;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 == 0) goto LAB_0347795c;
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_03477944;
            }
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                  goto LAB_03477828;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_03477828:
            plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(plVar8);
            }
            pSVar4 = (System_String_o *)
                     (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
            method_01 = (MethodInfo *)0x0;
            bVar3 = System_String__op_Equality(pSVar4,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
            if (bVar3) {
              __this_00 = (System_Xml_XmlAttributeCollection_o *)
                          (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
              if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (__this_00,StringLiteral_12810/*"TacticWeapon"*/,(MethodInfo *)0x0);
              method_01 = (MethodInfo *)0x0;
              pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              lVar10 = Method_System_Collections_Generic_List<string>_Add__;
              pSVar9 = (__this->fields)._items;
              (__this->fields)._version = (__this->fields)._version + 1;
              if (pSVar9 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar9->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar9->m_Items[(int)uVar2] = (Il2CppObject *)pSVar4;
                thunk_FUN_01c20e04();
              }
              else {
                method_01 = *(MethodInfo **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
                System_Collections_Generic_List<object>__AddWithResize
                          (__this,(Il2CppObject *)pSVar4,(MethodInfo_26E4DAC *)method_01);
              }
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03477944:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03477978;
    }
  }
LAB_0347795c:
  method_01 = (MethodInfo *)0x0;
  puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_03477978:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03477984:
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,__this,Method_System_Collections_Generic_List<string>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_80,
                            Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
        IFDOANCFKJD = local_80.fields._current, bVar3) {
    method_00 = extraout_x1;
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    TacticsArchiver__NJEMOPJFJAF((System_String_o *)IFDOANCFKJD,method_00);
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,__this,Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          DDGBMJNBFPF = local_a0.fields._current, bVar3) {
      if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      TacticsArchiver__NJEMOPJFJAF
                ((System_String_o *)IFDOANCFKJD,(System_String_o *)DDGBMJNBFPF,method_01);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return;
}


// ===== public static string KELDIALFCDL(Nullable<TacticsArchiver.DMIOKBAEKJB> LKLBFFJPPOO)  [RVA 0x3374950]
// TacticsArchiver$$KELDIALFCDL @ RVA 0x3374950

System_String_o *
TacticsArchiver__KELDIALFCDL(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o LKLBFFJPPOO,MethodInfo *method)

{
  System_Exception_o *__this;
  System_String_o *message;
  undefined8 uVar1;
  MethodInfo *extraout_x1;
  uint uVar2;
  
  if ((DAT_04567b54 & 1) == 0) {
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<TacticsArchiver_DMIOKBAEKJB>_get_HasValue__);
    FUN_01bab630(&StringLiteral_21405/*"tactics_compressed_ionic_zlib"*/);
    FUN_01bab630(&StringLiteral_21406/*"tactics_compressed_nekki_zip"*/);
    FUN_01bab630(&StringLiteral_21404/*"tactics_compressed_icsharp_bzip2"*/);
    FUN_01bab630(&StringLiteral_21407/*"tactics_decompressed"*/);
    DAT_04567b54 = 1;
    method = extraout_x1;
  }
  if (((ulong)LKLBFFJPPOO.fields & 0xff) == 0) {
                    /* try { // try from 034749e4 to 03574bbf has its CatchHandler @ 034749e4
                       catch() { ... } // from try @ 034749e4 with catch @ 034749e4
                       catch() { ... } // from try @ 03474c50 with catch @ 034749e4
                       catch() { ... } // from try @ 03474cd4 with catch @ 034749e4
                       catch() { ... } // from try @ 03474d6c with catch @ 034749e4 */
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(TacticsArchiver_TypeInfo,method);
    }
    uVar2 = TacticsArchiver_TypeInfo->static_fields->IPIMOJKDGPN;
  }
  else {
    uVar2 = LKLBFFJPPOO.fields.value;
  }
  if (uVar2 < 4) {
    return *(System_String_o **)(&PTR_StringLiteral_21407/*"tactics_decompressed"*/_03fc6788)[(int)uVar2];
  }
  thunk_FUN_01bb9178(&System_Exception_TypeInfo);
  __this = (System_Exception_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_12815/*"TacticsArchiver::GetTacticsTopFolderName: DecompressionMethod undefined"*/);
  System_Exception___ctor(__this,message,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_IOIKBGAJIGO_KELDIALFCDL__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this,uVar1);
}


// ===== private static void NJEMOPJFJAF(string IIDPDAKKFFN, string DDGBMJNBFPF)  [RVA 0x3377C60]
// TacticsArchiver$$NJEMOPJFJAF @ RVA 0x3377C60

void TacticsArchiver__NJEMOPJFJAF
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,MethodInfo *method)

{
  bool bVar1;
  System_String_o *AAIHDEKMIJG;
  System_Byte_array *MMEEMFOLKPP;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Byte_array *local_28;
  
  if ((DAT_04567b55 & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    DAT_04567b55 = 1;
  }
  if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = TacticsArchiver__JJDDMIBJDKG(IIDPDAKKFFN,DDGBMJNBFPF,method);
  if (bVar1) {
    local_28 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0);
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(TacticsArchiver_TypeInfo);
    }
    TacticsArchiver__MPENCGPEPEE(IIDPDAKKFFN,DDGBMJNBFPF,&local_28,in_x3);
    bVar1 = System_String__op_Inequality(IIDPDAKKFFN,DDGBMJNBFPF,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      TacticsArchiver__MPENCGPEPEE(DDGBMJNBFPF,IIDPDAKKFFN,&local_28,in_x3);
    }
    if (local_28 == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_28->max_length != 0) {
      if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method_00 = (MethodInfo *)0x0;
      AAIHDEKMIJG = TacticsArchiver__PIPGAPGKBLM
                              (IIDPDAKKFFN,DDGBMJNBFPF,
                               (System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x3);
      MMEEMFOLKPP = TacticsArchiver__GPDMJPBHCJF
                              (local_28,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,method_00);
      NEHNBJKKABI__IGOPCLNJIGA(AAIHDEKMIJG,MMEEMFOLKPP,(MethodInfo *)0x0);
    }
  }
  return;
}

