// TypeDefIndex 1939
// Namespace: 
// [Extension]
// public static class ECNCJPCKOLN
// Fields:
//   private static List<MIBHAJBEMIK> NMMAKHKLLHI; // 0x0

// ===== public static string BJFJNFFFDCH(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x326E3FC]
// ECNCJPCKOLN$$BJFJNFFFDCH @ RVA 0x326E3FC

System_String_o * ECNCJPCKOLN__BJFJNFFFDCH(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04567205 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3279/*"B"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_2529/*"A"*/);
    DAT_04567205 = 1;
  }
  if ((uint)OHLKNCPBCBL < 4) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_2529/*"A"*/_03fc6580)[OHLKNCPBCBL];
  }
  else {
    puVar1 = &StringLiteral_1/*""*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public static float CJLEMGCHOJD(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x326E488]
// ECNCJPCKOLN$$CJLEMGCHOJD @ RVA 0x326E488

float ECNCJPCKOLN__CJLEMGCHOJD(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  if (OHLKNCPBCBL - 0x67U < 3) {
    return *(float *)(&DAT_00e295e8 + (long)(int)(OHLKNCPBCBL - 0x67U) * 4);
  }
  return 0.0;
}


// ===== public static bool IDEEKLMIOOD(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x326E4AC]
// ECNCJPCKOLN$$IDEEKLMIOOD @ RVA 0x326E4AC

bool ECNCJPCKOLN__IDEEKLMIOOD(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  if (((uint)OHLKNCPBCBL < 0xf) && ((1 << (ulong)(OHLKNCPBCBL & 0x1f) & 0x7e0fU) != 0)) {
    return true;
  }
  return OHLKNCPBCBL - 100U < 6;
}


// ===== public static bool ECCJDAMCKID(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x326E4E0]
// ECNCJPCKOLN$$ECCJDAMCKID @ RVA 0x326E4E0

bool ECNCJPCKOLN__ECCJDAMCKID(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  if (3 < (uint)OHLKNCPBCBL) {
    return OHLKNCPBCBL - 0x66U < 4;
  }
  return true;
}


// ===== private static void .cctor()  [RVA 0x326E500]
// ECNCJPCKOLN$$.cctor @ RVA 0x326E500

void ECNCJPCKOLN___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_T__o *__this;
  
  if ((DAT_04567206 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
    DAT_04567206 = 1;
  }
  __this = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
  System_Collections_Generic_List<Int32Enum>___ctor
            (__this,Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
  ECNCJPCKOLN_TypeInfo->static_fields->NMMAKHKLLHI =
       (System_Collections_Generic_List_MIBHAJBEMIK__o *)__this;
  thunk_FUN_01c20e04(ECNCJPCKOLN_TypeInfo->static_fields,__this);
  return;
}


// ===== public static bool MJGNIHLBKJJ(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x326E598]
// ECNCJPCKOLN$$MJGNIHLBKJJ @ RVA 0x326E598

bool ECNCJPCKOLN__MJGNIHLBKJJ(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  return (OHLKNCPBCBL & 0xfffffffeU) == 500;
}


// ===== public static string OMOPOJIJEMG(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x326E5A8]
// ECNCJPCKOLN$$OMOPOJIJEMG @ RVA 0x326E5A8

System_String_o * ECNCJPCKOLN__OMOPOJIJEMG(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04567207 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12557/*"SwitchControls.HintCircle_DPad"*/);
    FUN_01bab630(&StringLiteral_12559/*"SwitchControls.HintCircle_Y"*/);
    FUN_01bab630(&StringLiteral_12556/*"SwitchControls.HintCircle_B"*/);
    FUN_01bab630(&StringLiteral_12554/*"SwitchControls.HintCircle"*/);
    FUN_01bab630(&StringLiteral_12558/*"SwitchControls.HintCircle_X"*/);
    FUN_01bab630(&StringLiteral_12555/*"SwitchControls.HintCircle_A"*/);
    DAT_04567207 = 1;
  }
  if ((uint)OHLKNCPBCBL < 4) {
                    /* try { // try from 0336e61c to 0346e80f has its CatchHandler @ 0336e61c
                       catch() { ... } // from try @ 0336e61c with catch @ 0336e61c
                       catch() { ... } // from try @ 0336eb64 with catch @ 0336e61c
                       catch() { ... } // from try @ 0336ec2c with catch @ 0336e61c
                       catch() { ... } // from try @ 0336ec3c with catch @ 0336e61c
                       catch() { ... } // from try @ 0336ec48 with catch @ 0336e61c
                       catch() { ... } // from try @ 0336ed74 with catch @ 0336e61c */
    puVar1 = (undefined8 *)(&PTR_StringLiteral_12555/*"SwitchControls.HintCircle_A"*/_03fc65a0)[OHLKNCPBCBL];
  }
  else {
    puVar1 = &StringLiteral_12554/*"SwitchControls.HintCircle"*/;
    if (OHLKNCPBCBL - 0x66U < 4) {
      puVar1 = &StringLiteral_12557/*"SwitchControls.HintCircle_DPad"*/;
    }
  }
  return (System_String_o *)*puVar1;
}


