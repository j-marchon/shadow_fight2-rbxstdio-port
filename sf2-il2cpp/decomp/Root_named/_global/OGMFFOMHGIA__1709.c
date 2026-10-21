// TypeDefIndex 1709
// Namespace: 
// [Extension]
// public static class OGMFFOMHGIA
// Fields:

// ===== public static void KFJOIDDAEAB(JSONNode JHMENEKPIBO, string CCKJFMILHLC)  [RVA 0x31D4CB8]
// OGMFFOMHGIA$$KFJOIDDAEAB @ RVA 0x31D4CB8

void OGMFFOMHGIA__KFJOIDDAEAB
               (SimpleJSON_JSONNode_o *JHMENEKPIBO,System_String_o *CCKJFMILHLC,MethodInfo *method)

{
                    /* try { // try from 032d4cb8 to 033d4cef has its CatchHandler @ 032d4850 */
  if ((DAT_04566cd2 & 1) == 0) {
                    /* catch() { ... } // from try @ 032d4cb4 with catch @ 032d4ce0 */
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
                    /* try { // try from 032d4cf0 to 033d4cf7 has its CatchHandler @ 032d4d0c */
    DAT_04566cd2 = 1;
  }
                    /* try { // try from 032d4cf8 to 033d4d03 has its CatchHandler @ 032d4850 */
  OGMFFOMHGIA__LDLKPGKKPOL(JHMENEKPIBO,CCKJFMILHLC,method);
                    /* try { // try from 032d4d04 to 033d4d0b has its CatchHandler @ 032d4d0c */
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032d4cf0 with catch @ 032d4d0c
                       catch(type#2 @ 00000000) { ... } // from try @ 032d4d04 with catch @ 032d4d0c
                        */
    thunk_FUN_01ba7564();
  }
  CFJANHACGMG__GCBGEBGFNHI(CCKJFMILHLC,false,(MethodInfo *)0x0);
  return;
}


// ===== public static uint JIONICBNBJE(JSONNode JHMENEKPIBO, uint HBFDLMOKDGA = 0)  [RVA 0x31D4D5C]
// OGMFFOMHGIA$$JIONICBNBJE @ RVA 0x31D4D5C

