// TypeDefIndex 704
// Namespace: 
// public static class MFBNFJGBPBB
// Fields:
//   private static string OEOFMBEAELA; // 0x0
//   private static EILGGBOIMGE.FMFDKGKCBBG JELECAMAOBG; // 0x8
//   private static QuestCondition MMAJDCGGELF; // 0x10

// ===== public static string LPLONLCAIGL(string DOBODIEOBBL, PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x30367EC]
// MFBNFJGBPBB$$LPLONLCAIGL @ RVA 0x30367EC

System_String_o *
MFBNFJGBPBB__LPLONLCAIGL(System_String_o *DOBODIEOBBL,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  uint index;
  int32_t iVar2;
  uint uVar3;
  int32_t startIndex;
  System_Text_StringBuilder_o *__this;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  QuestCondition_o *__this_01;
  PKHMIGFEJCL_o **ppPVar4;
  System_String_o *HGPGMCGOOLL;
  System_String_o *b;
  System_String_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  uint16_t local_64 [2];
  
                    /* catch() { ... } // from try @ 03136704 with catch @ 03136810
                       try { // try from 03136810 to 0323683b has its CatchHandler @ 03136048 */
  if ((DAT_04565d47 & 1) == 0) {
                    /* catch() { ... } // from try @ 0313675c with catch @ 03136820 */
    FUN_01bab630(&char_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
                    /* try { // try from 0313683c to 03236853 has its CatchHandler @ 031368c0 */
    FUN_01bab630(&QuestCondition_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
                    /* try { // try from 03136854 to 032368af has its CatchHandler @ 03136048 */
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565d47 = 1;
  }
  local_64[0] = 0;
  if (DOBODIEOBBL != (System_String_o *)0x0) {
    index = System_String__IndexOf(DOBODIEOBBL,0x7b,(MethodInfo *)0x0);
    if (-1 < (int)index) {
      __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo)
      ;
                    /* try { // try from 031368b0 to 032368bf has its CatchHandler @ 031368c0 */
      System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
      if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_03136afc;
                    /* catch() { ... } // from try @ 0313683c with catch @ 031368c0
                       catch() { ... } // from try @ 031368b0 with catch @ 031368c0 */
                    /* try { // try from 031368c4 to 032368c7 has its CatchHandler @ 031368d0 */
      System_Text_StringBuilder__Append(__this,DOBODIEOBBL,(MethodInfo *)0x0);
                    /* try { // try from 031368c8 to 032368d3 has its CatchHandler @ 03136048 */
                    /* catch() { ... } // from try @ 03136688 with catch @ 031368d0
                       catch() { ... } // from try @ 031367dc with catch @ 031368d0
                       catch() { ... } // from try @ 031368c4 with catch @ 031368d0 */
      iVar2 = System_String__LastIndexOf(DOBODIEOBBL,0x7d,(MethodInfo *)0x0);
      if (iVar2 != -1) {
        __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)
                    thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
        EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
        __this_01 = (QuestCondition_o *)thunk_FUN_01bda818(QuestCondition_TypeInfo);
        QuestCondition___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (QuestCondition_o *)0x0) goto LAB_03136afc;
        ppPVar4 = &(__this_01->fields).AAJBIMFNMBB;
        *ppPVar4 = AAJBIMFNMBB;
        thunk_FUN_01c20e04(ppPVar4,AAJBIMFNMBB);
        b = StringLiteral_1/*""*/;
        for (; StringLiteral_1/*""*/ = b, (int)index <= iVar2; index = index + 1) {
          local_64[0] = System_String__get_Chars(DOBODIEOBBL,index,(MethodInfo *)0x0);
          if ((char_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(char_TypeInfo);
          }
          bVar1 = System_Char__Equals((uint16_t)local_64,0x7b,(MethodInfo *)0x0);
          if (bVar1) {
            uVar3 = System_String__IndexOf(DOBODIEOBBL,0x7d,index,(MethodInfo *)0x0);
            HGPGMCGOOLL = System_String__Substring
                                    (DOBODIEOBBL,index + 1,uVar3 + ~index,(MethodInfo *)0x0);
            method_00 = extraout_x1;
            if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
              method_00 = extraout_x1_00;
            }
            bVar1 = MFBNFJGBPBB__NFBIHKLFODI(HGPGMCGOOLL,method_00);
            index = uVar3;
            if (!bVar1) {
              if (HGPGMCGOOLL == (System_String_o *)0x0) goto LAB_03136afc;
              bVar1 = System_String__Equals
                                (HGPGMCGOOLL,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0
                                );
              if (!bVar1) {
                if (__this_00 == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) goto LAB_03136afc;
                EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
                EILGGBOIMGE__KFMNMGGDHFD
                          ((EILGGBOIMGE_o *)__this_01,HGPGMCGOOLL,__this_00,false,
                           (System_String_o *)0x0,(MethodInfo *)0x0);
                b = (System_String_o *)
                    (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._3_ToString.method);
              }
              bVar1 = System_String__IsNullOrEmpty(HGPGMCGOOLL,(MethodInfo *)0x0);
              if (!bVar1) {
                __this_02 = (System_String_o *)
                            (*(__this->klass->vtable)._3_ToString.methodPtr)
                                      (__this,(__this->klass->vtable)._3_ToString.method);
                if (__this_02 == (System_String_o *)0x0) goto LAB_03136afc;
                startIndex = System_String__IndexOf(__this_02,HGPGMCGOOLL,(MethodInfo *)0x0);
                bVar1 = System_String__op_Inequality(HGPGMCGOOLL,b,(MethodInfo *)0x0);
                if (bVar1) {
                  System_Text_StringBuilder__Replace
                            (__this,HGPGMCGOOLL,b,startIndex,(HGPGMCGOOLL->fields)._stringLength,
                             (MethodInfo *)0x0);
                }
              }
            }
          }
          b = StringLiteral_1/*""*/;
        }
      }
      DOBODIEOBBL = (System_String_o *)
                    (*(__this->klass->vtable)._3_ToString.methodPtr)
                              (__this,(__this->klass->vtable)._3_ToString.method);
    }
    return DOBODIEOBBL;
  }