// ===== public static FBBNEILNOKK IDDDPCFIALP(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x326E654]
// ECNCJPCKOLN$$IDDDPCFIALP @ RVA 0x326E654

int32_t ECNCJPCKOLN__IDDDPCFIALP(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  switch(OHLKNCPBCBL) {
  case 0:
  case 1:
  case 2:
  case 3:
    return OHLKNCPBCBL;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    goto switchD_0336e67c_caseD_4;
  case 9:
    return 0x16;
  case 10:
    return 0x17;
  case 0xb:
    return 0x12;
  case 0xc:
switchD_0336e67c_caseD_c:
    return 0x13;
  case 0xd:
    return 0x14;
  case 0xe:
switchD_0336e67c_caseD_e:
    return 0x15;
  default:
    switch(OHLKNCPBCBL) {
    case 100:
      goto switchD_0336e67c_caseD_c;
    case 0x65:
      goto switchD_0336e67c_caseD_e;
    case 0x66:
      return 3;
    case 0x67:
      return 1;
    case 0x68:
      return 0;
    case 0x69:
      return 2;
    }
switchD_0336e67c_caseD_4:
    return -1;
  }
}


// ===== public static List<MIBHAJBEMIK> BEKNIMCNOFN()  [RVA 0x326E6FC]
// ECNCJPCKOLN$$BEKNIMCNOFN @ RVA 0x326E6FC

System_Collections_Generic_List_MIBHAJBEMIK__o * ECNCJPCKOLN__BEKNIMCNOFN(MethodInfo *method)

{
  Il2CppType *handle;
  Il2CppClass *pIVar1;
  System_Type_o *enumType;
  System_Array_o *pSVar2;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_T__o *pSVar3;
  
  if ((DAT_04567208 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
    FUN_01bab630(&MIBHAJBEMIK___TypeInfo);
    FUN_01bab630(&MIBHAJBEMIK_var);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04567208 = 1;
  }
  if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN_TypeInfo->static_fields->NMMAKHKLLHI;
  if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
    if ((pSVar3->fields)._size != 0) {
LAB_0336e898:
      if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      return ECNCJPCKOLN_TypeInfo->static_fields->NMMAKHKLLHI;
    }
    if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pSVar3 = (System_Collections_Generic_List_T__o *)
               ECNCJPCKOLN_TypeInfo->static_fields->NMMAKHKLLHI;
    }
    handle = MIBHAJBEMIK_var;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0336e810 to 0346e837 has its CatchHandler @ 0336ecbc */
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
    pSVar2 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
    pIVar1 = MIBHAJBEMIK___TypeInfo;
    if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
      if (pSVar2 == (System_Array_o *)0x0) {
        collection = (System_Collections_Generic_IEnumerable_T__o *)0x0;
      }
      else {
        collection = (System_Collections_Generic_IEnumerable_T__o *)
                     thunk_FUN_01bda71c(pSVar2,MIBHAJBEMIK___TypeInfo);
        if (collection == (System_Collections_Generic_IEnumerable_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar2,pIVar1);
        }
      }
                    /* try { // try from 0336e86c to 0346e897 has its CatchHandler @ 0336ecb8 */
      System_Collections_Generic_List<Int32Enum>__AddRange
                (pSVar3,collection,Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
      pSVar3 = (System_Collections_Generic_List_T__o *)
               ECNCJPCKOLN_TypeInfo->static_fields->NMMAKHKLLHI;
      if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
        System_Collections_Generic_List<Int32Enum>__Remove
                  (pSVar3,-1,Method_System_Collections_Generic_List<MIBHAJBEMIK>_Remove__);
        goto LAB_0336e898;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

