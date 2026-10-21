// TypeDefIndex 2319
// Namespace: 
// public class EHCCNKFIPPA
// Fields:
//   private Model <HKPEJNKNEGG>k__BackingField; // 0x10
//   private List<IGJEEGBBNFC> <DEKNAHBMHGA>k__BackingField; // 0x18
//   private List<PHDCILJMEHO> <BPHPMGBCNOO>k__BackingField; // 0x20
//   private List<NJPBBPOABKP> <LIMBEMPMEPH>k__BackingField; // 0x28
//   private List<NJPBBPOABKP> <OGNGBMMEPLD>k__BackingField; // 0x30
//   private List<NJPBBPOABKP> <JBCIAMDCGND>k__BackingField; // 0x38
//   private List<NJPBBPOABKP> <HKKHBGHDDPN>k__BackingField; // 0x40
//   private List<NJPBBPOABKP> <LBFBPAPODCK>k__BackingField; // 0x48
//   private List<NJPBBPOABKP> <BNEPLANGLCO>k__BackingField; // 0x50
//   private List<NJPBBPOABKP> <KHNBIJGEEKD>k__BackingField; // 0x58
//   private List<NJPBBPOABKP> <FEKPIGKJNFC>k__BackingField; // 0x60
//   private List<NJPBBPOABKP> <LMNDANMPFEC>k__BackingField; // 0x68
//   private List<NJPBBPOABKP> <KILHFKPHAFK>k__BackingField; // 0x70
//   private List<NJPBBPOABKP> <BPDOGAAAHIP>k__BackingField; // 0x78
//   private List<NJPBBPOABKP> <GBDEKDLFBLF>k__BackingField; // 0x80
//   private List<NJPBBPOABKP> <PFGFOOJGIHM>k__BackingField; // 0x88
//   private List<NJPBBPOABKP> <JFANEHLBMLN>k__BackingField; // 0x90
//   private List<NJPBBPOABKP> <GAIIAJFJGHE>k__BackingField; // 0x98
//   private List<NJPBBPOABKP> <DKPCPHLJAAA>k__BackingField; // 0xA0
//   private List<NJPBBPOABKP> <ODODLDOGFEP>k__BackingField; // 0xA8

// ===== public void CJHGBHKNDHN(Model CJNHFNHJHPE)  [RVA 0x331C76C]
// EHCCNKFIPPA$$CJHGBHKNDHN @ RVA 0x331C76C

