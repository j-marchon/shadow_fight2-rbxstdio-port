// TypeDefIndex 2833
// Namespace: 
// public static class POEIJGLGEED
// Fields:
//   private const int HCPDIIBGPKB = 0;
//   private const int EEACIBDOHIM = 1;
//   private static Action<int> ACECMFNGPII; // 0x0
//   private static int FJPDEJPEHMI; // 0x8
//   private static int PCKFFKPNJOM; // 0xC

// ===== private static void NHEFKKBBCDJ(int LKFALEIFDIO)  [RVA 0x342BB68]
// POEIJGLGEED$$NHEFKKBBCDJ @ RVA 0x342BB68

void POEIJGLGEED__NHEFKKBBCDJ(int32_t LKFALEIFDIO,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  POEIJGLGEED_StaticFields *pPVar2;
  System_Action_int__o *pSVar3;
  
  if ((DAT_04568139 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&POEIJGLGEED_TypeInfo);
    FUN_01bab630(&StringLiteral_1100/*")"*/);
    FUN_01bab630(&StringLiteral_15581/*"[SecurityManager] CheckLicense - SUCCESS"*/);
    FUN_01bab630(&StringLiteral_15580/*"[SecurityManager] CheckLicense - FAILED ("*/);
    DAT_04568139 = 1;
    method = extraout_x1;
  }
  if (LKFALEIFDIO == 0) {
    pSVar1 = StringLiteral_15581/*"[SecurityManager] CheckLicense - SUCCESS"*/;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
      pSVar1 = StringLiteral_15581/*"[SecurityManager] CheckLicense - SUCCESS"*/;
    }
  }
  else {
    pSVar1 = OIGEODHOGMC__IBBMFNFIKPE
                       (POEIJGLGEED_TypeInfo->static_fields->FJPDEJPEHMI,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(StringLiteral_15580/*"[SecurityManager] CheckLicense - FAILED ("*/,pSVar1,StringLiteral_1100/*")"*/,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  pPVar2 = POEIJGLGEED_TypeInfo->static_fields;
  pSVar3 = pPVar2->ACECMFNGPII;
  if (pSVar3 != (System_Action_int__o *)0x0) {
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,LKFALEIFDIO,
               (pSVar3->fields).super.super.method);
    pPVar2 = POEIJGLGEED_TypeInfo->static_fields;
  }
  pPVar2->ACECMFNGPII = (System_Action_int__o *)0x0;
  thunk_FUN_01c20e04(POEIJGLGEED_TypeInfo->static_fields,0);
  return;
}


// ===== private static void LDJCICLOEOB(POEIJGLGEED.PGHHNOPEKLB BFPCMHPBAGL)  [RVA 0x342BCA8]
// POEIJGLGEED$$LDJCICLOEOB @ RVA 0x342BCA8

void POEIJGLGEED__LDJCICLOEOB(POEIJGLGEED_PGHHNOPEKLB_o *BFPCMHPBAGL,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  bool_conflict bVar5;
  SUProxy_o *__this;
  System_Action_int__string__o *GNENFFLCFJK;
  POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *pPVar6;
  System_String_o *PFLHEACAKFG;
  
  if ((DAT_0456813a & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string>_TypeInfo);
    FUN_01bab630(&Method_POEIJGLGEED_ODCAOCGHMPN__);
    DAT_0456813a = 1;
  }
  __this = SUProxy__get_Current((MethodInfo *)0x0);
  if (BFPCMHPBAGL == (POEIJGLGEED_PGHHNOPEKLB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = (BFPCMHPBAGL->fields).PKPHIABHKFE;
  if (pPVar6 == (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  PFLHEACAKFG = (pPVar6->fields).JBDFLNMINKD;
  bVar1 = (pPVar6->fields).IBOODFDOFGP;
  bVar2 = (pPVar6->fields).CBADOHAADMD;
  bVar3 = (pPVar6->fields).OHELOABONEN;
  bVar4 = (pPVar6->fields).GDIJGCGHKIB;
  bVar5 = (pPVar6->fields).NLFPMGBICIK;
  GNENFFLCFJK = (System_Action_int__string__o *)
                thunk_FUN_01bda818(System_Action<int,_string>_TypeInfo);
  System_Action<int,_object>___ctor();
  if (__this != (SUProxy_o *)0x0) {
    SUProxy__LCL(__this,PFLHEACAKFG,bVar1 != false,bVar2 != false,bVar3 != false,bVar4 != false,
                 bVar5 != false,GNENFFLCFJK,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int IIBCLDACBAL()  [RVA 0x342BE8C]
// POEIJGLGEED$$IIBCLDACBAL @ RVA 0x342BE8C

int32_t POEIJGLGEED__IIBCLDACBAL(MethodInfo *method)

{
  if ((DAT_0456813b & 1) == 0) {
    FUN_01bab630(&POEIJGLGEED_TypeInfo);
    DAT_0456813b = 1;
  }
  return POEIJGLGEED_TypeInfo->static_fields->PCKFFKPNJOM;
}


// ===== public static ApplicationInstallMode EDIGBEDHJED()  [RVA 0x342BED4]
// POEIJGLGEED$$EDIGBEDHJED @ RVA 0x342BED4

int32_t POEIJGLGEED__EDIGBEDHJED(MethodInfo *method)

{
  int32_t iVar1;
  
  if ((DAT_0456813c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_0456813c = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = UnityEngine_Application__get_installMode((MethodInfo *)0x0);
  return iVar1;
}


// ===== public static int FPMHKALHLBB()  [RVA 0x342BF24]
// POEIJGLGEED$$FPMHKALHLBB @ RVA 0x342BF24

int32_t POEIJGLGEED__FPMHKALHLBB(MethodInfo *method)

{
  if ((DAT_0456813d & 1) == 0) {
    FUN_01bab630(&POEIJGLGEED_TypeInfo);
    DAT_0456813d = 1;
  }
  return POEIJGLGEED_TypeInfo->static_fields->FJPDEJPEHMI;
}


// ===== public static void BJDILAPJIGA(Action<int> FFJLJJAGJAG, POEIJGLGEED.PGHHNOPEKLB BFPCMHPBAGL)  [RVA 0x342BF6C]
// POEIJGLGEED$$BJDILAPJIGA @ RVA 0x342BF6C

void POEIJGLGEED__BJDILAPJIGA
               (System_Action_int__o *FFJLJJAGJAG,POEIJGLGEED_PGHHNOPEKLB_o *BFPCMHPBAGL,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_0456813e & 1) == 0) {
    FUN_01bab630(&POEIJGLGEED_TypeInfo);
    DAT_0456813e = 1;
  }
  POEIJGLGEED_TypeInfo->static_fields->ACECMFNGPII = FFJLJJAGJAG;
  thunk_FUN_01c20e04(POEIJGLGEED_TypeInfo->static_fields,FFJLJJAGJAG);
  POEIJGLGEED_TypeInfo->static_fields->FJPDEJPEHMI = -1;
  POEIJGLGEED__LDJCICLOEOB(BFPCMHPBAGL,method_00);
  return;
}


// ===== public static string NPJHCEDIIBA()  [RVA 0x342BFE8]
// POEIJGLGEED$$NPJHCEDIIBA @ RVA 0x342BFE8

System_String_o * POEIJGLGEED__NPJHCEDIIBA(MethodInfo *method)

{
  SUProxy_o *__this;
  System_String_o *pSVar1;
  
  __this = SUProxy__get_Current((MethodInfo *)0x0);
  if (__this != (SUProxy_o *)0x0) {
    pSVar1 = SUProxy__GetIID(__this,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void ODCAOCGHMPN(int PDGLILNNEJJ, string HFOIODFEKCH)  [RVA 0x342C008]
// POEIJGLGEED$$ODCAOCGHMPN @ RVA 0x342C008

void POEIJGLGEED__ODCAOCGHMPN(int32_t PDGLILNNEJJ,System_String_o *HFOIODFEKCH,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  int32_t LKFALEIFDIO;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  int32_t local_24;
  
  method_00 = (MethodInfo *)HFOIODFEKCH;
  if ((DAT_0456813f & 1) == 0) {
    FUN_01bab630(&POEIJGLGEED_TypeInfo);
    DAT_0456813f = 1;
    method_00 = extraout_x1;
  }
  local_24 = 0;
  if (PDGLILNNEJJ == 1) {
    bVar2 = System_Int32__TryParse(HFOIODFEKCH,&local_24,(MethodInfo *)0x0);
                    /* try { // try from 0352c070 to 0362c107 has its CatchHandler @ 0352c070
                       catch() { ... } // from try @ 0352c070 with catch @ 0352c070
                       catch() { ... } // from try @ 0352c138 with catch @ 0352c070
                       catch() { ... } // from try @ 0352c18c with catch @ 0352c070
                       catch() { ... } // from try @ 0352c1b4 with catch @ 0352c070
                       catch() { ... } // from try @ 0352c1e8 with catch @ 0352c070 */
    LKFALEIFDIO = 1;
    iVar1 = local_24;
    if (!bVar2) {
      iVar1 = -1;
    }
    POEIJGLGEED_TypeInfo->static_fields->FJPDEJPEHMI = iVar1;
    method_00 = extraout_x1_00;
  }
  else {
    if (PDGLILNNEJJ != 0) {
      return;
    }
    LKFALEIFDIO = 0;
  }
  POEIJGLGEED__NHEFKKBBCDJ(LKFALEIFDIO,method_00);
  return;
}


// ===== public static string CGFLLLNEFOE()  [RVA 0x342C09C]
// POEIJGLGEED$$CGFLLLNEFOE @ RVA 0x342C09C

System_String_o * POEIJGLGEED__CGFLLLNEFOE(MethodInfo *method)

{
  SUProxy_o *__this;
  System_String_o *pSVar1;
  
  __this = SUProxy__get_Current((MethodInfo *)0x0);
  if (__this != (SUProxy_o *)0x0) {
    pSVar1 = SUProxy__GetSGN(__this,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

