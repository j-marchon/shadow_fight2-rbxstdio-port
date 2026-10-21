// TypeDefIndex 3309
// Namespace: 
// public static class LLKDCCJMFLE
// Fields:
//   private static string NBHOILCMCJB; // 0x0

// ===== public static string JCAHKFNICNA(EOAOCPLIKOI.CHCPNNFHMLF CJNHFNHJHPE)  [RVA 0x35227A4]
// LLKDCCJMFLE$$JCAHKFNICNA @ RVA 0x35227A4

System_String_o * LLKDCCJMFLE__JCAHKFNICNA(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((DAT_045689db & 1) == 0) {
                    /* try { // try from 036227d8 to 037227ff has its CatchHandler @ 03622bac */
    FUN_01bab630(&StringLiteral_8302/*"LOW"*/);
    FUN_01bab630(&StringLiteral_6978/*"HIGH"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045689db = 1;
  }
  puVar1 = &StringLiteral_6978/*"HIGH"*/;
  if (CJNHFNHJHPE != 1) {
    puVar1 = &StringLiteral_1/*""*/;
  }
  puVar2 = &StringLiteral_8302/*"LOW"*/;
  if (CJNHFNHJHPE != 0) {
    puVar2 = puVar1;
  }
  return (System_String_o *)*puVar2;
}


// ===== public static EOAOCPLIKOI.CHCPNNFHMLF LFLPHHEOPOE(string CJNHFNHJHPE)  [RVA 0x3522828]
// LLKDCCJMFLE$$LFLPHHEOPOE @ RVA 0x3522828

int32_t LLKDCCJMFLE__LFLPHHEOPOE(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  
                    /* try { // try from 03622834 to 0372285f has its CatchHandler @ 03622ba8 */
  if ((DAT_045689dc & 1) == 0) {
    FUN_01bab630(&StringLiteral_8302/*"LOW"*/);
    FUN_01bab630(&StringLiteral_6978/*"HIGH"*/);
    DAT_045689dc = 1;
  }
  bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_6978/*"HIGH"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_8302/*"LOW"*/,(MethodInfo *)0x0);
                    /* try { // try from 0362289c to 037228a3 has its CatchHandler @ 03622ba4 */
    iVar2 = bVar1 - 1;
  }
  return iVar2;
}


// ===== public static void BJGGBNJEDLM(string CJNHFNHJHPE)  [RVA 0x35228B0]
// LLKDCCJMFLE$$BJGGBNJEDLM @ RVA 0x35228B0