uint32_t OGMFFOMHGIA__JIONICBNBJE
                   (SimpleJSON_JSONNode_o *JHMENEKPIBO,uint32_t HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  uint32_t uVar3;
  uint32_t uStack_24;
  
  if ((DAT_04566cda & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cda = 1;
  }
  uStack_24 = 0;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  uVar3 = HBFDLMOKDGA;
  if (!bVar1) {
    if (JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = (System_String_o *)
             (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    pSVar2 = PCOEHCPGBBG__JLLDNFPOKND(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_UInt32__TryParse(pSVar2,&uStack_24,(MethodInfo *)0x0);
    uVar3 = uStack_24;
    if (!bVar1) {
      uVar3 = HBFDLMOKDGA;
    }
  }
  return uVar3;
}


// ===== public static int EHJNCGCICMP(JSONNode JHMENEKPIBO, int HBFDLMOKDGA = 0)  [RVA 0x31D4E10]
// OGMFFOMHGIA$$EHJNCGCICMP @ RVA 0x31D4E10

int32_t OGMFFOMHGIA__EHJNCGCICMP
                  (SimpleJSON_JSONNode_o *JHMENEKPIBO,int32_t HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t iVar3;
  int32_t local_24;
  
  if ((DAT_04566cd3 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cd3 = 1;
  }
  local_24 = 0;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  iVar3 = HBFDLMOKDGA;
  if (!bVar1) {
    if (JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = (System_String_o *)
             (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    pSVar2 = PCOEHCPGBBG__JLLDNFPOKND(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_Int32__TryParse(pSVar2,&local_24,(MethodInfo *)0x0);
    iVar3 = local_24;
    if (!bVar1) {
      iVar3 = HBFDLMOKDGA;
    }
  }
  return iVar3;
}


// ===== public static JSONNode IFFHCBKGMKC(JSONNode JHMENEKPIBO, string PNOCDIDLLLM)  [RVA 0x31D4EC0]
// OGMFFOMHGIA$$IFFHCBKGMKC @ RVA 0x31D4EC0

SimpleJSON_JSONNode_o *
OGMFFOMHGIA__IFFHCBKGMKC
          (SimpleJSON_JSONNode_o *JHMENEKPIBO,System_String_o *PNOCDIDLLLM,MethodInfo *method)

{
  bool bVar1;
  SimpleJSON_JSONNode_o *pSVar2;
  
  if ((DAT_04566cd4 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cd4 = 1;
  }
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Inequality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = System_String__IsNullOrEmpty(PNOCDIDLLLM,(MethodInfo *)0x0);
    if (!bVar1) {
      if (JHMENEKPIBO != (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032d4f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar2 = (SimpleJSON_JSONNode_o *)
                 (*(JHMENEKPIBO->klass->vtable)._7_get_Item.methodPtr)
                           (JHMENEKPIBO,PNOCDIDLLLM,(JHMENEKPIBO->klass->vtable)._7_get_Item.method)
        ;
        return pSVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return (SimpleJSON_JSONNode_o *)0x0;
}


// ===== public static float GICIEKCGOHA(JSONNode JHMENEKPIBO, float HBFDLMOKDGA = 0)  [RVA 0x31D4F6C]
// OGMFFOMHGIA$$GICIEKCGOHA @ RVA 0x31D4F6C

float OGMFFOMHGIA__GICIEKCGOHA
                (SimpleJSON_JSONNode_o *JHMENEKPIBO,float HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *ODAMFBHJKIH;
  MethodInfo *extraout_x1;
  float fVar2;
  float local_24;
  
  if ((DAT_04566cd5 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_04566cd5 = 1;
    method = extraout_x1;
  }
  local_24 = 0.0;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo,method);
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  fVar2 = HBFDLMOKDGA;
  if (!bVar1) {
    if (JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ODAMFBHJKIH = (System_String_o *)
                  (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PNPPAHHCBOM_TypeInfo);
    }
    bVar1 = PNPPAHHCBOM__MEEKIFOGCCL(ODAMFBHJKIH,&local_24,(MethodInfo *)0x0);
    fVar2 = local_24;
    if (!bVar1) {
      fVar2 = HBFDLMOKDGA;
    }
  }
  return fVar2;
}


// ===== public static long HNIGPBMJJOL(JSONNode JHMENEKPIBO, long HBFDLMOKDGA = 0)  [RVA 0x31D5044]
// OGMFFOMHGIA$$HNIGPBMJJOL @ RVA 0x31D5044

int64_t OGMFFOMHGIA__HNIGPBMJJOL
                  (SimpleJSON_JSONNode_o *JHMENEKPIBO,int64_t HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int64_t iVar3;
  int64_t local_28;
  
  if ((DAT_04566cd6 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cd6 = 1;
  }
  local_28 = 0;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  iVar3 = HBFDLMOKDGA;
  if (!bVar1) {
    if (JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = (System_String_o *)
             (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    pSVar2 = PCOEHCPGBBG__JLLDNFPOKND(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_Int64__TryParse(pSVar2,&local_28,(MethodInfo *)0x0);
    iVar3 = local_28;
    if (!bVar1) {
      iVar3 = HBFDLMOKDGA;
    }
  }
  return iVar3;
}


// ===== public static long IIMBIEGFJBL(JSONNode JHMENEKPIBO, long HBFDLMOKDGA = 0)  [RVA 0x31D50F4]
// OGMFFOMHGIA$$IIMBIEGFJBL @ RVA 0x31D50F4

int64_t OGMFFOMHGIA__IIMBIEGFJBL
                  (SimpleJSON_JSONNode_o *JHMENEKPIBO,int64_t HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int64_t iVar3;
  int64_t iStack_28;
  
  if ((DAT_04566cd6 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cd6 = 1;
  }
  iStack_28 = 0;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  iVar3 = HBFDLMOKDGA;
  if (!bVar1) {
    if (JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = (System_String_o *)
             (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    pSVar2 = PCOEHCPGBBG__JLLDNFPOKND(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_Int64__TryParse(pSVar2,&iStack_28,(MethodInfo *)0x0);
    iVar3 = iStack_28;
    if (!bVar1) {
      iVar3 = HBFDLMOKDGA;
    }
  }
  return iVar3;
}


// ===== public static bool FMBMNDIGLIG(JSONNode JHMENEKPIBO, bool HBFDLMOKDGA = False)  [RVA 0x31D50F8]
// OGMFFOMHGIA$$FMBMNDIGLIG @ RVA 0x31D50F8

bool OGMFFOMHGIA__FMBMNDIGLIG
               (SimpleJSON_JSONNode_o *JHMENEKPIBO,bool HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04566cd7 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_18196/*"false"*/);
    FUN_01bab630(&StringLiteral_21605/*"true"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04566cd7 = 1;
  }
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) ||
       (pSVar2 = (System_String_o *)
                 (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method),
       pSVar2 == (System_String_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = System_String__ToLower(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
    if ((bVar1) ||
       (bVar1 = System_String__op_Equality(pSVar2,StringLiteral_18196/*"false"*/,(MethodInfo *)0x0), bVar1)) {
      HBFDLMOKDGA = false;
    }
    else {
      bVar1 = System_String__op_Equality(pSVar2,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0);
      if (bVar1) {
        HBFDLMOKDGA = true;
      }
      else {
        bVar1 = System_String__op_Equality(pSVar2,StringLiteral_21605/*"true"*/,(MethodInfo *)0x0);
        HBFDLMOKDGA = bVar1 || HBFDLMOKDGA;
      }
    }
  }
  return HBFDLMOKDGA;
}


// ===== public static bool FAEBPLENEGK(JSONNode JHMENEKPIBO, bool HBFDLMOKDGA = False)  [RVA 0x31D5244]
// OGMFFOMHGIA$$FAEBPLENEGK @ RVA 0x31D5244

bool OGMFFOMHGIA__FAEBPLENEGK
               (SimpleJSON_JSONNode_o *JHMENEKPIBO,bool HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = OGMFFOMHGIA__FMBMNDIGLIG(JHMENEKPIBO,HBFDLMOKDGA,method);
  return bVar1;
}


// ===== public static void KFJOIDDAEAB(JSONNode JHMENEKPIBO, string CCKJFMILHLC, int JAOFKBJKKDK)  [RVA 0x31D524C]
// OGMFFOMHGIA$$KFJOIDDAEAB @ RVA 0x31D524C

void OGMFFOMHGIA__KFJOIDDAEAB
               (SimpleJSON_JSONNode_o *JHMENEKPIBO,System_String_o *CCKJFMILHLC,int32_t JAOFKBJKKDK,
               MethodInfo *method)

{
  if ((DAT_04566cd8 & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04566cd8 = 1;
  }
  OGMFFOMHGIA__LDLKPGKKPOL(JHMENEKPIBO,CCKJFMILHLC,JAOFKBJKKDK,method);
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CFJANHACGMG__GCBGEBGFNHI(CCKJFMILHLC,false,(MethodInfo *)0x0);
  return;
}


// ===== public static float FOKFAIPDIMB(JSONNode JHMENEKPIBO, float HBFDLMOKDGA = 0)  [RVA 0x31D5304]
// OGMFFOMHGIA$$FOKFAIPDIMB @ RVA 0x31D5304

float OGMFFOMHGIA__FOKFAIPDIMB
                (SimpleJSON_JSONNode_o *JHMENEKPIBO,float HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *ODAMFBHJKIH;
  MethodInfo *extraout_x1;
  float fVar2;
  float fStack_24;
  
  if ((DAT_04566cd5 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_04566cd5 = 1;
    method = extraout_x1;
  }
  fStack_24 = 0.0;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo,method);
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  fVar2 = HBFDLMOKDGA;
  if (!bVar1) {
    if (JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ODAMFBHJKIH = (System_String_o *)
                  (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PNPPAHHCBOM_TypeInfo);
    }
    bVar1 = PNPPAHHCBOM__MEEKIFOGCCL(ODAMFBHJKIH,&fStack_24,(MethodInfo *)0x0);
    fVar2 = fStack_24;
    if (!bVar1) {
      fVar2 = HBFDLMOKDGA;
    }
  }
  return fVar2;
}


// ===== public static string JPKEHIBGOEM(JSONNode JHMENEKPIBO, string HBFDLMOKDGA)  [RVA 0x31D5308]
// OGMFFOMHGIA$$JPKEHIBGOEM @ RVA 0x31D5308

System_String_o *
OGMFFOMHGIA__JPKEHIBGOEM
          (SimpleJSON_JSONNode_o *JHMENEKPIBO,System_String_o *HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04566cd9 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cd9 = 1;
  }
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return HBFDLMOKDGA;
  }
  if (JHMENEKPIBO != (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032d5398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void LDLKPGKKPOL(JSONNode JHMENEKPIBO, string CCKJFMILHLC, int JAOFKBJKKDK)  [RVA 0x31D52C8]
// OGMFFOMHGIA$$LDLKPGKKPOL @ RVA 0x31D52C8

void OGMFFOMHGIA__LDLKPGKKPOL
               (SimpleJSON_JSONNode_o *JHMENEKPIBO,System_String_o *CCKJFMILHLC,int32_t JAOFKBJKKDK,
               MethodInfo *method)

{
  System_String_o *FDLJCNLNCOC;
  
  if (JHMENEKPIBO != (SimpleJSON_JSONNode_o *)0x0) {
    FDLJCNLNCOC = (System_String_o *)
                  (*(JHMENEKPIBO->klass->vtable)._28_ToString.methodPtr)
                            (JHMENEKPIBO,(ulong)(uint)JAOFKBJKKDK,
                             (JHMENEKPIBO->klass->vtable)._28_ToString.method);
    NEHNBJKKABI__JPMNOKLGLLO(CCKJFMILHLC,FDLJCNLNCOC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int NANCFCIGNEE(JSONNode JHMENEKPIBO, int HBFDLMOKDGA = 0)  [RVA 0x31D53A0]
// OGMFFOMHGIA$$NANCFCIGNEE @ RVA 0x31D53A0

int32_t OGMFFOMHGIA__NANCFCIGNEE
                  (SimpleJSON_JSONNode_o *JHMENEKPIBO,int32_t HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t iVar3;
  int32_t iStack_24;
  
  if ((DAT_04566cd3 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cd3 = 1;
  }
  iStack_24 = 0;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  iVar3 = HBFDLMOKDGA;
  if (!bVar1) {
    if (JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = (System_String_o *)
             (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    pSVar2 = PCOEHCPGBBG__JLLDNFPOKND(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_Int32__TryParse(pSVar2,&iStack_24,(MethodInfo *)0x0);
    iVar3 = iStack_24;
    if (!bVar1) {
      iVar3 = HBFDLMOKDGA;
    }
  }
  return iVar3;
}


// ===== public static uint FECKAJHFDJM(JSONNode JHMENEKPIBO, uint HBFDLMOKDGA = 0)  [RVA 0x31D4D60]
// OGMFFOMHGIA$$FECKAJHFDJM @ RVA 0x31D4D60

uint32_t OGMFFOMHGIA__FECKAJHFDJM
                   (SimpleJSON_JSONNode_o *JHMENEKPIBO,uint32_t HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  uint32_t uVar3;
  uint32_t local_24;
  
  if ((DAT_04566cda & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cda = 1;
  }
  local_24 = 0;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  uVar3 = HBFDLMOKDGA;
  if (!bVar1) {
    if (JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = (System_String_o *)
             (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    pSVar2 = PCOEHCPGBBG__JLLDNFPOKND(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_UInt32__TryParse(pSVar2,&local_24,(MethodInfo *)0x0);
    uVar3 = local_24;
    if (!bVar1) {
      uVar3 = HBFDLMOKDGA;
    }
  }
  return uVar3;
}


// ===== public static JSONNode EPNGKDNPNGE(string EIJDDKJONFO, bool NACPCBOFCON = True, bool ANKDLALOKMH = True)  [RVA 0x31D53A4]
// OGMFFOMHGIA$$EPNGKDNPNGE @ RVA 0x31D53A4

SimpleJSON_JSONNode_o *
OGMFFOMHGIA__EPNGKDNPNGE
          (System_String_o *EIJDDKJONFO,bool NACPCBOFCON,bool ANKDLALOKMH,MethodInfo *method)

{
  SimpleJSON_JSONNode_o *pSVar1;
  MethodInfo *in_x5;
  
  if ((DAT_04566cdb & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04566cdb = 1;
  }
  pSVar1 = OGMFFOMHGIA__EPNGKDNPNGE
                     (EIJDDKJONFO,string_TypeInfo->static_fields->Empty,NACPCBOFCON,ANKDLALOKMH,0,
                      in_x5);
  return pSVar1;
}


// ===== public static void LDLKPGKKPOL(JSONNode JHMENEKPIBO, string CCKJFMILHLC)  [RVA 0x31D4D2C]
// OGMFFOMHGIA$$LDLKPGKKPOL @ RVA 0x31D4D2C

void OGMFFOMHGIA__LDLKPGKKPOL
               (SimpleJSON_JSONNode_o *JHMENEKPIBO,System_String_o *CCKJFMILHLC,MethodInfo *method)

{
  System_String_o *FDLJCNLNCOC;
  
  if (JHMENEKPIBO != (SimpleJSON_JSONNode_o *)0x0) {
    FDLJCNLNCOC = (System_String_o *)
                  (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._3_ToString.method);
    NEHNBJKKABI__JPMNOKLGLLO(CCKJFMILHLC,FDLJCNLNCOC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static JSONNode EPNGKDNPNGE(string EIJDDKJONFO, string ILENGCADNIH = "", bool NACPCBOFCON = True, bool ANKDLALOKMH = True, MPNLOEAPLNP CFHHLCMKGCH = 0)  [RVA 0x31D5410]
// OGMFFOMHGIA$$EPNGKDNPNGE @ RVA 0x31D5410

SimpleJSON_JSONNode_o *
OGMFFOMHGIA__EPNGKDNPNGE
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,bool NACPCBOFCON,
          bool ANKDLALOKMH,int32_t CFHHLCMKGCH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  SimpleJSON_JSONNode_o *pSVar3;
  
  if ((DAT_04566cdc & 1) == 0) {
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04566cdc = 1;
  }
  pSVar2 = GIAMPEGMNHE__HPIOBPFLFLL(EIJDDKJONFO,ILENGCADNIH,ANKDLALOKMH,(MethodInfo *)0x0);
  if (CFHHLCMKGCH == 0) {
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (EIJDDKJONFO == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__StartsWith
                      (EIJDDKJONFO,SF2Paths_TypeInfo->static_fields->HDAMIJBIMGF,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = System_String__StartsWith
                        (EIJDDKJONFO,SF2Paths_TypeInfo->static_fields->NENINNJGODF,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        value = CMEBCBKGFFL__KGDAINKJCGG(pSVar2,false,(MethodInfo *)0x0);
        goto LAB_032d5564;
      }
    }
    value = CMEBCBKGFFL__IKCJLINAPOA(pSVar2,(MethodInfo *)0x0);
  }
  else if (CFHHLCMKGCH == 1) {
    value = CMEBCBKGFFL__LMCHNOGAEHE(pSVar2,(MethodInfo *)0x0);
  }
  else if (CFHHLCMKGCH == 2) {
    value = CMEBCBKGFFL__IKCJLINAPOA(pSVar2,(MethodInfo *)0x0);
  }
  else {
    value = string_TypeInfo->static_fields->Empty;
  }
LAB_032d5564:
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = (SimpleJSON_JSONNode_o *)0x0;
  }
  else {
    if (NACPCBOFCON) {
      if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = IKMOIKFPPBF__JCDHIOHIFEL(pSVar2,(MethodInfo *)0x0);
      if (bVar1) {
        if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = IKMOIKFPPBF__PCPAFLBHBMF(value,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
        if (!bVar1) {
          value = pSVar2;
        }
      }
    }
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = SimpleJSON_JSONNode__Parse(value,(MethodInfo *)0x0);
  }
  return pSVar3;
}


// ===== public static JSONNode PFGBDBKCIAI(string EIJDDKJONFO, string ILENGCADNIH = "", MPNLOEAPLNP CFHHLCMKGCH = 0)  [RVA 0x31D56F0]
// OGMFFOMHGIA$$PFGBDBKCIAI @ RVA 0x31D56F0

SimpleJSON_JSONNode_o *
OGMFFOMHGIA__PFGBDBKCIAI
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,int32_t CFHHLCMKGCH,
          MethodInfo *method)

{
  System_String_o *EIJDDKJONFO_00;
  SimpleJSON_JSONNode_o *pSVar1;
  MethodInfo *in_x5;
  
  if ((DAT_04566cdd & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04566cdd = 1;
  }
  EIJDDKJONFO_00 = GIAMPEGMNHE__HPIOBPFLFLL(EIJDDKJONFO,ILENGCADNIH,true,(MethodInfo *)0x0);
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
  }
  CFJANHACGMG__FNIHLBLMOBP(EIJDDKJONFO_00,true,(MethodInfo *)0x0);
  if (DAT_04566d6b == '\0') {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04566d6b = '\x01';
  }
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (CFJANHACGMG_TypeInfo->static_fields->_PCFJKILMDCE_k__BackingField != false) {
    pSVar1 = OGMFFOMHGIA__EPNGKDNPNGE(EIJDDKJONFO,ILENGCADNIH,true,true,CFHHLCMKGCH,in_x5);
    return pSVar1;
  }
  return (SimpleJSON_JSONNode_o *)0x0;
}


// ===== public static string LFCNNAGLPHO(JSONNode JHMENEKPIBO, string HBFDLMOKDGA)  [RVA 0x31D57F0]
// OGMFFOMHGIA$$LFCNNAGLPHO @ RVA 0x31D57F0

System_String_o *
OGMFFOMHGIA__LFCNNAGLPHO
          (SimpleJSON_JSONNode_o *JHMENEKPIBO,System_String_o *HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04566cd9 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cd9 = 1;
  }
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return HBFDLMOKDGA;
  }
  if (JHMENEKPIBO != (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032d5398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