void EHCCNKFIPPA__CJHGBHKNDHN(EHCCNKFIPPA_o *__this,Model_o *CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 0341c76c to 0351c777 has its CatchHandler @ 0341c8e0 */
  (__this->fields)._HKPEJNKNEGG_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void PFOAMHJMBKD(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331C774]
// EHCCNKFIPPA$$PFOAMHJMBKD @ RVA 0x331C774

void EHCCNKFIPPA__PFOAMHJMBKD
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._KHNBIJGEEKD_k__BackingField = CJNHFNHJHPE;
                    /* try { // try from 0341c778 to 0351c897 has its CatchHandler @ 0341c4dc */
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<NJPBBPOABKP> KLOPCNJMAAH()  [RVA 0x331C77C]
// EHCCNKFIPPA$$KLOPCNJMAAH @ RVA 0x331C77C

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__KLOPCNJMAAH(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._JBCIAMDCGND_k__BackingField;
}


// ===== public void LLEDBCILPEN(NJPBBPOABKP AEDJMMHJIEH)  [RVA 0x331C784]
// EHCCNKFIPPA$$LLEDBCILPEN @ RVA 0x331C784

void EHCCNKFIPPA__LLEDBCILPEN(EHCCNKFIPPA_o *__this,NJPBBPOABKP_o *AEDJMMHJIEH,MethodInfo *method)

{
  bool bVar1;
  int32_t ACCIHBHMFPN;
  System_Collections_Generic_List_NKPJLEMPIKD__o *__this_00;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567821 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NKPJLEMPIKD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_Remove__);
    DAT_04567821 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((AEDJMMHJIEH != (NJPBBPOABKP_o *)0x0) &&
     (__this_00 = (AEDJMMHJIEH->fields)._NAGALBFLGCA_k__BackingField,
     __this_00 != (System_Collections_Generic_List_NKPJLEMPIKD__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<NKPJLEMPIKD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_Dispose__);
        return;
      }
      if ((NKPJLEMPIKD_o *)local_48.fields._current == (NKPJLEMPIKD_o *)0x0) break;
      ACCIHBHMFPN = NKPJLEMPIKD__NHGGBEACKBD
                              ((NKPJLEMPIKD_o *)local_48.fields._current,(MethodInfo *)0x0);
      __this_01 = EHCCNKFIPPA__ALDNBOODDKG(__this,ACCIHBHMFPN,method);
      if (__this_01 == (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method = Method_System_Collections_Generic_List<NJPBBPOABKP>_Remove__;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)AEDJMMHJIEH,
                 (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<NJPBBPOABKP>_Remove__)
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<NJPBBPOABKP> GDKCCIHNDHH()  [RVA 0x331C9BC]
// EHCCNKFIPPA$$GDKCCIHNDHH @ RVA 0x331C9BC

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__GDKCCIHNDHH(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._JFANEHLBMLN_k__BackingField;
}


// ===== public void DFILKMEMGGL(PerkInfoItem EIKFGOCCOIE)  [RVA 0x331C9C4]
// EHCCNKFIPPA$$DFILKMEMGGL @ RVA 0x331C9C4

void EHCCNKFIPPA__DFILKMEMGGL(EHCCNKFIPPA_o *__this,PerkInfoItem_o *EIKFGOCCOIE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PHDCILJMEHO__o *pSVar2;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567822 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_Remove__);
    DAT_04567822 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._BPHPMGBCNOO_k__BackingField;
  if (pSVar2 != (System_Collections_Generic_List_PHDCILJMEHO__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_90,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
    local_60.fields._index = local_90.fields._index;
    local_60.fields._version = local_90.fields._version;
    local_60.fields._list = local_90.fields._list;
    local_60.fields._current = local_90.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
      if (!bVar1) goto LAB_0341cb04;
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (local_60.fields._current[1].klass != (Il2CppClass *)EIKFGOCCOIE);
    pSVar2 = (__this->fields)._BPHPMGBCNOO_k__BackingField;
    if (pSVar2 == (System_Collections_Generic_List_PHDCILJMEHO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method = Method_System_Collections_Generic_List<PHDCILJMEHO>_Remove__;
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar2,local_60.fields._current,
               (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<PHDCILJMEHO>_Remove__);
LAB_0341cb04:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
    if ((EIKFGOCCOIE != (PerkInfoItem_o *)0x0) &&
       (__this_00 = (EIKFGOCCOIE->fields).EMNOFACFIBF,
       __this_00 != (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_78,
                                Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__
                               ), bVar1) {
        EHCCNKFIPPA__LLEDBCILPEN(__this,(NJPBBPOABKP_o *)local_78.fields._current,method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_78,Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<NJPBBPOABKP> MBNNFNENLJF()  [RVA 0x331CC54]
// EHCCNKFIPPA$$MBNNFNENLJF @ RVA 0x331CC54

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__MBNNFNENLJF(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._KILHFKPHAFK_k__BackingField;
}


// ===== internal void GIENGNEGHPJ()  [RVA 0x331CC5C]
// EHCCNKFIPPA$$GIENGNEGHPJ @ RVA 0x331CC5C

/* WARNING: Removing unreachable block (ram,0x0341cdcc) */

void EHCCNKFIPPA__GIENGNEGHPJ(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PHDCILJMEHO__o *__this_00;
  System_String_Fields __this_01;
  MethodInfo *extraout_x1;
  System_String_o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567823 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
    DAT_04567823 = 1;
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
  __this_00 = (__this->fields)._BPHPMGBCNOO_k__BackingField;
  if (__this_00 == (System_Collections_Generic_List_PHDCILJMEHO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
  local_60.fields._index = local_98.fields._index;
  local_60.fields._version = local_98.fields._version;
  local_60.fields._list = local_98.fields._list;
  local_60.fields._current = local_98.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__)
      ;
      return;
    }
    if ((NJPBBPOABKP_o *)local_60.fields._current == (NJPBBPOABKP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = ((NJPBBPOABKP_Fields *)((long)local_60.fields._current + 0x10))->
             _COIPKAKHDFP_k__BackingField;
    if (pSVar2 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = pSVar2[10].fields;
    if (__this_01 == (System_String_Fields)0x0) break;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__
                             ), bVar1) {
      if ((NJPBBPOABKP_o *)local_80.fields._current == (NJPBBPOABKP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      NJPBBPOABKP__GIENGNEGHPJ((NJPBBPOABKP_o *)local_80.fields._current,__this,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<NJPBBPOABKP> ALDNBOODDKG(NKPJLEMPIKD.FDGCEBFPIOP ACCIHBHMFPN)  [RVA 0x331C90C]
// EHCCNKFIPPA$$ALDNBOODDKG @ RVA 0x331C90C

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__ALDNBOODDKG(EHCCNKFIPPA_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  System_Collections_Generic_List_NJPBBPOABKP__o **ppSVar1;
  
                    /* catch() { ... } // from try @ 0341c904 with catch @ 0341c91c */
                    /* try { // try from 0341c924 to 0351c98b has its CatchHandler @ 0341c9a0 */
  switch(ACCIHBHMFPN) {
  case 1:
    ppSVar1 = &(__this->fields)._FEKPIGKJNFC_k__BackingField;
    break;
  case 2:
    ppSVar1 = &(__this->fields)._JBCIAMDCGND_k__BackingField;
    break;
  case 3:
    ppSVar1 = &(__this->fields)._JFANEHLBMLN_k__BackingField;
    break;
  case 4:
    ppSVar1 = &(__this->fields)._OGNGBMMEPLD_k__BackingField;
    break;
  case 5:
    ppSVar1 = &(__this->fields)._HKKHBGHDDPN_k__BackingField;
    break;
  case 6:
    ppSVar1 = &(__this->fields)._LBFBPAPODCK_k__BackingField;
    break;
  case 7:
    ppSVar1 = &(__this->fields)._BNEPLANGLCO_k__BackingField;
    break;
  case 8:
    ppSVar1 = &(__this->fields)._KHNBIJGEEKD_k__BackingField;
    break;
  case 9:
    ppSVar1 = &(__this->fields)._LMNDANMPFEC_k__BackingField;
    break;
  case 10:
    ppSVar1 = &(__this->fields)._GBDEKDLFBLF_k__BackingField;
    break;
  case 0xb:
    ppSVar1 = &(__this->fields)._PFGFOOJGIHM_k__BackingField;
                    /* try { // try from 0341c98c to 0351c997 has its CatchHandler @ 0341c4dc */
    break;
  case 0xc:
    ppSVar1 = &(__this->fields)._KILHFKPHAFK_k__BackingField;
    break;
  case 0xd:
                    /* try { // try from 0341c998 to 0351c99f has its CatchHandler @ 0341c9a0 */
    ppSVar1 = &(__this->fields)._BPDOGAAAHIP_k__BackingField;
    break;
  case 0xe:
                    /* catch() { ... } // from try @ 0341c924 with catch @ 0341c9a0
                       catch() { ... } // from try @ 0341c998 with catch @ 0341c9a0 */
    ppSVar1 = &(__this->fields)._GAIIAJFJGHE_k__BackingField;
    break;
  case 0xf:
    ppSVar1 = &(__this->fields)._DKPCPHLJAAA_k__BackingField;
    break;
  case 0x10:
    ppSVar1 = &(__this->fields)._ODODLDOGFEP_k__BackingField;
    break;
  default:
    return (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0;
  }
  return *ppSVar1;
}


// ===== public PHDCILJMEHO NBJIHGJNPGI(PerkInfoItem EIKFGOCCOIE)  [RVA 0x331CEE4]
// EHCCNKFIPPA$$NBJIHGJNPGI @ RVA 0x331CEE4

PHDCILJMEHO_o *
EHCCNKFIPPA__NBJIHGJNPGI(EHCCNKFIPPA_o *__this,PerkInfoItem_o *EIKFGOCCOIE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PHDCILJMEHO__o *__this_00;
  PHDCILJMEHO_o *pPVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567824 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
    DAT_04567824 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._BPHPMGBCNOO_k__BackingField;
  if (__this_00 == (System_Collections_Generic_List_PHDCILJMEHO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    if (!bVar1) {
      pPVar2 = (PHDCILJMEHO_o *)0x0;
      break;
    }
    if ((PHDCILJMEHO_o *)local_48.fields._current == (PHDCILJMEHO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar2 = (PHDCILJMEHO_o *)local_48.fields._current;
  } while (((PHDCILJMEHO_Fields *)((long)local_48.fields._current + 0x10))->MLPFFJNBKBN !=
           EIKFGOCCOIE);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
  return pPVar2;
}


// ===== public List<NJPBBPOABKP> CPDFFHCNCNM()  [RVA 0x331D03C]
// EHCCNKFIPPA$$CPDFFHCNCNM @ RVA 0x331D03C

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__CPDFFHCNCNM(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._BPDOGAAAHIP_k__BackingField;
}


// ===== public List<NJPBBPOABKP> CDIFKHKCGCN()  [RVA 0x331D044]
// EHCCNKFIPPA$$CDIFKHKCGCN @ RVA 0x331D044

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__CDIFKHKCGCN(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._PFGFOOJGIHM_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x331D04C]
// EHCCNKFIPPA$$.ctor @ RVA 0x331D04C

void EHCCNKFIPPA___ctor(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_IGJEEGBBNFC__o *__this_00;
  System_Collections_Generic_List_IGJEEGBBNFC__o **ppSVar1;
  System_Collections_Generic_List_PHDCILJMEHO__o *__this_01;
  System_Collections_Generic_List_PHDCILJMEHO__o **ppSVar2;
  System_Collections_Generic_List_NJPBBPOABKP__o *pSVar3;
  System_Collections_Generic_List_NJPBBPOABKP__o **ppSVar4;
  
  if ((DAT_04567825 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PHDCILJMEHO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IGJEEGBBNFC>_TypeInfo);
    DAT_04567825 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._HKPEJNKNEGG_k__BackingField = (Model_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  __this_00 = (System_Collections_Generic_List_IGJEEGBBNFC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGJEEGBBNFC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IGJEEGBBNFC>__ctor__);
  ppSVar1 = &(__this->fields)._DEKNAHBMHGA_k__BackingField;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_PHDCILJMEHO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PHDCILJMEHO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<PHDCILJMEHO>__ctor__);
  ppSVar2 = &(__this->fields)._BPHPMGBCNOO_k__BackingField;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._LIMBEMPMEPH_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._OGNGBMMEPLD_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._JBCIAMDCGND_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._HKKHBGHDDPN_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._LBFBPAPODCK_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._BNEPLANGLCO_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._KHNBIJGEEKD_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._FEKPIGKJNFC_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._LMNDANMPFEC_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._KILHFKPHAFK_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._BPDOGAAAHIP_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._GBDEKDLFBLF_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._PFGFOOJGIHM_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._JFANEHLBMLN_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._GAIIAJFJGHE_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._DKPCPHLJAAA_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_NJPBBPOABKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
  ppSVar4 = &(__this->fields)._ODODLDOGFEP_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  return;
}


// ===== public List<NJPBBPOABKP> OFDJHNDBJED()  [RVA 0x331D3CC]
// EHCCNKFIPPA$$OFDJHNDBJED @ RVA 0x331D3CC

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__OFDJHNDBJED(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._LMNDANMPFEC_k__BackingField;
}


// ===== protected void PEENAGBAAOD(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D3D4]
// EHCCNKFIPPA$$PEENAGBAAOD @ RVA 0x331D3D4

void EHCCNKFIPPA__PEENAGBAAOD
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._LMNDANMPFEC_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<PHDCILJMEHO> HGDEBFEIIHP()  [RVA 0x331D3DC]
// EHCCNKFIPPA$$HGDEBFEIIHP @ RVA 0x331D3DC

System_Collections_Generic_List_PHDCILJMEHO__o *
EHCCNKFIPPA__HGDEBFEIIHP(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._BPHPMGBCNOO_k__BackingField;
}


// ===== protected void MJMDJDMMHMB(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D3E4]
// EHCCNKFIPPA$$MJMDJDMMHMB @ RVA 0x331D3E4

void EHCCNKFIPPA__MJMDJDMMHMB
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._LIMBEMPMEPH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void CMLAGAFNJLF(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D3EC]
// EHCCNKFIPPA$$CMLAGAFNJLF @ RVA 0x331D3EC

void EHCCNKFIPPA__CMLAGAFNJLF
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._GAIIAJFJGHE_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<NJPBBPOABKP> PFGJIEMOLEM()  [RVA 0x331D3F4]
// EHCCNKFIPPA$$PFGJIEMOLEM @ RVA 0x331D3F4

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__PFGJIEMOLEM(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._KHNBIJGEEKD_k__BackingField;
}


// ===== public List<NJPBBPOABKP> PBOBNFINDBL()  [RVA 0x331D3FC]
// EHCCNKFIPPA$$PBOBNFINDBL @ RVA 0x331D3FC

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__PBOBNFINDBL(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._HKKHBGHDDPN_k__BackingField;
}


// ===== public List<NJPBBPOABKP> JGNHOPCANGC()  [RVA 0x331D404]
// EHCCNKFIPPA$$JGNHOPCANGC @ RVA 0x331D404

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__JGNHOPCANGC(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._LIMBEMPMEPH_k__BackingField;
}


// ===== protected void KAOJMOBFOPJ(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D40C]
// EHCCNKFIPPA$$KAOJMOBFOPJ @ RVA 0x331D40C

void EHCCNKFIPPA__KAOJMOBFOPJ
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._FEKPIGKJNFC_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void OEMKCALLHBB(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D414]
// EHCCNKFIPPA$$OEMKCALLHBB @ RVA 0x331D414

void EHCCNKFIPPA__OEMKCALLHBB
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._LBFBPAPODCK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void DEPKOBDMNFB(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D41C]
// EHCCNKFIPPA$$DEPKOBDMNFB @ RVA 0x331D41C

void EHCCNKFIPPA__DEPKOBDMNFB
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._KILHFKPHAFK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<NJPBBPOABKP> KKNGEPEGBPP()  [RVA 0x331D424]
// EHCCNKFIPPA$$KKNGEPEGBPP @ RVA 0x331D424

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__KKNGEPEGBPP(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._LBFBPAPODCK_k__BackingField;
}


// ===== protected void MKHIPACCIPM(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D42C]
// EHCCNKFIPPA$$MKHIPACCIPM @ RVA 0x331D42C

void EHCCNKFIPPA__MKHIPACCIPM
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._JBCIAMDCGND_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void BNNEABOMMLE(List<PHDCILJMEHO> CJNHFNHJHPE)  [RVA 0x331D434]
// EHCCNKFIPPA$$BNNEABOMMLE @ RVA 0x331D434

void EHCCNKFIPPA__BNNEABOMMLE
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_PHDCILJMEHO__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._BPHPMGBCNOO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<IGJEEGBBNFC> CAEOCMPDNOL()  [RVA 0x331D43C]
// EHCCNKFIPPA$$CAEOCMPDNOL @ RVA 0x331D43C

System_Collections_Generic_List_IGJEEGBBNFC__o *
EHCCNKFIPPA__CAEOCMPDNOL(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._DEKNAHBMHGA_k__BackingField;
}


// ===== public List<NJPBBPOABKP> ILEMOLKIEAK()  [RVA 0x331D444]
// EHCCNKFIPPA$$ILEMOLKIEAK @ RVA 0x331D444

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__ILEMOLKIEAK(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._BNEPLANGLCO_k__BackingField;
}


// ===== protected void MMNGEBJDNEG(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D44C]
// EHCCNKFIPPA$$MMNGEBJDNEG @ RVA 0x331D44C

void EHCCNKFIPPA__MMNGEBJDNEG
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._GBDEKDLFBLF_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void KMEJFLNEIPA(List<IGJEEGBBNFC> CJNHFNHJHPE)  [RVA 0x331D454]
// EHCCNKFIPPA$$KMEJFLNEIPA @ RVA 0x331D454

void EHCCNKFIPPA__KMEJFLNEIPA
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_IGJEEGBBNFC__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._DEKNAHBMHGA_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<NJPBBPOABKP> IBKBNBEHCNO()  [RVA 0x331D45C]
// EHCCNKFIPPA$$IBKBNBEHCNO @ RVA 0x331D45C

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__IBKBNBEHCNO(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._GAIIAJFJGHE_k__BackingField;
}


// ===== protected void ICEOLMFCDGO(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D464]
// EHCCNKFIPPA$$ICEOLMFCDGO @ RVA 0x331D464

void EHCCNKFIPPA__ICEOLMFCDGO
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._BPDOGAAAHIP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<NJPBBPOABKP> DIIJOFMEOND()  [RVA 0x331D46C]
// EHCCNKFIPPA$$DIIJOFMEOND @ RVA 0x331D46C

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__DIIJOFMEOND(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._ODODLDOGFEP_k__BackingField;
}


// ===== protected void IFKDHGGPKJF(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D474]
// EHCCNKFIPPA$$IFKDHGGPKJF @ RVA 0x331D474

void EHCCNKFIPPA__IFKDHGGPKJF
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._DKPCPHLJAAA_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<NJPBBPOABKP> PLMILOMCEDB()  [RVA 0x331D47C]
// EHCCNKFIPPA$$PLMILOMCEDB @ RVA 0x331D47C

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__PLMILOMCEDB(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._OGNGBMMEPLD_k__BackingField;
}


// ===== public Model BBGBNLKMBMG()  [RVA 0x331D484]
// EHCCNKFIPPA$$BBGBNLKMBMG @ RVA 0x331D484

Model_o * EHCCNKFIPPA__BBGBNLKMBMG(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._HKPEJNKNEGG_k__BackingField;
}


// ===== protected void OBBDLBLNPAC(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D48C]
// EHCCNKFIPPA$$OBBDLBLNPAC @ RVA 0x331D48C

void EHCCNKFIPPA__OBBDLBLNPAC
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._JFANEHLBMLN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void IDIIFNDEOEL(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D494]
// EHCCNKFIPPA$$IDIIFNDEOEL @ RVA 0x331D494

void EHCCNKFIPPA__IDIIFNDEOEL
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._ODODLDOGFEP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void MEAPMFBJDMM(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D49C]
// EHCCNKFIPPA$$MEAPMFBJDMM @ RVA 0x331D49C

void EHCCNKFIPPA__MEAPMFBJDMM
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._HKKHBGHDDPN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<NJPBBPOABKP> EBOINBLNMHL()  [RVA 0x331D4A4]
// EHCCNKFIPPA$$EBOINBLNMHL @ RVA 0x331D4A4

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__EBOINBLNMHL(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._FEKPIGKJNFC_k__BackingField;
}


// ===== public List<NJPBBPOABKP> BLABNCKDGKH()  [RVA 0x331D4AC]
// EHCCNKFIPPA$$BLABNCKDGKH @ RVA 0x331D4AC

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__BLABNCKDGKH(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._DKPCPHLJAAA_k__BackingField;
}


// ===== protected void NEMPNNLIMMM(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D4B4]
// EHCCNKFIPPA$$NEMPNNLIMMM @ RVA 0x331D4B4

void EHCCNKFIPPA__NEMPNNLIMMM
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._PFGFOOJGIHM_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void HGDGIGLANNK(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D4BC]
// EHCCNKFIPPA$$HGDGIGLANNK @ RVA 0x331D4BC

void EHCCNKFIPPA__HGDGIGLANNK
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._OGNGBMMEPLD_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void ACHDDKJACPF(PerkInfoItem EIKFGOCCOIE, bool CJNHFNHJHPE)  [RVA 0x331D4C4]
// EHCCNKFIPPA$$ACHDDKJACPF @ RVA 0x331D4C4

void EHCCNKFIPPA__ACHDDKJACPF
               (EHCCNKFIPPA_o *__this,PerkInfoItem_o *EIKFGOCCOIE,bool CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Collections_Generic_List_PHDCILJMEHO__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567826 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
    DAT_04567826 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._BPHPMGBCNOO_k__BackingField;
  if (__this_00 == (System_Collections_Generic_List_PHDCILJMEHO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    if (!bVar1) goto LAB_0341d584;
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (local_48.fields._current[1].klass != (Il2CppClass *)EIKFGOCCOIE);
  *(bool *)&local_48.fields._current[1].monitor = CJNHFNHJHPE;
LAB_0341d584:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
  return;
}


// ===== protected void NMFNLAFKHOM(List<NJPBBPOABKP> CJNHFNHJHPE)  [RVA 0x331D614]
// EHCCNKFIPPA$$NMFNLAFKHOM @ RVA 0x331D614

void EHCCNKFIPPA__NMFNLAFKHOM
               (EHCCNKFIPPA_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._BNEPLANGLCO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<NJPBBPOABKP> EACKLGKCCJO()  [RVA 0x331D61C]
// EHCCNKFIPPA$$EACKLGKCCJO @ RVA 0x331D61C

System_Collections_Generic_List_NJPBBPOABKP__o *
EHCCNKFIPPA__EACKLGKCCJO(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  return (__this->fields)._GBDEKDLFBLF_k__BackingField;
}