void LLKDCCJMFLE__BJGGBNJEDLM(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  ACHLOMELAJE_o *pAVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 036228b0 to 037228b7 has its CatchHandler @ 03622b8c */
                    /* try { // try from 036228cc to 037228d3 has its CatchHandler @ 03622b98 */
  if ((DAT_045689dd & 1) == 0) {
                    /* try { // try from 036228d8 to 037228e3 has its CatchHandler @ 03622b90 */
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10630/*"QualityCondition"*/);
                    /* try { // try from 036228f8 to 037228ff has its CatchHandler @ 03622b78 */
    DAT_045689dd = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03622904 to 0372290f has its CatchHandler @ 03622b7c */
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
  }
                    /* try { // try from 03622920 to 03722927 has its CatchHandler @ 03622b80 */
  LLKDCCJMFLE_TypeInfo->static_fields->NBHOILCMCJB = CJNHFNHJHPE;
                    /* try { // try from 0362292c to 03722937 has its CatchHandler @ 03622b70 */
  thunk_FUN_01c20e04(LLKDCCJMFLE_TypeInfo->static_fields,CJNHFNHJHPE);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03622944 to 0372294f has its CatchHandler @ 03622ba0 */
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 03622950 to 03722b3b has its CatchHandler @ 03622590 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__PHCMABDBLJH
              (pAVar1,StringLiteral_10630/*"QualityCondition"*/,LLKDCCJMFLE_TypeInfo->static_fields->NBHOILCMCJB,
               (MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string IDCJKHFCJKM()  [RVA 0x35229F4]
// LLKDCCJMFLE$$IDCJKHFCJKM @ RVA 0x35229F4

System_String_o * LLKDCCJMFLE__IDCJKHFCJKM(MethodInfo *method)

{
  bool bVar1;
  LLKDCCJMFLE_c *method_00;
  System_String_o *pSVar2;
  
  if ((DAT_045689de & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045689de = 1;
  }
  method_00 = LLKDCCJMFLE_TypeInfo;
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LLKDCCJMFLE_c *)thunk_FUN_01ba7564();
  }
  pSVar2 = LLKDCCJMFLE__LIHIMKCJCKO((MethodInfo *)method_00);
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  if (bVar1) {
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = EOAOCPLIKOI__IDCJKHFCJKM((MethodInfo *)0x0);
    return pSVar2;
  }
  return pSVar2;
}


// ===== private static void .cctor()  [RVA 0x3522B6C]
// LLKDCCJMFLE$$.cctor @ RVA 0x3522B6C

void LLKDCCJMFLE___cctor(MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03622b60 with catch @ 03622b6c */
                    /* catch() { ... } // from try @ 0362292c with catch @ 03622b70 */
                    /* catch() { ... } // from try @ 03622b58 with catch @ 03622b74 */
                    /* catch() { ... } // from try @ 036228f8 with catch @ 03622b78 */
                    /* catch() { ... } // from try @ 03622904 with catch @ 03622b7c */
                    /* catch() { ... } // from try @ 03622920 with catch @ 03622b80 */
                    /* catch() { ... } // from try @ 03622b54 with catch @ 03622b84 */
                    /* catch() { ... } // from try @ 03622b50 with catch @ 03622b88 */
                    /* catch() { ... } // from try @ 036228b0 with catch @ 03622b8c */
  if ((DAT_045689df & 1) == 0) {
                    /* catch() { ... } // from try @ 036228d8 with catch @ 03622b90 */
                    /* catch() { ... } // from try @ 03622b4c with catch @ 03622b94 */
                    /* catch() { ... } // from try @ 036228cc with catch @ 03622b98 */
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
                    /* catch() { ... } // from try @ 03622b44 with catch @ 03622b9c */
                    /* catch() { ... } // from try @ 03622944 with catch @ 03622ba0 */
                    /* catch() { ... } // from try @ 0362289c with catch @ 03622ba4 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch() { ... } // from try @ 03622834 with catch @ 03622ba8 */
                    /* catch() { ... } // from try @ 036227d8 with catch @ 03622bac */
    DAT_045689df = 1;
  }
                    /* catch() { ... } // from try @ 03622b3c with catch @ 03622bb0
                       catch() { ... } // from try @ 03622b48 with catch @ 03622bb0 */
  LLKDCCJMFLE_TypeInfo->static_fields->NBHOILCMCJB = StringLiteral_1/*""*/;
                    /* try { // try from 03622bd0 to 03722bd3 has its CatchHandler @ 03622be4 */
  thunk_FUN_01c20e04(LLKDCCJMFLE_TypeInfo->static_fields,StringLiteral_1/*""*/);
  return;
}


// ===== public static string JPAHNBCHDGK(string KDPNKJLDLAG)  [RVA 0x3522BD8]
// LLKDCCJMFLE$$JPAHNBCHDGK @ RVA 0x3522BD8

System_String_o * LLKDCCJMFLE__JPAHNBCHDGK(System_String_o *KDPNKJLDLAG,MethodInfo *method)

{
  bool bVar1;
  System_String_o *NBBPAKAGEOP;
  System_String_o *IMJHEANBDDA;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 03622bd0 with catch @ 03622be4 */
                    /* try { // try from 03622bf4 to 03722c63 has its CatchHandler @ 03622c78 */
  if ((DAT_045689e0 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045689e0 = 1;
    method = extraout_x1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
  }
  NBBPAKAGEOP = EOAOCPLIKOI__IDCJKHFCJKM((MethodInfo *)0x0);
  IMJHEANBDDA = DBGBHDDCAJC__CKLKBKIECEF(KDPNKJLDLAG,NBBPAKAGEOP,(MethodInfo *)0x0);
  bVar1 = DBGBHDDCAJC__JPMFEKNGHJF(IMJHEANBDDA,NBBPAKAGEOP,(MethodInfo *)0x0);
  if (!bVar1) {
    KDPNKJLDLAG = IMJHEANBDDA;
  }
  return KDPNKJLDLAG;
}


// ===== public static bool GBFOJMJMAMF()  [RVA 0x3522C5C]
// LLKDCCJMFLE$$GBFOJMJMAMF @ RVA 0x3522C5C

bool LLKDCCJMFLE__GBFOJMJMAMF(MethodInfo *method)

{
  bool bVar1;
  int32_t GMGGINDHNPI;
  LLKDCCJMFLE_c *method_00;
  System_String_o *KDPNKJLDLAG;
  System_String_o *b;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar2;
  
                    /* try { // try from 03622c64 to 03722c6f has its CatchHandler @ 03622590 */
                    /* try { // try from 03622c70 to 03722c77 has its CatchHandler @ 03622c78 */
  if ((DAT_045689e1 & 1) == 0) {
                    /* catch() { ... } // from try @ 03622bf4 with catch @ 03622c78
                       catch() { ... } // from try @ 03622c70 with catch @ 03622c78 */
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&StringLiteral_6978/*"HIGH"*/);
    DAT_045689e1 = 1;
  }
  method_00 = LLKDCCJMFLE_TypeInfo;
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LLKDCCJMFLE_c *)thunk_FUN_01ba7564();
  }
  KDPNKJLDLAG = LLKDCCJMFLE__IDCJKHFCJKM((MethodInfo *)method_00);
  GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  bVar1 = GNAFJMPJNKI__NCOIGMBGENK(GMGGINDHNPI,(MethodInfo *)0x0);
  b = StringLiteral_6978/*"HIGH"*/;
  if (bVar1) {
    pMVar2 = extraout_x1;
    if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar2 = extraout_x1_00;
    }
    b = LLKDCCJMFLE__JPAHNBCHDGK(KDPNKJLDLAG,pMVar2);
  }
  bVar1 = System_String__op_Inequality(KDPNKJLDLAG,b,(MethodInfo *)0x0);
  if (bVar1) {
    pMVar2 = extraout_x1_01;
    if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar2 = extraout_x1_02;
    }
    LLKDCCJMFLE__BJGGBNJEDLM(b,pMVar2);
  }
  return bVar1;
}


