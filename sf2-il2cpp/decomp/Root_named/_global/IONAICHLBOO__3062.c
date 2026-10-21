// TypeDefIndex 3062
// Namespace: 
// public static class IONAICHLBOO
// Fields:
//   private static string JJBJCAPAILN; // 0x0
//   private static string LFDLDAKALCP; // 0x8

// ===== public static bool EECFAJEJAFF(string DIHAKADKIKM)  [RVA 0x34BC2DC]
// IONAICHLBOO$$EECFAJEJAFF @ RVA 0x34BC2DC

bool IONAICHLBOO__EECFAJEJAFF(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  if (DIHAKADKIKM != (System_String_o *)0x0) {
    return (DIHAKADKIKM->fields)._stringLength < 0xb;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool MFKLLLKLILP(string DIHAKADKIKM)  [RVA 0x34BC2FC]
// IONAICHLBOO$$MFKLLLKLILP @ RVA 0x34BC2FC

bool IONAICHLBOO__MFKLLLKLILP(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  if (DIHAKADKIKM != (System_String_o *)0x0) {
    return 2 < (DIHAKADKIKM->fields)._stringLength;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool FLLFECJDJHD(string DIHAKADKIKM)  [RVA 0x34BC31C]
// IONAICHLBOO$$FLLFECJDJHD @ RVA 0x34BC31C

bool IONAICHLBOO__FLLFECJDJHD(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  int iVar2;
  
  if ((DAT_045685e2 & 1) == 0) {
    FUN_01bab630(&IONAICHLBOO_TypeInfo);
    DAT_045685e2 = 1;
    method = extraout_x1;
  }
  if ((IONAICHLBOO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (DIHAKADKIKM != (System_String_o *)0x0) {
    iVar2 = (DIHAKADKIKM->fields)._stringLength;
    if (2 < iVar2) {
      if ((IONAICHLBOO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        iVar2 = (DIHAKADKIKM->fields)._stringLength;
        method = extraout_x1_01;
      }
      if (iVar2 < 0xb) {
        if ((IONAICHLBOO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method = extraout_x1_02;
        }
        bVar1 = IONAICHLBOO__FCBNILJFGIH(DIHAKADKIKM,method);
        return bVar1;
      }
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool FCBNILJFGIH(string DIHAKADKIKM)  [RVA 0x34BC3C0]
// IONAICHLBOO$$FCBNILJFGIH @ RVA 0x34BC3C0

bool IONAICHLBOO__FCBNILJFGIH(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  bool bVar1;
  System_Func_TSource__bool__o *predicate;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685e3 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_All<char>__);
    FUN_01bab630(&System_Func<char,_bool>_TypeInfo);
    FUN_01bab630(&Method_IONAICHLBOO_PJNPLHKHEBJ__);
    DAT_045685e3 = 1;
    method = extraout_x1;
  }
  predicate = (System_Func_TSource__bool__o *)
              thunk_FUN_01bda818(System_Func<char,_bool>_TypeInfo,method);
  System_Func<char,_bool>___ctor();
  bVar1 = System_Linq_Enumerable__All<char>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)DIHAKADKIKM,predicate,
                     Method_System_Linq_Enumerable_All<char>__);
  return bVar1;
}


// ===== public static bool HHALGJMHNFP(string DIHAKADKIKM)  [RVA 0x34BC458]
// IONAICHLBOO$$HHALGJMHNFP @ RVA 0x34BC458

bool IONAICHLBOO__HHALGJMHNFP(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  bool bVar1;
  System_Func_char__bool__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Func_char__bool__o *predicate;
  
  if ((DAT_045685e4 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<char>__);
    FUN_01bab630(&System_Func<char,_bool>_TypeInfo);
    FUN_01bab630(&Method_IONAICHLBOO_<>c_EDOILMKCIKF__);
    FUN_01bab630(&IONAICHLBOO_<>c_TypeInfo);
    DAT_045685e4 = 1;
    method = extraout_x1;
  }
  if ((IONAICHLBOO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IONAICHLBOO_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  predicate = IONAICHLBOO_<>c_TypeInfo->static_fields->__9__2_0;
  if (predicate == (System_Func_char__bool__o *)0x0) {
    if ((IONAICHLBOO_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IONAICHLBOO_<>c_TypeInfo,method);
    }
    predicate = (System_Func_char__bool__o *)thunk_FUN_01bda818(System_Func<char,_bool>_TypeInfo);
    System_Func<char,_bool>___ctor();
    ppSVar2 = &IONAICHLBOO_<>c_TypeInfo->static_fields->__9__2_0;
    *ppSVar2 = predicate;
    thunk_FUN_01c20e04(ppSVar2,predicate);
  }
  bVar1 = System_Linq_Enumerable__Any<char>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)DIHAKADKIKM,
                     (System_Func_TSource__bool__o *)predicate,
                     Method_System_Linq_Enumerable_Any<char>__);
  return bVar1;
}


// ===== private static bool LIKNKOFIAOM(char IFOOMNOMIEN)  [RVA 0x34BC550]
// IONAICHLBOO$$LIKNKOFIAOM @ RVA 0x34BC550

bool IONAICHLBOO__LIKNKOFIAOM(uint16_t IFOOMNOMIEN,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685e5 & 1) == 0) {
    FUN_01bab630(&IONAICHLBOO_TypeInfo);
    DAT_045685e5 = 1;
    method = extraout_x1;
  }
  if ((IONAICHLBOO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IONAICHLBOO_TypeInfo,method);
  }
  __this = IONAICHLBOO_TypeInfo->static_fields->LFDLDAKALCP;
  if (__this != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(__this,IFOOMNOMIEN,(MethodInfo *)0x0);
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool HNECMELMLCF(string DIHAKADKIKM)  [RVA 0x34BC5C8]
// IONAICHLBOO$$HNECMELMLCF @ RVA 0x34BC5C8

bool IONAICHLBOO__HNECMELMLCF(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  bool bVar1;
  System_Func_TSource__bool__o *predicate;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685e6 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_All<char>__);
    FUN_01bab630(&System_Func<char,_bool>_TypeInfo);
    FUN_01bab630(&Method_IONAICHLBOO_LIKNKOFIAOM__);
    DAT_045685e6 = 1;
    method = extraout_x1;
  }
  predicate = (System_Func_TSource__bool__o *)
              thunk_FUN_01bda818(System_Func<char,_bool>_TypeInfo,method);
  System_Func<char,_bool>___ctor();
  bVar1 = System_Linq_Enumerable__All<char>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)DIHAKADKIKM,predicate,
                     Method_System_Linq_Enumerable_All<char>__);
  return bVar1;
}


// ===== private static bool PJNPLHKHEBJ(char IFOOMNOMIEN)  [RVA 0x34BC660]
// IONAICHLBOO$$PJNPLHKHEBJ @ RVA 0x34BC660

bool IONAICHLBOO__PJNPLHKHEBJ(uint16_t IFOOMNOMIEN,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685e7 & 1) == 0) {
    FUN_01bab630(&IONAICHLBOO_TypeInfo);
    DAT_045685e7 = 1;
    method = extraout_x1;
  }
  if ((IONAICHLBOO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IONAICHLBOO_TypeInfo,method);
  }
  __this = IONAICHLBOO_TypeInfo->static_fields->JJBJCAPAILN;
  if (__this != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(__this,IFOOMNOMIEN,(MethodInfo *)0x0);
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x34BC6D8]
// IONAICHLBOO$$.cctor @ RVA 0x34BC6D8

void IONAICHLBOO___cctor(MethodInfo *method)

{
  if ((DAT_045685e8 & 1) == 0) {
    FUN_01bab630(&IONAICHLBOO_TypeInfo);
    FUN_01bab630(&StringLiteral_1591/*"0123456789"*/);
    FUN_01bab630(&StringLiteral_2610/*"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"*/);
    DAT_045685e8 = 1;
  }
  IONAICHLBOO_TypeInfo->static_fields->JJBJCAPAILN = StringLiteral_2610/*"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"*/;
  thunk_FUN_01c20e04(IONAICHLBOO_TypeInfo->static_fields,StringLiteral_2610/*"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"*/);
  IONAICHLBOO_TypeInfo->static_fields->LFDLDAKALCP = StringLiteral_1591/*"0123456789"*/;
  thunk_FUN_01c20e04();
  return;
}


// ===== public static bool KHFOJCOAPOB(string DIHAKADKIKM)  [RVA 0x34BC774]
// IONAICHLBOO$$KHFOJCOAPOB @ RVA 0x34BC774

bool IONAICHLBOO__KHFOJCOAPOB(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  if (DIHAKADKIKM != (System_String_o *)0x0) {
    return (DIHAKADKIKM->fields)._stringLength < 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool IAOGDACAFKH(string CAJGOAPOCOP, Dictionary<Func<string, bool>, string> IOEBMGEBMOM)  [RVA 0x34BC794]
// IONAICHLBOO$$IAOGDACAFKH @ RVA 0x34BC794

bool IONAICHLBOO__IAOGDACAFKH
               (System_String_o *CAJGOAPOCOP,
               System_Collections_Generic_Dictionary_Func_string__bool___string__o *IOEBMGEBMOM,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this;
  System_Func_TSource__bool__o *predicate;
  
  if ((DAT_045685e9 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_All<KeyValuePair<Func<string,_bool>,_string>>__);
    FUN_01bab630(&System_Func<KeyValuePair<Func<string,_bool>,_string>,_bool>_TypeInfo);
    FUN_01bab630(&Method_IONAICHLBOO_OAMNHEMLLFO_LNFPEEFDEGM__);
    FUN_01bab630(&IONAICHLBOO_OAMNHEMLLFO_TypeInfo);
    DAT_045685e9 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(IONAICHLBOO_OAMNHEMLLFO_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)CAJGOAPOCOP;
    thunk_FUN_01c20e04(__this + 1,CAJGOAPOCOP);
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(
                                  System_Func<KeyValuePair<Func<string,_bool>,_string>,_bool>_TypeInfo
                                  );
    System_Func<KeyValuePair<object,_object>,_bool>___ctor();
    bVar1 = System_Linq_Enumerable__All<KeyValuePair<object,_object>>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)IOEBMGEBMOM,predicate,
                       Method_System_Linq_Enumerable_All<KeyValuePair<Func<string,_bool>,_string>>__
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

