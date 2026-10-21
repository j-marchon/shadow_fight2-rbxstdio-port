// TypeDefIndex 2648
// Namespace: 
// public class GGHCLMEFIGO
// Fields:
//   public GGHCLMEFIGO.OENHIHPIEPH LNPBODFAFII; // 0x10
//   public GGHCLMEFIGO.OLAINNIFOGG JCCJCOCADKI; // 0x18
//   public GGHCLMEFIGO.AHCHAFNJKIH MBIEGCODNMB; // 0x20
//   private List<IGFGDDANEPE> DPOPJKJLDEE; // 0x28
//   private List<IGFGDDANEPE> PMNIDGNGCCG; // 0x30
//   private List<IGFGDDANEPE> MKPLNDNGHEB; // 0x38
//   private List<IGFGDDANEPE> JAKMLPIMLCK; // 0x40
//   public List<AMJMGFCCAKN> AAMHHEENLMC; // 0x48

// ===== public void MJGMEEKMAOE()  [RVA 0x33B4AF0]
// GGHCLMEFIGO$$MJGMEEKMAOE @ RVA 0x33B4AF0

void GGHCLMEFIGO__MJGMEEKMAOE(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  System_Action_IGFGDDANEPE__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  System_Action_IGFGDDANEPE__o *action;
  
                    /* try { // try from 034b4af8 to 035b4b73 has its CatchHandler @ 034b4c30 */
  if ((DAT_04567d69 & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    FUN_01bab630(&Method_GGHCLMEFIGO_<>c_CFPKGMFLGAN__);
    FUN_01bab630(&GGHCLMEFIGO_<>c_TypeInfo);
    DAT_04567d69 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).DPOPJKJLDEE;
  if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__30_0;
  if (action == (System_Action_IGFGDDANEPE__o *)0x0) {
                    /* catch() { ... } // from try @ 034b2bd8 with catch @ 034b4b74
                       try { // try from 034b4b74 to 035b4b93 has its CatchHandler @ 034b26b0 */
    if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034b2b7c with catch @ 034b4b78 */
      thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo,method);
    }
                    /* try { // try from 034b4b94 to 035b4b97 has its CatchHandler @ 034b4ba4 */
    action = (System_Action_IGFGDDANEPE__o *)thunk_FUN_01bda818(System_Action<IGFGDDANEPE>_TypeInfo)
    ;
                    /* catch() { ... } // from try @ 034b4b94 with catch @ 034b4ba4 */
    System_Action<object>___ctor();
                    /* try { // try from 034b4bb4 to 035b4c1b has its CatchHandler @ 034b4c30 */
    ppSVar1 = &GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__30_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<IGFGDDANEPE> HGOIFHFBCGO()  [RVA 0x33B4BF4]
// GGHCLMEFIGO$$HGOIFHFBCGO @ RVA 0x33B4BF4

System_Collections_Generic_List_IGFGDDANEPE__o *
GGHCLMEFIGO__HGOIFHFBCGO(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  return (__this->fields).MKPLNDNGHEB;
}


// ===== private void FKOBJFLAANL(IGFGDDANEPE ENHJPOHLMCL)  [RVA 0x33B4BFC]
// GGHCLMEFIGO$$FKOBJFLAANL @ RVA 0x33B4BFC

void GGHCLMEFIGO__FKOBJFLAANL(GGHCLMEFIGO_o *__this,IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t val2;
  int32_t val1;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  Roster_o *__this_01;
  HOOAAGABMBL_o *__this_02;
  int32_t CJNHFNHJHPE;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 034b4c1c to 035b4c27 has its CatchHandler @ 034b26b0 */
  if ((DAT_04567d6a & 1) == 0) {
                    /* try { // try from 034b4c28 to 035b4c2f has its CatchHandler @ 034b4c30 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
                    /* catch() { ... } // from try @ 034b44d0 with catch @ 034b4c30
                       catch() { ... } // from try @ 034b4548 with catch @ 034b4c30
                       catch() { ... } // from try @ 034b4af8 with catch @ 034b4c30
                       catch() { ... } // from try @ 034b4bb4 with catch @ 034b4c30
                       catch() { ... } // from try @ 034b4c28 with catch @ 034b4c30 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (GGHCLMEFIGO_o *)FUN_01bab630(&StringLiteral_14587/*"Upgrade"*/);
    DAT_04567d6a = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (ENHJPOHLMCL != (IGFGDDANEPE_o *)0x0) {
    __this_02 = (ENHJPOHLMCL->fields).PCBECBEFJOI;
    iVar4 = IGFGDDANEPE__LGIMDOAMCNG(ENHJPOHLMCL,(MethodInfo *)0x0);
    if ((__this_02 == (HOOAAGABMBL_o *)0x0) ||
       ((__this_02->fields)._HCHGENFJLHA_k__BackingField == iVar4)) {
      return;
    }
    IGFGDDANEPE__CCOEOCPGJBG(ENHJPOHLMCL,StringLiteral_14587/*"Upgrade"*/,(MethodInfo *)0x0);
    __this_00 = HOOAAGABMBL__DBONHFEAOEG(__this_02,false,0x7fffffff,(MethodInfo *)0x0);
    __this = (GGHCLMEFIGO_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      bVar2 = false;
      val1 = -0x80000000;
      CJNHFNHJHPE = 0x7fffffff;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__
                               ), bVar3) {
        if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_70.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034b4e68 to 035b4e73 has its CatchHandler @ 034b4f94 */
          FUN_01bab8c8();
        }
        val2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                           &(local_70.fields._current[1].klass)->static_fields,(MethodInfo *)0x0);
        if (val2 == iVar4) {
                    /* try { // try from 034b4e3c to 035b4e4f has its CatchHandler @ 034b4fa0 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
          return;
        }
        bVar2 = (bool)(bVar2 | (iVar4 <= val2 && val2 < CJNHFNHJHPE));
        iVar1 = val2;
        if (iVar4 > val2 || val2 >= CJNHFNHJHPE) {
          iVar1 = CJNHFNHJHPE;
        }
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        val1 = System_Math__Max(val1,val2,(MethodInfo *)0x0);
        CJNHFNHJHPE = iVar1;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__)
      ;
      if (!bVar2) {
        CJNHFNHJHPE = val1;
      }
      IGFGDDANEPE__DJJHOOKLHHL(ENHJPOHLMCL,CJNHFNHJHPE,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
                    /* try { // try from 034b4dec to 035b4e3b has its CatchHandler @ 034b4dec
                       catch() { ... } // from try @ 034b4dec with catch @ 034b4dec
                       catch() { ... } // from try @ 034b4f6c with catch @ 034b4dec
                       catch() { ... } // from try @ 034b4fd0 with catch @ 034b4dec
                       catch() { ... } // from try @ 034b5044 with catch @ 034b4dec */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      __this = (GGHCLMEFIGO_o *)0x0;
      if (__this_01 != (Roster_o *)0x0) {
        iVar4 = Roster__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0);
        IGFGDDANEPE__GIIJHCLHFDK(ENHJPOHLMCL,iVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void LEGEKLCFCIA(PerkInfoItem CDEABOAKDEJ, ref HashSet<string> JBIACFHCCFO)  [RVA 0x33B4EF8]
// GGHCLMEFIGO$$LEGEKLCFCIA @ RVA 0x33B4EF8

void GGHCLMEFIGO__LEGEKLCFCIA
               (GGHCLMEFIGO_o *__this,PerkInfoItem_o *CDEABOAKDEJ,
               System_Collections_Generic_HashSet_string__o **JBIACFHCCFO,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  PerkInfoItem_o *extraout_x1;
  PerkInfoItem_o *method_00;
  HOOAAGABMBL_o *pHVar3;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 034b4efc to 035b4f0b has its CatchHandler @ 034b4f70 */
  method_00 = CDEABOAKDEJ;
  if ((DAT_04567d6b & 1) == 0) {
                    /* try { // try from 034b4f2c to 035b4f2f has its CatchHandler @ 034b4f80 */
                    /* try { // try from 034b4f30 to 035b4f3b has its CatchHandler @ 034b4f9c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
                    /* try { // try from 034b4f4c to 035b4f4f has its CatchHandler @ 034b4f74 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
                    /* try { // try from 034b4f50 to 035b4f5b has its CatchHandler @ 034b4f84 */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
                    /* try { // try from 034b4f68 to 035b4f6b has its CatchHandler @ 034b4f90 */
                    /* catch() { ... } // from try @ 034b4ecc with catch @ 034b4f6c
                       try { // try from 034b4f6c to 035b4fb7 has its CatchHandler @ 034b4dec */
                    /* catch() { ... } // from try @ 034b4efc with catch @ 034b4f70 */
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
                    /* catch() { ... } // from try @ 034b4f4c with catch @ 034b4f74 */
                    /* catch() { ... } // from try @ 034b4e9c with catch @ 034b4f78 */
                    /* catch() { ... } // from try @ 034b4edc with catch @ 034b4f7c */
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
                    /* catch() { ... } // from try @ 034b4f2c with catch @ 034b4f80 */
                    /* catch() { ... } // from try @ 034b4f50 with catch @ 034b4f84 */
                    /* catch() { ... } // from try @ 034b4eec with catch @ 034b4f88 */
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
                    /* catch() { ... } // from try @ 034b4eb0 with catch @ 034b4f8c */
                    /* catch() { ... } // from try @ 034b4f68 with catch @ 034b4f90 */
                    /* catch() { ... } // from try @ 034b4e68 with catch @ 034b4f94 */
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
                    /* catch() { ... } // from try @ 034b4e78 with catch @ 034b4f98 */
                    /* catch() { ... } // from try @ 034b4f30 with catch @ 034b4f9c */
                    /* catch() { ... } // from try @ 034b4e3c with catch @ 034b4fa0 */
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
                    /* try { // try from 034b4fb8 to 035b4fcf has its CatchHandler @ 034b503c */
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_04567d6b = 1;
    method_00 = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 034b4fd0 to 035b502b has its CatchHandler @ 034b4dec */
  __this_00 = GGHCLMEFIGO__PDBBGCIHBFL(__this,(MethodInfo *)method_00);
  if (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
                    /* try { // try from 034b502c to 035b503b has its CatchHandler @ 034b503c */
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while( true ) {
                    /* catch() { ... } // from try @ 034b4fb8 with catch @ 034b503c
                       catch() { ... } // from try @ 034b502c with catch @ 034b503c */
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      pIVar1 = local_80.fields._current;
                    /* try { // try from 034b5040 to 035b5043 has its CatchHandler @ 034b504c */
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
        return;
      }
                    /* try { // try from 034b5044 to 035b504f has its CatchHandler @ 034b4dec */
      if ((IGFGDDANEPE_o *)local_80.fields._current == (IGFGDDANEPE_o *)0x0) break;
                    /* catch() { ... } // from try @ 034b5040 with catch @ 034b504c */
      bVar2 = IGFGDDANEPE__FGDEJFIKMCP
                        ((IGFGDDANEPE_o *)local_80.fields._current,CDEABOAKDEJ,(MethodInfo *)0x0);
      if (bVar2) {
        pHVar3 = ((IGFGDDANEPE_Fields *)((long)pIVar1 + 0x10))->PCBECBEFJOI;
        if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        a = (pHVar3->fields)._GMPAEDFIIHF_k__BackingField;
        bVar2 = System_String__op_Equality(a,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
        if (bVar2) {
          if ((System_Collections_Generic_HashSet_object__o *)*JBIACFHCCFO ==
              (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_HashSet<object>__Add
                    ((System_Collections_Generic_HashSet_object__o *)*JBIACFHCCFO,
                     (Il2CppObject *)StringLiteral_14870/*"Weapon"*/,
                     Method_System_Collections_Generic_HashSet<string>_Add__);
        }
        else {
          bVar2 = System_String__op_Equality(a,StringLiteral_3076/*"Armor"*/,(MethodInfo *)0x0);
          if (bVar2) {
            if ((System_Collections_Generic_HashSet_object__o *)*JBIACFHCCFO ==
                (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_HashSet<object>__Add
                      ((System_Collections_Generic_HashSet_object__o *)*JBIACFHCCFO,
                       (Il2CppObject *)StringLiteral_3076/*"Armor"*/,
                       Method_System_Collections_Generic_HashSet<string>_Add__);
          }
          else {
            bVar2 = System_String__op_Equality(a,StringLiteral_7066/*"Helm"*/,(MethodInfo *)0x0);
            if (bVar2) {
              if ((System_Collections_Generic_HashSet_object__o *)*JBIACFHCCFO ==
                  (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_HashSet<object>__Add
                        ((System_Collections_Generic_HashSet_object__o *)*JBIACFHCCFO,
                         (Il2CppObject *)StringLiteral_7066/*"Helm"*/,
                         Method_System_Collections_Generic_HashSet<string>_Add__);
            }
            else {
              bVar2 = System_String__op_Equality(a,StringLiteral_11017/*"Ranged"*/,(MethodInfo *)0x0);
              if (bVar2) {
                if ((System_Collections_Generic_HashSet_object__o *)*JBIACFHCCFO ==
                    (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                System_Collections_Generic_HashSet<object>__Add
                          ((System_Collections_Generic_HashSet_object__o *)*JBIACFHCCFO,
                           (Il2CppObject *)StringLiteral_11017/*"Ranged"*/,
                           Method_System_Collections_Generic_HashSet<string>_Add__);
              }
              else {
                bVar2 = System_String__op_Equality(a,StringLiteral_8772/*"Magic"*/,(MethodInfo *)0x0);
                if (bVar2) {
                  if ((System_Collections_Generic_HashSet_object__o *)*JBIACFHCCFO ==
                      (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  System_Collections_Generic_HashSet<object>__Add
                            ((System_Collections_Generic_HashSet_object__o *)*JBIACFHCCFO,
                             (Il2CppObject *)StringLiteral_8772/*"Magic"*/,
                             Method_System_Collections_Generic_HashSet<string>_Add__);
                }
                else {
                  bVar2 = System_String__op_Equality(a,StringLiteral_10823/*"RaidConsumable"*/,(MethodInfo *)0x0);
                  if (bVar2) {
                    pHVar3 = ((IGFGDDANEPE_Fields *)((long)pIVar1 + 0x10))->PCBECBEFJOI;
                    if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    bVar2 = System_String__op_Equality
                                      ((pHVar3->fields)._DKODBGOHKGH_k__BackingField,
                                       StringLiteral_10806/*"RaidCharge"*/,(MethodInfo *)0x0);
                    if (bVar2) {
                      if ((System_Collections_Generic_HashSet_object__o *)*JBIACFHCCFO ==
                          (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      System_Collections_Generic_HashSet<object>__Add
                                ((System_Collections_Generic_HashSet_object__o *)*JBIACFHCCFO,
                                 (Il2CppObject *)StringLiteral_10806/*"RaidCharge"*/,
                                 Method_System_Collections_Generic_HashSet<string>_Add__);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<IGFGDDANEPE> KLNAIBAOMJE()  [RVA 0x33B54F8]
// GGHCLMEFIGO$$KLNAIBAOMJE @ RVA 0x33B54F8

System_Collections_Generic_List_IGFGDDANEPE__o *
GGHCLMEFIGO__KLNAIBAOMJE(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  return (__this->fields).JAKMLPIMLCK;
}


// ===== public void .ctor()  [RVA 0x33B5500]
// GGHCLMEFIGO$$.ctor @ RVA 0x33B5500

void GGHCLMEFIGO___ctor(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  GGHCLMEFIGO_OENHIHPIEPH_o *__this_00;
  GGHCLMEFIGO_OLAINNIFOGG_o *__this_01;
  GGHCLMEFIGO_OLAINNIFOGG_o **ppGVar1;
  GGHCLMEFIGO_AHCHAFNJKIH_o *__this_02;
  GGHCLMEFIGO_AHCHAFNJKIH_o **ppGVar2;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar3;
  System_Collections_Generic_List_IGFGDDANEPE__o **ppSVar4;
  System_Collections_Generic_List_AMJMGFCCAKN__o *__this_03;
  System_Collections_Generic_List_AMJMGFCCAKN__o **ppSVar5;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567d6c & 1) == 0) {
    FUN_01bab630(&GGHCLMEFIGO_AHCHAFNJKIH_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_GGHCLMEFIGO_IAKHIFOFLGO__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AMJMGFCCAKN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<AMJMGFCCAKN>_TypeInfo);
    FUN_01bab630(&GGHCLMEFIGO_OENHIHPIEPH_TypeInfo);
    FUN_01bab630(&GGHCLMEFIGO_OLAINNIFOGG_TypeInfo);
    DAT_04567d6c = 1;
    method = extraout_x1;
  }
  __this_00 = (GGHCLMEFIGO_OENHIHPIEPH_o *)
              thunk_FUN_01bda818(GGHCLMEFIGO_OENHIHPIEPH_TypeInfo,method);
  GGHCLMEFIGO_OENHIHPIEPH___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).LNPBODFAFII = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (GGHCLMEFIGO_OLAINNIFOGG_o *)thunk_FUN_01bda818(GGHCLMEFIGO_OLAINNIFOGG_TypeInfo);
  GGHCLMEFIGO_OLAINNIFOGG___ctor(__this_01,(MethodInfo *)0x0);
  ppGVar1 = &(__this->fields).JCCJCOCADKI;
  *ppGVar1 = __this_01;
  thunk_FUN_01c20e04(ppGVar1,__this_01);
  __this_02 = (GGHCLMEFIGO_AHCHAFNJKIH_o *)thunk_FUN_01bda818(GGHCLMEFIGO_AHCHAFNJKIH_TypeInfo);
  GGHCLMEFIGO_AHCHAFNJKIH___ctor(__this_02,(MethodInfo *)0x0);
  ppGVar2 = &(__this->fields).MBIEGCODNMB;
  *ppGVar2 = __this_02;
  thunk_FUN_01c20e04(ppGVar2,__this_02);
  pSVar3 = (System_Collections_Generic_List_IGFGDDANEPE__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  ppSVar4 = &(__this->fields).DPOPJKJLDEE;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_IGFGDDANEPE__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  ppSVar4 = &(__this->fields).PMNIDGNGCCG;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_IGFGDDANEPE__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  ppSVar4 = &(__this->fields).MKPLNDNGHEB;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_IGFGDDANEPE__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  ppSVar4 = &(__this->fields).JAKMLPIMLCK;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  __this_03 = (System_Collections_Generic_List_AMJMGFCCAKN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<AMJMGFCCAKN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             Method_System_Collections_Generic_List<AMJMGFCCAKN>__ctor__);
  ppSVar5 = &(__this->fields).AAMHHEENLMC;
  *ppSVar5 = __this_03;
  thunk_FUN_01c20e04(ppSVar5,__this_03);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public List<IGFGDDANEPE> FAABNBIPNPN()  [RVA 0x33B5774]
// GGHCLMEFIGO$$FAABNBIPNPN @ RVA 0x33B5774

System_Collections_Generic_List_IGFGDDANEPE__o *
GGHCLMEFIGO__FAABNBIPNPN(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  return (__this->fields).DPOPJKJLDEE;
}


// ===== public List<IGFGDDANEPE> PDBBGCIHBFL()  [RVA 0x33B52D4]
// GGHCLMEFIGO$$PDBBGCIHBFL @ RVA 0x33B52D4

System_Collections_Generic_List_IGFGDDANEPE__o *
GGHCLMEFIGO__PDBBGCIHBFL(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  MethodInfo *extraout_x1;
  IGFGDDANEPE_array *pIVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567d6d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    DAT_04567d6d = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_IGFGDDANEPE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  __this_01 = (__this->fields).DPOPJKJLDEE;
  if (__this_01 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
        return __this_00;
      }
      if ((IGFGDDANEPE_o *)local_50.fields._current == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (((IGFGDDANEPE_Fields *)((long)local_50.fields._current + 0x10))->OFIKEBGDMBE == false);
    if (__this_00 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pIVar4 == (IGFGDDANEPE_array *)0x0) break;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pIVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pIVar4->m_Items[(int)uVar1] = (IGFGDDANEPE_o *)local_50.fields._current;
      thunk_FUN_01c20e04(pIVar4->m_Items + (int)uVar1,local_50.fields._current);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,local_50.fields._current,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AFPDMLCLGJM(IGFGDDANEPE ENHJPOHLMCL)  [RVA 0x33B577C]
// GGHCLMEFIGO$$AFPDMLCLGJM @ RVA 0x33B577C

void GGHCLMEFIGO__AFPDMLCLGJM(GGHCLMEFIGO_o *__this,IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  GGHCLMEFIGO_OLAINNIFOGG_o *__this_01;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  PKHMIGFEJCL_o *pPVar7;
  Roster_o *pAVar8;
  IGFGDDANEPE_array *pIVar9;
  
  if ((DAT_04567d6e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<IGFGDDANEPE>_Invoke__);
    DAT_04567d6e = 1;
  }
  if (ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) {
    return;
  }
  bVar3 = IGFGDDANEPE__DABHOGHGNBB(ENHJPOHLMCL,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
  if (bVar3) {
    __this_00 = (__this->fields).JAKMLPIMLCK;
  }
  else {
    __this_00 = (__this->fields).MKPLNDNGHEB;
  }
  if (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    pIVar9 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pIVar9 != (IGFGDDANEPE_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pIVar9->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pIVar9->m_Items[(int)uVar1] = ENHJPOHLMCL;
        thunk_FUN_01c20e04(pIVar9->m_Items + (int)uVar1,ENHJPOHLMCL);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)ENHJPOHLMCL,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      __this_01 = (__this->fields).JCCJCOCADKI;
      if (__this_01 != (GGHCLMEFIGO_OLAINNIFOGG_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(Il2CppObject *)ENHJPOHLMCL,
                   Method_UnityEngine_Events_UnityEvent<IGFGDDANEPE>_Invoke__);
        pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if ((pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
           (pPVar7 = (pNVar6->fields).QuestParameters, pPVar7 != (PKHMIGFEJCL_o *)0x0)) {
          (pPVar7->fields).CJLNOJMBNPN = (ENHJPOHLMCL->fields).PCBECBEFJOI;
          thunk_FUN_01c20e04();
          pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
          if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
            Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar6,0xe,(MethodInfo *)0x0);
            iVar4 = IGFGDDANEPE__LDJLMEFOMLG(ENHJPOHLMCL,(MethodInfo *)0x0);
            if (iVar4 < 1) {
              IGFGDDANEPE__PICGGLNNJFA(ENHJPOHLMCL,1,(MethodInfo *)0x0);
              IGFGDDANEPE__DOOKHLFKCAI(ENHJPOHLMCL,-1,(MethodInfo *)0x0);
            }
            iVar4 = IGFGDDANEPE__IJNIFKFEGND(ENHJPOHLMCL,(MethodInfo *)0x0);
            if (0 < iVar4) {
              iVar4 = IGFGDDANEPE__IJNIFKFEGND(ENHJPOHLMCL,(MethodInfo *)0x0);
              iVar5 = IGFGDDANEPE__LGIMDOAMCNG(ENHJPOHLMCL,(MethodInfo *)0x0);
              if (iVar5 < iVar4) {
                iVar4 = IGFGDDANEPE__IJNIFKFEGND(ENHJPOHLMCL,(MethodInfo *)0x0);
                IGFGDDANEPE__DJJHOOKLHHL(ENHJPOHLMCL,iVar4,(MethodInfo *)0x0);
                IGFGDDANEPE__DOOKHLFKCAI(ENHJPOHLMCL,-1,(MethodInfo *)0x0);
              }
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar8 != (Roster_o *)0x0) {
              iVar4 = Roster__EOEAKGGDBFH(pAVar8,(MethodInfo *)0x0);
              IGFGDDANEPE__GIIJHCLHFDK(ENHJPOHLMCL,iVar4,(MethodInfo *)0x0);
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar8 != (Roster_o *)0x0) {
                CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar8,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool PMOCJINLLOF(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x33B5A0C]
// GGHCLMEFIGO$$PMOCJINLLOF @ RVA 0x33B5A0C

bool GGHCLMEFIGO__PMOCJINLLOF(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  Il2CppObject *EIKFGOCCOIE;
  bool bVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this;
  MethodInfo *extraout_x1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567d6f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567d6f = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this = NLPJLHOEAOE__GMJMEKENPAP(IKKAMAMLIKA,true,(MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    EIKFGOCCOIE = local_38.fields._current;
    if (!bVar1) {
      bVar1 = false;
      iVar2 = 5;
      goto LAB_034b5b28;
    }
    if ((PerkInfoItem_o *)local_38.fields._current == (PerkInfoItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (((PerkInfoItem_Fields *)((long)local_38.fields._current + 0x10))->OCABLLPNEGL != 0);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = GameUtils__DODJBGHCIHD((PerkInfoItem_o *)EIKFGOCCOIE,(MethodInfo *)0x0);
  iVar2 = 4;
LAB_034b5b28:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
  return (bool)(bVar1 & iVar2 == 4);
}


// ===== public bool JFPMAKABBOK(string KGLJICLJHEL)  [RVA 0x33B5BE4]
// GGHCLMEFIGO$$JFPMAKABBOK @ RVA 0x33B5BE4

bool GGHCLMEFIGO__JFPMAKABBOK(GGHCLMEFIGO_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  IGFGDDANEPE_o *__this_00;
  
  __this_00 = GGHCLMEFIGO__JNFIBDBHNOA(__this,KGLJICLJHEL,method);
  bVar1 = false;
  if (__this_00 != (IGFGDDANEPE_o *)0x0) {
    iVar2 = IGFGDDANEPE__LDJLMEFOMLG(__this_00,(MethodInfo *)0x0);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}


// ===== public bool JFPMAKABBOK(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x33B5CEC]
// GGHCLMEFIGO$$JFPMAKABBOK @ RVA 0x33B5CEC

bool GGHCLMEFIGO__JFPMAKABBOK(GGHCLMEFIGO_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  IGFGDDANEPE_o *__this_00;
  
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    bVar1 = false;
  }
  else {
    __this_00 = GGHCLMEFIGO__JNFIBDBHNOA
                          (__this,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,method);
    bVar1 = false;
    if (__this_00 != (IGFGDDANEPE_o *)0x0) {
      iVar2 = IGFGDDANEPE__LDJLMEFOMLG(__this_00,(MethodInfo *)0x0);
      bVar1 = 0 < iVar2;
    }
  }
  return bVar1;
}


// ===== public void PBCECINCKII()  [RVA 0x33B5D20]
// GGHCLMEFIGO$$PBCECINCKII @ RVA 0x33B5D20

void GGHCLMEFIGO__PBCECINCKII(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_AMJMGFCCAKN__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567d70 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<AMJMGFCCAKN>_Clear__);
    DAT_04567d70 = 1;
  }
  pSVar1 = (__this->fields).AAMHHEENLMC;
  if (pSVar1 != (System_Collections_Generic_List_AMJMGFCCAKN__o *)0x0) {
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


// ===== public void BOEFGIBCIIL(HOOAAGABMBL IKKAMAMLIKA, bool PKGIGLFCIBK)  [RVA 0x33B1DA8]
// GGHCLMEFIGO$$BOEFGIBCIIL @ RVA 0x33B1DA8

void GGHCLMEFIGO__BOEFGIBCIIL
               (GGHCLMEFIGO_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,bool PKGIGLFCIBK,MethodInfo *method
               )

{
  bool bVar1;
  ModelParameters_o *pPVar2;
  KBCOFHAJOCK_o *__this_00;
  PerkInfoItem_o *pHVar3;
  IGFGDDANEPE_o *__this_01;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar4;
  System_Action_IGFGDDANEPE__o **ppSVar5;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_02;
  System_Predicate_HEFOANCOHDC__o **ppSVar6;
  GGHCLMEFIGO_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  HOOAAGABMBL_o *method_01;
  MethodInfo *in_x4;
  MethodInfo *in_x5;
  Roster_o *pAVar7;
  Item_o *pDVar8;
  System_Collections_Generic_List_IGFGDDANEPE__o **ppSVar9;
  System_String_o **ppSVar10;
  System_Predicate_HEFOANCOHDC__o *match;
  System_Action_IGFGDDANEPE__o *action;
  
                    /* try { // try from 034b1dac to 035b1e27 has its CatchHandler @ 034b2154 */
  if ((DAT_04567d71 & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
                    /* catch() { ... } // from try @ 034b1900 with catch @ 034b1e28
                       try { // try from 034b1e28 to 035b1e7b has its CatchHandler @ 034afe4c */
    FUN_01bab630(&Method_GGHCLMEFIGO_<>c_KKDBINDGHEG__);
                    /* catch() { ... } // from try @ 034b18f8 with catch @ 034b1e2c */
    FUN_01bab630(&Method_GGHCLMEFIGO_<>c_OPBMLHNDCJB__);
                    /* catch() { ... } // from try @ 034b18f0 with catch @ 034b1e38 */
    FUN_01bab630(&GGHCLMEFIGO_<>c_TypeInfo);
                    /* catch() { ... } // from try @ 034b1928 with catch @ 034b1e44 */
                    /* catch() { ... } // from try @ 034b0428 with catch @ 034b1e48 */
                    /* catch() { ... } // from try @ 034b0414 with catch @ 034b1e4c */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch() { ... } // from try @ 034b0964 with catch @ 034b1e50 */
                    /* catch() { ... } // from try @ 034b0d94 with catch @ 034b1e54 */
    DAT_04567d71 = 1;
  }
                    /* catch() { ... } // from try @ 034b06d8 with catch @ 034b1e58 */
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    return;
  }
                    /* catch() { ... } // from try @ 034b0908 with catch @ 034b1e5c */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034b1e7c to 035b1e7f has its CatchHandler @ 034b1e8c */
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 034b1e7c with catch @ 034b1e8c */
    DAT_04565b7d = '\x01';
  }
                    /* try { // try from 034b1e9c to 035b1f17 has its CatchHandler @ 034b2154 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar7 != (Roster_o *)0x0) &&
     (pPVar2 = (pAVar7->fields).MFLNIMCFPDK, pPVar2 != (ModelParameters_o *)0x0)) {
    method_01 = IKKAMAMLIKA;
    (*(pPVar2->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
              (pPVar2,(IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,IKKAMAMLIKA,
               (pPVar2->klass->vtable)._9_CGNPHPDFKJG.method);
    if (!PKGIGLFCIBK) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 034b0d38 with catch @ 034b1f18
                       try { // try from 034b1f18 to 035b1f2f has its CatchHandler @ 034afe4c */
    pDVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if ((pDVar8 != (Item_o *)0x0) &&
       (__this_00 = (pDVar8->fields)._GMODBKFPHPN_k__BackingField, __this_00 != (KBCOFHAJOCK_o *)0x0
       )) {
                    /* try { // try from 034b1f30 to 035b1f33 has its CatchHandler @ 034b1f44 */
      pHVar3 = KBCOFHAJOCK__CFIKBKJLKPH(__this_00,(MethodInfo *)0x0);
      __this_01 = GGHCLMEFIGO__JNFIBDBHNOA
                            (__this,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                             (MethodInfo *)method_01);
                    /* catch() { ... } // from try @ 034b1f30 with catch @ 034b1f44 */
      method_00 = extraout_x1;
                    /* try { // try from 034b1f54 to 035b1fcf has its CatchHandler @ 034b2154 */
      if ((__this_01 != (IGFGDDANEPE_o *)0x0) &&
         (bVar1 = IGFGDDANEPE__NJEADKGGIJH(__this_01,(MethodInfo *)0x0), method_00 = extraout_x1_00,
         bVar1)) {
        pSVar4 = GGHCLMEFIGO__IAHEDEMPGPE
                           (__this,(IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                            StringLiteral_1/*""*/,true,in_x4);
        if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo);
        }
        action = GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__27_0;
        if (action == (System_Action_IGFGDDANEPE__o *)0x0) {
          if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo);
          }
          action = (System_Action_IGFGDDANEPE__o *)
                   thunk_FUN_01bda818(System_Action<IGFGDDANEPE>_TypeInfo);
                    /* catch() { ... } // from try @ 034b067c with catch @ 034b1fd0
                       try { // try from 034b1fd0 to 035b1fe7 has its CatchHandler @ 034afe4c */
                    /* try { // try from 034b1fe8 to 035b1feb has its CatchHandler @ 034b1ff8 */
          System_Action<object>___ctor();
          ppSVar5 = &GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__27_0;
                    /* catch() { ... } // from try @ 034b1fe8 with catch @ 034b1ff8 */
          *ppSVar5 = action;
          thunk_FUN_01c20e04(ppSVar5,action);
        }
        if (pSVar4 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) goto LAB_034b2230;
                    /* try { // try from 034b2008 to 035b2083 has its CatchHandler @ 034b2154 */
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)pSVar4,(System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
        IGFGDDANEPE__OEMBIADDDEE(__this_01,true,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar7 == (Roster_o *)0x0) goto LAB_034b2230;
                    /* catch() { ... } // from try @ 034b18e8 with catch @ 034b2084
                       try { // try from 034b2084 to 035b20ab has its CatchHandler @ 034afe4c */
                    /* catch() { ... } // from try @ 034b03b4 with catch @ 034b2088 */
        Roster__JJOKIGNAPNH(pAVar7,__this_01,true,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b0358 with catch @ 034b208c */
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
                    /* try { // try from 034b20ac to 035b20af has its CatchHandler @ 034b20c0 */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 034b20ac with catch @ 034b20c0 */
        if (pAVar7 == (Roster_o *)0x0) goto LAB_034b2230;
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar7,false,(MethodInfo *)0x0);
        method_00 = extraout_x1_01;
      }
                    /* try { // try from 034b20d0 to 035b213f has its CatchHandler @ 034b2154 */
      bVar1 = GGHCLMEFIGO__PMOCJINLLOF(IKKAMAMLIKA,method_00);
      __this_03 = (GGHCLMEFIGO_o *)(ulong)bVar1;
      if (bVar1) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = NLPJLHOEAOE__GMJMEKENPAP(IKKAMAMLIKA,true,(MethodInfo *)0x0);
        if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo);
        }
        match = GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__27_1;
        if (match == (System_Predicate_HEFOANCOHDC__o *)0x0) {
          if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo);
          }
                    /* try { // try from 034b2140 to 035b214b has its CatchHandler @ 034afe4c */
                    /* try { // try from 034b214c to 035b2153 has its CatchHandler @ 034b2154 */
                    /* catch() { ... } // from try @ 034b1bb4 with catch @ 034b2154
                       catch() { ... } // from try @ 034b1cc4 with catch @ 034b2154
                       catch() { ... } // from try @ 034b1dac with catch @ 034b2154
                       catch() { ... } // from try @ 034b1e9c with catch @ 034b2154
                       catch() { ... } // from try @ 034b1f54 with catch @ 034b2154
                       catch() { ... } // from try @ 034b2008 with catch @ 034b2154
                       catch() { ... } // from try @ 034b20d0 with catch @ 034b2154
                       catch() { ... } // from try @ 034b214c with catch @ 034b2154 */
          match = (System_Predicate_HEFOANCOHDC__o *)
                  thunk_FUN_01bda818(System_Predicate<PerkInfoItem>_TypeInfo);
          System_Predicate<object>___ctor();
          ppSVar6 = &GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__27_1;
          *ppSVar6 = match;
                    /* try { // try from 034b2184 to 035b257b has its CatchHandler @ 034b2184
                       catch() { ... } // from try @ 034b2184 with catch @ 034b2184
                       catch() { ... } // from try @ 034b25e8 with catch @ 034b2184
                       catch() { ... } // from try @ 034b2624 with catch @ 034b2184
                       catch() { ... } // from try @ 034b2630 with catch @ 034b2184
                       catch() { ... } // from try @ 034b2668 with catch @ 034b2184
                       catch() { ... } // from try @ 034b2698 with catch @ 034b2184 */
          thunk_FUN_01c20e04(ppSVar6,match);
        }
        if (__this_02 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_034b2230;
        __this_03 = (GGHCLMEFIGO_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_02,
                               (System_Predicate_T__o *)match,
                               Method_System_Collections_Generic_List<PerkInfoItem>_Find__);
        if (__this_03 == (GGHCLMEFIGO_o *)0x0) {
          ppSVar9 = (System_Collections_Generic_List_IGFGDDANEPE__o **)
                    string_TypeInfo->static_fields;
        }
        else {
          ppSVar9 = &(__this_03->fields).JAKMLPIMLCK;
        }
        pSVar4 = *ppSVar9;
      }
      else {
        pSVar4 = (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0;
      }
      if (pHVar3 == (PerkInfoItem_o *)0x0) {
        ppSVar10 = &string_TypeInfo->static_fields->Empty;
      }
      else {
        ppSVar10 = &(pHVar3->fields).JIJLBFGKNJK;
      }
      if (__this != (GGHCLMEFIGO_o *)0x0) {
        GGHCLMEFIGO__HCGGFBAOINE(__this_03,*ppSVar10,true,(System_String_o *)pSVar4,true,in_x5);
        return;
      }
    }
  }
LAB_034b2230:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x33B617C]
// GGHCLMEFIGO$$RandomizeObscuredVars @ RVA 0x33B617C

void GGHCLMEFIGO__RandomizeObscuredVars(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  System_Action_IGFGDDANEPE__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  System_Action_IGFGDDANEPE__o *action;
  
  if ((DAT_04567d72 & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    FUN_01bab630(&Method_GGHCLMEFIGO_<>c_DAHGFFNOEMO__);
    FUN_01bab630(&GGHCLMEFIGO_<>c_TypeInfo);
    DAT_04567d72 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).DPOPJKJLDEE;
  if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__45_0;
  if (action == (System_Action_IGFGDDANEPE__o *)0x0) {
    if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo,method);
    }
    action = (System_Action_IGFGDDANEPE__o *)thunk_FUN_01bda818(System_Action<IGFGDDANEPE>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__45_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JIMFACKOHOP(IGFGDDANEPE KEFILECBPMF)  [RVA 0x33B6280]
// GGHCLMEFIGO$$JIMFACKOHOP @ RVA 0x33B6280

void GGHCLMEFIGO__JIMFACKOHOP(GGHCLMEFIGO_o *__this,IGFGDDANEPE_o *KEFILECBPMF,MethodInfo *method)

{
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  
  if ((DAT_04567d73 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
    DAT_04567d73 = 1;
  }
  __this_00 = (__this->fields).PMNIDGNGCCG;
  if (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)KEFILECBPMF,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DDILKJMMGGE(int PIDMGHLCFAJ)  [RVA 0x33B62D8]
// GGHCLMEFIGO$$DDILKJMMGGE @ RVA 0x33B62D8

void GGHCLMEFIGO__DDILKJMMGGE(GGHCLMEFIGO_o *__this,int32_t PIDMGHLCFAJ,MethodInfo *method)

{
  Il2CppObject *IKKAMAMLIKA;
  bool bVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  Item_o *pDVar2;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567d74 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567d74 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar2 != (Item_o *)0x0) &&
     (__this_00 = (pDVar2->fields).DIGBEFKAPHM,
     __this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      IKKAMAMLIKA = local_60.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
        return;
      }
      if ((HOOAAGABMBL_o *)local_60.fields._current == (HOOAAGABMBL_o *)0x0) break;
      if (((HOOAAGABMBL_Fields *)((long)local_60.fields._current + 0x10))->
          _ILHGDFFOGHP_k__BackingField != false) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pDVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (pDVar2 == (Item_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Item__MDBOKHFIOIJ
                  (pDVar2,(HOOAAGABMBL_o *)IKKAMAMLIKA,true,PIDMGHLCFAJ,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IGFGDDANEPE FIFBDNADAAL(IGFGDDANEPE CJNHFNHJHPE, bool DPGBNAHAOBN = False)  [RVA 0x33B6504]
// GGHCLMEFIGO$$FIFBDNADAAL @ RVA 0x33B6504

IGFGDDANEPE_o *
GGHCLMEFIGO__FIFBDNADAAL
          (GGHCLMEFIGO_o *__this,IGFGDDANEPE_o *CJNHFNHJHPE,bool DPGBNAHAOBN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t index;
  GGHCLMEFIGO_PMHNKJJDBAF_o *__this_00;
  System_Predicate_T__o *match;
  IGFGDDANEPE_o **ppIVar3;
  int64_t iVar4;
  IGFGDDANEPE_o *pIVar5;
  IGFGDDANEPE_array *pIVar6;
  MethodInfo_26E4DAC *method_00;
  GGHCLMEFIGO_PMHNKJJDBAF_Fields *pGVar7;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar8;
  
  if ((DAT_04567d75 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_FindIndex__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_set_Item__);
    FUN_01bab630(&Method_GGHCLMEFIGO_PMHNKJJDBAF_FJANFFAGFAP__);
    FUN_01bab630(&GGHCLMEFIGO_PMHNKJJDBAF_TypeInfo);
    FUN_01bab630(&System_Predicate<IGFGDDANEPE>_TypeInfo);
    DAT_04567d75 = 1;
  }
  __this_00 = (GGHCLMEFIGO_PMHNKJJDBAF_o *)thunk_FUN_01bda818(GGHCLMEFIGO_PMHNKJJDBAF_TypeInfo);
  GGHCLMEFIGO_PMHNKJJDBAF___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (GGHCLMEFIGO_PMHNKJJDBAF_o *)0x0) goto LAB_034b677c;
  pGVar7 = &__this_00->fields;
  pGVar7->value = CJNHFNHJHPE;
  thunk_FUN_01c20e04(pGVar7,CJNHFNHJHPE);
  lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
  pSVar8 = (__this->fields).DPOPJKJLDEE;
  if (DPGBNAHAOBN) {
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<IGFGDDANEPE>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar8 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) goto LAB_034b677c;
    index = System_Collections_Generic_List<object>__FindIndex
                      ((System_Collections_Generic_List_object__o *)pSVar8,match,
                       Method_System_Collections_Generic_List<IGFGDDANEPE>_FindIndex__);
    lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
    pSVar8 = (__this->fields).DPOPJKJLDEE;
    if (pSVar8 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) goto LAB_034b677c;
    pIVar5 = pGVar7->value;
    if (index < 0) {
      pIVar6 = (pSVar8->fields)._items;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (pIVar6 == (IGFGDDANEPE_array *)0x0) goto LAB_034b677c;
      uVar1 = (pSVar8->fields)._size;
      if ((uint)pIVar6->max_length <= uVar1) {
        method_00 = *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        goto LAB_034b66e8;
      }
      (pSVar8->fields)._size = uVar1 + 1;
      ppIVar3 = pIVar6->m_Items + (int)uVar1;
      *ppIVar3 = pIVar5;
LAB_034b66c8:
      thunk_FUN_01c20e04(ppIVar3,pIVar5);
    }
    else {
      System_Collections_Generic_List<object>__set_Item
                ((System_Collections_Generic_List_object__o *)pSVar8,index,(Il2CppObject *)pIVar5,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_set_Item__);
    }
  }
  else {
    if (pSVar8 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) goto LAB_034b677c;
    pIVar5 = pGVar7->value;
    pIVar6 = (pSVar8->fields)._items;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (pIVar6 == (IGFGDDANEPE_array *)0x0) goto LAB_034b677c;
    uVar1 = (pSVar8->fields)._size;
    if (uVar1 < (uint)pIVar6->max_length) {
      (pSVar8->fields)._size = uVar1 + 1;
      ppIVar3 = pIVar6->m_Items + (int)uVar1;
      *ppIVar3 = pIVar5;
      goto LAB_034b66c8;
    }
    method_00 = *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
LAB_034b66e8:
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pIVar5,method_00)
    ;
  }
  if (pGVar7->value != (IGFGDDANEPE_o *)0x0) {
    iVar4 = IGFGDDANEPE__OMMIKNKEKJN(pGVar7->value,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
    if (iVar4 < 1) {
LAB_034b6764:
      return pGVar7->value;
    }
    pSVar8 = (__this->fields).PMNIDGNGCCG;
    if (pSVar8 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
      pIVar5 = pGVar7->value;
      pIVar6 = (pSVar8->fields)._items;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (pIVar6 != (IGFGDDANEPE_array *)0x0) {
        uVar1 = (pSVar8->fields)._size;
        if (uVar1 < (uint)pIVar6->max_length) {
          (pSVar8->fields)._size = uVar1 + 1;
          pIVar6->m_Items[(int)uVar1] = pIVar5;
          thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar1);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pIVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_034b6764;
      }
    }
  }
LAB_034b677c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EDEALNMENKI()  [RVA 0x33B6780]
// GGHCLMEFIGO$$EDEALNMENKI @ RVA 0x33B6780

void GGHCLMEFIGO__EDEALNMENKI(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *__this_00;
  bool bVar4;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_02;
  int64_t iVar5;
  GGHCLMEFIGO_OENHIHPIEPH_o *__this_03;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  System_Object_array *pSVar6;
  long lVar7;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567d76 & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_GGHCLMEFIGO_JIMFACKOHOP__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<List<IGFGDDANEPE>>_Invoke__);
    DAT_04567d76 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  lVar7 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
  __this_01 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_01,Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  __this_02 = (__this->fields).PMNIDGNGCCG;
  if (__this_02 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_02,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    bVar2 = false;
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                             ), __this_00 = local_80.fields._current, bVar4) {
      if ((IGFGDDANEPE_o *)local_80.fields._current == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar5 = IGFGDDANEPE__OMMIKNKEKJN((IGFGDDANEPE_o *)local_80.fields._current,(MethodInfo *)0x0);
      lVar3 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
      if (iVar5 < 1) {
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = __this_00;
          thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,__this_00);
        }
        else {
          in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_01,__this_00,(MethodInfo_26E4DAC *)in_x2);
        }
      }
      else {
        iVar5 = IGFGDDANEPE__OMMIKNKEKJN((IGFGDDANEPE_o *)__this_00,(MethodInfo *)0x0);
        if (iVar5 <= lVar7) {
          GGHCLMEFIGO__AFPDMLCLGJM(__this,(IGFGDDANEPE_o *)__this_00,in_x2);
          lVar3 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pSVar6->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pSVar6->m_Items[(int)uVar1] = __this_00;
            bVar2 = true;
            thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,__this_00);
          }
          else {
            bVar2 = true;
            in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_01,__this_00,(MethodInfo_26E4DAC *)in_x2);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (__this_01->fields)._size) {
        if (bVar2) {
          __this_03 = (__this->fields).LNPBODFAFII;
          if (__this_03 == (GGHCLMEFIGO_OENHIHPIEPH_o *)0x0) goto LAB_034b6ae8;
          UnityEngine_Events_UnityEvent<object>__Invoke
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_03,(Il2CppObject *)__this_01,
                     Method_UnityEngine_Events_UnityEvent<List<IGFGDDANEPE>>_Invoke__);
        }
        action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<IGFGDDANEPE>_TypeInfo);
        System_Action<object>___ctor();
        System_Collections_Generic_List<object>__ForEach
                  (__this_01,action,Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
      }
      return;
    }
  }
LAB_034b6ae8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<IGFGDDANEPE> HDEMCPNCIPJ()  [RVA 0x33B6B78]
// GGHCLMEFIGO$$HDEMCPNCIPJ @ RVA 0x33B6B78

System_Collections_Generic_List_IGFGDDANEPE__o *
GGHCLMEFIGO__HDEMCPNCIPJ(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  int64_t iVar4;
  MethodInfo *extraout_x1;
  IGFGDDANEPE_array *pIVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567d77 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    DAT_04567d77 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_IGFGDDANEPE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  __this_01 = (__this->fields).DPOPJKJLDEE;
  if (__this_01 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      item = local_50.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
        return __this_00;
      }
      if ((IGFGDDANEPE_o *)local_50.fields._current == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar4 = IGFGDDANEPE__OMMIKNKEKJN((IGFGDDANEPE_o *)local_50.fields._current,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
    } while (iVar4 < 1);
    if (__this_00 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pIVar5 == (IGFGDDANEPE_array *)0x0) break;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pIVar5->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pIVar5->m_Items[(int)uVar1] = (IGFGDDANEPE_o *)item;
      thunk_FUN_01c20e04(pIVar5->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HNIHOIAMDPC(XmlNode CJLCPHBNHFK, int EBDDELGICGB)  [RVA 0x33B6D98]
// GGHCLMEFIGO$$HNIHOIAMDPC @ RVA 0x33B6D98

/* WARNING: Removing unreachable block (ram,0x034b705c) */

void GGHCLMEFIGO__HNIHOIAMDPC
               (GGHCLMEFIGO_o *__this,System_Xml_XmlNode_o *CJLCPHBNHFK,int32_t EBDDELGICGB,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *EBLABJMFLJB;
  IGFGDDANEPE_o *__this_00;
  GameUtils_c *pMVar4;
  MethodInfo *method_00;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_04567d78 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&IGFGDDANEPE_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567d78 = 1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar4 = GameUtils_TypeInfo;
  GameUtils_TypeInfo->static_fields->INAJMOOFPLG = true;
  if (CJLCPHBNHFK != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(CJLCPHBNHFK->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (CJLCPHBNHFK,(CJLCPHBNHFK->klass->vtable)._13_get_ChildNodes.method);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_034b6ed0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_034b6ed0:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
        pMVar4 = GameUtils_TypeInfo;
        if (plVar2 == (long *)0x0) break;
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_034b6fe8;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_034b6fd0;
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_034b6f30;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_034b6f30:
      EBLABJMFLJB = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (EBLABJMFLJB != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((EBLABJMFLJB->klass->_2).naturalAligment < bVar1) ||
           ((EBLABJMFLJB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(EBLABJMFLJB);
        }
      }
      __this_00 = (IGFGDDANEPE_o *)thunk_FUN_01bda818(IGFGDDANEPE_TypeInfo);
      method_00 = (MethodInfo *)0x0;
      IGFGDDANEPE___ctor(__this_00,EBLABJMFLJB,EBDDELGICGB,(MethodInfo *)0x0);
      GGHCLMEFIGO__FIFBDNADAAL(__this,__this_00,false,method_00);
    } while( true );
  }
  goto LAB_034b7018;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_034b6fd0:
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_034b7004;
    }
  }
LAB_034b6fe8:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_034b7004:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  pMVar4 = GameUtils_TypeInfo;
LAB_034b7018:
  if ((pMVar4->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar4 = GameUtils_TypeInfo;
  }
  pMVar4->static_fields->INAJMOOFPLG = false;
  return;
}


// ===== public void OMFGGNJKKAJ(IGFGDDANEPE IKKAMAMLIKA)  [RVA 0x33B7128]
// GGHCLMEFIGO$$OMFGGNJKKAJ @ RVA 0x33B7128

void GGHCLMEFIGO__OMFGGNJKKAJ(GGHCLMEFIGO_o *__this,IGFGDDANEPE_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  long *plVar3;
  
  if ((DAT_04567d79 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
    DAT_04567d79 = 1;
  }
  if (IKKAMAMLIKA == (IGFGDDANEPE_o *)0x0) {
    return;
  }
  pSVar1 = (__this->fields).DPOPJKJLDEE;
  if (pSVar1 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)IKKAMAMLIKA,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
    pSVar1 = (__this->fields).PMNIDGNGCCG;
    if (pSVar1 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)IKKAMAMLIKA,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
      pSVar1 = (__this->fields).MKPLNDNGHEB;
      if (pSVar1 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)IKKAMAMLIKA,
                   Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
        pSVar1 = (__this->fields).JAKMLPIMLCK;
        if (pSVar1 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)IKKAMAMLIKA
                     ,Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
          pSVar2 = (IKKAMAMLIKA->fields).DMLGJFCNNJF;
          if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
            return;
          }
          plVar3 = (long *)(*(pSVar2->klass->vtable)._12_get_ParentNode.methodPtr)
                                     (pSVar2,(pSVar2->klass->vtable)._12_get_ParentNode.method);
          if (plVar3 == (long *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x034b71e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x2c8))
                    (plVar3,(IKKAMAMLIKA->fields).DMLGJFCNNJF,*(undefined8 *)(*plVar3 + 0x2d0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IAKHIFOFLGO()  [RVA 0x33B71F8]
// GGHCLMEFIGO$$IAKHIFOFLGO @ RVA 0x33B71F8

void GGHCLMEFIGO__IAKHIFOFLGO(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *__this_00;
  bool bVar4;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_02;
  int64_t iVar5;
  GGHCLMEFIGO_OENHIHPIEPH_o *__this_03;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  System_Object_array *pSVar6;
  long lVar7;
  System_Collections_Generic_List_Enumerator_T__o SStack_98;
  System_Collections_Generic_List_Enumerator_T__o SStack_80;
  
  if ((DAT_04567d76 & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_GGHCLMEFIGO_JIMFACKOHOP__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<List<IGFGDDANEPE>>_Invoke__);
    DAT_04567d76 = 1;
    method = extraout_x1;
  }
  SStack_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_80.fields._index = 0;
  SStack_80.fields._version = 0;
  SStack_80.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  lVar7 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
  __this_01 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_01,Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  __this_02 = (__this->fields).PMNIDGNGCCG;
  if (__this_02 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&SStack_98,(System_Collections_Generic_List_object__o *)__this_02,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    bVar2 = false;
    SStack_80.fields._index = SStack_98.fields._index;
    SStack_80.fields._version = SStack_98.fields._version;
    SStack_80.fields._list = SStack_98.fields._list;
    SStack_80.fields._current = SStack_98.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&SStack_80,
                              Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                             ), __this_00 = SStack_80.fields._current, bVar4) {
      if ((IGFGDDANEPE_o *)SStack_80.fields._current == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar5 = IGFGDDANEPE__OMMIKNKEKJN((IGFGDDANEPE_o *)SStack_80.fields._current,(MethodInfo *)0x0)
      ;
      lVar3 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
      if (iVar5 < 1) {
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = __this_00;
          thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,__this_00);
        }
        else {
          in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_01,__this_00,(MethodInfo_26E4DAC *)in_x2);
        }
      }
      else {
        iVar5 = IGFGDDANEPE__OMMIKNKEKJN((IGFGDDANEPE_o *)__this_00,(MethodInfo *)0x0);
        if (iVar5 <= lVar7) {
          GGHCLMEFIGO__AFPDMLCLGJM(__this,(IGFGDDANEPE_o *)__this_00,in_x2);
          lVar3 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pSVar6->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pSVar6->m_Items[(int)uVar1] = __this_00;
            bVar2 = true;
            thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,__this_00);
          }
          else {
            bVar2 = true;
            in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_01,__this_00,(MethodInfo_26E4DAC *)in_x2);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&SStack_80,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (__this_01->fields)._size) {
        if (bVar2) {
          __this_03 = (__this->fields).LNPBODFAFII;
          if (__this_03 == (GGHCLMEFIGO_OENHIHPIEPH_o *)0x0) goto LAB_034b6ae8;
          UnityEngine_Events_UnityEvent<object>__Invoke
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_03,(Il2CppObject *)__this_01,
                     Method_UnityEngine_Events_UnityEvent<List<IGFGDDANEPE>>_Invoke__);
        }
        action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<IGFGDDANEPE>_TypeInfo);
        System_Action<object>___ctor();
        System_Collections_Generic_List<object>__ForEach
                  (__this_01,action,Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
      }
      return;
    }
  }
LAB_034b6ae8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HOOJKMPPCMC(AMJMGFCCAKN DLNPKEIJGGG, bool KGICMAKPOOA = True)  [RVA 0x33B71FC]
// GGHCLMEFIGO$$HOOJKMPPCMC @ RVA 0x33B71FC

void GGHCLMEFIGO__HOOJKMPPCMC
               (GGHCLMEFIGO_o *__this,AMJMGFCCAKN_o *DLNPKEIJGGG,bool KGICMAKPOOA,MethodInfo *method
               )

{
  uint uVar1;
  long lVar2;
  GGHCLMEFIGO_AHCHAFNJKIH_o *__this_00;
  System_Collections_Generic_List_AMJMGFCCAKN__o *__this_01;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  PKHMIGFEJCL_ELHOKIPELBO_o *pPVar4;
  Roster_o *__this_02;
  AMJMGFCCAKN_array *pAVar5;
  IGFGDDANEPE_o *pIVar6;
  GGLKHCAIGDI_o *pGVar7;
  PKHMIGFEJCL_o *pPVar8;
  
  if ((DAT_04567d7a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AMJMGFCCAKN>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<AMJMGFCCAKN>_Invoke__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567d7a = 1;
  }
  __this_00 = (__this->fields).MBIEGCODNMB;
  if (__this_00 == (GGHCLMEFIGO_AHCHAFNJKIH_o *)0x0) goto LAB_034b73f4;
  UnityEngine_Events_UnityEvent<object>__Invoke
            ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)DLNPKEIJGGG,
             Method_UnityEngine_Events_UnityEvent<AMJMGFCCAKN>_Invoke__);
  lVar2 = Method_System_Collections_Generic_List<AMJMGFCCAKN>_Add__;
  if (KGICMAKPOOA) {
    __this_01 = (__this->fields).AAMHHEENLMC;
    if (__this_01 == (System_Collections_Generic_List_AMJMGFCCAKN__o *)0x0) goto LAB_034b73f4;
    pAVar5 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pAVar5 == (AMJMGFCCAKN_array *)0x0) goto LAB_034b73f4;
    uVar1 = (__this_01->fields)._size;
    if (uVar1 < (uint)pAVar5->max_length) {
      (__this_01->fields)._size = uVar1 + 1;
      pAVar5->m_Items[(int)uVar1] = DLNPKEIJGGG;
      thunk_FUN_01c20e04(pAVar5->m_Items + (int)uVar1,DLNPKEIJGGG);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)DLNPKEIJGGG,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((((pNVar3 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
         (pPVar8 = (pNVar3->fields).QuestParameters, pPVar8 == (PKHMIGFEJCL_o *)0x0)) ||
        (DLNPKEIJGGG == (AMJMGFCCAKN_o *)0x0)) ||
       ((pIVar6 = (DLNPKEIJGGG->fields).MNELBNHIKGH, pIVar6 == (IGFGDDANEPE_o *)0x0 ||
        (pPVar4 = (pPVar8->fields).BJJFDMHOBNB, pPVar4 == (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0))))
    goto LAB_034b73f4;
    (pPVar4->fields).BMGMGAAPFGO = (pIVar6->fields).NPFMOEOIEKM;
    thunk_FUN_01c20e04();
    pGVar7 = (DLNPKEIJGGG->fields).PHAGOJCOMPN;
    if ((pGVar7 == (GGLKHCAIGDI_o *)0x0) ||
       (pPVar4 = (pPVar8->fields).BJJFDMHOBNB, pPVar4 == (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0))
    goto LAB_034b73f4;
    (pPVar4->fields).JDKKCDBDNLB = (pGVar7->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04();
    pPVar4 = (pPVar8->fields).BJJFDMHOBNB;
    if (pPVar4 == (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0) goto LAB_034b73f4;
    (pPVar4->fields).HDGEOJGHEOE = 0;
    (pPVar4->fields).GOKNIOJFFBG = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04();
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar3 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_034b73f4;
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar3,0xe,(MethodInfo *)0x0);
  }
  else if (DLNPKEIJGGG == (AMJMGFCCAKN_o *)0x0) goto LAB_034b73f4;
  pIVar6 = (DLNPKEIJGGG->fields).MNELBNHIKGH;
  if (pIVar6 != (IGFGDDANEPE_o *)0x0) {
    IGFGDDANEPE__ECPOIIMILFO(pIVar6,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_02 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_02,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_034b73f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OHLEKAMFNBE(HOOAAGABMBL IKKAMAMLIKA, bool PKGIGLFCIBK)  [RVA 0x33B73F8]
// GGHCLMEFIGO$$OHLEKAMFNBE @ RVA 0x33B73F8

void GGHCLMEFIGO__OHLEKAMFNBE
               (GGHCLMEFIGO_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,bool PKGIGLFCIBK,MethodInfo *method
               )

{
  bool bVar1;
  IGFGDDANEPE_o *__this_00;
  ModelParameters_o *pPVar2;
  IGFGDDANEPE_o *__this_01;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_02;
  System_Predicate_HEFOANCOHDC__o **ppSVar3;
  GGHCLMEFIGO_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar4;
  HOOAAGABMBL_o *method_01;
  MethodInfo *in_x5;
  Roster_o *pAVar5;
  System_Collections_Generic_List_IGFGDDANEPE__o **ppSVar6;
  System_String_o *pSVar7;
  System_Predicate_HEFOANCOHDC__o *match;
  
  pMVar4 = (MethodInfo *)(ulong)PKGIGLFCIBK;
  if ((DAT_04567d7b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Find__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&Method_GGHCLMEFIGO_<>c_GBBPKNIIDMM__);
    FUN_01bab630(&GGHCLMEFIGO_<>c_TypeInfo);
    DAT_04567d7b = 1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    pSVar7 = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = GameUtils__OKOJOGAHMFP(pSVar7,(MethodInfo *)0x0);
    __this_00 = GGHCLMEFIGO__JNFIBDBHNOA(__this,pSVar7,pMVar4);
    if (__this_00 == (IGFGDDANEPE_o *)0x0) {
      return;
    }
    if ((__this_00->fields).PCBECBEFJOI == (HOOAAGABMBL_o *)0x0) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((pAVar5 == (Roster_o *)0x0) ||
        (method_01 = (__this_00->fields).PCBECBEFJOI, method_01 == (HOOAAGABMBL_o *)0x0)) ||
       (pPVar2 = (pAVar5->fields).MFLNIMCFPDK, pPVar2 == (ModelParameters_o *)0x0)) goto LAB_034b775c;
    (*(pPVar2->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
              (pPVar2,(method_01->fields)._GMPAEDFIIHF_k__BackingField,method_01,
               (pPVar2->klass->vtable)._9_CGNPHPDFKJG.method);
    if (!PKGIGLFCIBK) {
      return;
    }
    bVar1 = GGHCLMEFIGO__PMOCJINLLOF(IKKAMAMLIKA,method_00);
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA
                          (__this,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                           (MethodInfo *)method_01);
    if (__this_01 == (IGFGDDANEPE_o *)0x0) {
      pMVar4 = extraout_x1;
      if (!bVar1) {
        return;
      }
    }
    else {
      IGFGDDANEPE__OEMBIADDDEE(__this_01,false,(MethodInfo *)0x0);
      IGFGDDANEPE__OEMBIADDDEE(__this_00,true,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar5 == (Roster_o *)0x0) goto LAB_034b775c;
      Roster__JJOKIGNAPNH(pAVar5,__this_00,true,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar5 == (Roster_o *)0x0) goto LAB_034b775c;
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar5,false,(MethodInfo *)0x0);
      pMVar4 = extraout_x1_00;
      if (!bVar1 || __this_01 == (IGFGDDANEPE_o *)0x0) {
        return;
      }
    }
    bVar1 = GGHCLMEFIGO__PMOCJINLLOF(IKKAMAMLIKA,pMVar4);
    if (!bVar1) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = NLPJLHOEAOE__GMJMEKENPAP(IKKAMAMLIKA,true,(MethodInfo *)0x0);
      if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo);
      }
      match = GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__26_0;
      if (match == (System_Predicate_HEFOANCOHDC__o *)0x0) {
        if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo);
        }
        match = (System_Predicate_HEFOANCOHDC__o *)
                thunk_FUN_01bda818(System_Predicate<PerkInfoItem>_TypeInfo);
        System_Predicate<object>___ctor();
        ppSVar3 = &GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__26_0;
        *ppSVar3 = match;
        thunk_FUN_01c20e04(ppSVar3,match);
      }
      if (__this_02 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
        __this_03 = (GGHCLMEFIGO_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_02,
                               (System_Predicate_T__o *)match,
                               Method_System_Collections_Generic_List<PerkInfoItem>_Find__);
        if (__this_03 == (GGHCLMEFIGO_o *)0x0) {
          ppSVar6 = (System_Collections_Generic_List_IGFGDDANEPE__o **)
                    string_TypeInfo->static_fields;
        }
        else {
          ppSVar6 = &(__this_03->fields).JAKMLPIMLCK;
        }
        GGHCLMEFIGO__HCGGFBAOINE
                  (__this_03,(System_String_o *)*ppSVar6,true,(System_String_o *)0x0,false,in_x5);
        return;
      }
LAB_034b775c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void BEEIOBJADLA()  [RVA 0x33B7760]
// GGHCLMEFIGO$$BEEIOBJADLA @ RVA 0x33B7760

void GGHCLMEFIGO__BEEIOBJADLA(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567d7c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    DAT_04567d7c = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DPOPJKJLDEE;
  if (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      if (!bVar1) break;
      GGHCLMEFIGO__FKOBJFLAANL
                ((GGHCLMEFIGO_o *)(ulong)bVar1,(IGFGDDANEPE_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void NFDLCAPILII(List<HOOAAGABMBL> GHAAKPDHIJJ)  [RVA 0x33B789C]
// GGHCLMEFIGO$$NFDLCAPILII @ RVA 0x33B789C

void GGHCLMEFIGO__NFDLCAPILII
               (GGHCLMEFIGO_o *__this,System_Collections_Generic_List_HOOAAGABMBL__o *GHAAKPDHIJJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *CJNHFNHJHPE;
  bool bVar3;
  IGFGDDANEPE_o *__this_00;
  System_String_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Roster_o *pAVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar5;
  HOOAAGABMBL_array *pHVar6;
  ModelParameters_o *pPVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567d7d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_5235/*"Decorate"*/);
    DAT_04567d7d = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar4 != (Roster_o *)0x0) {
    pPVar7 = (pAVar4->fields).MFLNIMCFPDK;
    if (pPVar7 == (ModelParameters_o *)0x0) {
      return;
    }
    pSVar5 = (pPVar7->fields).IIBBDKMIPOF;
    if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      uVar1 = (pSVar5->fields)._size;
      method_01 = (MethodInfo *)(ulong)uVar1;
      (pSVar5->fields)._size = 0;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (0 < (int)uVar1) {
        System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,uVar1,(MethodInfo *)0x0);
      }
      if (GHAAKPDHIJJ != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_88,(System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
                   Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
        local_70.fields._index = local_88.fields._index;
        local_70.fields._version = local_88.fields._version;
        local_70.fields._list = local_88.fields._list;
        local_70.fields._current = local_88.fields._current;
        while( true ) {
          do {
            do {
              do {
                bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_70,
                                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                                  );
                CJNHFNHJHPE = local_70.fields._current;
                if (!bVar3) {
                  System_Collections_Generic_List_Enumerator<object>__Dispose
                            (&local_70,
                             Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__
                            );
                  GGHCLMEFIGO__MJGMEEKMAOE(__this,method_00);
                  return;
                }
              } while (((HOOAAGABMBL_o *)local_70.fields._current == (HOOAAGABMBL_o *)0x0) ||
                      (__this_00 = GGHCLMEFIGO__JNFIBDBHNOA
                                             (__this,((HOOAAGABMBL_Fields *)
                                                     ((long)local_70.fields._current + 0x10))->
                                                     _COIPKAKHDFP_k__BackingField,method_01),
                      __this_00 == (IGFGDDANEPE_o *)0x0));
              method_01 = (MethodInfo *)0x0;
              IGFGDDANEPE__CLIDHHJIGOC(__this_00,(HOOAAGABMBL_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
            } while ((__this_00->fields).OFIKEBGDMBE == false);
            __this_01 = ((HOOAAGABMBL_Fields *)((long)CJNHFNHJHPE + 0x10))->
                        _GMPAEDFIIHF_k__BackingField;
            if (__this_01 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            method_01 = (MethodInfo *)0x0;
            bVar3 = System_String__Equals(__this_01,StringLiteral_5235/*"Decorate"*/,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
          } while (!bVar3);
          pSVar5 = (pPVar7->fields).IIBBDKMIPOF;
          if (pSVar5 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar6 = (pSVar5->fields)._items;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pHVar6 == (HOOAAGABMBL_array *)0x0) break;
          uVar1 = (pSVar5->fields)._size;
          if (uVar1 < (uint)pHVar6->max_length) {
            (pSVar5->fields)._size = uVar1 + 1;
            pHVar6->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)CJNHFNHJHPE;
            thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,CJNHFNHJHPE);
          }
          else {
            method_01 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,CJNHFNHJHPE,
                       (MethodInfo_26E4DAC *)method_01);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IGFGDDANEPE JNFIBDBHNOA(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x33A2BC4]
// GGHCLMEFIGO$$JNFIBDBHNOA @ RVA 0x33A2BC4

IGFGDDANEPE_o *
GGHCLMEFIGO__JNFIBDBHNOA(GGHCLMEFIGO_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  IGFGDDANEPE_o *pIVar1;
  
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    pIVar1 = GGHCLMEFIGO__JNFIBDBHNOA
                       (__this,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,method);
    return pIVar1;
  }
  return (IGFGDDANEPE_o *)0x0;
}


// ===== public List<IGFGDDANEPE> IAHEDEMPGPE(string ACCIHBHMFPN, string NEADDGBNOKK = "", bool OPNIEBGMEPI = True)  [RVA 0x33B5D90]
// GGHCLMEFIGO$$IAHEDEMPGPE @ RVA 0x33B5D90

System_Collections_Generic_List_IGFGDDANEPE__o *
GGHCLMEFIGO__IAHEDEMPGPE
          (GGHCLMEFIGO_o *__this,System_String_o *ACCIHBHMFPN,System_String_o *NEADDGBNOKK,
          bool OPNIEBGMEPI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  bool bVar4;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  System_String_o *pSVar5;
  IGFGDDANEPE_array *pIVar6;
  HOOAAGABMBL_o *pHVar7;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567d7e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04567d7e = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_IGFGDDANEPE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  __this_01 = (__this->fields).DPOPJKJLDEE;
  if (__this_01 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      item = local_80.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
        return __this_00;
      }
      if ((IGFGDDANEPE_o *)local_80.fields._current == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pHVar7 = ((IGFGDDANEPE_Fields *)((long)local_80.fields._current + 0x10))->PCBECBEFJOI;
    } while (pHVar7 == (HOOAAGABMBL_o *)0x0);
    pSVar5 = (pHVar7->fields)._GMPAEDFIIHF_k__BackingField;
    if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_String__Equals(pSVar5,ACCIHBHMFPN,(MethodInfo *)0x0);
    pSVar5 = (pHVar7->fields)._DKODBGOHKGH_k__BackingField;
    if (pSVar5 == (System_String_o *)0x0) break;
    bVar4 = System_String__Equals(pSVar5,NEADDGBNOKK,(MethodInfo *)0x0);
    if (bVar4) {
      bVar4 = true;
    }
    else {
      if (NEADDGBNOKK == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = System_String__Equals
                        (NEADDGBNOKK,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    }
    lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
    if ((byte)(((pHVar7->fields)._ILHGDFFOGHP_k__BackingField != false | OPNIEBGMEPI ^ 0xffU) &
              bVar4 & bVar3) != 0) {
      if (__this_00 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pIVar6 == (IGFGDDANEPE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pIVar6->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pIVar6->m_Items[(int)uVar1] = (IGFGDDANEPE_o *)item;
        thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar1,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IGFGDDANEPE JNFIBDBHNOA(string KGLJICLJHEL)  [RVA 0x33B5C08]
// GGHCLMEFIGO$$JNFIBDBHNOA @ RVA 0x33B5C08

IGFGDDANEPE_o *
GGHCLMEFIGO__JNFIBDBHNOA(GGHCLMEFIGO_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  GGHCLMEFIGO_EJDCADKBLOG_o *__this_00;
  System_Predicate_T__o *match;
  IGFGDDANEPE_o *pIVar1;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  
  if ((DAT_04567d7f & 1) == 0) {
    FUN_01bab630(&Method_GGHCLMEFIGO_EJDCADKBLOG_NHNJIAKFLLD__);
    FUN_01bab630(&GGHCLMEFIGO_EJDCADKBLOG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Find__);
    FUN_01bab630(&System_Predicate<IGFGDDANEPE>_TypeInfo);
    DAT_04567d7f = 1;
  }
  __this_00 = (GGHCLMEFIGO_EJDCADKBLOG_o *)thunk_FUN_01bda818(GGHCLMEFIGO_EJDCADKBLOG_TypeInfo);
  GGHCLMEFIGO_EJDCADKBLOG___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (GGHCLMEFIGO_EJDCADKBLOG_o *)0x0) {
    (__this_00->fields).name = KGLJICLJHEL;
    thunk_FUN_01c20e04(&__this_00->fields,KGLJICLJHEL);
    __this_01 = (__this->fields).DPOPJKJLDEE;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<IGFGDDANEPE>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
      pIVar1 = (IGFGDDANEPE_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<IGFGDDANEPE>_Find__);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IGFGDDANEPE DOIFEOAFLDI(string ACCIHBHMFPN)  [RVA 0x33B7B90]
// GGHCLMEFIGO$$DOIFEOAFLDI @ RVA 0x33B7B90

IGFGDDANEPE_o *
GGHCLMEFIGO__DOIFEOAFLDI(GGHCLMEFIGO_o *__this,System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  IGFGDDANEPE_o *pIVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567d80 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    DAT_04567d80 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  __this_01 = (__this->fields).DPOPJKJLDEE;
  if (__this_01 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      item = local_70.fields._current;
      if (!bVar3) break;
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_70.fields._current[1].monitor != (void *)0x0) {
        bVar3 = System_String__op_Equality
                          (*(System_String_o **)((long)local_70.fields._current[1].monitor + 0x30),
                           ACCIHBHMFPN,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
        if (bVar3) {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar6->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar6->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar4 = (__this_00->fields)._size;
      if (iVar4 < 1) {
        pIVar5 = (IGFGDDANEPE_o *)0x0;
      }
      else {
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar4 = LIIFLGALGNK__HLMBDJOGONJ(iVar4,(MethodInfo *)0x0);
        pIVar5 = (IGFGDDANEPE_o *)
                 System_Collections_Generic_List<object>__get_Item
                           (__this_00,iVar4,
                            Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
      }
      return pIVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<AMJMGFCCAKN> NAKEPBLLOLH()  [RVA 0x33B7E44]
// GGHCLMEFIGO$$NAKEPBLLOLH @ RVA 0x33B7E44

System_Collections_Generic_List_AMJMGFCCAKN__o *
GGHCLMEFIGO__NAKEPBLLOLH(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_AMJMGFCCAKN__o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  MethodInfo *extraout_x1;
  AMJMGFCCAKN_o *item;
  AMJMGFCCAKN_array *pAVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567d81 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AMJMGFCCAKN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AMJMGFCCAKN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AMJMGFCCAKN>_TypeInfo);
    DAT_04567d81 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_AMJMGFCCAKN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<AMJMGFCCAKN>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AMJMGFCCAKN>__ctor__);
  __this_01 = (__this->fields).DPOPJKJLDEE;
  if (__this_01 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      lVar2 = Method_System_Collections_Generic_List<AMJMGFCCAKN>_Add__;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
        return __this_00;
      }
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      item = local_50.fields._current[8].monitor;
    } while (item == (AMJMGFCCAKN_o *)0x0);
    if (__this_00 == (System_Collections_Generic_List_AMJMGFCCAKN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pAVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pAVar4 == (AMJMGFCCAKN_array *)0x0) break;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pAVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pAVar4->m_Items[(int)uVar1] = item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HCGGFBAOINE(string FPDIHDDPOKM, bool KJGJMFPJFGC, string EJHJFPBAIAL, bool BJABPPEKFEC)  [RVA 0x33B6074]
// GGHCLMEFIGO$$HCGGFBAOINE @ RVA 0x33B6074

void GGHCLMEFIGO__HCGGFBAOINE
               (GGHCLMEFIGO_o *__this,System_String_o *FPDIHDDPOKM,bool KJGJMFPJFGC,
               System_String_o *EJHJFPBAIAL,bool BJABPPEKFEC,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  PKHMIGFEJCL_o *pPVar3;
  System_String_o **ppSVar4;
  
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(FPDIHDDPOKM,(MethodInfo *)0x0);
  if ((!bVar1) || (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(EJHJFPBAIAL,(MethodInfo *)0x0), !bVar1)) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(FPDIHDDPOKM,(MethodInfo *)0x0);
    if ((!bVar1) &&
       ((KJGJMFPJFGC &&
        (bVar1 = System_String__op_Inequality(FPDIHDDPOKM,EJHJFPBAIAL,(MethodInfo *)0x0), bVar1))))
    {
      pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if ((pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
         (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 == (PKHMIGFEJCL_o *)0x0))
      goto LAB_034b6178;
      ppSVar4 = &(pPVar3->fields).LMPMHKIABOM;
      *ppSVar4 = FPDIHDDPOKM;
      thunk_FUN_01c20e04(ppSVar4,FPDIHDDPOKM);
      pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_034b6178;
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,0x1e,(MethodInfo *)0x0);
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(EJHJFPBAIAL,(MethodInfo *)0x0);
    if ((!bVar1) && (BJABPPEKFEC)) {
      pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
         (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
        ppSVar4 = &(pPVar3->fields).LMPMHKIABOM;
        *ppSVar4 = EJHJFPBAIAL;
        thunk_FUN_01c20e04(ppSVar4,EJHJFPBAIAL);
        pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,0x1d,(MethodInfo *)0x0);
          return;
        }
      }
LAB_034b6178:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