// ===== public static bool GBFOJMJMAMF(DBGBHDDCAJC.GCALJPMPJFP KDPNKJLDLAG)  [RVA 0x3522D30]
// LLKDCCJMFLE$$GBFOJMJMAMF @ RVA 0x3522D30

bool LLKDCCJMFLE__GBFOJMJMAMF(int32_t KDPNKJLDLAG,MethodInfo *method)

{
  bool bVar1;
  LLKDCCJMFLE_c *method_00;
  System_String_o *a;
  System_String_o *b;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  
  if ((DAT_045689e2 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    DAT_045689e2 = 1;
    method = extraout_x1;
  }
  method_00 = LLKDCCJMFLE_TypeInfo;
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LLKDCCJMFLE_c *)thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
  }
  a = LLKDCCJMFLE__IDCJKHFCJKM((MethodInfo *)method_00);
  b = DBGBHDDCAJC__IPNPDKDBIGC(KDPNKJLDLAG,(MethodInfo *)0x0);
  bVar1 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
  if (bVar1) {
    method_01 = extraout_x1_00;
    if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_01 = extraout_x1_01;
    }
    LLKDCCJMFLE__BJGGBNJEDLM(b,method_01);
  }
  return bVar1;
}


// ===== public static void KOCIBNGKCIG()  [RVA 0x3522DCC]
// LLKDCCJMFLE$$KOCIBNGKCIG @ RVA 0x3522DCC

