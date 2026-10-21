// TypeDefIndex 3212
// Namespace: 
// public static class LHKALFIIJKB
// Fields:
//   private static bool <IKKBHKLDJLD>k__BackingField; // 0x0
//   private static bool <DPINOOGOIGD>k__BackingField; // 0x1
//   private static List<LHKALFIIJKB.CFFGMHNFPLN> KLMLDJJBLKO; // 0x8
//   private static IEnumerator AFAKLFEDLPE; // 0x10
//   private static string KPLOGMKKPDL; // 0x18
//   private static int MBBGNKAKHFO; // 0x20
//   private static long AKKEJBHGOHD; // 0x28
//   private static string GJHCNJHLMPO; // 0x30
//   private static string ANAGLMHLADA; // 0x38
//   private static Action BPDJGLJFDGC; // 0x40
//   private static Action DEAACLMEHIB; // 0x48
//   private static bool FBAFKMAMBCC; // 0x50
//   private static bool JDMCKMLFGBL; // 0x51

// ===== public static void ADIDMAPEEEO(Action HJNIEEICBFA)  [RVA 0x34FC620]
// LHKALFIIJKB$$ADIDMAPEEEO @ RVA 0x34FC620

void LHKALFIIJKB__ADIDMAPEEEO(System_Action_o *HJNIEEICBFA,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  
                    /* try { // try from 035fc628 to 036fc63b has its CatchHandler @ 035fc6e8 */
                    /* try { // try from 035fc63c to 036fc63f has its CatchHandler @ 035fc678 */
  if ((DAT_0456882c & 1) == 0) {
                    /* try { // try from 035fc640 to 036fc647 has its CatchHandler @ 035fc674 */
                    /* try { // try from 035fc648 to 036fc64b has its CatchHandler @ 035fc668 */
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
                    /* try { // try from 035fc64c to 036fc64f has its CatchHandler @ 035fc664 */
                    /* try { // try from 035fc650 to 036fc69f has its CatchHandler @ 035fc378 */
    DAT_0456882c = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 035fc5e8 with catch @ 035fc654 */
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 035fc4c0 with catch @ 035fc660 */
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
                    /* catch() { ... } // from try @ 035fc64c with catch @ 035fc664 */
                    /* catch() { ... } // from try @ 035fc648 with catch @ 035fc668 */
                    /* catch() { ... } // from try @ 035fc4c4 with catch @ 035fc66c */
  if (DAT_04568906 == '\0') {
                    /* catch() { ... } // from try @ 035fc4d8 with catch @ 035fc670 */
                    /* catch() { ... } // from try @ 035fc640 with catch @ 035fc674 */
                    /* catch() { ... } // from try @ 035fc63c with catch @ 035fc678 */
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
                    /* catch() { ... } // from try @ 035fc59c with catch @ 035fc67c */
                    /* catch() { ... } // from try @ 035fc4ec with catch @ 035fc680 */
    DAT_04568906 = '\x01';
    method = extraout_x1_01;
  }
                    /* catch() { ... } // from try @ 035fc4a4 with catch @ 035fc684 */
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_02;
  }
                    /* try { // try from 035fc6a0 to 036fc6a3 has its CatchHandler @ 035fc6c4 */
                    /* try { // try from 035fc6a4 to 036fc6cb has its CatchHandler @ 035fc378 */
  LHKALFIIJKB_TypeInfo->static_fields->_IKKBHKLDJLD_k__BackingField = false;
  LHKALFIIJKB__DAFNBBJHFJL(HJNIEEICBFA,method);
  return;
}


// ===== private static void MDNKBEAMMFO()  [RVA 0x34FC7EC]
// LHKALFIIJKB$$MDNKBEAMMFO @ RVA 0x34FC7EC

void LHKALFIIJKB__MDNKBEAMMFO(MethodInfo *method)