LAB_03136afc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool EDBBDECOKAF(PKHMIGFEJCL HLAGOHADLKH, string OOGPLJBADCD)  [RVA 0x3036B40]
// MFBNFJGBPBB$$EDBBDECOKAF @ RVA 0x3036B40

bool MFBNFJGBPBB__EDBBDECOKAF
               (PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar1;
  double dVar2;
  
  if ((DAT_04565d48 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d48 = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = MFBNFJGBPBB__INBNIPOEFGO(HLAGOHADLKH,OOGPLJBADCD,method);
  if (pEVar1 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
    dVar2 = (pEVar1->fields).HNFHNNLOLGK;
    return dVar2 != INFINITY && 0 < (int)dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int JBAMHPFEPLG(PKHMIGFEJCL HLAGOHADLKH, string OOGPLJBADCD)  [RVA 0x3036CB8]
// MFBNFJGBPBB$$JBAMHPFEPLG @ RVA 0x3036CB8

int32_t MFBNFJGBPBB__JBAMHPFEPLG
                  (PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  int32_t iVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar2;
  double dVar3;
  
  if ((DAT_04565d49 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d49 = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar2 = MFBNFJGBPBB__INBNIPOEFGO(HLAGOHADLKH,OOGPLJBADCD,method);
  if (pEVar2 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
    dVar3 = (pEVar2->fields).HNFHNNLOLGK;
    iVar1 = -0x80000000;
    if (dVar3 != INFINITY) {
      iVar1 = (int)dVar3;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void CPMLEOKGPKJ(string CJNHFNHJHPE)  [RVA 0x3036D44]
// MFBNFJGBPBB$$CPMLEOKGPKJ @ RVA 0x3036D44

void MFBNFJGBPBB__CPMLEOKGPKJ(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  return;
}


// ===== private static bool NFBIHKLFODI(string HGPGMCGOOLL)  [RVA 0x3036B00]
// MFBNFJGBPBB$$NFBIHKLFODI @ RVA 0x3036B00

bool MFBNFJGBPBB__NFBIHKLFODI(System_String_o *HGPGMCGOOLL,MethodInfo *method)

{
  bool bVar1;
  
  if (HGPGMCGOOLL == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_String__StartsWith(HGPGMCGOOLL,0x24,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  bVar1 = System_String__EndsWith(HGPGMCGOOLL,0x24,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public static EILGGBOIMGE.FMFDKGKCBBG INBNIPOEFGO(PKHMIGFEJCL HLAGOHADLKH, string OOGPLJBADCD)  [RVA 0x3036BD4]
// MFBNFJGBPBB$$INBNIPOEFGO @ RVA 0x3036BD4

EILGGBOIMGE_FMFDKGKCBBG_o *
MFBNFJGBPBB__INBNIPOEFGO(PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  QuestCondition_o *pLVar1;
  PKHMIGFEJCL_o **ppPVar2;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this;
  
  if ((DAT_04565d4a & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d4a = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar1 = MFBNFJGBPBB_TypeInfo->static_fields->MMAJDCGGELF;
  if (pLVar1 != (QuestCondition_o *)0x0) {
    ppPVar2 = &(pLVar1->fields).AAJBIMFNMBB;
    *ppPVar2 = HLAGOHADLKH;
    thunk_FUN_01c20e04(ppPVar2,HLAGOHADLKH);
    __this = MFBNFJGBPBB_TypeInfo->static_fields->JELECAMAOBG;
    if (__this != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this,(MethodInfo *)0x0);
      pLVar1 = MFBNFJGBPBB_TypeInfo->static_fields->MMAJDCGGELF;
      if (pLVar1 != (QuestCondition_o *)0x0) {
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)pLVar1,OOGPLJBADCD,
                   MFBNFJGBPBB_TypeInfo->static_fields->JELECAMAOBG,false,(System_String_o *)0x0,
                   (MethodInfo *)0x0);
        pLVar1 = MFBNFJGBPBB_TypeInfo->static_fields->MMAJDCGGELF;
        if (pLVar1 != (QuestCondition_o *)0x0) {
          ppPVar2 = &(pLVar1->fields).AAJBIMFNMBB;
          *ppPVar2 = (PKHMIGFEJCL_o *)0x0;
          thunk_FUN_01c20e04(ppPVar2,0);
          return MFBNFJGBPBB_TypeInfo->static_fields->JELECAMAOBG;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3036D48]
// MFBNFJGBPBB$$.cctor @ RVA 0x3036D48

void MFBNFJGBPBB___cctor(MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *__this;
  EILGGBOIMGE_FMFDKGKCBBG_o **ppEVar1;
  QuestCondition_o *__this_00;
  QuestCondition_o **ppLVar2;
  
  if ((DAT_04565d4b & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&QuestCondition_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d4b = 1;
  }
  __this = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this,(MethodInfo *)0x0);
  ppEVar1 = &MFBNFJGBPBB_TypeInfo->static_fields->JELECAMAOBG;
  *ppEVar1 = __this;
  thunk_FUN_01c20e04(ppEVar1,__this);
  __this_00 = (QuestCondition_o *)thunk_FUN_01bda818(QuestCondition_TypeInfo);
  QuestCondition___ctor(__this_00,(MethodInfo *)0x0);
  ppLVar2 = &MFBNFJGBPBB_TypeInfo->static_fields->MMAJDCGGELF;
  *ppLVar2 = __this_00;
  thunk_FUN_01c20e04(ppLVar2,__this_00);
  return;
}


// ===== public static string EIPNDBCILOO()  [RVA 0x3036E00]
// MFBNFJGBPBB$$EIPNDBCILOO @ RVA 0x3036E00

System_String_o * MFBNFJGBPBB__EIPNDBCILOO(MethodInfo *method)

{
  if ((DAT_04565d4c & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d4c = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return MFBNFJGBPBB_TypeInfo->static_fields->OEOFMBEAELA;
}


// ===== public static string ACJKLBMNMEJ(PKHMIGFEJCL HLAGOHADLKH, string OOGPLJBADCD)  [RVA 0x3036E58]
// MFBNFJGBPBB$$ACJKLBMNMEJ @ RVA 0x3036E58

System_String_o *
MFBNFJGBPBB__ACJKLBMNMEJ(PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar1;
  
  if ((DAT_04565d4d & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d4d = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = MFBNFJGBPBB__INBNIPOEFGO(HLAGOHADLKH,OOGPLJBADCD,method);
  if (pEVar1 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
    return (pEVar1->fields).DFJBJLBLBGB;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float DCIAJFJIMNK(PKHMIGFEJCL HLAGOHADLKH, string OOGPLJBADCD)  [RVA 0x3036ECC]
// MFBNFJGBPBB$$DCIAJFJIMNK @ RVA 0x3036ECC

float MFBNFJGBPBB__DCIAJFJIMNK
                (PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar1;
  
  if ((DAT_04565d4e & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d4e = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = MFBNFJGBPBB__INBNIPOEFGO(HLAGOHADLKH,OOGPLJBADCD,method);
  if (pEVar1 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
    return (float)(pEVar1->fields).HNFHNNLOLGK;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string HAKLDDOPIAF(PKHMIGFEJCL HLAGOHADLKH, string OOGPLJBADCD)  [RVA 0x302F880]
// MFBNFJGBPBB$$HAKLDDOPIAF @ RVA 0x302F880

System_String_o *
MFBNFJGBPBB__HAKLDDOPIAF(PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04565d4f & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d4f = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = MFBNFJGBPBB__INBNIPOEFGO(HLAGOHADLKH,OOGPLJBADCD,method);
  if (pEVar1 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0312f8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*(pEVar1->klass->vtable)._3_ToString.methodPtr)
                       (pEVar1,(pEVar1->klass->vtable)._3_ToString.method);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static long GFJPJGCLMLP(PKHMIGFEJCL HLAGOHADLKH, string OOGPLJBADCD)  [RVA 0x3036F44]
// MFBNFJGBPBB$$GFJPJGCLMLP @ RVA 0x3036F44

int64_t MFBNFJGBPBB__GFJPJGCLMLP
                  (PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  int64_t iVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar2;
  double dVar3;
  
  if ((DAT_04565d50 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d50 = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar2 = MFBNFJGBPBB__INBNIPOEFGO(HLAGOHADLKH,OOGPLJBADCD,method);
  if (pEVar2 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
    dVar3 = (pEVar2->fields).HNFHNNLOLGK;
    iVar1 = -0x8000000000000000;
    if (dVar3 != INFINITY) {
      iVar1 = (long)dVar3;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static double GAJPKHHKCCE(PKHMIGFEJCL HLAGOHADLKH, string OOGPLJBADCD)  [RVA 0x3036FD0]
// MFBNFJGBPBB$$GAJPKHHKCCE @ RVA 0x3036FD0

double MFBNFJGBPBB__GAJPKHHKCCE
                 (PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar1;
  
  if ((DAT_04565d51 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d51 = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = MFBNFJGBPBB__INBNIPOEFGO(HLAGOHADLKH,OOGPLJBADCD,method);
  if (pEVar1 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
    return (pEVar1->fields).HNFHNNLOLGK;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