void LLKDCCJMFLE__KOCIBNGKCIG(MethodInfo *method)

{
  int iVar1;
  FGKGKDEJCOG_o *pFVar2;
  
  if ((DAT_045689e3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045689e3 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
    iVar1 = (pFVar2->fields).ILACIHPOGDC;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565e59 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565e59 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
    if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
      FGKGKDEJCOG__MJCNICLHEKC(pFVar2,(uint)(iVar1 == 0),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool JGNHBFFLBIB()  [RVA 0x3522EB4]
// LLKDCCJMFLE$$JGNHBFFLBIB @ RVA 0x3522EB4

bool LLKDCCJMFLE__JGNHBFFLBIB(MethodInfo *method)

{
  bool bVar1;
  LLKDCCJMFLE_c *method_00;
  
  if ((DAT_045689e4 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    DAT_045689e4 = 1;
  }
  method_00 = LLKDCCJMFLE_TypeInfo;
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LLKDCCJMFLE_c *)thunk_FUN_01ba7564();
  }
  bVar1 = LLKDCCJMFLE__ELJDBJCJAEF((MethodInfo *)method_00);
  return bVar1;
}


// ===== public static EOAOCPLIKOI.CHCPNNFHMLF HEHLBJLOCOO()  [RVA 0x3523060]
// LLKDCCJMFLE$$HEHLBJLOCOO @ RVA 0x3523060

int32_t LLKDCCJMFLE__HEHLBJLOCOO(MethodInfo *method)

{
  FGKGKDEJCOG_o *pFVar1;
  
  if ((DAT_045689e5 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045689e5 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar1 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (pFVar1 != (FGKGKDEJCOG_o *)0x0) {
    return (int32_t)((pFVar1->fields).ILACIHPOGDC != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string ENIGDNLDIMK()  [RVA 0x35230FC]
// LLKDCCJMFLE$$ENIGDNLDIMK @ RVA 0x35230FC

System_String_o * LLKDCCJMFLE__ENIGDNLDIMK(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ACHLOMELAJE_o *__this;
  
  if ((DAT_045689e6 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10630/*"QualityCondition"*/);
    DAT_045689e6 = 1;
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
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
    bVar1 = ACHLOMELAJE__JGGHLGELFDJ(__this,StringLiteral_10630/*"QualityCondition"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = EOAOCPLIKOI__IDCJKHFCJKM((MethodInfo *)0x0);
      method_00 = extraout_x1;
      if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo);
        method_00 = extraout_x1_00;
      }
      LLKDCCJMFLE__BJGGBNJEDLM(pSVar2,method_00);
    }
    pSVar2 = ACHLOMELAJE__NOILDCIGGJB(__this,StringLiteral_10630/*"QualityCondition"*/,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void EJFBCLIKGJF()  [RVA 0x3523220]
// LLKDCCJMFLE$$EJFBCLIKGJF @ RVA 0x3523220

void LLKDCCJMFLE__EJFBCLIKGJF(MethodInfo *method)

{
  bool bVar1;
  LLKDCCJMFLE_c *method_00;
  MethodInfo *method_01;
  
  if ((DAT_045689e7 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    DAT_045689e7 = 1;
  }
  method_00 = LLKDCCJMFLE_TypeInfo;
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LLKDCCJMFLE_c *)thunk_FUN_01ba7564();
  }
  bVar1 = LLKDCCJMFLE__JGNHBFFLBIB((MethodInfo *)method_00);
  LLKDCCJMFLE__PJJDBFDMHHI((bool)(~bVar1 & 1),method_01);
  return;
}


// ===== public static string LIHIMKCJCKO()  [RVA 0x3522AA4]
// LLKDCCJMFLE$$LIHIMKCJCKO @ RVA 0x3522AA4

System_String_o * LLKDCCJMFLE__LIHIMKCJCKO(MethodInfo *method)

{
  bool bVar1;
  LLKDCCJMFLE_c *method_00;
  System_String_o *pSVar2;
  
  if ((DAT_045689e8 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045689e8 = 1;
  }
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = System_String__op_Equality
                    (LLKDCCJMFLE_TypeInfo->static_fields->NBHOILCMCJB,StringLiteral_1/*""*/,
                     (MethodInfo *)0x0);
  if (bVar1) {
    method_00 = LLKDCCJMFLE_TypeInfo;
    if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (LLKDCCJMFLE_c *)thunk_FUN_01ba7564();
    }
    pSVar2 = LLKDCCJMFLE__ENIGDNLDIMK((MethodInfo *)method_00);
    LLKDCCJMFLE_TypeInfo->static_fields->NBHOILCMCJB = pSVar2;
                    /* try { // try from 03622b3c to 03722b43 has its CatchHandler @ 03622bb0 */
    thunk_FUN_01c20e04(LLKDCCJMFLE_TypeInfo->static_fields,pSVar2);
  }
                    /* try { // try from 03622b44 to 03722b47 has its CatchHandler @ 03622b9c */
                    /* try { // try from 03622b48 to 03722b4b has its CatchHandler @ 03622bb0 */
                    /* try { // try from 03622b4c to 03722b4f has its CatchHandler @ 03622b94 */
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03622b50 to 03722b53 has its CatchHandler @ 03622b88 */
    thunk_FUN_01ba7564();
                    /* try { // try from 03622b54 to 03722b57 has its CatchHandler @ 03622b84 */
  }
                    /* try { // try from 03622b58 to 03722b5b has its CatchHandler @ 03622b74 */
                    /* try { // try from 03622b5c to 03722b5f has its CatchHandler @ 03622590 */
                    /* try { // try from 03622b60 to 03722b63 has its CatchHandler @ 03622b6c */
                    /* try { // try from 03622b64 to 03722bcf has its CatchHandler @ 03622590 */
  return LLKDCCJMFLE_TypeInfo->static_fields->NBHOILCMCJB;
}


// ===== private static bool ELJDBJCJAEF()  [RVA 0x3522F00]
// LLKDCCJMFLE$$ELJDBJCJAEF @ RVA 0x3522F00

bool LLKDCCJMFLE__ELJDBJCJAEF(MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  ACHLOMELAJE_o *__this;
  
  if ((DAT_045689e9 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_4699/*"ControllerScale"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_13929/*"True"*/);
    DAT_045689e9 = 1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = EOAOCPLIKOI__PDGPEFAMKLM((MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  bVar1 = !bVar1;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
    bVar2 = ACHLOMELAJE__JGGHLGELFDJ(__this,StringLiteral_4699/*"ControllerScale"*/,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar3 = ACHLOMELAJE__NOILDCIGGJB(__this,StringLiteral_4699/*"ControllerScale"*/,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar3,StringLiteral_13929/*"True"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar3 = ACHLOMELAJE__NOILDCIGGJB(__this,StringLiteral_4699/*"ControllerScale"*/,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0);
        return bVar1;
      }
      bVar1 = true;
    }
  }
  return bVar1;
}


// ===== public static void PJJDBFDMHHI(bool CJNHFNHJHPE)  [RVA 0x3523278]
// LLKDCCJMFLE$$PJJDBFDMHHI @ RVA 0x3523278

void LLKDCCJMFLE__PJJDBFDMHHI(bool CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *pAVar1;
  
  if ((DAT_045689ea & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_4699/*"ControllerScale"*/);
    DAT_045689ea = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(bool_TypeInfo,method);
  }
  CJNHFNHJHPE_00 = System_Boolean__ToString(true,(MethodInfo *)0x0);
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__PHCMABDBLJH(pAVar1,StringLiteral_4699/*"ControllerScale"*/,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