{
  LHKALFIIJKB_c *pLVar1;
  System_Action_o **ppSVar2;
  System_Action_o *pSVar3;
  
  if ((DAT_0456882d & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_0456882d = 1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568907 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568907 = '\x01';
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar1 = LHKALFIIJKB_TypeInfo;
  LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = false;
  if (DAT_04568906 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568906 = '\x01';
    pLVar1 = LHKALFIIJKB_TypeInfo;
  }
  if ((pLVar1->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pLVar1 = LHKALFIIJKB_TypeInfo;
  }
  pSVar3 = pLVar1->static_fields->BPDJGLJFDGC;
  pLVar1->static_fields->_IKKBHKLDJLD_k__BackingField = true;
  if (pSVar3 != (System_Action_o *)0x0) {
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
    pLVar1 = LHKALFIIJKB_TypeInfo;
  }
  if ((pLVar1->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pLVar1 = LHKALFIIJKB_TypeInfo;
  }
  ppSVar2 = &pLVar1->static_fields->BPDJGLJFDGC;
  *ppSVar2 = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  return;
}


// ===== private static void IOBBFLJPKOB(bool LKFALEIFDIO, JSONNode OCMMDIHLKMH, object EHPEBANNEAC)  [RVA 0x34FC8E8]
// LHKALFIIJKB$$IOBBFLJPKOB @ RVA 0x34FC8E8

void LHKALFIIJKB__IOBBFLJPKOB
               (bool LKFALEIFDIO,SimpleJSON_JSONNode_o *OCMMDIHLKMH,Il2CppObject *EHPEBANNEAC,
               MethodInfo *method)

{
  LHKALFIIJKB_c *method_00;
  SimpleJSON_JSONNode_o *extraout_x1;
  
  if ((DAT_0456882e & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_0456882e = 1;
    OCMMDIHLKMH = extraout_x1;
  }
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,OCMMDIHLKMH);
  }
  LHKALFIIJKB__PGLPDFKGFGG((MethodInfo *)method_00);
  if (DAT_04568907 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568907 = '\x01';
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = false;
  return;
}


// ===== private static void FKPLMPKAECO(bool BGNBGAIHPDC = False)  [RVA 0x34FC9C8]
// LHKALFIIJKB$$FKPLMPKAECO @ RVA 0x34FC9C8

void LHKALFIIJKB__FKPLMPKAECO(bool BGNBGAIHPDC,MethodInfo *method)

{
  LHKALFIIJKB_c *pLVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456882f & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_0456882f = 1;
    method = extraout_x1;
  }
  pLVar1 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    pLVar1 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  pSVar2 = LHKALFIIJKB__OPIFOELMDAH((MethodInfo *)pLVar1);
  NEHNBJKKABI__IIOJEPFDGLE(pSVar2,true,(MethodInfo *)0x0);
  if (BGNBGAIHPDC) {
    pLVar1 = LHKALFIIJKB_TypeInfo;
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      pLVar1 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
    }
    pSVar2 = LHKALFIIJKB__OPIFOELMDAH((MethodInfo *)pLVar1);
    NEHNBJKKABI__GLNBJGJPBFD(pSVar2,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== internal static void EGAAHFPJDCC()  [RVA 0x34FCAC0]
// LHKALFIIJKB$$EGAAHFPJDCC @ RVA 0x34FCAC0

void LHKALFIIJKB__EGAAHFPJDCC(MethodInfo *method)

{
  LHKALFIIJKB_c *method_00;
  ACHLOMELAJE_o *__this;
  
  if ((DAT_04568830 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568830 = 1;
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
    ACHLOMELAJE__DAINDHGKAMF(__this,true,(MethodInfo *)0x0);
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04568907 == '\0') {
      FUN_01bab630(&LHKALFIIJKB_TypeInfo);
      DAT_04568907 = '\x01';
    }
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = LHKALFIIJKB_TypeInfo;
    LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = false;
    LHKALFIIJKB__CLIHAFJDHKO((MethodInfo *)method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool HDLIMCBCNAD()  [RVA 0x34FD074]
// LHKALFIIJKB$$HDLIMCBCNAD @ RVA 0x34FD074

bool LHKALFIIJKB__HDLIMCBCNAD(MethodInfo *method)

{
  if ((DAT_04568831 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568831 = 1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField;
}


// ===== private static void GMFENOAMOJO(bool CIPMHONCAKN = True)  [RVA 0x34FD0CC]
// LHKALFIIJKB$$GMFENOAMOJO @ RVA 0x34FD0CC

void LHKALFIIJKB__GMFENOAMOJO(bool CIPMHONCAKN,MethodInfo *method)

{
  LHKALFIIJKB_c *method_00;
  System_String_o *AAIHDEKMIJG;
  System_Byte_array *IMMNELPBGIF;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568832 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568832 = 1;
    method = extraout_x1;
  }
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  AAIHDEKMIJG = LHKALFIIJKB__FPOJCJJJGAD((MethodInfo *)method_00);
  IMMNELPBGIF = NEHNBJKKABI__BELGEBDABEH(AAIHDEKMIJG,(MethodInfo *)0x0);
  IMAPABEJECG__ECDBHGCNKBO(IMMNELPBGIF,CIPMHONCAKN,(MethodInfo *)0x0);
  return;
}


// ===== public static void NCENEKNCCBE(Action ENKEINKHLOL)  [RVA 0x34FD1A0]
// LHKALFIIJKB$$NCENEKNCCBE @ RVA 0x34FD1A0

void LHKALFIIJKB__NCENEKNCCBE(System_Action_o *ENKEINKHLOL,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568833 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568833 = 1;
    method = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  ppSVar1 = &LHKALFIIJKB_TypeInfo->static_fields->BPDJGLJFDGC;
  *ppSVar1 = ENKEINKHLOL;
  thunk_FUN_01c20e04(ppSVar1,ENKEINKHLOL);
  IMAPABEJECG__HEHBOCDCKEN((MethodInfo *)0x0);
  return;
}


// ===== private static void CLIHAFJDHKO()  [RVA 0x34FCBBC]
// LHKALFIIJKB$$CLIHAFJDHKO @ RVA 0x34FCBBC

void LHKALFIIJKB__CLIHAFJDHKO(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  LHKALFIIJKB_c *pLVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  System_String_o *CAMOGCOJCGJ;
  ServerProviderBase_ECJOKKDKDGB_o *__this_00;
  Core_Network_ServerProvider_o *__this_01;
  System_Action_bool__JSONNode__object__o *GFNABKGEGJA;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_RuntimeFieldHandle_o fldHandle;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  GCFHEEKPCPJ_o *__this_02;
  
  if ((DAT_04568834 & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_JSONNode,_object>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_638);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_639);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_640);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_641);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_642);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_643);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_644);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_645);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_ServerProviderBase_ECJOKKDKDGB>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_ServerProviderBase_ECJOKKDKDGB>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<string,_ServerProviderBase_ECJOKKDKDGB>_TypeInfo
                );
    FUN_01bab630(&ServerProviderBase_ECJOKKDKDGB_TypeInfo);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_IOBBFLJPKOB__);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568834 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)0x0);
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo);
  }
  bVar1 = EOOEOHKLOFJ__EGFIEDINDAC(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_638,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    fldHandle.fields.value =
         (System_RuntimeFieldHandle_Fields)
         (System_RuntimeFieldHandle_Fields)
         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_639.value;
LAB_035fd01c:
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,fldHandle,(MethodInfo *)0x0);
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pMVar6 = extraout_x1;
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
      pMVar6 = extraout_x1_00;
    }
    LHKALFIIJKB__LJGOKKLMLNN(pSVar2,pMVar6);
    return;
  }
  pLVar5 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    pLVar5 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
  LHKALFIIJKB__PPMCNLDDIKG((MethodInfo *)pLVar5);
  LHKALFIIJKB__GMFENOAMOJO(true,method_02);
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<string,_ServerProviderBase_ECJOKKDKDGB>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,
             Method_System_Collections_Generic_Dictionary<string,_ServerProviderBase_ECJOKKDKDGB>__ctor__
            );
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_640,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_641,(MethodInfo *)0x0);
  pMVar6 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)LHKALFIIJKB__FPOJCJJJGAD(pMVar6);
  pSVar2 = LHKALFIIJKB__FPOJCJJJGAD(method_00);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_642,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_643,(MethodInfo *)0x0);
  CAMOGCOJCGJ = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  __this_00 = (ServerProviderBase_ECJOKKDKDGB_o *)
              thunk_FUN_01bda818(ServerProviderBase_ECJOKKDKDGB_TypeInfo);
  ServerProviderBase_ECJOKKDKDGB___ctor
            (__this_00,(System_String_o *)method_00,pSVar2,CAMOGCOJCGJ,(MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pMVar6,(Il2CppObject *)__this_00,
               Method_System_Collections_Generic_Dictionary<string,_ServerProviderBase_ECJOKKDKDGB>_Add__
              );
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
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_644,(MethodInfo *)0x0
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      fldHandle.fields.value =
           (System_RuntimeFieldHandle_Fields)
           (System_RuntimeFieldHandle_Fields)
           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_645.value;
      goto LAB_035fd01c;
    }
    __this_01 = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
    if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGAGKCEDNNN_TypeInfo);
    }
    __this_02 = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
    pLVar5 = LHKALFIIJKB_TypeInfo;
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      pLVar5 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
    }
    pSVar2 = LHKALFIIJKB__FPOJCJJJGAD((MethodInfo *)pLVar5);
    if (__this_02 != (GCFHEEKPCPJ_o *)0x0) {
      pSVar2 = GCFHEEKPCPJ__FHFDAFKBACH(__this_02,pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
      GFNABKGEGJA = (System_Action_bool__JSONNode__object__o *)
                    thunk_FUN_01bda818(System_Action<bool,_JSONNode,_object>_TypeInfo);
      System_Action<bool,_object,_object>___ctor();
      if (__this_01 != (Core_Network_ServerProvider_o *)0x0) {
        Core_Network_ServerProvider__SaveDump
                  (__this_01,pSVar2,
                   (System_Collections_Generic_Dictionary_string__ServerProviderBase_ECJOKKDKDGB__o
                    *)__this,GFNABKGEGJA,(MethodInfo *)0x0);
        LHKALFIIJKB__MDNKBEAMMFO(method_01);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void LNGIKCILFFK()  [RVA 0x34FD6AC]
// LHKALFIIJKB$$LNGIKCILFFK @ RVA 0x34FD6AC

void LHKALFIIJKB__LNGIKCILFFK(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ACHLOMELAJE_o *__this;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  System_Byte_array *pSVar7;
  System_Byte_array *pSVar8;
  System_String_o *pSVar9;
  long lVar10;
  System_String_o *pSVar11;
  VirtualInvokeData *pVVar12;
  PDGHODJHCGP_o *__this_00;
  PDGHODJHCGP_HIBNPLAHCBH_o *pPVar13;
  Il2CppClass *pIVar14;
  long lVar15;
  ulong uVar16;
  int32_t *piVar17;
  undefined8 uVar18;
  int64_t FDNNNELHJJN;
  int32_t local_64;
  
  if ((DAT_04568835 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_646);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_647);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_648);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_649);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_650);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_651);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_652);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_653);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_654);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_655);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_EPPBDPHJHEG__);
    FUN_01bab630(&Method_LHKALFIIJKB_OHLAIABMCBC__);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PDGHODJHCGP_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04568835 = 1;
  }
  local_64 = 0;
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
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_646,(MethodInfo *)0x0);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_647,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
  }
  else {
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
    if (__this == (ACHLOMELAJE_o *)0x0) goto LAB_035fdf20;
    local_64 = ACHLOMELAJE__EOEAKGGDBFH(__this,(MethodInfo *)0x0);
    pSVar5 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
  }
  pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_648,(MethodInfo *)0x0);
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_649,(MethodInfo *)0x0);
  pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
  lVar10 = FUN_01bab718(string___TypeInfo,3);
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
  }
  pSVar11 = System_Int32__ToString
                      ((int)LHKALFIIJKB_TypeInfo->static_fields + 0x20,(MethodInfo *)0x0);
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) != 0) {
      *(System_String_o **)(lVar10 + 0x20) = pSVar11;
      thunk_FUN_01c20e04();
      FDNNNELHJJN = LHKALFIIJKB_TypeInfo->static_fields->AKKEJBHGOHD;
      if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar11 = NGFEKJBMGEB__IPOELNKMKBA(FDNNNELHJJN,(MethodInfo *)0x0);
      if (1 < *(uint *)(lVar10 + 0x18)) {
        *(undefined8 *)(lVar10 + 0x28) = pSVar11;
        thunk_FUN_01c20e04((undefined8 *)(lVar10 + 0x28),pSVar11);
        if (2 < *(uint *)(lVar10 + 0x18)) {
          *(undefined8 *)(lVar10 + 0x30) = pSVar5;
          thunk_FUN_01c20e04((undefined8 *)(lVar10 + 0x30),pSVar5);
          if (pIVar6 != (Il2CppObject *)0x0) {
            pIVar14 = pIVar6->klass;
            uVar1._0_1_ = (pIVar14->_2).rank;
            uVar1._1_1_ = (pIVar14->_2).minimumAlignment;
            uVar16 = (ulong)uVar1;
            if (uVar16 != 0) {
              piVar17 = &((pIVar14->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar12 = pIVar14->vtable + (*piVar17 + 0xc);
                  goto LAB_035fdac4;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            pVVar12 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035fdac4:
            pSVar5 = (System_String_o *)(*pVVar12->methodPtr)(pIVar6,pSVar9,lVar10,pVVar12->method);
            pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_650,
                       (MethodInfo *)0x0);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_651,
                       (MethodInfo *)0x0);
            pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
            lVar10 = Method_System_Array_Empty<string>__;
            lVar15 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
            if (lVar15 == 0) {
              FUN_01b8167c(Method_System_Array_Empty<string>__);
              lVar15 = *(long *)(lVar10 + 0x38);
            }
            lVar15 = *(long *)(lVar15 + 0x10);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_01b81620();
            }
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01ba7564();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01b81620();
            }
            if (pIVar6 != (Il2CppObject *)0x0) {
              pIVar14 = pIVar6->klass;
              uVar18 = **(undefined8 **)(lVar10 + 0xb8);
              uVar2._0_1_ = (pIVar14->_2).rank;
              uVar2._1_1_ = (pIVar14->_2).minimumAlignment;
              uVar16 = (ulong)uVar2;
              if (uVar16 != 0) {
                piVar17 = &((pIVar14->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                      (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    pVVar12 = pIVar14->vtable + (*piVar17 + 0xc);
                    goto LAB_035fdbf8;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              pVVar12 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035fdbf8:
              pSVar9 = (System_String_o *)
                       (*pVVar12->methodPtr)(pIVar6,pSVar9,uVar18,pVVar12->method);
              __this_00 = (PDGHODJHCGP_o *)thunk_FUN_01bda818(PDGHODJHCGP_TypeInfo);
              PDGHODJHCGP___ctor(__this_00,pSVar9,pSVar5,(MethodInfo *)0x0);
              pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                 (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
              pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar7,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_652,
                         (MethodInfo *)0x0);
              pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar8,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_653,
                         (MethodInfo *)0x0);
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
              lVar10 = Method_System_Array_Empty<string>__;
              lVar15 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
              if (lVar15 == 0) {
                FUN_01b8167c(Method_System_Array_Empty<string>__);
                lVar15 = *(long *)(lVar10 + 0x38);
              }
              lVar15 = *(long *)(lVar15 + 0x10);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = FUN_01b81620();
              }
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01ba7564();
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01b81620();
              }
              if (pIVar6 != (Il2CppObject *)0x0) {
                pIVar14 = pIVar6->klass;
                uVar18 = **(undefined8 **)(lVar10 + 0xb8);
                uVar3._0_1_ = (pIVar14->_2).rank;
                uVar3._1_1_ = (pIVar14->_2).minimumAlignment;
                uVar16 = (ulong)uVar3;
                if (uVar16 != 0) {
                  piVar17 = &((pIVar14->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                        (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                      pVVar12 = pIVar14->vtable + (*piVar17 + 0xc);
                      goto LAB_035fdd40;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                pVVar12 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035fdd40:
                pSVar5 = (System_String_o *)
                         (*pVVar12->methodPtr)(pIVar6,pSVar5,uVar18,pVVar12->method);
                pPVar13 = (PDGHODJHCGP_HIBNPLAHCBH_o *)
                          thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
                PDGHODJHCGP_HIBNPLAHCBH___ctor
                          (pPVar13,(Il2CppObject *)0x0,Method_LHKALFIIJKB_EPPBDPHJHEG__,
                           (MethodInfo *)0x0);
                if (__this_00 != (PDGHODJHCGP_o *)0x0) {
                  PDGHODJHCGP__IEFEBMICIHN(__this_00,pSVar5,pPVar13,(MethodInfo *)0x0);
                  pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar7,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_654,
                             (MethodInfo *)0x0);
                  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar8,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_655,
                             (MethodInfo *)0x0);
                  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
                  lVar10 = Method_System_Array_Empty<string>__;
                  lVar15 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
                  if (lVar15 == 0) {
                    FUN_01b8167c(Method_System_Array_Empty<string>__);
                    lVar15 = *(long *)(lVar10 + 0x38);
                  }
                  lVar15 = *(long *)(lVar15 + 0x10);
                  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                    lVar15 = FUN_01b81620();
                  }
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_01ba7564();
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01b81620();
                  }
                  if (pIVar6 != (Il2CppObject *)0x0) {
                    pIVar14 = pIVar6->klass;
                    uVar18 = **(undefined8 **)(lVar10 + 0xb8);
                    uVar4._0_1_ = (pIVar14->_2).rank;
                    uVar4._1_1_ = (pIVar14->_2).minimumAlignment;
                    uVar16 = (ulong)uVar4;
                    if (uVar16 != 0) {
                      piVar17 = &((pIVar14->_1).interfaceOffsets)->offset;
                      do {
                        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                          pVVar12 = pIVar14->vtable + (*piVar17 + 0xc);
                          goto LAB_035fdea8;
                        }
                        uVar16 = uVar16 - 1;
                        piVar17 = piVar17 + 4;
                      } while (uVar16 != 0);
                    }
                    pVVar12 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035fdea8:
                    pSVar5 = (System_String_o *)
                             (*pVVar12->methodPtr)(pIVar6,pSVar5,uVar18,pVVar12->method);
                    pPVar13 = (PDGHODJHCGP_HIBNPLAHCBH_o *)
                              thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
                    PDGHODJHCGP_HIBNPLAHCBH___ctor
                              (pPVar13,(Il2CppObject *)0x0,Method_LHKALFIIJKB_OHLAIABMCBC__,
                               (MethodInfo *)0x0);
                    PDGHODJHCGP__IEFEBMICIHN(__this_00,pSVar5,pPVar13,(MethodInfo *)0x0);
                    PDGHODJHCGP__BFCCEGGDJEF(__this_00,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          goto LAB_035fdf20;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_035fdf20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void PADAJCPPCBJ(string KGLJICLJHEL)  [RVA 0x34FDF28]
// LHKALFIIJKB$$PADAJCPPCBJ @ RVA 0x34FDF28

void LHKALFIIJKB__PADAJCPPCBJ(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Action_o *pSVar2;
  
  if ((DAT_04568836 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568836 = 1;
    method = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = LHKALFIIJKB_TypeInfo->static_fields->DEAACLMEHIB;
  if (pSVar2 != (System_Action_o *)0x0) {
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
      pSVar2 = LHKALFIIJKB_TypeInfo->static_fields->DEAACLMEHIB;
      if (pSVar2 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    method = extraout_x1_01;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
                    /* try { // try from 035fdfb8 to 036fe19b has its CatchHandler @ 035fdfb8
                       catch() { ... } // from try @ 035fdfb8 with catch @ 035fdfb8
                       catch() { ... } // from try @ 035fe224 with catch @ 035fdfb8
                       catch() { ... } // from try @ 035fe2ec with catch @ 035fdfb8
                       catch() { ... } // from try @ 035fe314 with catch @ 035fdfb8
                       catch() { ... } // from try @ 035fe348 with catch @ 035fdfb8 */
  ppSVar1 = &LHKALFIIJKB_TypeInfo->static_fields->DEAACLMEHIB;
  *ppSVar1 = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== public static void DAFNBBJHFJL(Action HJNIEEICBFA)  [RVA 0x34FC6B0]
// LHKALFIIJKB$$DAFNBBJHFJL @ RVA 0x34FC6B0

void LHKALFIIJKB__DAFNBBJHFJL(System_Action_o *HJNIEEICBFA,MethodInfo *method)

{
  bool bVar1;
  System_Action_o **ppSVar2;
  LHKALFIIJKB_c *method_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *GPJHCIPBFOG;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  
                    /* catch() { ... } // from try @ 035fc6a0 with catch @ 035fc6c4 */
                    /* try { // try from 035fc6cc to 036fc6d3 has its CatchHandler @ 035fc6e8 */
  if ((DAT_04568837 & 1) == 0) {
                    /* try { // try from 035fc6d4 to 036fc6df has its CatchHandler @ 035fc378 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_656);
                    /* try { // try from 035fc6e0 to 036fc6e7 has its CatchHandler @ 035fc6e8 */
                    /* catch() { ... } // from try @ 035fc628 with catch @ 035fc6e8
                       catch() { ... } // from try @ 035fc6cc with catch @ 035fc6e8
                       catch() { ... } // from try @ 035fc6e0 with catch @ 035fc6e8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_657);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568837 = 1;
    method = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  ppSVar2 = &LHKALFIIJKB_TypeInfo->static_fields->BPDJGLJFDGC;
  *ppSVar2 = HJNIEEICBFA;
  thunk_FUN_01c20e04(ppSVar2,HJNIEEICBFA);
  bVar1 = IEICNBBBNEJ__KDAGDFGJGKN(true,(MethodInfo *)0x0);
  if (bVar1) {
    method_00 = LHKALFIIJKB_TypeInfo;
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
    }
    LHKALFIIJKB__CLIHAFJDHKO((MethodInfo *)method_00);
    return;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_656,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_657,(MethodInfo *)0x0);
  GPJHCIPBFOG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  method_01 = extraout_x1_00;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
    method_01 = extraout_x1_01;
  }
  LHKALFIIJKB__LJGOKKLMLNN(GPJHCIPBFOG,method_01);
  return;
}


// ===== private static string OPIFOELMDAH()  [RVA 0x34FCA50]
// LHKALFIIJKB$$OPIFOELMDAH @ RVA 0x34FCA50

System_String_o * LHKALFIIJKB__OPIFOELMDAH(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04568838 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1515/*"/dump/"*/);
    DAT_04568838 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1515/*"/dump/"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static void LMFIKNOJNPJ()  [RVA 0x34FDFD4]
// LHKALFIIJKB$$LMFIKNOJNPJ @ RVA 0x34FDFD4

void LHKALFIIJKB__LMFIKNOJNPJ(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  Il2CppObject *pIVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  long lVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  PDGHODJHCGP_o *__this;
  PDGHODJHCGP_HIBNPLAHCBH_o *pPVar13;
  PDGHODJHCGP_HIBNPLAHCBH_o **ppPVar14;
  long lVar15;
  Il2CppClass *pIVar16;
  ulong uVar17;
  int32_t *piVar18;
  undefined8 uVar19;
  int64_t FDNNNELHJJN;
  
  if ((DAT_04568839 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_658);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_659);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_660);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_661);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_662);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_663);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_664);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_665);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_EGFBLPFMABC__);
    FUN_01bab630(&Method_LHKALFIIJKB_HFNKPNEHBHO__);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&PDGHODJHCGP_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04568839 = 1;
  }
  pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_658,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_659,(MethodInfo *)0x0);
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  lVar9 = Method_System_Array_Empty<string>__;
  lVar15 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar15 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar15 = *(long *)(lVar9 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_01b81620();
  }
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 035fe19c to 036fe1a3 has its CatchHandler @ 035fe300 */
  lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01b81620();
  }
  if (pIVar5 != (Il2CppObject *)0x0) {
                    /* try { // try from 035fe1b8 to 036fe1bf has its CatchHandler @ 035fe2fc */
    pIVar16 = pIVar5->klass;
    uVar19 = **(undefined8 **)(lVar9 + 0xb8);
    uVar1._0_1_ = (pIVar16->_2).rank;
    uVar1._1_1_ = (pIVar16->_2).minimumAlignment;
    uVar17 = (ulong)uVar1;
    if (uVar17 != 0) {
      piVar18 = &((pIVar16->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 035fe200 to 036fe223 has its CatchHandler @ 035fe2f0 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* try { // try from 035fe224 to 036fe2df has its CatchHandler @ 035fdfb8 */
          pVVar10 = pIVar16->vtable + (*piVar18 + 0xc);
          goto LAB_035fe234;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035fe234:
    pSVar8 = (System_String_o *)(*pVVar10->methodPtr)(pIVar5,pSVar8,uVar19,pVVar10->method);
    pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_660,(MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_661,(MethodInfo *)0x0);
    pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    lVar9 = FUN_01bab718(string___TypeInfo,2);
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
    }
                    /* try { // try from 035fe2e0 to 036fe2e3 has its CatchHandler @ 035fe2f4 */
                    /* try { // try from 035fe2e4 to 036fe2eb has its CatchHandler @ 035fe2f8 */
    pSVar12 = System_Int32__ToString
                        ((int)LHKALFIIJKB_TypeInfo->static_fields + 0x20,(MethodInfo *)0x0);
    if (lVar9 != 0) {
                    /* try { // try from 035fe2ec to 036fe30f has its CatchHandler @ 035fdfb8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fe200 with catch @ 035fe2f0
                        */
      if (*(int *)(lVar9 + 0x18) != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fe2e0 with catch @ 035fe2f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fe2e4 with catch @ 035fe2f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fe1b8 with catch @ 035fe2fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fe19c with catch @ 035fe300
                        */
        *(System_String_o **)(lVar9 + 0x20) = pSVar12;
        thunk_FUN_01c20e04();
                    /* try { // try from 035fe310 to 036fe313 has its CatchHandler @ 035fe338 */
                    /* try { // try from 035fe314 to 036fe33f has its CatchHandler @ 035fdfb8 */
        FDNNNELHJJN = LHKALFIIJKB_TypeInfo->static_fields->AKKEJBHGOHD;
        if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar12 = NGFEKJBMGEB__IPOELNKMKBA(FDNNNELHJJN,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035fe310 with catch @ 035fe338 */
        if (1 < *(uint *)(lVar9 + 0x18)) {
                    /* try { // try from 035fe340 to 036fe347 has its CatchHandler @ 035fe35c */
                    /* try { // try from 035fe348 to 036fe353 has its CatchHandler @ 035fdfb8 */
          *(System_String_o **)(lVar9 + 0x28) = pSVar12;
          thunk_FUN_01c20e04();
          if (pIVar5 != (Il2CppObject *)0x0) {
                    /* try { // try from 035fe354 to 036fe35b has its CatchHandler @ 035fe35c */
            pIVar16 = pIVar5->klass;
            uVar2._0_1_ = (pIVar16->_2).rank;
            uVar2._1_1_ = (pIVar16->_2).minimumAlignment;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035fe340 with catch @ 035fe35c
                       catch(type#2 @ 00000000) { ... } // from try @ 035fe354 with catch @ 035fe35c
                        */
            uVar17 = (ulong)uVar2;
            if (uVar17 != 0) {
              piVar18 = &((pIVar16->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar10 = pIVar16->vtable + (*piVar18 + 0xc);
                  goto LAB_035fe3bc;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035fe3bc:
            pSVar11 = (System_String_o *)(*pVVar10->methodPtr)(pIVar5,pSVar11,lVar9,pVVar10->method)
            ;
            __this = (PDGHODJHCGP_o *)thunk_FUN_01bda818(PDGHODJHCGP_TypeInfo);
            PDGHODJHCGP___ctor(__this,pSVar8,pSVar11,(MethodInfo *)0x0);
            pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_662,
                       (MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_663,
                       (MethodInfo *)0x0);
            pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            lVar9 = Method_System_Array_Empty<string>__;
            lVar15 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
            if (lVar15 == 0) {
              FUN_01b8167c(Method_System_Array_Empty<string>__);
              lVar15 = *(long *)(lVar9 + 0x38);
            }
            lVar15 = *(long *)(lVar15 + 0x10);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_01b81620();
            }
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01ba7564();
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_01b81620();
            }
            if (pIVar5 != (Il2CppObject *)0x0) {
              pIVar16 = pIVar5->klass;
              uVar19 = **(undefined8 **)(lVar9 + 0xb8);
              uVar3._0_1_ = (pIVar16->_2).rank;
              uVar3._1_1_ = (pIVar16->_2).minimumAlignment;
              uVar17 = (ulong)uVar3;
              if (uVar17 != 0) {
                piVar18 = &((pIVar16->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                      (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    pVVar10 = pIVar16->vtable + (*piVar18 + 0xc);
                    goto LAB_035fe504;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035fe504:
              pSVar8 = (System_String_o *)
                       (*pVVar10->methodPtr)(pIVar5,pSVar8,uVar19,pVVar10->method);
              pPVar13 = (PDGHODJHCGP_HIBNPLAHCBH_o *)
                        thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
              PDGHODJHCGP_HIBNPLAHCBH___ctor
                        (pPVar13,(Il2CppObject *)0x0,Method_LHKALFIIJKB_EGFBLPFMABC__,
                         (MethodInfo *)0x0);
              if (__this != (PDGHODJHCGP_o *)0x0) {
                PDGHODJHCGP__IEFEBMICIHN(__this,pSVar8,pPVar13,(MethodInfo *)0x0);
                pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                   (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar6,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_664,
                           (MethodInfo *)0x0);
                pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar7,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_665,
                           (MethodInfo *)0x0);
                pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                lVar9 = Method_System_Array_Empty<string>__;
                lVar15 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
                if (lVar15 == 0) {
                  FUN_01b8167c(Method_System_Array_Empty<string>__);
                  lVar15 = *(long *)(lVar9 + 0x38);
                }
                lVar15 = *(long *)(lVar15 + 0x10);
                if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                  lVar15 = FUN_01b81620();
                }
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_01ba7564();
                }
                lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01b81620();
                }
                if (pIVar5 != (Il2CppObject *)0x0) {
                  pIVar16 = pIVar5->klass;
                  uVar19 = **(undefined8 **)(lVar9 + 0xb8);
                  uVar4._0_1_ = (pIVar16->_2).rank;
                  uVar4._1_1_ = (pIVar16->_2).minimumAlignment;
                  uVar17 = (ulong)uVar4;
                  if (uVar17 != 0) {
                    piVar18 = &((pIVar16->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                        pVVar10 = pIVar16->vtable + (*piVar18 + 0xc);
                        goto LAB_035fe66c;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035fe66c:
                  pSVar8 = (System_String_o *)
                           (*pVVar10->methodPtr)(pIVar5,pSVar8,uVar19,pVVar10->method);
                  pPVar13 = (PDGHODJHCGP_HIBNPLAHCBH_o *)
                            thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
                  PDGHODJHCGP_HIBNPLAHCBH___ctor
                            (pPVar13,(Il2CppObject *)0x0,Method_LHKALFIIJKB_HFNKPNEHBHO__,
                             (MethodInfo *)0x0);
                  PDGHODJHCGP__IEFEBMICIHN(__this,pSVar8,pPVar13,(MethodInfo *)0x0);
                  pPVar13 = (PDGHODJHCGP_HIBNPLAHCBH_o *)
                            thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
                  PDGHODJHCGP_HIBNPLAHCBH___ctor
                            (pPVar13,(Il2CppObject *)0x0,Method_LHKALFIIJKB_HFNKPNEHBHO__,
                             (MethodInfo *)0x0);
                  ppPVar14 = &(__this->fields).NIMBKJIIDLF;
                  *ppPVar14 = pPVar13;
                  thunk_FUN_01c20e04(ppPVar14,pPVar13);
                  PDGHODJHCGP__BFCCEGGDJEF(__this,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto LAB_035fe708;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_035fe708:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void EPPBDPHJHEG()  [RVA 0x34FE710]
// LHKALFIIJKB$$EPPBDPHJHEG @ RVA 0x34FE710

void LHKALFIIJKB__EPPBDPHJHEG(MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Action_o **ppSVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Action_o *pSVar8;
  
  if ((DAT_0456883a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_<>c_KDDIOBJIDMP__);
    FUN_01bab630(&LHKALFIIJKB_<>c_TypeInfo);
    DAT_0456883a = 1;
  }
  Nekki_SF2_GUI_Dialogs_NotificationsGame__ImmediateCloseNotifications((MethodInfo *)0x0);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if ((LHKALFIIJKB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_<>c_TypeInfo);
  }
  pSVar8 = LHKALFIIJKB_<>c_TypeInfo->static_fields->__9__59_0;
  if (pSVar8 == (System_Action_o *)0x0) {
    if ((LHKALFIIJKB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LHKALFIIJKB_<>c_TypeInfo);
    }
    pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar3 = &LHKALFIIJKB_<>c_TypeInfo->static_fields->__9__59_0;
    *ppSVar3 = pSVar8;
    thunk_FUN_01c20e04(ppSVar3,pSVar8);
  }
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + (*piVar7 + 2);
        goto LAB_035fe858;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_035fe858:
                    /* WARNING: Could not recover jumptable at 0x035fe878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(0x3dcccccd,pPVar2,pSVar8,pVVar4->method);
  return;
}


// ===== private static void EGFBLPFMABC()  [RVA 0x34FE880]
// LHKALFIIJKB$$EGFBLPFMABC @ RVA 0x34FE880

void LHKALFIIJKB__EGFBLPFMABC(MethodInfo *method)

{
  JJPNLEPEAFM__JHLIJCCIKHF((MethodInfo *)0x0);
  return;
}


// ===== private static void GKJMHPMANGK()  [RVA 0x34FE888]
// LHKALFIIJKB$$GKJMHPMANGK @ RVA 0x34FE888

void LHKALFIIJKB__GKJMHPMANGK(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *__this;
  LHKALFIIJKB_c *method_00;
  MethodInfo *method_01;
  System_String_o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456883b & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_get_Current__
                );
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_GetEnumerator__);
    DAT_0456883b = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = LHKALFIIJKB_TypeInfo->static_fields->KLMLDJJBLKO;
  if (__this != (System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_MoveNext__
                        );
      pIVar1 = local_60.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_Dispose__
                  );
        if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = ANFOHCGLHID__CBHLMLMMFBP((MethodInfo *)0x0);
        CEJLHKFNEDB__JAGMOPPIMKB(pSVar3,(MethodInfo *)0x0);
        method_00 = LHKALFIIJKB_TypeInfo;
        if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
        }
        LHKALFIIJKB__PGLPDFKGFGG((MethodInfo *)method_00);
        LHKALFIIJKB__FKPLMPKAECO(false,method_01);
        return;
      }
      if (local_60.fields._current == (Il2CppObject *)0x0) break;
      bVar2 = System_IO_File__Exists
                        ((System_String_o *)local_60.fields._current[1].klass,(MethodInfo *)0x0);
      if (bVar2) {
        System_IO_File__Copy
                  ((System_String_o *)pIVar1[1].klass,pIVar1[1].monitor,true,(MethodInfo *)0x0);
        pSVar3 = pIVar1[1].monitor;
        if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        CFJANHACGMG__PKACMGFBIKK(pSVar3,false,false,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool DFHLMJAAEAB()  [RVA 0x34FEAC0]
// LHKALFIIJKB$$DFHLMJAAEAB @ RVA 0x34FEAC0

bool LHKALFIIJKB__DFHLMJAAEAB(MethodInfo *method)

{
  if ((DAT_0456883c & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_0456883c = 1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return LHKALFIIJKB_TypeInfo->static_fields->_IKKBHKLDJLD_k__BackingField;
}


// ===== public static void JPNONJJNIFE(bool CIPMHONCAKN = True)  [RVA 0x34FEB18]
// LHKALFIIJKB$$JPNONJJNIFE @ RVA 0x34FEB18

void LHKALFIIJKB__JPNONJJNIFE(bool CIPMHONCAKN,MethodInfo *method)

{
  LHKALFIIJKB_c *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_02;
  
  if ((DAT_0456883d & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_0456883d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035feb50 to 036feb57 has its CatchHandler @ 035fed4c */
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  LHKALFIIJKB__PPMCNLDDIKG((MethodInfo *)method_00);
  LHKALFIIJKB__GMFENOAMOJO(CIPMHONCAKN,method_02);
                    /* try { // try from 035feb6c to 036feb77 has its CatchHandler @ 035fed48 */
  LHKALFIIJKB__PGLPDFKGFGG(method_01);
  return;
}


// ===== public static void PNHEMJHPGBF(Action HJNIEEICBFA)  [RVA 0x34FEB74]
// LHKALFIIJKB$$PNHEMJHPGBF @ RVA 0x34FEB74

void LHKALFIIJKB__PNHEMJHPGBF(System_Action_o *HJNIEEICBFA,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  System_Action_o **ppSVar3;
  Core_Network_ServerProvider_o *__this;
  System_Action_bool__JSONNode__object__o *GFNABKGEGJA;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *GPJHCIPBFOG;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar4;
  
                    /* try { // try from 035feb88 to 036feb8b has its CatchHandler @ 035fed28 */
                    /* try { // try from 035feb94 to 036febaf has its CatchHandler @ 035fed2c */
  if ((DAT_0456883e & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_JSONNode,_object>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_666);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_667);
                    /* try { // try from 035febc0 to 036febcb has its CatchHandler @ 035fed3c */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_JKJGJBJJPNB__);
                    /* try { // try from 035febd4 to 036febdf has its CatchHandler @ 035fed40 */
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456883e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035febf8 to 036febff has its CatchHandler @ 035fec74 */
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  ppSVar3 = &LHKALFIIJKB_TypeInfo->static_fields->BPDJGLJFDGC;
                    /* try { // try from 035fec10 to 036fec1b has its CatchHandler @ 035fec70 */
  *ppSVar3 = HJNIEEICBFA;
  thunk_FUN_01c20e04(ppSVar3,HJNIEEICBFA);
  bVar2 = IEICNBBBNEJ__KDAGDFGJGKN(true,(MethodInfo *)0x0);
  if (bVar2) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035fec40 to 036fec47 has its CatchHandler @ 035fed30 */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 035fec64 to 036fec67 has its CatchHandler @ 035fec6c */
                    /* try { // try from 035fec68 to 036fec87 has its CatchHandler @ 035fea48 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 035fec64 with catch @ 035fec6c */
      thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 035fec10 with catch @ 035fec70 */
    }
                    /* catch() { ... } // from try @ 035febf8 with catch @ 035fec74 */
    pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
      bVar1 = (pAVar4->fields).CFAEDJGDNPO;
                    /* try { // try from 035fec88 to 036fec8b has its CatchHandler @ 035fed1c */
      __this = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 035fec8c to 036fecf3 has its CatchHandler @ 035fea48 */
      GFNABKGEGJA = (System_Action_bool__JSONNode__object__o *)
                    thunk_FUN_01bda818(System_Action<bool,_JSONNode,_object>_TypeInfo);
      System_Action<bool,_object,_object>___ctor();
      if (__this != (Core_Network_ServerProvider_o *)0x0) {
        Core_Network_ServerProvider__RestoreDump
                  (__this,bVar1 == false,GFNABKGEGJA,5000,false,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 035fecf4 to 036fed07 has its CatchHandler @ 035fedc8 */
                    /* try { // try from 035fed08 to 036fed0b has its CatchHandler @ 035fed44 */
                    /* try { // try from 035fed0c to 036fed13 has its CatchHandler @ 035fed38 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 035fed14 to 036fed17 has its CatchHandler @ 035fed34 */
                    /* try { // try from 035fed18 to 036fed67 has its CatchHandler @ 035fea48 */
                    /* catch() { ... } // from try @ 035fec88 with catch @ 035fed1c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_666,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035feb88 with catch @ 035fed28 */
                    /* catch() { ... } // from try @ 035feb94 with catch @ 035fed2c */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 035fec40 with catch @ 035fed30 */
                    /* catch() { ... } // from try @ 035fed14 with catch @ 035fed34 */
                    /* catch() { ... } // from try @ 035fed0c with catch @ 035fed38 */
                    /* catch() { ... } // from try @ 035febc0 with catch @ 035fed3c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_667,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035febd4 with catch @ 035fed40 */
                    /* catch() { ... } // from try @ 035fed08 with catch @ 035fed44 */
                    /* catch() { ... } // from try @ 035feb6c with catch @ 035fed48 */
                    /* catch() { ... } // from try @ 035feb50 with catch @ 035fed4c */
  GPJHCIPBFOG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
    method_00 = extraout_x1_01;
  }
                    /* try { // try from 035fed68 to 036fed6b has its CatchHandler @ 035fed9c */
                    /* try { // try from 035fed6c to 036fedab has its CatchHandler @ 035fea48 */
  LHKALFIIJKB__LJGOKKLMLNN(GPJHCIPBFOG,method_00);
  return;
}


// ===== private static void HFNKPNEHBHO()  [RVA 0x34FED80]
// LHKALFIIJKB$$HFNKPNEHBHO @ RVA 0x34FED80

void LHKALFIIJKB__HFNKPNEHBHO(MethodInfo *method)

{
  LHKALFIIJKB_c *method_00;
  
  if ((DAT_0456883f & 1) == 0) {
                    /* catch() { ... } // from try @ 035fed68 with catch @ 035fed9c */
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
                    /* try { // try from 035fedac to 036fedb3 has its CatchHandler @ 035fedc8 */
    DAT_0456883f = 1;
  }
                    /* try { // try from 035fedb4 to 036fedbf has its CatchHandler @ 035fea48 */
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
                    /* try { // try from 035fedc0 to 036fedc7 has its CatchHandler @ 035fedc8 */
                    /* catch() { ... } // from try @ 035fecf4 with catch @ 035fedc8
                       catch() { ... } // from try @ 035fedac with catch @ 035fedc8
                       catch() { ... } // from try @ 035fedc0 with catch @ 035fedc8 */
  LHKALFIIJKB__JJILNPKKHAF((MethodInfo *)method_00);
  return;
}


// ===== public static void FEJIKBIBCJB(Action HJNIEEICBFA)  [RVA 0x34FEF24]
// LHKALFIIJKB$$FEJIKBIBCJB @ RVA 0x34FEF24

void LHKALFIIJKB__FEJIKBIBCJB(System_Action_o *HJNIEEICBFA,MethodInfo *method)

{
  bool_conflict bVar1;
  LHKALFIIJKB_c *method_00;
  bool bVar2;
  System_Action_o **ppSVar3;
  Core_Network_ServerProvider_o *__this;
  System_Action_bool__JSONNode__object__o *GFNABKGEGJA;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *GPJHCIPBFOG;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar4;
  
  if ((DAT_04568840 & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_JSONNode,_object>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_668);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_669);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_JKJGJBJJPNB__);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568840 = 1;
    method = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  ppSVar3 = &LHKALFIIJKB_TypeInfo->static_fields->BPDJGLJFDGC;
  *ppSVar3 = HJNIEEICBFA;
  thunk_FUN_01c20e04(ppSVar3,HJNIEEICBFA);
  LHKALFIIJKB_TypeInfo->static_fields->JDMCKMLFGBL = true;
  bVar2 = IEICNBBBNEJ__KDAGDFGJGKN(true,(MethodInfo *)0x0);
  if (!bVar2) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_668,(MethodInfo *)0x0);
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_669,(MethodInfo *)0x0);
    GPJHCIPBFOG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    method_01 = extraout_x1_00;
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
      method_01 = extraout_x1_01;
    }
    LHKALFIIJKB__LJGOKKLMLNN(GPJHCIPBFOG,method_01);
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
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
    bVar1 = (pAVar4->fields).CFAEDJGDNPO;
    if ((bVar1 != false) && (bVar2 = IMAPABEJECG__FCBJDMNEPGB((MethodInfo *)0x0), !bVar2)) {
      if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04568907 == '\0') {
        FUN_01bab630(&LHKALFIIJKB_TypeInfo);
        DAT_04568907 = '\x01';
      }
      if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method_00 = LHKALFIIJKB_TypeInfo;
      LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = false;
      LHKALFIIJKB__CLIHAFJDHKO((MethodInfo *)method_00);
      return;
    }
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04568907 == '\0') {
      FUN_01bab630(&LHKALFIIJKB_TypeInfo);
      DAT_04568907 = '\x01';
    }
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = true;
    __this = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
    GFNABKGEGJA = (System_Action_bool__JSONNode__object__o *)
                  thunk_FUN_01bda818(System_Action<bool,_JSONNode,_object>_TypeInfo);
    System_Action<bool,_object,_object>___ctor();
    if (__this != (Core_Network_ServerProvider_o *)0x0) {
      Core_Network_ServerProvider__RestoreDump
                (__this,bVar1 == false,GFNABKGEGJA,5000,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void OHLAIABMCBC()  [RVA 0x34FF1FC]
// LHKALFIIJKB$$OHLAIABMCBC @ RVA 0x34FF1FC

void LHKALFIIJKB__OHLAIABMCBC(MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Action_o **ppSVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Action_o *pSVar8;
  
  if ((DAT_04568841 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_<>c_NDGMHCGOMIF__);
    FUN_01bab630(&LHKALFIIJKB_<>c_TypeInfo);
    DAT_04568841 = 1;
  }
  Nekki_SF2_GUI_Dialogs_NotificationsGame__ImmediateCloseNotifications((MethodInfo *)0x0);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if ((LHKALFIIJKB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_<>c_TypeInfo);
  }
  pSVar8 = LHKALFIIJKB_<>c_TypeInfo->static_fields->__9__62_0;
  if (pSVar8 == (System_Action_o *)0x0) {
    if ((LHKALFIIJKB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LHKALFIIJKB_<>c_TypeInfo);
    }
    pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar3 = &LHKALFIIJKB_<>c_TypeInfo->static_fields->__9__62_0;
    *ppSVar3 = pSVar8;
    thunk_FUN_01c20e04(ppSVar3,pSVar8);
  }
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + (*piVar7 + 2);
        goto LAB_035ff344;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_035ff344:
                    /* WARNING: Could not recover jumptable at 0x035ff364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(0x3dcccccd,pPVar2,pSVar8,pVVar4->method);
  return;
}


// ===== private static string FPOJCJJJGAD()  [RVA 0x34FD130]
// LHKALFIIJKB$$FPOJCJJJGAD @ RVA 0x34FD130

System_String_o * LHKALFIIJKB__FPOJCJJJGAD(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04568842 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1514/*"/dump.bin"*/);
    DAT_04568842 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1514/*"/dump.bin"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static void LMNENJFLCEB()  [RVA 0x34FF36C]
// LHKALFIIJKB$$LMNENJFLCEB @ RVA 0x34FF36C

void LHKALFIIJKB__LMNENJFLCEB(MethodInfo *method)

{
  if ((DAT_04568843 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568843 = 1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LHKALFIIJKB_TypeInfo->static_fields->FBAFKMAMBCC = true;
  return;
}


// ===== private static void IDMNJFOALDB()  [RVA 0x34FF3C8]
// LHKALFIIJKB$$IDMNJFOALDB @ RVA 0x34FF3C8

void LHKALFIIJKB__IDMNJFOALDB(MethodInfo *method)

{
  LHKALFIIJKB_c *method_00;
  
  if ((DAT_04568844 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568844 = 1;
  }
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
  LHKALFIIJKB__JJILNPKKHAF((MethodInfo *)method_00);
  return;
}


// ===== private static void KBGCIMIIEEN(bool CJNHFNHJHPE)  [RVA 0x34FF414]
// LHKALFIIJKB$$KBGCIMIIEEN @ RVA 0x34FF414

void LHKALFIIJKB__KBGCIMIIEEN(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568845 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568845 = 1;
    method = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public static void IPEPBNLDPHG(float KMOAKHKDBAB)  [RVA 0x34FF474]
// LHKALFIIJKB$$IPEPBNLDPHG @ RVA 0x34FF474

void LHKALFIIJKB__IPEPBNLDPHG(float KMOAKHKDBAB,MethodInfo *method)

{
  LHKALFIIJKB_c *method_00;
  MethodInfo *method_01;
  System_Collections_IEnumerator_o *pSVar1;
  Il2CppMethodPointer pIVar2;
  System_Collections_IEnumerator_o **ppSVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((DAT_04568846 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568846 = 1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568908 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568908 = '\x01';
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((KMOAKHKDBAB <= 0.0) ||
     (LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField != false)) {
    return;
  }
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
  LHKALFIIJKB__EMABNEMMNON((MethodInfo *)method_00);
  method_01 = (MethodInfo *)CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar1 = LHKALFIIJKB__OBFFJCKCBKI(KMOAKHKDBAB,method_01);
  if (method_01 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar2 = method_01->methodPointer;
  uVar4 = (ulong)*(ushort *)(pIVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(pIVar2 + 0xb0) + 8);
    do {
      if (*(PBAKFOBIHEG_c **)(piVar5 + -2) == PBAKFOBIHEG_TypeInfo) {
        pIVar2 = pIVar2 + (long)*piVar5 * 0x10 + 0x138;
        goto LAB_035ff5a0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pIVar2 = (Il2CppMethodPointer)FUN_01b81914(method_01,PBAKFOBIHEG_TypeInfo,0);
LAB_035ff5a0:
  pSVar1 = (System_Collections_IEnumerator_o *)
           (**(code **)pIVar2)(method_01,pSVar1,1,*(undefined8 *)(pIVar2 + 8));
  ppSVar3 = &LHKALFIIJKB_TypeInfo->static_fields->AFAKLFEDLPE;
  *ppSVar3 = pSVar1;
  thunk_FUN_01c20e04(ppSVar3,pSVar1);
  return;
}


// ===== private static void PLNBDGAOAMD()  [RVA 0x34FF764]
// LHKALFIIJKB$$PLNBDGAOAMD @ RVA 0x34FF764

void LHKALFIIJKB__PLNBDGAOAMD(MethodInfo *method)

{
  bool bVar1;
  LHKALFIIJKB_c *pLVar2;
  long lVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  undefined8 *puVar7;
  MethodInfo *method_00;
  undefined8 extraout_x1;
  MethodInfo *method_01;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_04568847 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_670);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_671);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_672);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_673);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568847 = 1;
  }
  pLVar2 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    pLVar2 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
  bVar1 = LHKALFIIJKB__AAMOJIKAADG((MethodInfo *)pLVar2);
  auVar11._1_7_ = 0;
  auVar11[0] = bVar1;
  auVar11._8_8_ = extraout_x1;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    auVar11 = thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
  }
  if (!bVar1) {
    LHKALFIIJKB__FKPLMPKAECO(false,auVar11._8_8_);
    LHKALFIIJKB__PGLPDFKGFGG(method_00);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_670,(MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_671,(MethodInfo *)0x0);
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    LHKALFIIJKB__LJGOKKLMLNN(pSVar6,method_01);
    return;
  }
  LHKALFIIJKB__GKJMHPMANGK(auVar11._0_8_);
  lVar3 = *(long *)(Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  plVar10 = (long *)**(undefined8 **)(lVar3 + 0xb8);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_672,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_673,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar3 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(HCOEEOMMEFL_c **)(piVar9 + -2) == HCOEEOMMEFL_TypeInfo) {
        puVar7 = (undefined8 *)(lVar3 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_035ff998;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_01b81914(plVar10,HCOEEOMMEFL_TypeInfo,1);
LAB_035ff998:
  (*(code *)*puVar7)(plVar10,pSVar6,0,puVar7[1]);
  if (DAT_04568907 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568907 = '\x01';
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar2 = LHKALFIIJKB_TypeInfo;
  LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = false;
  LHKALFIIJKB__MDNKBEAMMFO((MethodInfo *)pLVar2);
  return;
}


// ===== private static void .cctor()  [RVA 0x34FFA6C]
// LHKALFIIJKB$$.cctor @ RVA 0x34FFA6C

void LHKALFIIJKB___cctor(MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *pSVar2;
  System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o **ppSVar3;
  LHKALFIIJKB_CFFGMHNFPLN_o *__this;
  MethodInfo *method_00;
  System_String_o *pSVar4;
  System_Delegate_o *pSVar5;
  long lVar6;
  LHKALFIIJKB_CFFGMHNFPLN_array *pLVar7;
  System_Action_string__byte____o *pSVar8;
  System_Action_string__o *pSVar9;
  System_Action_string__byte____o **ppSVar10;
  System_Action_string__o **ppSVar11;
  System_Action_string__c *pSVar12;
  
  if ((DAT_04568848 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<string,_byte[]>_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_CFFGMHNFPLN_TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_BDHOPPBMMCH__);
    FUN_01bab630(&Method_LHKALFIIJKB_PADAJCPPCBJ__);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21892/*"users.xml"*/);
    DAT_04568848 = 1;
  }
  pSVar2 = (System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>__ctor__);
  ppSVar3 = &LHKALFIIJKB_TypeInfo->static_fields->KLMLDJJBLKO;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  if (DAT_04568906 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568906 = '\x01';
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = LHKALFIIJKB_TypeInfo->static_fields->KLMLDJJBLKO;
  LHKALFIIJKB_TypeInfo->static_fields->_IKKBHKLDJLD_k__BackingField = true;
  if (pSVar2 == (System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *)0x0) {
LAB_035ffe24:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    pSVar2 = LHKALFIIJKB_TypeInfo->static_fields->KLMLDJJBLKO;
  }
  __this = (LHKALFIIJKB_CFFGMHNFPLN_o *)thunk_FUN_01bda818(LHKALFIIJKB_CFFGMHNFPLN_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar4 = LHKALFIIJKB__OPIFOELMDAH(method_00);
  pSVar4 = System_String__Concat(pSVar4,StringLiteral_21892/*"users.xml"*/,(MethodInfo *)0x0);
  if (__this == (LHKALFIIJKB_CFFGMHNFPLN_o *)0x0) goto LAB_035ffe24;
  (__this->fields).IBOLCNEIGNI = pSVar4;
  thunk_FUN_01c20e04();
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)0x0);
  (__this->fields).JPFHNMLAJLM = pSVar4;
  thunk_FUN_01c20e04();
  lVar6 = Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_Add__;
  if (pSVar2 == (System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *)0x0)
  goto LAB_035ffe24;
  pLVar7 = (pSVar2->fields)._items;
  (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
  if (pLVar7 == (LHKALFIIJKB_CFFGMHNFPLN_array *)0x0) goto LAB_035ffe24;
  uVar1 = (pSVar2->fields)._size;
  if (uVar1 < (uint)pLVar7->max_length) {
    (pSVar2->fields)._size = uVar1 + 1;
    pLVar7->m_Items[(int)uVar1] = __this;
    thunk_FUN_01c20e04(pLVar7->m_Items + (int)uVar1,__this);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)__this,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = NHJCFGACFDF_TypeInfo->static_fields->GEHAHBFKNCM;
  pSVar5 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string,_byte[]>_TypeInfo);
  System_Action<object,_object>___ctor();
  pSVar5 = System_Delegate__Combine((System_Delegate_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  pSVar12 = (System_Action_string__c *)System_Action<string,_byte[]>_TypeInfo;
  if (pSVar5 == (System_Delegate_o *)0x0) {
    lVar6 = 0;
    ppSVar10 = &NHJCFGACFDF_TypeInfo->static_fields->GEHAHBFKNCM;
    *ppSVar10 = (System_Action_string__byte____o *)0x0;
  }
  else {
    pSVar8 = (System_Action_string__byte____o *)
             thunk_FUN_01bda71c(pSVar5,System_Action<string,_byte[]>_TypeInfo);
    if (pSVar8 == (System_Action_string__byte____o *)0x0) goto LAB_035ffe28;
    ppSVar10 = &NHJCFGACFDF_TypeInfo->static_fields->GEHAHBFKNCM;
    *ppSVar10 = pSVar8;
    pSVar12 = (System_Action_string__c *)System_Action<string,_byte[]>_TypeInfo;
    lVar6 = thunk_FUN_01bda71c(pSVar5,System_Action<string,_byte[]>_TypeInfo);
    if (lVar6 == 0) goto LAB_035ffe34;
  }
  thunk_FUN_01c20e04(ppSVar10,lVar6);
  pSVar9 = NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
  pSVar5 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  pSVar5 = System_Delegate__Combine((System_Delegate_o *)pSVar9,pSVar5,(MethodInfo *)0x0);
  pSVar12 = System_Action<string>_TypeInfo;
  if (pSVar5 == (System_Delegate_o *)0x0) {
    lVar6 = 0;
    ppSVar11 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar11 = (System_Action_string__o *)0x0;
  }
  else {
    pSVar9 = (System_Action_string__o *)thunk_FUN_01bda71c(pSVar5,System_Action<string>_TypeInfo);
    if (pSVar9 == (System_Action_string__o *)0x0) {
LAB_035ffe28:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar5,pSVar12);
    }
    ppSVar11 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar11 = pSVar9;
    pSVar12 = System_Action<string>_TypeInfo;
    lVar6 = thunk_FUN_01bda71c(pSVar5,System_Action<string>_TypeInfo);
    if (lVar6 == 0) {
LAB_035ffe34:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar5,pSVar12);
    }
  }
  thunk_FUN_01c20e04(ppSVar11,lVar6);
  return;
}


// ===== private static void IFKFANPNPPK()  [RVA 0x34FFE48]
// LHKALFIIJKB$$IFKFANPNPPK @ RVA 0x34FFE48

void LHKALFIIJKB__IFKFANPNPPK(MethodInfo *method)

{
  LHKALFIIJKB_c *method_00;
  
  if ((DAT_04568849 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568849 = 1;
  }
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
  LHKALFIIJKB__LNGIKCILFFK((MethodInfo *)method_00);
  return;
}


// ===== private static bool AKJIEMOLNCN(string ANFFJMOAGKD)  [RVA 0x34FFE94]
// LHKALFIIJKB$$AKJIEMOLNCN @ RVA 0x34FFE94

bool LHKALFIIJKB__AKJIEMOLNCN(System_String_o *ANFFJMOAGKD,MethodInfo *method)

{
  bool bVar1;
  MGAGKCEDNNN_c *method_00;
  System_String_o *LFGKEPCBPKF;
  GCFHEEKPCPJ_o *__this;
  
  if ((DAT_0456884a & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    DAT_0456884a = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(ANFFJMOAGKD,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
  method_00 = MGAGKCEDNNN_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGAGKCEDNNN_c *)thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
  }
  LFGKEPCBPKF = LHKALFIIJKB__FPOJCJJJGAD((MethodInfo *)method_00);
  if (__this != (GCFHEEKPCPJ_o *)0x0) {
    bVar1 = GCFHEEKPCPJ__PGLHACKJLMF
                      (__this,LFGKEPCBPKF,ANFFJMOAGKD,(System_String_o *)0x0,5,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void PPMCNLDDIKG()  [RVA 0x34FD3E0]
// LHKALFIIJKB$$PPMCNLDDIKG @ RVA 0x34FD3E0

void LHKALFIIJKB__PPMCNLDDIKG(MethodInfo *method)

{
  ACHLOMELAJE_o *pAVar1;
  System_Func_LHKALFIIJKB_CFFGMHNFPLN__string__o **ppSVar2;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  MethodInfo *DIOCOHICNNI;
  MethodInfo *method_00;
  System_String_o *CPIDPLFFOMA;
  System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *source_00;
  System_Func_LHKALFIIJKB_CFFGMHNFPLN__string__o *selector;
  
  if ((DAT_0456884b & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<LHKALFIIJKB_CFFGMHNFPLN,_string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<string>__);
    FUN_01bab630(&System_Func<LHKALFIIJKB_CFFGMHNFPLN,_string>_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_<>c_MBONDFDCLHA__);
    FUN_01bab630(&LHKALFIIJKB_<>c_TypeInfo);
    DAT_0456884b = 1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568909 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568909 = '\x01';
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (LHKALFIIJKB_TypeInfo->static_fields->_IKKBHKLDJLD_k__BackingField != false) {
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
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
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
      pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
        ACHLOMELAJE__DAINDHGKAMF(pAVar1,true,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,true,(MethodInfo *)0x0);
          goto LAB_035fd5a4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_035fd5a4:
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
  }
  source_00 = LHKALFIIJKB_TypeInfo->static_fields->KLMLDJJBLKO;
  if ((LHKALFIIJKB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  selector = LHKALFIIJKB_<>c_TypeInfo->static_fields->__9__46_0;
  if (selector == (System_Func_LHKALFIIJKB_CFFGMHNFPLN__string__o *)0x0) {
    if ((LHKALFIIJKB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    selector = (System_Func_LHKALFIIJKB_CFFGMHNFPLN__string__o *)
               thunk_FUN_01bda818(System_Func<LHKALFIIJKB_CFFGMHNFPLN,_string>_TypeInfo);
    System_Func<object,_object>___ctor();
    ppSVar2 = &LHKALFIIJKB_<>c_TypeInfo->static_fields->__9__46_0;
    *ppSVar2 = selector;
    thunk_FUN_01c20e04(ppSVar2,selector);
  }
  source = System_Linq_Enumerable__Select<object,_object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__TResult__o *)selector,
                      Method_System_Linq_Enumerable_Select<LHKALFIIJKB_CFFGMHNFPLN,_string>__);
  DIOCOHICNNI = (MethodInfo *)
                System_Linq_Enumerable__ToList<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           Method_System_Linq_Enumerable_ToList<string>__);
  method_00 = DIOCOHICNNI;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MethodInfo *)thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
  }
  CPIDPLFFOMA = LHKALFIIJKB__FPOJCJJJGAD(method_00);
  BHHMILDAFKI__MGOHCPDBIBF
            ((System_Collections_Generic_List_string__o *)DIOCOHICNNI,CPIDPLFFOMA,(MethodInfo *)0x0)
  ;
  return;
}


// ===== private static void LNDABNJKCHJ(NIEPOJOIFNE IDCGLBOIAFJ)  [RVA 0x34FFF5C]
// LHKALFIIJKB$$LNDABNJKCHJ @ RVA 0x34FFF5C

void LHKALFIIJKB__LNDABNJKCHJ(NIEPOJOIFNE_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  LHKALFIIJKB_c *method_00;
  System_String_o *pSVar2;
  CFGLKHFFEKA_o *FMPJLBLNHMC;
  System_String_o *str1;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  MethodInfo *pMVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  LHKALFIIJKB_StaticFields *pLVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = IDCGLBOIAFJ;
  if ((DAT_0456884c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_674);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_675);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_676);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_677);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_678);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_679);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    auVar7 = FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_0456884c = 1;
  }
  if (IDCGLBOIAFJ == (NIEPOJOIFNE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  bVar1 = System_String__IsNullOrEmpty((IDCGLBOIAFJ->fields).GFGEOMECLKC,(MethodInfo *)0x0);
  if ((bVar1) && ((IDCGLBOIAFJ->fields).KOANCCDDBDA != (System_Byte_array *)0x0)) {
    method_00 = LHKALFIIJKB_TypeInfo;
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
    }
    pSVar2 = LHKALFIIJKB__FPOJCJJJGAD((MethodInfo *)method_00);
    NEHNBJKKABI__IGOPCLNJIGA(pSVar2,(IDCGLBOIAFJ->fields).KOANCCDDBDA,(MethodInfo *)0x0);
    pMVar5 = extraout_x1;
    if (DAT_04568907 == '\0') {
      FUN_01bab630(&LHKALFIIJKB_TypeInfo);
      DAT_04568907 = '\x01';
      pMVar5 = extraout_x1_00;
    }
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar5 = extraout_x1_01;
    }
    pLVar6 = LHKALFIIJKB_TypeInfo->static_fields;
    pLVar6->_DPINOOGOIGD_k__BackingField = true;
    bVar1 = LHKALFIIJKB__AKJIEMOLNCN(pLVar6->GJHCNJHLMPO,pMVar5);
    if (bVar1) {
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      FMPJLBLNHMC = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
      if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
      }
      pSVar2 = LHKALFIIJKB_TypeInfo->static_fields->KPLOGMKKPDL;
      if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = CFGLKHFFEKA__ONPEKFBMDKM(FMPJLBLNHMC,pSVar2,(MethodInfo *)0x0);
      pMVar5 = (MethodInfo *)(ulong)bVar1;
                    /* try { // try from 03600100 to 03700373 has its CatchHandler @ 03600100
                       catch() { ... } // from try @ 03600100 with catch @ 03600100
                       catch() { ... } // from try @ 03600394 with catch @ 03600100
                       catch() { ... } // from try @ 036003ec with catch @ 03600100
                       catch() { ... } // from try @ 03600444 with catch @ 03600100
                       catch() { ... } // from try @ 036004c4 with catch @ 03600100
                       catch() { ... } // from try @ 0360052c with catch @ 03600100
                       catch() { ... } // from try @ 03600580 with catch @ 03600100
                       catch() { ... } // from try @ 036005cc with catch @ 03600100
                       catch() { ... } // from try @ 03600614 with catch @ 03600100
                       catch() { ... } // from try @ 03600630 with catch @ 03600100
                       catch() { ... } // from try @ 0360067c with catch @ 03600100
                       catch() { ... } // from try @ 03600698 with catch @ 03600100
                       catch() { ... } // from try @ 036006d4 with catch @ 03600100
                       catch() { ... } // from try @ 036006f0 with catch @ 03600100
                       catch() { ... } // from try @ 03600730 with catch @ 03600100
                       catch() { ... } // from try @ 0360074c with catch @ 03600100
                       catch() { ... } // from try @ 0360078c with catch @ 03600100 */
      if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
        pMVar5 = (MethodInfo *)thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
      }
      if (!bVar1) {
        LHKALFIIJKB__LMFIKNOJNPJ(pMVar5);
        return;
      }
      LHKALFIIJKB__LNGIKCILFFK(pMVar5);
      return;
    }
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_674,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_675,(MethodInfo *)0x0);
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pMVar5 = extraout_x1_04;
  }
  else {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_676,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_677,(MethodInfo *)0x0);
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((IDCGLBOIAFJ->fields).GFGEOMECLKC,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_678,(MethodInfo *)0x0
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_679,(MethodInfo *)0x0
                );
      str1 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    }
    else {
      str1 = (IDCGLBOIAFJ->fields).GFGEOMECLKC;
    }
    pSVar2 = System_String__Concat(pSVar2,str1,(MethodInfo *)0x0);
    pMVar5 = extraout_x1_02;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
    pMVar5 = extraout_x1_03;
  }
  LHKALFIIJKB__LJGOKKLMLNN(pSVar2,pMVar5);
  return;
}


// ===== private static void KAHONNFANOI(bool KPBHFEMEJPO = False)  [RVA 0x35002A8]
// LHKALFIIJKB$$KAHONNFANOI @ RVA 0x35002A8

void LHKALFIIJKB__KAHONNFANOI(bool KPBHFEMEJPO,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  System_Byte_array *pSVar7;
  System_Byte_array *pSVar8;
  System_String_o *pSVar9;
  long lVar10;
  VirtualInvokeData *pVVar11;
  System_String_o *pSVar12;
  PDGHODJHCGP_o *__this;
  PDGHODJHCGP_HIBNPLAHCBH_o *__this_00;
  PDGHODJHCGP_HIBNPLAHCBH_o *__this_01;
  MethodInfo *extraout_x1;
  long lVar13;
  Il2CppClass *pIVar14;
  ulong uVar15;
  int32_t *piVar16;
  undefined8 uVar17;
  
  if ((DAT_0456884d & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_680);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_681);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_682);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_683);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_684);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_685);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_686);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_687);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_LHKALFIIJKB_FBEDMKHCNDA_CBKPJACPBDL__);
                    /* try { // try from 03600374 to 0370037b has its CatchHandler @ 036006d4 */
    FUN_01bab630(&LHKALFIIJKB_FBEDMKHCNDA_TypeInfo);
                    /* try { // try from 03600388 to 03700393 has its CatchHandler @ 036005a8 */
    FUN_01bab630(&PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
                    /* try { // try from 03600394 to 037003cb has its CatchHandler @ 03600100 */
    FUN_01bab630(&Method_LHKALFIIJKB_PLNBDGAOAMD__);
    FUN_01bab630(&PDGHODJHCGP_TypeInfo);
    DAT_0456884d = 1;
    method = extraout_x1;
  }
  pIVar5 = (Il2CppObject *)thunk_FUN_01bda818(LHKALFIIJKB_FBEDMKHCNDA_TypeInfo,method);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  if (pIVar5 != (Il2CppObject *)0x0) {
                    /* try { // try from 036003cc to 037003d3 has its CatchHandler @ 0360067c */
    *(bool *)&pIVar5[1].klass = KPBHFEMEJPO;
                    /* try { // try from 036003e0 to 037003eb has its CatchHandler @ 036005a0 */
                    /* try { // try from 036003ec to 03700423 has its CatchHandler @ 03600100 */
    pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_680,(MethodInfo *)0x0);
                    /* try { // try from 03600424 to 0370042b has its CatchHandler @ 03600614 */
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03600438 to 03700443 has its CatchHandler @ 03600598 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_681,(MethodInfo *)0x0);
                    /* try { // try from 03600444 to 037004a3 has its CatchHandler @ 03600100 */
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
    lVar10 = Method_System_Array_Empty<string>__;
    lVar13 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar13 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar13 = *(long *)(lVar10 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_01b81620();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01b81620();
    }
    if (pIVar6 != (Il2CppObject *)0x0) {
                    /* try { // try from 036004a4 to 037004ab has its CatchHandler @ 036005b0 */
      pIVar14 = pIVar6->klass;
      uVar17 = **(undefined8 **)(lVar10 + 0xb8);
      uVar1._0_1_ = (pIVar14->_2).rank;
      uVar1._1_1_ = (pIVar14->_2).minimumAlignment;
                    /* try { // try from 036004b8 to 037004c3 has its CatchHandler @ 03600590 */
      uVar15 = (ulong)uVar1;
                    /* try { // try from 036004c4 to 037004fb has its CatchHandler @ 03600100 */
      if (uVar15 != 0) {
        piVar16 = &((pIVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* try { // try from 036004fc to 03700503 has its CatchHandler @ 036005ac */
            pVVar11 = pIVar14->vtable + (*piVar16 + 0xc);
            goto LAB_0360050c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0360050c:
                    /* try { // try from 03600510 to 0370052b has its CatchHandler @ 03600730 */
      pSVar9 = (System_String_o *)(*pVVar11->methodPtr)(pIVar6,pSVar9,uVar17,pVVar11->method);
                    /* try { // try from 0360052c to 03700567 has its CatchHandler @ 03600100 */
      pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_682,(MethodInfo *)0x0
                );
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03600568 to 0370056b has its CatchHandler @ 036005a4 */
                    /* try { // try from 0360056c to 0370056f has its CatchHandler @ 0360059c */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_683,(MethodInfo *)0x0
                );
                    /* try { // try from 03600570 to 03700573 has its CatchHandler @ 03600594 */
                    /* try { // try from 03600574 to 03700577 has its CatchHandler @ 0360058c */
                    /* try { // try from 03600578 to 0370057b has its CatchHandler @ 03600588 */
                    /* try { // try from 0360057c to 0370057f has its CatchHandler @ 03600584 */
      pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
      lVar10 = Method_System_Array_Empty<string>__;
                    /* try { // try from 03600580 to 037005c7 has its CatchHandler @ 03600100 */
                    /* catch() { ... } // from try @ 0360057c with catch @ 03600584 */
                    /* catch() { ... } // from try @ 03600578 with catch @ 03600588 */
      lVar13 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
                    /* catch() { ... } // from try @ 03600574 with catch @ 0360058c */
      if (lVar13 == 0) {
                    /* catch() { ... } // from try @ 036004b8 with catch @ 03600590 */
                    /* catch() { ... } // from try @ 03600570 with catch @ 03600594 */
        FUN_01b8167c(Method_System_Array_Empty<string>__);
                    /* catch() { ... } // from try @ 03600438 with catch @ 03600598 */
        lVar13 = *(long *)(lVar10 + 0x38);
      }
                    /* catch() { ... } // from try @ 0360056c with catch @ 0360059c */
      lVar13 = *(long *)(lVar13 + 0x10);
                    /* catch() { ... } // from try @ 036003e0 with catch @ 036005a0 */
                    /* catch() { ... } // from try @ 03600568 with catch @ 036005a4 */
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 03600388 with catch @ 036005a8 */
        lVar13 = FUN_01b81620();
      }
                    /* catch() { ... } // from try @ 036004fc with catch @ 036005ac */
                    /* catch() { ... } // from try @ 036004a4 with catch @ 036005b0 */
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    /* try { // try from 036005c8 to 037005cb has its CatchHandler @ 036005f0 */
        lVar10 = FUN_01b81620();
      }
                    /* try { // try from 036005cc to 037005ff has its CatchHandler @ 03600100 */
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar14 = pIVar6->klass;
                    /* catch() { ... } // from try @ 036005c8 with catch @ 036005f0 */
        uVar17 = **(undefined8 **)(lVar10 + 0xb8);
        uVar2._0_1_ = (pIVar14->_2).rank;
        uVar2._1_1_ = (pIVar14->_2).minimumAlignment;
        uVar15 = (ulong)uVar2;
                    /* try { // try from 03600600 to 03700613 has its CatchHandler @ 036007a0 */
        if (uVar15 != 0) {
          piVar16 = &((pIVar14->_1).interfaceOffsets)->offset;
          do {
                    /* catch() { ... } // from try @ 03600424 with catch @ 03600614
                       try { // try from 03600614 to 0370062b has its CatchHandler @ 03600100 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar11 = pIVar14->vtable + (*piVar16 + 0xc);
              goto LAB_03600648;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
                    /* try { // try from 0360062c to 0370062f has its CatchHandler @ 03600658 */
                    /* try { // try from 03600630 to 03700667 has its CatchHandler @ 03600100 */
        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03600648:
                    /* catch() { ... } // from try @ 0360062c with catch @ 03600658 */
        pSVar12 = (System_String_o *)(*pVVar11->methodPtr)(pIVar6,pSVar12,uVar17,pVVar11->method);
                    /* try { // try from 03600668 to 0370067b has its CatchHandler @ 036007a0 */
        __this = (PDGHODJHCGP_o *)thunk_FUN_01bda818(PDGHODJHCGP_TypeInfo);
                    /* catch() { ... } // from try @ 036003cc with catch @ 0360067c
                       try { // try from 0360067c to 03700693 has its CatchHandler @ 03600100 */
        PDGHODJHCGP___ctor(__this,pSVar9,pSVar12,(MethodInfo *)0x0);
        __this_00 = (PDGHODJHCGP_HIBNPLAHCBH_o *)
                    thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
                    /* try { // try from 03600694 to 03700697 has its CatchHandler @ 036006b8 */
                    /* try { // try from 03600698 to 037006bf has its CatchHandler @ 03600100 */
        PDGHODJHCGP_HIBNPLAHCBH___ctor
                  (__this_00,pIVar5,Method_LHKALFIIJKB_FBEDMKHCNDA_CBKPJACPBDL__,(MethodInfo *)0x0);
        pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* catch() { ... } // from try @ 03600694 with catch @ 036006b8 */
                    /* try { // try from 036006c0 to 037006d3 has its CatchHandler @ 036007a0 */
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_684,
                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03600374 with catch @ 036006d4
                       try { // try from 036006d4 to 037006eb has its CatchHandler @ 03600100 */
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036006ec to 037006ef has its CatchHandler @ 03600710 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_685,
                   (MethodInfo *)0x0);
                    /* try { // try from 036006f0 to 0370071b has its CatchHandler @ 03600100 */
        pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
        lVar10 = Method_System_Array_Empty<string>__;
                    /* catch() { ... } // from try @ 036006ec with catch @ 03600710 */
        lVar13 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar13 == 0) {
                    /* try { // try from 0360071c to 0370072f has its CatchHandler @ 036007a0 */
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar13 = *(long *)(lVar10 + 0x38);
        }
        lVar13 = *(long *)(lVar13 + 0x10);
                    /* catch() { ... } // from try @ 03600510 with catch @ 03600730
                       try { // try from 03600730 to 03700747 has its CatchHandler @ 03600100 */
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01b81620();
        }
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 03600748 to 0370074b has its CatchHandler @ 03600774 */
                    /* try { // try from 0360074c to 03700783 has its CatchHandler @ 03600100 */
        lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01b81620();
        }
        if (pIVar5 != (Il2CppObject *)0x0) {
          pIVar14 = pIVar5->klass;
          uVar17 = **(undefined8 **)(lVar10 + 0xb8);
          uVar3._0_1_ = (pIVar14->_2).rank;
          uVar3._1_1_ = (pIVar14->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 03600748 with catch @ 03600774 */
          uVar15 = (ulong)uVar3;
          if (uVar15 != 0) {
                    /* try { // try from 03600784 to 0370078b has its CatchHandler @ 036007a0 */
            piVar16 = &((pIVar14->_1).interfaceOffsets)->offset;
            do {
                    /* try { // try from 0360078c to 03700797 has its CatchHandler @ 03600100 */
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar11 = pIVar14->vtable + (*piVar16 + 0xc);
                goto LAB_036007c0;
              }
              uVar15 = uVar15 - 1;
                    /* try { // try from 03600798 to 0370079f has its CatchHandler @ 036007a0 */
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
                    /* catch() { ... } // from try @ 03600600 with catch @ 036007a0
                       catch() { ... } // from try @ 03600668 with catch @ 036007a0
                       catch() { ... } // from try @ 036006c0 with catch @ 036007a0
                       catch() { ... } // from try @ 0360071c with catch @ 036007a0
                       catch() { ... } // from try @ 03600784 with catch @ 036007a0
                       catch() { ... } // from try @ 03600798 with catch @ 036007a0 */
          pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_036007c0:
          pSVar9 = (System_String_o *)(*pVVar11->methodPtr)(pIVar5,pSVar9,uVar17,pVVar11->method);
          __this_01 = (PDGHODJHCGP_HIBNPLAHCBH_o *)
                      thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
          PDGHODJHCGP_HIBNPLAHCBH___ctor
                    (__this_01,(Il2CppObject *)0x0,Method_LHKALFIIJKB_PLNBDGAOAMD__,
                     (MethodInfo *)0x0);
          if (__this != (PDGHODJHCGP_o *)0x0) {
            PDGHODJHCGP__IEFEBMICIHN(__this,pSVar9,__this_01,(MethodInfo *)0x0);
            pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_686,
                       (MethodInfo *)0x0);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_687,
                       (MethodInfo *)0x0);
            pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
            lVar10 = Method_System_Array_Empty<string>__;
            lVar13 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
            if (lVar13 == 0) {
              FUN_01b8167c(Method_System_Array_Empty<string>__);
              lVar13 = *(long *)(lVar10 + 0x38);
            }
            lVar13 = *(long *)(lVar13 + 0x10);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_01b81620();
            }
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ba7564();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01b81620();
            }
            if (pIVar5 != (Il2CppObject *)0x0) {
              pIVar14 = pIVar5->klass;
              uVar17 = **(undefined8 **)(lVar10 + 0xb8);
              uVar4._0_1_ = (pIVar14->_2).rank;
              uVar4._1_1_ = (pIVar14->_2).minimumAlignment;
              uVar15 = (ulong)uVar4;
              if (uVar15 != 0) {
                piVar16 = &((pIVar14->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                      (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    pVVar11 = pIVar14->vtable + (*piVar16 + 0xc);
                    goto LAB_03600928;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03600928:
              pSVar9 = (System_String_o *)
                       (*pVVar11->methodPtr)(pIVar5,pSVar9,uVar17,pVVar11->method);
              PDGHODJHCGP__IEFEBMICIHN(__this,pSVar9,__this_00,(MethodInfo *)0x0);
              PDGHODJHCGP__BFCCEGGDJEF(__this,(MethodInfo *)0x0);
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


// ===== public static void EMABNEMMNON()  [RVA 0x34FF5DC]
// LHKALFIIJKB$$EMABNEMMNON @ RVA 0x34FF5DC

void LHKALFIIJKB__EMABNEMMNON(MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  System_Collections_IEnumerator_o **ppSVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456884e & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456884e = 1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (LHKALFIIJKB_TypeInfo->static_fields->AFAKLFEDLPE == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
  }
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  pSVar8 = LHKALFIIJKB_TypeInfo->static_fields->AFAKLFEDLPE;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_035ff6cc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_035ff6cc:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  ppSVar4 = &LHKALFIIJKB_TypeInfo->static_fields->AFAKLFEDLPE;
  *ppSVar4 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar4,0);
  return;
}


// ===== private static void PGLPDFKGFGG()  [RVA 0x34FC974]
// LHKALFIIJKB$$PGLPDFKGFGG @ RVA 0x34FC974

void LHKALFIIJKB__PGLPDFKGFGG(MethodInfo *method)

{
  LHKALFIIJKB_c *method_00;
  System_String_o *AAIHDEKMIJG;
  
  if ((DAT_0456884f & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_0456884f = 1;
  }
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
  AAIHDEKMIJG = LHKALFIIJKB__FPOJCJJJGAD((MethodInfo *)method_00);
  NEHNBJKKABI__MGLIGNDGBCN(AAIHDEKMIJG,(MethodInfo *)0x0);
  return;
}


// ===== private static void LJGOKKLMLNN(string GPJHCIPBFOG)  [RVA 0x34FD208]
// LHKALFIIJKB$$LJGOKKLMLNN @ RVA 0x34FD208

void LHKALFIIJKB__LJGOKKLMLNN(System_String_o *GPJHCIPBFOG,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  LHKALFIIJKB_c *pLVar2;
  System_Action_o **ppSVar3;
  System_Action_o *pSVar4;
  
  if ((DAT_04568850 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_688);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_689);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568850 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_688,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_689,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,GPJHCIPBFOG,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568907 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568907 = '\x01';
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar2 = LHKALFIIJKB_TypeInfo;
  LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = false;
  if (DAT_04568906 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568906 = '\x01';
    pLVar2 = LHKALFIIJKB_TypeInfo;
  }
  if ((pLVar2->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pLVar2 = LHKALFIIJKB_TypeInfo;
  }
  pSVar4 = pLVar2->static_fields->BPDJGLJFDGC;
  pLVar2->static_fields->_IKKBHKLDJLD_k__BackingField = true;
  if (pSVar4 != (System_Action_o *)0x0) {
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,(pSVar4->fields).super.super.method);
    pLVar2 = LHKALFIIJKB_TypeInfo;
  }
  if ((pLVar2->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pLVar2 = LHKALFIIJKB_TypeInfo;
  }
  ppSVar3 = &pLVar2->static_fields->BPDJGLJFDGC;
  *ppSVar3 = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(ppSVar3,0);
  return;
}


// ===== private static void BDHOPPBMMCH(string CEHOJOFLMFF, byte[] KBHEDDFCBMM)  [RVA 0x3500980]
// LHKALFIIJKB$$BDHOPPBMMCH @ RVA 0x3500980

void LHKALFIIJKB__BDHOPPBMMCH
               (System_String_o *CEHOJOFLMFF,System_Byte_array *KBHEDDFCBMM,MethodInfo *method)

{
  bool bVar1;
  LHKALFIIJKB_c *method_00;
  System_String_o *AAIHDEKMIJG;
  CFGLKHFFEKA_o *FMPJLBLNHMC;
  undefined8 extraout_x1;
  undefined1 auVar2 [16];
  
  if ((DAT_04568851 & 1) == 0) {
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568851 = 1;
  }
  if ((KBHEDDFCBMM == (System_Byte_array *)0x0) ||
     (bVar1 = System_String__IsNullOrEmpty(CEHOJOFLMFF,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
  AAIHDEKMIJG = LHKALFIIJKB__FPOJCJJJGAD((MethodInfo *)method_00);
  NEHNBJKKABI__IGOPCLNJIGA(AAIHDEKMIJG,KBHEDDFCBMM,(MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  FMPJLBLNHMC = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
  if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFGLKHFFEKA_TypeInfo);
  }
  bVar1 = CFGLKHFFEKA__ONPEKFBMDKM(FMPJLBLNHMC,CEHOJOFLMFF,(MethodInfo *)0x0);
  auVar2._1_7_ = 0;
  auVar2[0] = bVar1;
  auVar2._8_8_ = extraout_x1;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    auVar2 = thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
  }
  if (!bVar1) {
    LHKALFIIJKB__LMFIKNOJNPJ(auVar2._0_8_);
    return;
  }
  LHKALFIIJKB__KAHONNFANOI(true,auVar2._8_8_);
  return;
}


// ===== private static bool AAMOJIKAADG()  [RVA 0x34FF9FC]
// LHKALFIIJKB$$AAMOJIKAADG @ RVA 0x34FF9FC

bool LHKALFIIJKB__AAMOJIKAADG(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *IBOAKONNBMM;
  MethodInfo *method_02;
  MethodInfo *in_x1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04568852 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568852 = 1;
    in_x1 = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    in_x1 = extraout_x1_00;
  }
  LHKALFIIJKB__FKPLMPKAECO(true,in_x1);
  method_01 = (MethodInfo *)LHKALFIIJKB__FPOJCJJJGAD(method_00);
  IBOAKONNBMM = LHKALFIIJKB__OPIFOELMDAH(method_01);
  BHHMILDAFKI__NPIFBKCLFMI((System_String_o *)method_01,IBOAKONNBMM,(MethodInfo *)0x0);
  bVar1 = LHKALFIIJKB__KNJEENDFKIJ(method_02);
  return bVar1;
}


// ===== private static IEnumerator OBFFJCKCBKI(float OKPBEPKFBKN)  [RVA 0x34FF6FC]
// LHKALFIIJKB$$OBFFJCKCBKI @ RVA 0x34FF6FC

System_Collections_IEnumerator_o * LHKALFIIJKB__OBFFJCKCBKI(float OKPBEPKFBKN,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568853 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_BNPEMKLOPBC_TypeInfo);
    DAT_04568853 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(LHKALFIIJKB_BNPEMKLOPBC_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  *(float *)&__this[2].klass = OKPBEPKFBKN;
  return (System_Collections_IEnumerator_o *)__this;
}


// ===== public static bool ENDNMLNIMKA()  [RVA 0x3500C78]
// LHKALFIIJKB$$ENDNMLNIMKA @ RVA 0x3500C78

bool LHKALFIIJKB__ENDNMLNIMKA(MethodInfo *method)

{
  if ((DAT_04568854 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568854 = 1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return LHKALFIIJKB_TypeInfo->static_fields->JDMCKMLFGBL;
}


// ===== private static void PANAPLBCOCH(bool CJNHFNHJHPE)  [RVA 0x3500CD0]
// LHKALFIIJKB$$PANAPLBCOCH @ RVA 0x3500CD0

void LHKALFIIJKB__PANAPLBCOCH(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568855 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568855 = 1;
    method = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  LHKALFIIJKB_TypeInfo->static_fields->_IKKBHKLDJLD_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private static bool KNJEENDFKIJ()  [RVA 0x3500A9C]
// LHKALFIIJKB$$KNJEENDFKIJ @ RVA 0x3500A9C

bool LHKALFIIJKB__KNJEENDFKIJ(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *__this;
  System_Xml_XmlDocument_o *pSVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568856 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_get_Current__
                );
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568856 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = LHKALFIIJKB_TypeInfo->static_fields->KLMLDJJBLKO;
  if (__this == (System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_MoveNext__
                      );
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_03600ba8;
    }
    if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = GIAMPEGMNHE__IBJOMPOLPCC
                       ((System_String_o *)local_38.fields._current[1].klass,StringLiteral_1/*""*/,0,true,
                        true,false,(MethodInfo *)0x0);
  } while (pSVar2 != (System_Xml_XmlDocument_o *)0x0);
  iVar3 = 4;
LAB_03600ba8:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,
             Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_Dispose__);
  return iVar3 != 4;
}


// ===== private static void NEGAGCCHDBJ()  [RVA 0x3500D30]
// LHKALFIIJKB$$NEGAGCCHDBJ @ RVA 0x3500D30

/* WARNING: Type propagation algorithm not settling */

void LHKALFIIJKB__NEGAGCCHDBJ(MethodInfo *method)

{
  System_RuntimeFieldHandle_Fields *pSVar1;
  System_RuntimeFieldHandle_Fields *pSVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int32_t iVar6;
  Il2CppObject *pIVar7;
  System_Byte_array *pSVar8;
  System_Byte_array *pSVar9;
  System_String_o *pSVar10;
  long lVar11;
  Il2CppMethodPointer *ppIVar12;
  System_String_o *pSVar13;
  PDGHODJHCGP_o *__this;
  PDGHODJHCGP_HIBNPLAHCBH_o *__this_00;
  long lVar14;
  Il2CppClass *pIVar15;
  ulong uVar16;
  int32_t *piVar17;
  undefined8 uVar18;
  
  if ((DAT_04568857 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_690);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_691);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_692);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_693);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_694);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_695);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_696);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_697);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_IDMNJFOALDB__);
    FUN_01bab630(&PDGHODJHCGP_TypeInfo);
    DAT_04568857 = 1;
  }
  pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_690,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_691,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  lVar11 = Method_System_Array_Empty<string>__;
  lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar14 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar14 = *(long *)(lVar11 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01b81620();
  }
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01b81620();
  }
  if (pIVar7 != (Il2CppObject *)0x0) {
    pIVar15 = pIVar7->klass;
    uVar18 = **(undefined8 **)(lVar11 + 0xb8);
    uVar3._0_1_ = (pIVar15->_2).rank;
    uVar3._1_1_ = (pIVar15->_2).minimumAlignment;
    uVar16 = (ulong)uVar3;
    if (uVar16 != 0) {
      piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          ppIVar12 = &pIVar15->vtable[*piVar17 + 0xc].methodPtr;
          goto LAB_03600f58;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    ppIVar12 = (Il2CppMethodPointer *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03600f58:
    pSVar10 = (System_String_o *)(**ppIVar12)(pIVar7,pSVar10,uVar18,(MethodInfo *)ppIVar12[1]);
    pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo);
    }
    iVar6 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar1 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_694;
    if (iVar6 != 8) {
      pSVar1 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_692;
    }
    pSVar2 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_695;
    if (iVar6 != 8) {
      pSVar2 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_693;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,(System_RuntimeFieldHandle_o)pSVar1->value,(MethodInfo *)0x0
              );
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,(System_RuntimeFieldHandle_o)pSVar2->value,(MethodInfo *)0x0
              );
    pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    lVar11 = Method_System_Array_Empty<string>__;
    lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar14 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar14 = *(long *)(lVar11 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01b81620();
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01b81620();
    }
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar15 = pIVar7->klass;
      uVar18 = **(undefined8 **)(lVar11 + 0xb8);
      uVar4._0_1_ = (pIVar15->_2).rank;
      uVar4._1_1_ = (pIVar15->_2).minimumAlignment;
      uVar16 = (ulong)uVar4;
      if (uVar16 != 0) {
        piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            ppIVar12 = &pIVar15->vtable[*piVar17 + 0xc].methodPtr;
            goto LAB_036010e0;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      ppIVar12 = (Il2CppMethodPointer *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_036010e0:
                    /* try { // try from 036010e8 to 037011db has its CatchHandler @ 036010e8
                       catch() { ... } // from try @ 036010e8 with catch @ 036010e8
                       catch() { ... } // from try @ 036012f4 with catch @ 036010e8
                       catch() { ... } // from try @ 03601338 with catch @ 036010e8
                       catch() { ... } // from try @ 03601394 with catch @ 036010e8
                       catch() { ... } // from try @ 036013c4 with catch @ 036010e8 */
      pSVar13 = (System_String_o *)(**ppIVar12)(pIVar7,pSVar13,uVar18,(MethodInfo *)ppIVar12[1]);
      __this = (PDGHODJHCGP_o *)thunk_FUN_01bda818(PDGHODJHCGP_TypeInfo);
      PDGHODJHCGP___ctor(__this,pSVar10,pSVar13,(MethodInfo *)0x0);
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_696,(MethodInfo *)0x0
                );
      pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar9,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_697,(MethodInfo *)0x0
                );
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
      lVar11 = Method_System_Array_Empty<string>__;
      lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar14 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar14 = *(long *)(lVar11 + 0x38);
      }
      lVar14 = *(long *)(lVar14 + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01b81620();
      }
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01b81620();
      }
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar15 = pIVar7->klass;
                    /* try { // try from 036011dc to 037011e3 has its CatchHandler @ 03601378 */
        uVar18 = **(undefined8 **)(lVar11 + 0xb8);
        uVar5._0_1_ = (pIVar15->_2).rank;
        uVar5._1_1_ = (pIVar15->_2).minimumAlignment;
        uVar16 = (ulong)uVar5;
        if (uVar16 != 0) {
          piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
          do {
                    /* try { // try from 036011f8 to 037011fb has its CatchHandler @ 03601350 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              ppIVar12 = &pIVar15->vtable[*piVar17 + 0xc].methodPtr;
              goto LAB_03601230;
            }
                    /* try { // try from 03601204 to 0370121f has its CatchHandler @ 03601364 */
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        ppIVar12 = (Il2CppMethodPointer *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03601230:
                    /* try { // try from 03601240 to 03701247 has its CatchHandler @ 03601374 */
        pSVar10 = (System_String_o *)(**ppIVar12)(pIVar7,pSVar10,uVar18,(MethodInfo *)ppIVar12[1]);
        __this_00 = (PDGHODJHCGP_HIBNPLAHCBH_o *)
                    thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
                    /* try { // try from 03601258 to 0370125b has its CatchHandler @ 0360133c */
                    /* try { // try from 03601264 to 0370127f has its CatchHandler @ 03601340 */
        PDGHODJHCGP_HIBNPLAHCBH___ctor
                  (__this_00,(Il2CppObject *)0x0,Method_LHKALFIIJKB_IDMNJFOALDB__,(MethodInfo *)0x0)
        ;
        if (__this != (PDGHODJHCGP_o *)0x0) {
          PDGHODJHCGP__IEFEBMICIHN(__this,pSVar10,__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03601298 to 037012ab has its CatchHandler @ 03601360 */
          PDGHODJHCGP__BFCCEGGDJEF(__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void JKJGJBJJPNB(bool HPACPFLKHPK, JSONNode IMMNELPBGIF, object OKECKCEAHNA)  [RVA 0x35012AC]
// LHKALFIIJKB$$JKJGJBJJPNB @ RVA 0x35012AC

void LHKALFIIJKB__JKJGJBJJPNB
               (bool HPACPFLKHPK,SimpleJSON_JSONNode_o *IMMNELPBGIF,Il2CppObject *OKECKCEAHNA,
               MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  SimpleJSON_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  long *plVar10;
  System_String_o **ppSVar11;
  int64_t iVar12;
  OJJLPLHNGBP_BELGMANHGIJ_o *pOVar13;
  System_Action_NIEPOJOIFNE__o *BLMFLPJJMPF;
  Il2CppObject *pIVar14;
  System_TimeSpan_o MINHPKOPAIE;
  OJJLPLHNGBP_o *pOVar15;
  MOBODMIBMKA_o *pMVar16;
  VirtualInvokeData *pVVar17;
  LHKALFIIJKB_c *method_00;
  System_Action_bool__o **ppSVar18;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_01;
  MOBODMIBMKA_c *pMVar19;
  ACHLOMELAJE_o *pAVar20;
  ulong uVar21;
  int32_t *piVar22;
  System_Action_bool__o *BLMFLPJJMPF_00;
  
                    /* try { // try from 036012b4 to 037012cf has its CatchHandler @ 03601344 */
  if ((DAT_04568858 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action<NIEPOJOIFNE>_TypeInfo);
                    /* try { // try from 036012ec to 037012f3 has its CatchHandler @ 03601358 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_698);
                    /* try { // try from 036012f4 to 0370131b has its CatchHandler @ 036010e8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_699);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_700);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_701);
                    /* try { // try from 0360131c to 0370131f has its CatchHandler @ 03601370 */
                    /* try { // try from 03601320 to 03701323 has its CatchHandler @ 0360136c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_702);
                    /* try { // try from 03601324 to 03701327 has its CatchHandler @ 03601368 */
                    /* try { // try from 03601328 to 0370132b has its CatchHandler @ 0360135c */
                    /* try { // try from 0360132c to 0370132f has its CatchHandler @ 03601354 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_703);
                    /* try { // try from 03601330 to 03701333 has its CatchHandler @ 0360134c */
                    /* try { // try from 03601334 to 03701337 has its CatchHandler @ 03601348 */
                    /* try { // try from 03601338 to 0370138f has its CatchHandler @ 036010e8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_704);
                    /* catch() { ... } // from try @ 03601258 with catch @ 0360133c */
                    /* catch() { ... } // from try @ 03601264 with catch @ 03601340 */
                    /* catch() { ... } // from try @ 036012b4 with catch @ 03601344 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_705);
                    /* catch() { ... } // from try @ 03601334 with catch @ 03601348 */
                    /* catch() { ... } // from try @ 03601330 with catch @ 0360134c */
                    /* catch() { ... } // from try @ 036011f8 with catch @ 03601350 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_706);
                    /* catch() { ... } // from try @ 0360132c with catch @ 03601354 */
                    /* catch() { ... } // from try @ 036012ec with catch @ 03601358 */
                    /* catch() { ... } // from try @ 03601328 with catch @ 0360135c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_707);
                    /* catch() { ... } // from try @ 03601298 with catch @ 03601360 */
                    /* catch() { ... } // from try @ 03601204 with catch @ 03601364 */
                    /* catch() { ... } // from try @ 03601324 with catch @ 03601368 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_708);
                    /* catch() { ... } // from try @ 03601320 with catch @ 0360136c */
                    /* catch() { ... } // from try @ 0360131c with catch @ 03601370 */
                    /* catch() { ... } // from try @ 03601240 with catch @ 03601374 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_709);
                    /* catch() { ... } // from try @ 036011dc with catch @ 03601378 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_710);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_711);
                    /* try { // try from 03601390 to 03701393 has its CatchHandler @ 036013b4 */
                    /* try { // try from 03601394 to 037013bb has its CatchHandler @ 036010e8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_712);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_713);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_714);
                    /* catch() { ... } // from try @ 03601390 with catch @ 036013b4 */
                    /* try { // try from 036013bc to 037013c3 has its CatchHandler @ 036013d8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_715);
                    /* try { // try from 036013c4 to 037013cf has its CatchHandler @ 036010e8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_716);
                    /* try { // try from 036013d0 to 037013d7 has its CatchHandler @ 036013d8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_717);
                    /* catch() { ... } // from try @ 036013bc with catch @ 036013d8
                       catch() { ... } // from try @ 036013d0 with catch @ 036013d8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_718);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_719);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_720);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_721);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_BHOHLODBJPE__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_IDIJAFLLLJG__);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_LNDABNJKCHJ__);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&MOBODMIBMKA_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_<>c_PHDEOKCJCMD__);
    FUN_01bab630(&LHKALFIIJKB_<>c_TypeInfo);
    DAT_04568858 = 1;
  }
  if (HPACPFLKHPK) {
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = SimpleJSON_JSONNode__op_Equality(IMMNELPBGIF,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_700,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_701,(MethodInfo *)0x0
                );
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if (IMMNELPBGIF == (SimpleJSON_JSONNode_o *)0x0) goto LAB_03601e3c;
      pSVar8 = (SimpleJSON_JSONNode_o *)
               (*(IMMNELPBGIF->klass->vtable)._7_get_Item.methodPtr)
                         (IMMNELPBGIF,pSVar7,(IMMNELPBGIF->klass->vtable)._7_get_Item.method);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      bVar3 = SimpleJSON_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (pSVar8 == (SimpleJSON_JSONNode_o *)0x0) {
LAB_03601e3c:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = (System_String_o *)
                 (*(pSVar8->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                           (pSVar8,(pSVar8->klass->vtable)._9_HNIHOIAMDPC.method);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_702,
                   (MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_703,
                   (MethodInfo *)0x0);
        pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        if (pSVar7 == (System_String_o *)0x0) goto LAB_03601e3c;
        bVar3 = System_String__Equals(pSVar7,pSVar9,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_704,
                     (MethodInfo *)0x0);
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_705,
                     (MethodInfo *)0x0);
          pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
          plVar10 = (long *)(*(IMMNELPBGIF->klass->vtable)._7_get_Item.methodPtr)
                                      (IMMNELPBGIF,pSVar7,
                                       (IMMNELPBGIF->klass->vtable)._7_get_Item.method);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_706,
                     (MethodInfo *)0x0);
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_707,
                     (MethodInfo *)0x0);
          pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
          if (plVar10 != (long *)0x0) {
            pSVar8 = (SimpleJSON_JSONNode_o *)
                     (**(code **)(*plVar10 + 0x1a8))
                               (plVar10,pSVar7,*(undefined8 *)(*plVar10 + 0x1b0));
            bVar3 = OGMFFOMHGIA__FMBMNDIGLIG(pSVar8,false,(MethodInfo *)0x0);
            if (bVar3) {
              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar5,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_710,
                         (MethodInfo *)0x0);
              pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar6,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_711,
                         (MethodInfo *)0x0);
                    /* try { // try from 036017e4 to 0370192b has its CatchHandler @ 036017e4
                       catch() { ... } // from try @ 036017e4 with catch @ 036017e4
                       catch() { ... } // from try @ 03601a1c with catch @ 036017e4
                       catch() { ... } // from try @ 03601a60 with catch @ 036017e4
                       catch() { ... } // from try @ 03601aa4 with catch @ 036017e4
                       catch() { ... } // from try @ 03601ad4 with catch @ 036017e4 */
              pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
              pSVar8 = (SimpleJSON_JSONNode_o *)
                       (**(code **)(*plVar10 + 0x1a8))
                                 (plVar10,pSVar7,*(undefined8 *)(*plVar10 + 0x1b0));
              pSVar7 = OGMFFOMHGIA__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
              if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
              }
              ppSVar11 = &LHKALFIIJKB_TypeInfo->static_fields->KPLOGMKKPDL;
              *ppSVar11 = pSVar7;
              thunk_FUN_01c20e04(ppSVar11,pSVar7);
              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar5,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_712,
                         (MethodInfo *)0x0);
              pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar6,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_713,
                         (MethodInfo *)0x0);
              pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
              pSVar8 = (SimpleJSON_JSONNode_o *)
                       (**(code **)(*plVar10 + 0x1a8))
                                 (plVar10,pSVar7,*(undefined8 *)(*plVar10 + 0x1b0));
              iVar4 = OGMFFOMHGIA__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
              LHKALFIIJKB_TypeInfo->static_fields->MBBGNKAKHFO = iVar4;
              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar5,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_714,
                         (MethodInfo *)0x0);
              pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar6,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_715,
                         (MethodInfo *)0x0);
              pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
              pSVar8 = (SimpleJSON_JSONNode_o *)
                       (**(code **)(*plVar10 + 0x1a8))
                                 (plVar10,pSVar7,*(undefined8 *)(*plVar10 + 0x1b0));
                    /* try { // try from 0360192c to 03701933 has its CatchHandler @ 03601a88 */
              iVar12 = OGMFFOMHGIA__HNIGPBMJJOL(pSVar8,0,(MethodInfo *)0x0);
              LHKALFIIJKB_TypeInfo->static_fields->AKKEJBHGOHD = iVar12;
              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03601950 to 03701957 has its CatchHandler @ 03601a80 */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar5,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_716,
                         (MethodInfo *)0x0);
                    /* try { // try from 03601968 to 0370196b has its CatchHandler @ 03601a6c */
              pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03601974 to 0370198f has its CatchHandler @ 03601a74 */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar6,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_717,
                         (MethodInfo *)0x0);
              pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 036019a4 to 037019ab has its CatchHandler @ 03601a7c */
              pSVar8 = (SimpleJSON_JSONNode_o *)
                       (**(code **)(*plVar10 + 0x1a8))
                                 (plVar10,pSVar7,*(undefined8 *)(*plVar10 + 0x1b0));
                    /* try { // try from 036019b0 to 037019bb has its CatchHandler @ 03601a70 */
              pSVar7 = OGMFFOMHGIA__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
              ppSVar11 = &LHKALFIIJKB_TypeInfo->static_fields->GJHCNJHLMPO;
              *ppSVar11 = pSVar7;
              thunk_FUN_01c20e04(ppSVar11,pSVar7);
              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar5,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_718,
                         (MethodInfo *)0x0);
                    /* try { // try from 036019f8 to 03701a1b has its CatchHandler @ 03601a68 */
              pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar6,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_719,
                         (MethodInfo *)0x0);
                    /* try { // try from 03601a1c to 03701a53 has its CatchHandler @ 036017e4 */
              pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
              pSVar8 = (SimpleJSON_JSONNode_o *)
                       (**(code **)(*plVar10 + 0x1a8))
                                 (plVar10,pSVar7,*(undefined8 *)(*plVar10 + 0x1b0));
              pSVar7 = OGMFFOMHGIA__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
              ppSVar11 = &LHKALFIIJKB_TypeInfo->static_fields->ANAGLMHLADA;
              *ppSVar11 = pSVar7;
                    /* try { // try from 03601a54 to 03701a57 has its CatchHandler @ 03601a84 */
                    /* try { // try from 03601a58 to 03701a5b has its CatchHandler @ 03601a78 */
              thunk_FUN_01c20e04(ppSVar11,pSVar7);
                    /* try { // try from 03601a5c to 03701a5f has its CatchHandler @ 03601a64 */
                    /* try { // try from 03601a60 to 03701a9f has its CatchHandler @ 036017e4 */
              pOVar13 = OJJLPLHNGBP_BELGMANHGIJ__EOHMFJFFFIN((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03601a5c with catch @ 03601a64 */
              if (pOVar13 != (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0) {
                    /* catch() { ... } // from try @ 036019f8 with catch @ 03601a68 */
                    /* catch() { ... } // from try @ 03601968 with catch @ 03601a6c */
                    /* catch() { ... } // from try @ 036019b0 with catch @ 03601a70 */
                    /* catch() { ... } // from try @ 03601974 with catch @ 03601a74 */
                    /* catch() { ... } // from try @ 03601a58 with catch @ 03601a78 */
                    /* catch() { ... } // from try @ 036019a4 with catch @ 03601a7c */
                    /* catch() { ... } // from try @ 03601950 with catch @ 03601a80 */
                pOVar13 = (OJJLPLHNGBP_BELGMANHGIJ_o *)
                          PDBDELCMKJG_DGCHKODLPJG<object>__BHOHLODBJPE
                                    ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pOVar13,
                                     LHKALFIIJKB_TypeInfo->static_fields->ANAGLMHLADA,
                                     Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_BHOHLODBJPE__
                                    );
                    /* catch() { ... } // from try @ 03601a54 with catch @ 03601a84 */
                    /* catch() { ... } // from try @ 0360192c with catch @ 03601a88 */
                BLMFLPJJMPF = (System_Action_NIEPOJOIFNE__o *)
                              thunk_FUN_01bda818(System_Action<NIEPOJOIFNE>_TypeInfo);
                    /* try { // try from 03601aa0 to 03701aa3 has its CatchHandler @ 03601ac4 */
                    /* try { // try from 03601aa4 to 03701acb has its CatchHandler @ 036017e4 */
                System_Action<object>___ctor();
                if (pOVar13 != (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0) {
                    /* catch() { ... } // from try @ 03601aa0 with catch @ 03601ac4 */
                  pOVar13 = OJJLPLHNGBP_BELGMANHGIJ__JLDAALDPGIE
                                      (pOVar13,BLMFLPJJMPF,(MethodInfo *)0x0);
                    /* try { // try from 03601acc to 03701ad3 has its CatchHandler @ 03601ae8 */
                    /* try { // try from 03601ad4 to 03701adf has its CatchHandler @ 036017e4 */
                    /* try { // try from 03601ae0 to 03701ae7 has its CatchHandler @ 03601ae8 */
                  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03601acc with catch @ 03601ae8
                       catch() { ... } // from try @ 03601ae0 with catch @ 03601ae8 */
                    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
                  }
                  pIVar14 = IFAMAAGNCBJ__GPBMELHDADN<object>
                                      (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                  if (pIVar14 != (Il2CppObject *)0x0) {
                    iVar1 = *(int *)((long)&pIVar14[4].monitor + 4);
                    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
                    }
                    MINHPKOPAIE = System_TimeSpan__FromMilliseconds((double)iVar1,(MethodInfo *)0x0)
                    ;
                    if ((pOVar13 != (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0) &&
                       (pOVar13 = (OJJLPLHNGBP_BELGMANHGIJ_o *)
                                  PDBDELCMKJG_DGCHKODLPJG<object>__IDIJAFLLLJG
                                            ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pOVar13,
                                             MINHPKOPAIE,
                                             Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_IDIJAFLLLJG__
                                            ), pOVar13 != (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0)) {
                      pOVar15 = OJJLPLHNGBP_BELGMANHGIJ__HFMIGKLONNL(pOVar13,(MethodInfo *)0x0);
                      pMVar16 = IFAMAAGNCBJ__IAPGOOIGJLK((MethodInfo *)0x0);
                      if (pMVar16 != (MOBODMIBMKA_o *)0x0) {
                        pMVar19 = pMVar16->klass;
                        uVar2._0_1_ = (pMVar19->_2).rank;
                        uVar2._1_1_ = (pMVar19->_2).minimumAlignment;
                        uVar21 = (ulong)uVar2;
                        if (uVar21 != 0) {
                          piVar22 = &((pMVar19->_1).interfaceOffsets)->offset;
                          do {
                            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType
                                == (Il2CppClass *)MOBODMIBMKA_TypeInfo) {
                              pVVar17 = pMVar19->vtable + (*piVar22 + 1);
                              goto LAB_03601d80;
                            }
                            uVar21 = uVar21 - 1;
                            piVar22 = piVar22 + 4;
                          } while (uVar21 != 0);
                        }
                        pVVar17 = (VirtualInvokeData *)FUN_01b81914(pMVar16,MOBODMIBMKA_TypeInfo,1);
LAB_03601d80:
                    /* WARNING: Could not recover jumptable at 0x03601d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pVVar17->methodPtr)(pMVar16,pOVar15,pVVar17->method);
                        return;
                      }
                    }
                  }
                }
              }
            }
            else {
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
              pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar20 != (ACHLOMELAJE_o *)0x0) {
                if ((pAVar20->fields).CFAEDJGDNPO == false) {
                  pSVar7 = IMAPABEJECG__PLPICDIFHHG((MethodInfo *)0x0);
                  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar5,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_708,
                             (MethodInfo *)0x0);
                  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar6,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_709,
                             (MethodInfo *)0x0);
                  pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                  bVar3 = System_String__op_Equality(pSVar7,pSVar9,(MethodInfo *)0x0);
                  if (((bVar3) && (bVar3 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0), bVar3)) &&
                     (bVar3 = IMAPABEJECG__FCBJDMNEPGB((MethodInfo *)0x0), !bVar3)) {
                    if ((LHKALFIIJKB_<>c_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    BLMFLPJJMPF_00 = LHKALFIIJKB_<>c_TypeInfo->static_fields->__9__38_1;
                    if (BLMFLPJJMPF_00 == (System_Action_bool__o *)0x0) {
                      if ((LHKALFIIJKB_<>c_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      BLMFLPJJMPF_00 =
                           (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo)
                      ;
                      System_Action<bool>___ctor();
                      ppSVar18 = &LHKALFIIJKB_<>c_TypeInfo->static_fields->__9__38_1;
                      *ppSVar18 = BLMFLPJJMPF_00;
                      thunk_FUN_01c20e04(ppSVar18,BLMFLPJJMPF_00);
                    }
                    IMAPABEJECG__JGDKNDBAIHM(BLMFLPJJMPF_00,(MethodInfo *)0x0);
                    return;
                  }
                }
                method_00 = LHKALFIIJKB_TypeInfo;
                if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
                  method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
                }
                LHKALFIIJKB__EGAAHFPJDCC((MethodInfo *)method_00);
                return;
              }
            }
          }
          goto LAB_03601e3c;
        }
      }
      if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04568907 == '\0') {
        FUN_01bab630(&LHKALFIIJKB_TypeInfo);
        DAT_04568907 = '\x01';
      }
      if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = false;
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_720,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_721,(MethodInfo *)0x0
                );
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      method_01 = extraout_x1_01;
      goto LAB_03601560;
    }
  }
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_698,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_699,(MethodInfo *)0x0);
  pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
  method_01 = extraout_x1;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
    method_01 = extraout_x1_00;
  }
LAB_03601560:
  LHKALFIIJKB__LJGOKKLMLNN(pSVar7,method_01);
  return;
}


// ===== public static void KNNAJOALOGD(Action AFOFPOOEFHF)  [RVA 0x3501E40]
// LHKALFIIJKB$$KNNAJOALOGD @ RVA 0x3501E40

void LHKALFIIJKB__KNNAJOALOGD(System_Action_o *AFOFPOOEFHF,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  LHKALFIIJKB_StaticFields *pLVar1;
  
  if ((DAT_04568859 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568859 = 1;
    method = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
    method = extraout_x1_00;
  }
  pLVar1 = LHKALFIIJKB_TypeInfo->static_fields;
  if (pLVar1->FBAFKMAMBCC == false) {
    if (AFOFPOOEFHF != (System_Action_o *)0x0) {
      (*(code *)(AFOFPOOEFHF->fields).super.super.invoke_impl)
                ((AFOFPOOEFHF->fields).super.super.method_code,
                 (AFOFPOOEFHF->fields).super.super.method);
    }
  }
  else {
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
      pLVar1 = LHKALFIIJKB_TypeInfo->static_fields;
    }
    pLVar1->DEAACLMEHIB = AFOFPOOEFHF;
    thunk_FUN_01c20e04(&pLVar1->DEAACLMEHIB,AFOFPOOEFHF);
    LHKALFIIJKB__JPNONJJNIFE(true,method_00);
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LHKALFIIJKB_TypeInfo->static_fields->FBAFKMAMBCC = false;
  return;
}


// ===== private static void JJILNPKKHAF()  [RVA 0x34FEDCC]
// LHKALFIIJKB$$JJILNPKKHAF @ RVA 0x34FEDCC

void LHKALFIIJKB__JJILNPKKHAF(MethodInfo *method)

{
  LHKALFIIJKB_c *pLVar1;
  ACHLOMELAJE_o *__this;
  
  if ((DAT_0456885a & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456885a = 1;
  }
  pLVar1 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    pLVar1 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
  LHKALFIIJKB__PGLPDFKGFGG((MethodInfo *)pLVar1);
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
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
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
    if (__this == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ACHLOMELAJE__DAINDHGKAMF(__this,true,(MethodInfo *)0x0);
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568907 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568907 = '\x01';
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar1 = LHKALFIIJKB_TypeInfo;
  LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = false;
  LHKALFIIJKB__CLIHAFJDHKO((MethodInfo *)pLVar1);
  return;
}

