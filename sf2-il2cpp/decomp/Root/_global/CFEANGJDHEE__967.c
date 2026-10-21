// TypeDefIndex 967
// Namespace: 
// public class CFEANGJDHEE
// Fields:
//   private const int EIHAMHCELPF = 1000;
//   private const int PPPCJGGOKDN = 50;
//   private const string CDJPLELFIMH = "> ";
//   public static Color32 OCPJOMGAAKD; // 0x0
//   public static Color32 KFNIDCAJPEM; // 0x4
//   public static Color32 MEIPIGNEPHF; // 0x8
//   public static HashSet<LogType> MOHDINLNEPB; // 0x10
//   private static CFEANGJDHEE JMEMKAJIHOL; // 0x18
//   private ABMPAOFAAEI MMFAILFMCJC; // 0x10
//   private List<CFEANGJDHEE.JNHFDLGPFNI> FAMNALIFEHI; // 0x18
//   private HashSet<string> CPBGOKDCADG; // 0x20
//   private List<string> CDDNOMEDBKF; // 0x28
//   private Queue<DBLGMIJFILB> JBNEIFBJCJN; // 0x30

// ===== public static void FHEDJOBDEPF(JOCIOCLPIHI OHKEKFCKBED)  [RVA 0x30AEB84]
// CFEANGJDHEE$$FHEDJOBDEPF @ RVA 0x30AEB84

void CFEANGJDHEE__FHEDJOBDEPF(JOCIOCLPIHI_o *OHKEKFCKBED,MethodInfo *method)

{
  System_Net_HttpListenerRequest_o *pSVar1;
  System_Collections_Specialized_NameValueCollection_o *pSVar2;
  System_String_o *AIGOBLJEBCA;
  System_Net_HttpListenerResponse_o *IDCGLBOIAFJ;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  if ((DAT_045661c5 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&StringLiteral_21448/*"text/plain"*/);
    FUN_01bab630(&StringLiteral_17283/*"command"*/);
    DAT_045661c5 = 1;
  }
  if (((OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) &&
      (pSVar1 = JOCIOCLPIHI__AEIKKFELIDK(OHKEKFCKBED,(MethodInfo *)0x0),
      pSVar1 != (System_Net_HttpListenerRequest_o *)0x0)) &&
     (pSVar2 = (pSVar1->fields).query_string,
     pSVar2 != (System_Collections_Specialized_NameValueCollection_o *)0x0)) {
    auVar3 = (*(pSVar2->klass->vtable)._16_Get.methodPtr)
                       (pSVar2,StringLiteral_17283/*"command"*/,(pSVar2->klass->vtable)._16_Get.method);
    method_00 = auVar3._8_8_;
    AIGOBLJEBCA = (System_String_o *)0x0;
    if (auVar3._0_8_ != (System_String_o *)0x0) {
      if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1;
      }
      AIGOBLJEBCA = CFEANGJDHEE__FHEDJOBDEPF(auVar3._0_8_,method_00);
    }
    IDCGLBOIAFJ = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
    KEBDCIFDLPB__GPDJFFJALIB(IDCGLBOIAFJ,AIGOBLJEBCA,StringLiteral_21448/*"text/plain"*/,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<CFEANGJDHEE.JNHFDLGPFNI> JLNHJNEINEG()  [RVA 0x30AECC8]
// CFEANGJDHEE$$JLNHJNEINEG @ RVA 0x30AECC8

System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *
CFEANGJDHEE__JLNHJNEINEG(CFEANGJDHEE_o *__this,MethodInfo *method)

{
  return (__this->fields).FAMNALIFEHI;
}


// ===== public static void PFLDNJFAJPK(GHACLGGJIKK EFENHAFFBAG, string[] OPAEPDIIOEB)  [RVA 0x30AECD0]
// CFEANGJDHEE$$PFLDNJFAJPK @ RVA 0x30AECD0

void CFEANGJDHEE__PFLDNJFAJPK
               (GHACLGGJIKK_o *EFENHAFFBAG,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  DBLGMIJFILB_o item;
  CFEANGJDHEE_c *method_00;
  CFEANGJDHEE_o *pCVar1;
  System_Collections_Generic_Queue_DBLGMIJFILB__o *__this;
  GHACLGGJIKK_o *local_40;
  System_String_array *local_38;
  
  if ((DAT_045661c6 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<DBLGMIJFILB>_Enqueue__);
    DAT_045661c6 = 1;
  }
                    /* try { // try from 031aed20 to 032aed23 has its CatchHandler @ 031aee14 */
                    /* try { // try from 031aed24 to 032aed27 has its CatchHandler @ 031aee10 */
                    /* try { // try from 031aed28 to 032aee2f has its CatchHandler @ 031ae8b4 */
  local_38 = (System_String_array *)0x0;
  local_40 = EFENHAFFBAG;
  thunk_FUN_01c20e04(&local_40,EFENHAFFBAG);
  local_38 = OPAEPDIIOEB;
  thunk_FUN_01c20e04(&local_38,OPAEPDIIOEB);
  method_00 = CFEANGJDHEE_TypeInfo;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
  }
  pCVar1 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)method_00);
  if ((pCVar1 != (CFEANGJDHEE_o *)0x0) &&
     (__this = (pCVar1->fields).JBNEIFBJCJN,
     __this != (System_Collections_Generic_Queue_DBLGMIJFILB__o *)0x0)) {
    item.fields.OPAEPDIIOEB = local_38;
    item.fields.EFENHAFFBAG = local_40;
    System_Collections_Generic_Queue<DBLGMIJFILB>__Enqueue
              (__this,item,Method_System_Collections_Generic_Queue<DBLGMIJFILB>_Enqueue__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void LEFFJKAJLIO(JOCIOCLPIHI OHKEKFCKBED)  [RVA 0x30AEE38]
// CFEANGJDHEE$$LEFFJKAJLIO @ RVA 0x30AEE38

void CFEANGJDHEE__LEFFJKAJLIO(JOCIOCLPIHI_o *OHKEKFCKBED,MethodInfo *method)

{
  bool bVar1;
  int32_t DPJIDNBJIBG;
  System_Net_HttpListenerRequest_o *pSVar2;
  System_Collections_Specialized_NameValueCollection_o *pSVar3;
  System_String_o *value;
  System_Net_HttpListenerResponse_o *IDCGLBOIAFJ;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_String_o *AIGOBLJEBCA;
  
                    /* try { // try from 031aee48 to 032aeeb3 has its CatchHandler @ 031ae8b4 */
  if ((DAT_045661c7 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&StringLiteral_18971/*"index"*/);
    FUN_01bab630(&StringLiteral_21448/*"text/plain"*/);
    DAT_045661c7 = 1;
  }
  if (((OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) &&
      (pSVar2 = JOCIOCLPIHI__AEIKKFELIDK(OHKEKFCKBED,(MethodInfo *)0x0),
      pSVar2 != (System_Net_HttpListenerRequest_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).query_string,
     pSVar3 != (System_Collections_Specialized_NameValueCollection_o *)0x0)) {
                    /* try { // try from 031aeeb4 to 032aeec3 has its CatchHandler @ 031aeec4 */
    value = (System_String_o *)
            (*(pSVar3->klass->vtable)._16_Get.methodPtr)
                      (pSVar3,StringLiteral_18971/*"index"*/,(pSVar3->klass->vtable)._16_Get.method);
                    /* catch() { ... } // from try @ 031aee30 with catch @ 031aeec4
                       catch() { ... } // from try @ 031aeeb4 with catch @ 031aeec4 */
                    /* try { // try from 031aeec8 to 032aeecb has its CatchHandler @ 031aeed4 */
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
                    /* try { // try from 031aeecc to 032aeed7 has its CatchHandler @ 031ae8b4 */
    AIGOBLJEBCA = (System_String_o *)0x0;
    if (!bVar1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031aeec8 with catch @ 031aeed4
                        */
      DPJIDNBJIBG = PCOEHCPGBBG__JBGCINPPLAC(value,0,(MethodInfo *)0x0);
      method_00 = extraout_x1;
      if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo);
        method_00 = extraout_x1_00;
      }
      AIGOBLJEBCA = CFEANGJDHEE__CMACDPGGCHO(DPJIDNBJIBG,method_00);
    }
    IDCGLBOIAFJ = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
    KEBDCIFDLPB__GPDJFFJALIB(IDCGLBOIAFJ,AIGOBLJEBCA,StringLiteral_21448/*"text/plain"*/,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string OBPDBBODFGD(string EHNFGMGKCHO)  [RVA 0x30AF008]
// CFEANGJDHEE$$OBPDBBODFGD @ RVA 0x30AF008

System_String_o * CFEANGJDHEE__OBPDBBODFGD(System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  int32_t capacity;
  uint16_t uVar1;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  int index;
  
  if ((DAT_045661c8 & 1) == 0) {
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_790/*"&amp;"*/);
    FUN_01bab630(&StringLiteral_795/*"&gt;"*/);
    FUN_01bab630(&StringLiteral_799/*"&quot;"*/);
    FUN_01bab630(&StringLiteral_798/*"&lt;"*/);
    DAT_045661c8 = 1;
    method = extraout_x1;
  }
  if (EHNFGMGKCHO == (System_String_o *)0x0) {
    return (System_String_o *)0x0;
  }
  capacity = (EHNFGMGKCHO->fields)._stringLength;
  __this = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this,capacity,(MethodInfo *)0x0);
  if ((EHNFGMGKCHO->fields)._stringLength < 1) {
    if (__this == (System_Text_StringBuilder_o *)0x0) {
LAB_031af1b0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    index = 0;
    do {
      uVar1 = System_String__get_Chars(EHNFGMGKCHO,index,(MethodInfo *)0x0);
      if (uVar1 < 0x27) {
        pSVar2 = StringLiteral_799/*"&quot;"*/;
        if ((uVar1 != 0x22) && (pSVar2 = StringLiteral_790/*"&amp;"*/, uVar1 != 0x26)) goto LAB_031af118;
        if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_031af1b0;
LAB_031af154:
        System_Text_StringBuilder__Append(__this,pSVar2,(MethodInfo *)0x0);
      }
      else {
        pSVar2 = StringLiteral_795/*"&gt;"*/;
        if ((uVar1 == 0x3e) || (pSVar2 = StringLiteral_798/*"&lt;"*/, uVar1 == 0x3c)) {
          if (__this != (System_Text_StringBuilder_o *)0x0) goto LAB_031af154;
          goto LAB_031af1b0;
        }
LAB_031af118:
        uVar1 = System_String__get_Chars(EHNFGMGKCHO,index,(MethodInfo *)0x0);
        if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_031af1b0;
        System_Text_StringBuilder__Append(__this,uVar1,(MethodInfo *)0x0);
      }
      index = index + 1;
    } while (index < (EHNFGMGKCHO->fields)._stringLength);
  }
                    /* WARNING: Could not recover jumptable at 0x031af1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._3_ToString.methodPtr)
                     (__this,(__this->klass->vtable)._3_ToString.method);
  return pSVar2;
}


// ===== public static string FHEDJOBDEPF(string MAGODFJLJGG)  [RVA 0x30AEC5C]
// CFEANGJDHEE$$FHEDJOBDEPF @ RVA 0x30AEC5C

System_String_o * CFEANGJDHEE__FHEDJOBDEPF(System_String_o *MAGODFJLJGG,MethodInfo *method)

{
  CFEANGJDHEE_c *method_00;
  CFEANGJDHEE_o *pCVar1;
  ABMPAOFAAEI_o *__this;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045661c9 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_045661c9 = 1;
    method = extraout_x1;
  }
  method_00 = CFEANGJDHEE_TypeInfo;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
  }
  pCVar1 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)method_00);
  if ((pCVar1 != (CFEANGJDHEE_o *)0x0) &&
     (__this = (pCVar1->fields).MMFAILFMCJC, __this != (ABMPAOFAAEI_o *)0x0)) {
    pSVar2 = ABMPAOFAAEI__FHEDJOBDEPF(__this,MAGODFJLJGG,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static Color32 MLILINDNABO(LogType BKFOLMBMFNP)  [RVA 0x30AF1B4]
// CFEANGJDHEE$$MLILINDNABO @ RVA 0x30AF1B4

UnityEngine_Color32_o CFEANGJDHEE__MLILINDNABO(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  UnityEngine_Color32_o UVar5;
  MethodInfo *extraout_x1;
  CFEANGJDHEE_StaticFields *pCVar6;
  
  if ((DAT_045661ca & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_045661ca = 1;
    method = extraout_x1;
  }
  if (((uint)BKFOLMBMFNP < 2) || (BKFOLMBMFNP == 4)) {
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
    }
    pCVar6 = (CFEANGJDHEE_StaticFields *)&CFEANGJDHEE_TypeInfo->static_fields->KFNIDCAJPEM;
  }
  else if (BKFOLMBMFNP == 2) {
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
    }
    pCVar6 = (CFEANGJDHEE_StaticFields *)
             &(CFEANGJDHEE_TypeInfo->static_fields->OCPJOMGAAKD).fields.r;
  }
  else {
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
    }
    pCVar6 = CFEANGJDHEE_TypeInfo->static_fields;
  }
  uVar1 = *(uint8_t *)&(pCVar6->OCPJOMGAAKD).fields.rgba;
  uVar2 = *(uint8_t *)((long)&(pCVar6->OCPJOMGAAKD).fields.rgba + 1);
  uVar3 = *(uint8_t *)((long)&(pCVar6->OCPJOMGAAKD).fields.rgba + 2);
  uVar4 = *(uint8_t *)((long)&(pCVar6->OCPJOMGAAKD).fields.rgba + 3);
  UVar5.fields.rgba._3_1_ = uVar4;
  UVar5.fields.rgba._2_1_ = uVar3;
  UVar5.fields.rgba._1_1_ = uVar2;
  UVar5.fields.rgba._0_1_ = uVar1;
  UVar5.fields.r = 0;
  UVar5.fields.g = 0;
  UVar5.fields.b = 0;
  UVar5.fields.a = 0;
  return (UnityEngine_Color32_o)UVar5.fields;
}


// ===== public static string HEGONINDJJG()  [RVA 0x30AF268]
// CFEANGJDHEE$$HEGONINDJJG @ RVA 0x30AF268

System_String_o * CFEANGJDHEE__HEGONINDJJG(MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *EHNFGMGKCHO;
  bool bVar2;
  System_Text_StringBuilder_o *__this;
  CFEANGJDHEE_c *method_00;
  CFEANGJDHEE_o *pCVar3;
  System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *__this_00;
  System_String_o *pSVar4;
  System_String_array *values;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  undefined8 uStack_98;
  System_String_o *local_90;
  undefined8 uStack_88;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  undefined8 uStack_68;
  
  if ((DAT_045661cb & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 031af2e0 to 032af48f has its CatchHandler @ 031af2e0
                       catch() { ... } // from try @ 031af2e0 with catch @ 031af2e0
                       catch() { ... } // from try @ 031af4ec with catch @ 031af2e0
                       catch() { ... } // from try @ 031af66c with catch @ 031af2e0
                       catch() { ... } // from try @ 031af6f0 with catch @ 031af2e0
                       catch() { ... } // from try @ 031af744 with catch @ 031af2e0
                       catch() { ... } // from try @ 031af998 with catch @ 031af2e0 */
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_2293/*"<div style='color:#"*/);
    FUN_01bab630(&StringLiteral_2140/*";'>"*/);
    FUN_01bab630(&StringLiteral_15034/*"X2"*/);
    FUN_01bab630(&StringLiteral_2183/*"</div>"*/);
    DAT_045661cb = 1;
  }
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  uStack_68 = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_90 = (System_String_o *)0x0;
  uStack_88 = 0;
  __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  method_00 = CFEANGJDHEE_TypeInfo;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
  }
  pCVar3 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)method_00);
  if ((pCVar3 != (CFEANGJDHEE_o *)0x0) &&
     (__this_00 = (pCVar3->fields).FAMNALIFEHI,
     __this_00 != (System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *)0x0)) {
    System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>__GetEnumerator
              (&local_b0,__this_00,
               Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_GetEnumerator__);
    bVar1 = (byte)&local_90;
    local_80.fields._index = local_b0.fields._index;
    local_80.fields._version = local_b0.fields._version;
    local_80.fields._list = local_b0.fields._list;
    uStack_68 = uStack_98;
    local_80.fields._current = local_b0.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>_MoveNext__
                             ), EHNFGMGKCHO = local_80.fields._current, bVar2) {
      uStack_88 = uStack_68;
      local_90 = (System_String_o *)local_80.fields._current;
      method_01 = extraout_x1;
      if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_01 = extraout_x1_00;
      }
      pSVar4 = CFEANGJDHEE__OBPDBBODFGD((System_String_o *)EHNFGMGKCHO,method_01);
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = StringLiteral_2293/*"<div style='color:#"*/;
      thunk_FUN_01c20e04();
      pSVar5 = System_Byte__ToString(bVar1 | 8,StringLiteral_15034/*"X2"*/,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[1] = pSVar5;
      thunk_FUN_01c20e04();
      pSVar5 = System_Byte__ToString(bVar1 | 9,StringLiteral_15034/*"X2"*/,(MethodInfo *)0x0);
      if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 031af490 to 032af49f has its CatchHandler @ 031af710 */
      values->m_Items[2] = pSVar5;
      thunk_FUN_01c20e04();
      pSVar5 = System_Byte__ToString(bVar1 | 10,StringLiteral_15034/*"X2"*/,(MethodInfo *)0x0);
                    /* try { // try from 031af4ac to 032af4b3 has its CatchHandler @ 031af70c */
      if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[3] = pSVar5;
      thunk_FUN_01c20e04();
      if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 031af4d0 to 032af4d7 has its CatchHandler @ 031af704 */
      values->m_Items[4] = StringLiteral_2140/*";'>"*/;
      thunk_FUN_01c20e04();
                    /* try { // try from 031af4e4 to 032af4eb has its CatchHandler @ 031af714 */
      pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
                    /* try { // try from 031af4ec to 032af5af has its CatchHandler @ 031af2e0 */
      if (__this == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Text_StringBuilder__Append(__this,pSVar5,(MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this,pSVar4,(MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this,StringLiteral_2183/*"</div>"*/,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>__Dispose
              (&local_80,
               Method_System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>_Dispose__)
    ;
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      pSVar4 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void CEOCJPLKFNF(string EFENHAFFBAG, string IEHEDNIMCBI, GHACLGGJIKK.CDAKEOFFIAJ BLMFLPJJMPF, bool GHGHANBKBJF = True, bool HEEKFKOMCED = True)  [RVA 0x30AF648]
// CFEANGJDHEE$$CEOCJPLKFNF @ RVA 0x30AF648

void CFEANGJDHEE__CEOCJPLKFNF
               (System_String_o *EFENHAFFBAG,System_String_o *IEHEDNIMCBI,
               GHACLGGJIKK_CDAKEOFFIAJ_o *BLMFLPJJMPF,bool GHGHANBKBJF,bool HEEKFKOMCED,
               MethodInfo *method)

{
  bool bVar1;
  CFEANGJDHEE_c *pCVar2;
  CFEANGJDHEE_o *pCVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Object_array *args;
  long lVar5;
  GHACLGGJIKK_o *__this;
  MethodInfo *method_00;
  ABMPAOFAAEI_o *__this_00;
  undefined8 uVar6;
  
                    /* try { // try from 031af66c to 032af6eb has its CatchHandler @ 031af2e0 */
  if ((DAT_045661cc & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GHACLGGJIKK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15444/*"[Console] RegisterCommand: command String cannot be empty!"*/);
    FUN_01bab630(&StringLiteral_15443/*"[Console] RegisterCommand: already registered command '{0}'!"*/);
    DAT_045661cc = 1;
  }
                    /* try { // try from 031af6ec to 032af6ef has its CatchHandler @ 031af700 */
                    /* try { // try from 031af6f0 to 032af72b has its CatchHandler @ 031af2e0 */
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(EFENHAFFBAG,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031af5c0 with catch @ 031af6f4 */
  if (bVar1) {
                    /* catch() { ... } // from try @ 031af5b0 with catch @ 031af6f8 */
                    /* catch() { ... } // from try @ 031af5dc with catch @ 031af6fc */
                    /* catch() { ... } // from try @ 031af6ec with catch @ 031af700 */
                    /* catch() { ... } // from try @ 031af4d0 with catch @ 031af704 */
                    /* catch() { ... } // from try @ 031af63c with catch @ 031af708 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031af4ac with catch @ 031af70c */
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 031af490 with catch @ 031af710 */
                    /* catch() { ... } // from try @ 031af4e4 with catch @ 031af714 */
    UnityEngine_Debug__LogError(StringLiteral_15444/*"[Console] RegisterCommand: command String cannot be empty!"*/,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 031af72c to 032af743 has its CatchHandler @ 031af990 */
  pCVar2 = CFEANGJDHEE_TypeInfo;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    pCVar2 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
  }
                    /* try { // try from 031af744 to 032af97b has its CatchHandler @ 031af2e0 */
  pCVar3 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar2);
  if ((pCVar3 != (CFEANGJDHEE_o *)0x0) &&
     (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pCVar3->fields).CPBGOKDCADG,
     pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (pSVar4,(Il2CppObject *)EFENHAFFBAG,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    if (bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        if ((EFENHAFFBAG != (System_String_o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(EFENHAFFBAG,(((args->obj).klass)->_1).element_class),
           lVar5 == 0)) {
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)EFENHAFFBAG;
          thunk_FUN_01c20e04(args->m_Items,EFENHAFFBAG);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_15443/*"[Console] RegisterCommand: already registered command '{0}'!"*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      pCVar2 = CFEANGJDHEE_TypeInfo;
      if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
        pCVar2 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
      }
      pCVar3 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar2);
      if ((pCVar3 != (CFEANGJDHEE_o *)0x0) &&
         (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pCVar3->fields).CPBGOKDCADG,
         pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet<object>__Add
                  (pSVar4,(Il2CppObject *)EFENHAFFBAG,
                   Method_System_Collections_Generic_HashSet<string>_Add__);
        __this = (GHACLGGJIKK_o *)thunk_FUN_01bda818(GHACLGGJIKK_TypeInfo);
        GHACLGGJIKK___ctor(__this,EFENHAFFBAG,IEHEDNIMCBI,BLMFLPJJMPF,GHGHANBKBJF,HEEKFKOMCED,
                           (MethodInfo *)0x0);
        pCVar3 = CFEANGJDHEE__AIHNLLGNBLC(method_00);
        if ((pCVar3 != (CFEANGJDHEE_o *)0x0) &&
           (__this_00 = (pCVar3->fields).MMFAILFMCJC, __this_00 != (ABMPAOFAAEI_o *)0x0)) {
          ABMPAOFAAEI__LFENGGKOJDO(__this_00,__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void NKLGCNHLBAF(string DIHAKADKIKM)  [RVA 0x30AF894]
// CFEANGJDHEE$$NKLGCNHLBAF @ RVA 0x30AF894

void CFEANGJDHEE__NKLGCNHLBAF(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  MethodInfo *method_00;
  CFEANGJDHEE_o *pCVar1;
  MethodInfo *method_01;
  ABMPAOFAAEI_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *in_x2;
  
  if ((DAT_045661cd & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_045661cd = 1;
    method = extraout_x1;
  }
  if (DIHAKADKIKM != (System_String_o *)0x0) {
    if ((DIHAKADKIKM->fields)._stringLength < 1) {
      return;
    }
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_00;
    }
    CFEANGJDHEE__LMDMNPBBNML(DIHAKADKIKM,method);
    pCVar1 = CFEANGJDHEE__AIHNLLGNBLC(method_00);
    if (pCVar1 != (CFEANGJDHEE_o *)0x0) {
      CFEANGJDHEE__LCHLJMJNHJI(pCVar1,DIHAKADKIKM,in_x2);
      pCVar1 = CFEANGJDHEE__AIHNLLGNBLC(method_01);
      if ((pCVar1 != (CFEANGJDHEE_o *)0x0) &&
         (__this = (pCVar1->fields).MMFAILFMCJC, __this != (ABMPAOFAAEI_o *)0x0)) {
        ABMPAOFAAEI__NKLGCNHLBAF(__this,DIHAKADKIKM,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BJKJIIILNBB()  [RVA 0x30AFA64]
// CFEANGJDHEE$$BJKJIIILNBB @ RVA 0x30AFA64

void CFEANGJDHEE__BJKJIIILNBB(CFEANGJDHEE_o *__this,MethodInfo *method)

{
  GHACLGGJIKK_BGNKGENMMMO_o *pGVar1;
  uint uVar2;
  Il2CppType *pIVar3;
  GHACLGGJIKK_BGNKGENMMMO_c *pGVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  System_Type_o *pSVar9;
  undefined8 uVar10;
  long lVar11;
  GHACLGGJIKK_CDAKEOFFIAJ_o *__this_00;
  CFEANGJDHEE_HELDHKNCJKO_o *__this_01;
  GHACLGGJIKK_BGNKGENMMMO_o *pGVar12;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  GHACLGGJIKK_CDAKEOFFIAJ_o **ppGVar15;
  ABMPAOFAAEI_o *__this_02;
  MethodInfo *extraout_x1;
  uint uVar16;
  uint uVar17;
  Il2CppObject *arg0;
  GHACLGGJIKK_o *CELOLGNMKCG;
  long lVar18;
  
  if ((DAT_045661ce & 1) == 0) {
    FUN_01bab630(&GHACLGGJIKK_BGNKGENMMMO_var);
    FUN_01bab630(&GHACLGGJIKK_BGNKGENMMMO_TypeInfo);
    FUN_01bab630(&GHACLGGJIKK_CDAKEOFFIAJ_var);
    FUN_01bab630(&GHACLGGJIKK_CDAKEOFFIAJ_TypeInfo);
    FUN_01bab630(&Method_CFEANGJDHEE_BJKJIIILNBB__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GHACLGGJIKK___TypeInfo);
    FUN_01bab630(&GHACLGGJIKK_var);
    FUN_01bab630(&Method_CFEANGJDHEE_HELDHKNCJKO_OHKHOIPKGFG__);
    FUN_01bab630(&CFEANGJDHEE_HELDHKNCJKO_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_9018/*"Method {0}.{1} needs a valid command name."*/);
    FUN_01bab630(&StringLiteral_9019/*"Method {0}.{1} takes the wrong arguments for a console command."*/);
    DAT_045661ce = 1;
    method = extraout_x1;
  }
  plVar6 = (long *)FUN_01bab61c(Method_CFEANGJDHEE_BJKJIIILNBB__,method);
  if ((plVar6 != (long *)0x0) &&
     (lVar7 = (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250)), lVar7 != 0))
  {
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar2) {
      uVar16 = 0;
      do {
        if (uVar2 <= uVar16) {
LAB_031afee4:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        arg0 = *(Il2CppObject **)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
        if ((arg0 == (Il2CppObject *)0x0) ||
           (lVar8 = (*arg0->klass->vtable[0x65].methodPtr)
                              (arg0,0x18,arg0->klass->vtable[0x65].method), lVar8 == 0))
        goto LAB_031afee0;
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar2) {
          uVar17 = 0;
          do {
            pIVar3 = GHACLGGJIKK_var;
            if (uVar2 <= uVar17) goto LAB_031afee4;
            plVar6 = *(long **)(lVar8 + (long)(int)uVar17 * 8 + 0x20);
            if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar9 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
            if (plVar6 == (long *)0x0) goto LAB_031afee0;
            uVar10 = (**(code **)(*plVar6 + 0x218))
                               (plVar6,pSVar9,1,*(undefined8 *)(*plVar6 + 0x220));
            lVar11 = thunk_FUN_01bda71c(uVar10,GHACLGGJIKK___TypeInfo);
            pIVar3 = GHACLGGJIKK_CDAKEOFFIAJ_var;
            if (lVar11 == 0) goto LAB_031afee0;
            if (*(long *)(lVar11 + 0x18) != 0) {
              if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0);
              __this_00 = (GHACLGGJIKK_CDAKEOFFIAJ_o *)System_Delegate__CreateDelegate();
              if ((__this_00 == (GHACLGGJIKK_CDAKEOFFIAJ_o *)0x0) ||
                 (__this_00->klass != GHACLGGJIKK_CDAKEOFFIAJ_TypeInfo)) {
                __this_01 = (CFEANGJDHEE_HELDHKNCJKO_o *)
                            thunk_FUN_01bda818(CFEANGJDHEE_HELDHKNCJKO_TypeInfo);
                CFEANGJDHEE_HELDHKNCJKO___ctor(__this_01,(MethodInfo *)0x0);
                pIVar3 = GHACLGGJIKK_BGNKGENMMMO_var;
                if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar3,(MethodInfo *)0x0)
                ;
                pGVar12 = (GHACLGGJIKK_BGNKGENMMMO_o *)System_Delegate__CreateDelegate();
                pGVar4 = GHACLGGJIKK_BGNKGENMMMO_TypeInfo;
                if (__this_01 == (CFEANGJDHEE_HELDHKNCJKO_o *)0x0) goto LAB_031afee0;
                if (pGVar12 == (GHACLGGJIKK_BGNKGENMMMO_o *)0x0) {
                  pGVar12 = (GHACLGGJIKK_BGNKGENMMMO_o *)0x0;
                  (__this_01->fields).cbs = (GHACLGGJIKK_BGNKGENMMMO_o *)0x0;
                }
                else {
                  pGVar1 = pGVar12;
                  if (pGVar12->klass != GHACLGGJIKK_BGNKGENMMMO_TypeInfo) {
                    pGVar1 = (GHACLGGJIKK_BGNKGENMMMO_o *)0x0;
                  }
                  (__this_01->fields).cbs = pGVar1;
                  if (pGVar12->klass != pGVar4) {
                    pGVar12 = (GHACLGGJIKK_BGNKGENMMMO_o *)0x0;
                  }
                }
                thunk_FUN_01c20e04(&__this_01->fields,pGVar12);
                if ((__this_01->fields).cbs != (GHACLGGJIKK_BGNKGENMMMO_o *)0x0) {
                  __this_00 = (GHACLGGJIKK_CDAKEOFFIAJ_o *)
                              thunk_FUN_01bda818(GHACLGGJIKK_CDAKEOFFIAJ_TypeInfo);
                  GHACLGGJIKK_CDAKEOFFIAJ___ctor
                            (__this_00,(Il2CppObject *)__this_01,
                             Method_CFEANGJDHEE_HELDHKNCJKO_OHKHOIPKGFG__,(MethodInfo *)0x0);
                  goto LAB_031afd7c;
                }
              }
              else {
LAB_031afd7c:
                if (__this_00 != (GHACLGGJIKK_CDAKEOFFIAJ_o *)0x0) {
                  uVar10 = *(undefined8 *)(lVar11 + 0x18);
                  if (0 < (int)uVar10) {
                    lVar18 = 0;
                    do {
                      if ((uint)uVar10 <= (uint)lVar18) goto LAB_031afee4;
                      CELOLGNMKCG = *(GHACLGGJIKK_o **)(lVar11 + 0x20 + lVar18 * 8);
                      if (CELOLGNMKCG == (GHACLGGJIKK_o *)0x0) goto LAB_031afee0;
                      bVar5 = System_String__IsNullOrEmpty
                                        ((CELOLGNMKCG->fields).CENHINIIPGD,(MethodInfo *)0x0);
                      if (bVar5) {
                        pIVar13 = (Il2CppObject *)
                                  (**(code **)(*plVar6 + 0x1b8))
                                            (plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                        pSVar14 = System_String__Format
                                            (StringLiteral_9018/*"Method {0}.{1} needs a valid command name."*/,arg0,pIVar13,(MethodInfo *)0x0);
                        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                        }
                        UnityEngine_Debug__LogError((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
                      }
                      else {
                        ppGVar15 = &(CELOLGNMKCG->fields).NAPDMLAGBJC;
                        *ppGVar15 = __this_00;
                        thunk_FUN_01c20e04(ppGVar15,__this_00);
                        __this_02 = (__this->fields).MMFAILFMCJC;
                        if (__this_02 == (ABMPAOFAAEI_o *)0x0) goto LAB_031afee0;
                        ABMPAOFAAEI__LFENGGKOJDO(__this_02,CELOLGNMKCG,(MethodInfo *)0x0);
                      }
                      uVar10 = *(undefined8 *)(lVar11 + 0x18);
                      lVar18 = lVar18 + 1;
                    } while ((int)lVar18 < (int)uVar10);
                  }
                  goto LAB_031afe98;
                }
              }
              pIVar13 = (Il2CppObject *)
                        (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
              pSVar14 = System_String__Format(StringLiteral_9019/*"Method {0}.{1} takes the wrong arguments for a console command."*/,arg0,pIVar13,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
            }
LAB_031afe98:
            uVar2 = *(uint *)(lVar8 + 0x18);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)uVar2);
        }
        uVar2 = *(uint *)(lVar7 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)uVar2);
    }
    return;
  }
LAB_031afee0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string CMACDPGGCHO(int DPJIDNBJIBG)  [RVA 0x30AEF3C]
// CFEANGJDHEE$$CMACDPGGCHO @ RVA 0x30AEF3C

System_String_o * CFEANGJDHEE__CMACDPGGCHO(int32_t DPJIDNBJIBG,MethodInfo *method)

{
  CFEANGJDHEE_c *pCVar1;
  CFEANGJDHEE_o *pCVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_string__o *pSVar4;
  
  if ((DAT_045661cf & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_045661cf = 1;
    method = extraout_x1;
  }
  if (DPJIDNBJIBG < 0) {
    return (System_String_o *)0x0;
  }
  pCVar1 = CFEANGJDHEE_TypeInfo;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    pCVar1 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
  }
  pCVar2 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar1);
  if ((pCVar2 != (CFEANGJDHEE_o *)0x0) &&
     (pSVar4 = (pCVar2->fields).CDDNOMEDBKF,
     pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
    if ((pSVar4->fields)._size <= DPJIDNBJIBG) {
      return (System_String_o *)0x0;
    }
    pCVar1 = CFEANGJDHEE_TypeInfo;
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      pCVar1 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
    }
    pCVar2 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar1);
    if ((pCVar2 != (CFEANGJDHEE_o *)0x0) &&
       (pSVar4 = (pCVar2->fields).CDDNOMEDBKF,
       pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
      pSVar3 = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,DPJIDNBJIBG,
                          Method_System_Collections_Generic_List<string>_get_Item__);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void LMDMNPBBNML(string CELOLGNMKCG)  [RVA 0x30AF934]
// CFEANGJDHEE$$LMDMNPBBNML @ RVA 0x30AF934

void CFEANGJDHEE__LMDMNPBBNML(System_String_o *CELOLGNMKCG,MethodInfo *method)

{
  System_String_o *DIHAKADKIKM;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_045661d0 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&StringLiteral_2476/*"> "*/);
                    /* try { // try from 031af97c to 032af98b has its CatchHandler @ 031af98c */
    DAT_045661d0 = 1;
  }
                    /* catch() { ... } // from try @ 031af97c with catch @ 031af98c */
  DIHAKADKIKM = System_String__Concat(StringLiteral_2476/*"> "*/,CELOLGNMKCG,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031af72c with catch @ 031af990 */
                    /* try { // try from 031af994 to 032af997 has its CatchHandler @ 031af9a0 */
                    /* try { // try from 031af998 to 032af9a3 has its CatchHandler @ 031af2e0 */
  method_00 = extraout_x1;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031af994 with catch @ 031af9a0 */
    thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo);
    method_00 = extraout_x1_00;
  }
  CFEANGJDHEE__DHAAGKPHJLA(DIHAKADKIKM,method_00);
  return;
}


// ===== public static void DHAAGKPHJLA(string DIHAKADKIKM)  [RVA 0x30AFEE8]
// CFEANGJDHEE$$DHAAGKPHJLA @ RVA 0x30AFEE8

void CFEANGJDHEE__DHAAGKPHJLA(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  UnityEngine_Color32_o EFJKPCADGJH;
  MethodInfo *in_x2;
  
  if ((DAT_045661d1 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_045661d1 = 1;
    method = extraout_x1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
  }
  EFJKPCADGJH.fields.r = 0;
  EFJKPCADGJH.fields.g = 0;
  EFJKPCADGJH.fields.b = 0;
  EFJKPCADGJH.fields.a = 0;
  EFJKPCADGJH.fields.rgba = (CFEANGJDHEE_TypeInfo->static_fields->OCPJOMGAAKD).fields.rgba;
  CFEANGJDHEE__DHAAGKPHJLA(DIHAKADKIKM,EFJKPCADGJH,in_x2);
  return;
}


// ===== public static void LLCONNGHGKD()  [RVA 0x30B00B4]
// CFEANGJDHEE$$LLCONNGHGKD @ RVA 0x30B00B4

void CFEANGJDHEE__LLCONNGHGKD(MethodInfo *method)

{
  CFEANGJDHEE_c *pCVar1;
  CFEANGJDHEE_o *pCVar2;
  System_Collections_Generic_Queue_DBLGMIJFILB__o *pSVar3;
  DBLGMIJFILB_o DVar4;
  
  if ((DAT_045661d2 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<DBLGMIJFILB>_Dequeue__);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<DBLGMIJFILB>_get_Count__);
    DAT_045661d2 = 1;
  }
  while( true ) {
    pCVar1 = CFEANGJDHEE_TypeInfo;
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      pCVar1 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
    }
    pCVar2 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar1);
    if ((pCVar2 == (CFEANGJDHEE_o *)0x0) ||
       (pSVar3 = (pCVar2->fields).JBNEIFBJCJN,
       pSVar3 == (System_Collections_Generic_Queue_DBLGMIJFILB__o *)0x0)) break;
    if ((pSVar3->fields)._size < 1) {
      return;
    }
    pCVar1 = CFEANGJDHEE_TypeInfo;
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      pCVar1 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
    }
    pCVar2 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar1);
    if ((pCVar2 == (CFEANGJDHEE_o *)0x0) ||
       (pSVar3 = (pCVar2->fields).JBNEIFBJCJN,
       pSVar3 == (System_Collections_Generic_Queue_DBLGMIJFILB__o *)0x0)) break;
    DVar4 = System_Collections_Generic_Queue<DBLGMIJFILB>__Dequeue
                      (pSVar3,Method_System_Collections_Generic_Queue<DBLGMIJFILB>_Dequeue__);
    if (DVar4.fields.EFENHAFFBAG == (GHACLGGJIKK_o *)0x0) break;
    GHACLGGJIKK__NKLGCNHLBAF(DVar4.fields.EFENHAFFBAG,DVar4.fields.OPAEPDIIOEB,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void .ctor()  [RVA 0x30B0178]
// CFEANGJDHEE$$.ctor @ RVA 0x30B0178

void CFEANGJDHEE___ctor(CFEANGJDHEE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_string__o **ppSVar1;
  ABMPAOFAAEI_o *__this_01;
  System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *__this_02;
  System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o **ppSVar2;
  System_Collections_Generic_List_string__o *__this_03;
  System_Collections_Generic_List_string__o **ppSVar3;
  System_Collections_Generic_Queue_DBLGMIJFILB__o *__this_04;
  System_Collections_Generic_Queue_DBLGMIJFILB__o **ppSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045661d3 & 1) == 0) {
    FUN_01bab630(&ABMPAOFAAEI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<DBLGMIJFILB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Queue<DBLGMIJFILB>_TypeInfo);
    DAT_045661d3 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo,method);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_00,Method_System_Collections_Generic_HashSet<string>__ctor__);
  ppSVar1 = &(__this->fields).CPBGOKDCADG;
  *ppSVar1 = (System_Collections_Generic_HashSet_string__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_01 = (ABMPAOFAAEI_o *)thunk_FUN_01bda818(ABMPAOFAAEI_TypeInfo);
  ABMPAOFAAEI___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).MMFAILFMCJC = __this_01;
  thunk_FUN_01c20e04(&__this->fields,__this_01);
  __this_02 = (System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_TypeInfo);
  System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>___ctor
            (__this_02,Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>__ctor__);
  ppSVar2 = &(__this->fields).FAMNALIFEHI;
  *ppSVar2 = __this_02;
  thunk_FUN_01c20e04(ppSVar2,__this_02);
  __this_03 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar3 = &(__this->fields).CDDNOMEDBKF;
  *ppSVar3 = __this_03;
  thunk_FUN_01c20e04(ppSVar3,__this_03);
  __this_04 = (System_Collections_Generic_Queue_DBLGMIJFILB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Queue<DBLGMIJFILB>_TypeInfo);
  System_Collections_Generic_Queue<DBLGMIJFILB>___ctor
            (__this_04,Method_System_Collections_Generic_Queue<DBLGMIJFILB>__ctor__);
  ppSVar4 = &(__this->fields).JBNEIFBJCJN;
  *ppSVar4 = __this_04;
  thunk_FUN_01c20e04(ppSVar4,__this_04);
  CFEANGJDHEE__BJKJIIILNBB(__this,method_00);
  return;
}


// ===== public static CFEANGJDHEE AIHNLLGNBLC()  [RVA 0x30AED90]
// CFEANGJDHEE$$AIHNLLGNBLC @ RVA 0x30AED90

CFEANGJDHEE_o * CFEANGJDHEE__AIHNLLGNBLC(MethodInfo *method)

{
  System_Collections_Generic_HashSet_LogType__o *__this;
  System_Collections_Generic_HashSet_LogType__o **ppSVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_045661d4 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_045661d4 = 1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (CFEANGJDHEE_TypeInfo->static_fields->MOHDINLNEPB ==
      (System_Collections_Generic_HashSet_LogType__o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    __this = auVar2._0_8_;
    CFEANGJDHEE___ctor((CFEANGJDHEE_o *)__this,auVar2._8_8_);
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar1 = &CFEANGJDHEE_TypeInfo->static_fields->MOHDINLNEPB;
    *ppSVar1 = __this;
    thunk_FUN_01c20e04(ppSVar1,__this);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031aed24 with catch @ 031aee10
                        */
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031aed20 with catch @ 031aee14
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031aea68 with catch @ 031aee18
                        */
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031aee30 to 032aee47 has its CatchHandler @ 031aeec4 */
  return (CFEANGJDHEE_o *)CFEANGJDHEE_TypeInfo->static_fields->MOHDINLNEPB;
}


// ===== private void LCHLJMJNHJI(string EFENHAFFBAG)  [RVA 0x30AF9BC]
// CFEANGJDHEE$$LCHLJMJNHJI @ RVA 0x30AF9BC

void CFEANGJDHEE__LCHLJMJNHJI(CFEANGJDHEE_o *__this,System_String_o *EFENHAFFBAG,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  
  if ((DAT_045661d5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Insert__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    DAT_045661d5 = 1;
  }
  pSVar2 = (__this->fields).CDDNOMEDBKF;
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__Insert
              ((System_Collections_Generic_List_object__o *)pSVar2,0,(Il2CppObject *)EFENHAFFBAG,
               Method_System_Collections_Generic_List<string>_Insert__);
    pSVar2 = (__this->fields).CDDNOMEDBKF;
    if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      if (iVar1 < 0x33) {
        return;
      }
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar2,iVar1 + -1,
                 Method_System_Collections_Generic_List<string>_RemoveAt__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x30B033C]
// CFEANGJDHEE$$.cctor @ RVA 0x30B033C

void CFEANGJDHEE___cctor(MethodInfo *method)

{
  UnityEngine_Color32_Fields __this;
  UnityEngine_Color32_o *pUVar1;
  CFEANGJDHEE_StaticFields *pCVar2;
  
  if ((DAT_045661d6 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<LogType>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<LogType>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<LogType>_TypeInfo);
    DAT_045661d6 = 1;
  }
  (CFEANGJDHEE_TypeInfo->static_fields->OCPJOMGAAKD).fields.rgba = -0xf0f10;
  pCVar2 = CFEANGJDHEE_TypeInfo->static_fields;
  (pCVar2->OCPJOMGAAKD).fields.r = 0xfe;
  (pCVar2->OCPJOMGAAKD).fields.g = 0xef;
  (pCVar2->OCPJOMGAAKD).fields.b = 0xb3;
  (pCVar2->OCPJOMGAAKD).fields.a = 0xff;
  (CFEANGJDHEE_TypeInfo->static_fields->KFNIDCAJPEM).fields.rgba = -0x454501;
  __this = (UnityEngine_Color32_Fields)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<LogType>_TypeInfo);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this,
             Method_System_Collections_Generic_HashSet<LogType>__ctor__);
  if (__this != (UnityEngine_Color32_Fields)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this,3,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this,2,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this,4,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this,1,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this,0,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
    pUVar1 = &CFEANGJDHEE_TypeInfo->static_fields->MEIPIGNEPHF;
    pUVar1->fields = __this;
    thunk_FUN_01c20e04(pUVar1,__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void HEGONINDJJG(JOCIOCLPIHI OHKEKFCKBED)  [RVA 0x30B0474]
// CFEANGJDHEE$$HEGONINDJJG @ RVA 0x30B0474

void CFEANGJDHEE__HEGONINDJJG(JOCIOCLPIHI_o *OHKEKFCKBED,MethodInfo *method)

{
  System_Net_HttpListenerResponse_o *IDCGLBOIAFJ;
  System_Net_HttpListenerResponse_o *method_00;
  System_String_o *AIGOBLJEBCA;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = OHKEKFCKBED;
  if ((DAT_045661d7 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    auVar1 = FUN_01bab630(&StringLiteral_21448/*"text/plain"*/);
    DAT_045661d7 = 1;
  }
  if (OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) {
    IDCGLBOIAFJ = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
    method_00 = IDCGLBOIAFJ;
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (System_Net_HttpListenerResponse_o *)thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo);
    }
    AIGOBLJEBCA = CFEANGJDHEE__HEGONINDJJG((MethodInfo *)method_00);
    KEBDCIFDLPB__GPDJFFJALIB(IDCGLBOIAFJ,AIGOBLJEBCA,StringLiteral_21448/*"text/plain"*/,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
}


// ===== public static void DHAAGKPHJLA(string DIHAKADKIKM, Color32 EFJKPCADGJH)  [RVA 0x30AFF48]
// CFEANGJDHEE$$DHAAGKPHJLA @ RVA 0x30AFF48

void CFEANGJDHEE__DHAAGKPHJLA
               (System_String_o *DIHAKADKIKM,UnityEngine_Color32_o EFJKPCADGJH,MethodInfo *method)

{
  uint uVar1;
  CFEANGJDHEE_JNHFDLGPFNI_o item;
  long lVar2;
  CFEANGJDHEE_c *pCVar3;
  CFEANGJDHEE_o *pCVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_x0;
  MethodInfo *in_x4;
  CFEANGJDHEE_JNHFDLGPFNI_array *pCVar5;
  System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *pSVar6;
  CFEANGJDHEE_JNHFDLGPFNI_o __this;
  System_String_c *local_40;
  UnityEngine_Color32_Fields UStack_38;
  
  if ((DAT_045661d8 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_get_Count__);
    DAT_045661d8 = 1;
  }
  pCVar3 = CFEANGJDHEE_TypeInfo;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    pCVar3 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
  }
  pCVar4 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar3);
  if (pCVar4 != (CFEANGJDHEE_o *)0x0) {
    pSVar6 = (pCVar4->fields).FAMNALIFEHI;
    local_40 = (System_String_c *)0x0;
    UStack_38.rgba = 0;
    UStack_38.r = 0;
    UStack_38.g = 0;
    UStack_38.b = 0;
    UStack_38.a = 0;
    __this.fields.EFJKPCADGJH.fields = (UnityEngine_Color32_Fields)DIHAKADKIKM;
    __this.fields.NONPLOOOOAG = (System_String_o *)&local_40;
    CFEANGJDHEE_JNHFDLGPFNI___ctor
              (__this,(System_String_o *)((ulong)EFJKPCADGJH.fields & 0xffffffff),
               (UnityEngine_Color32_o)0x0,in_x4);
    lVar2 = Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_Add__;
    if (pSVar6 != (System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *)0x0) {
      item.fields.EFJKPCADGJH.fields = UStack_38;
      item.fields.NONPLOOOOAG = (System_String_o *)local_40;
      pCVar5 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pCVar5 != (CFEANGJDHEE_JNHFDLGPFNI_array *)0x0) {
        uVar1 = (pSVar6->fields)._size;
        if (uVar1 < (uint)pCVar5->max_length) {
          (pSVar6->fields)._size = uVar1 + 1;
          pCVar5->m_Items[(int)uVar1].fields.NONPLOOOOAG = (System_String_o *)local_40;
          pCVar5->m_Items[(int)uVar1].fields.EFJKPCADGJH.fields = UStack_38;
          method_00 = (MethodInfo *)thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,0);
        }
        else {
          System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>__AddWithResize
                    (pSVar6,item,
                     *(MethodInfo_2770130 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          method_00 = extraout_x0;
        }
        pCVar4 = CFEANGJDHEE__AIHNLLGNBLC(method_00);
        if ((pCVar4 != (CFEANGJDHEE_o *)0x0) &&
           (pSVar6 = (pCVar4->fields).FAMNALIFEHI,
           pSVar6 != (System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *)0x0)) {
          if (1000 < (pSVar6->fields)._size) {
            pCVar3 = CFEANGJDHEE_TypeInfo;
            if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
              pCVar3 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
            }
            pCVar4 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar3);
            if ((pCVar4 == (CFEANGJDHEE_o *)0x0) ||
               (pSVar6 = (pCVar4->fields).FAMNALIFEHI,
               pSVar6 == (System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *)0x0))
            goto LAB_031b00b0;
            System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>__RemoveAt
                      (pSVar6,0,
                       Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_RemoveAt__);
          }
          return;
        }
      }
    }
  }
LAB_031b00b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void OLCAINJPFNH(string NIPCCKMNCGF, string GNLGLGHFLDD, LogType ACCIHBHMFPN)  [RVA 0x30B0508]
// CFEANGJDHEE$$OLCAINJPFNH @ RVA 0x30B0508

void CFEANGJDHEE__OLCAINJPFNH
               (System_String_o *NIPCCKMNCGF,System_String_o *GNLGLGHFLDD,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Color32_Fields __this;
  UnityEngine_Color32_o UVar2;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar7;
  System_Enum_o local_60;
  int32_t local_50;
  float local_48;
  int32_t local_44;
  
  if ((DAT_045661d9 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
                    /* try { // try from 031b0548 to 032b0607 has its CatchHandler @ 031b0548
                       catch() { ... } // from try @ 031b0548 with catch @ 031b0548
                       catch() { ... } // from try @ 031b080c with catch @ 031b0548
                       catch() { ... } // from try @ 031b0864 with catch @ 031b0548
                       catch() { ... } // from try @ 031b0900 with catch @ 031b0548 */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<LogType>_Contains__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&UnityEngine_LogType_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_11628/*"STACK: "*/);
    FUN_01bab630(&StringLiteral_129/*"\n{0:D4}|{1:F} {2}, MSG: {3}"*/);
    DAT_045661d9 = 1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (CFEANGJDHEE_TypeInfo->static_fields->MEIPIGNEPHF).fields;
  if (__this != (UnityEngine_Color32_Fields)0x0) {
    bVar1 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this,ACCIHBHMFPN,
                       Method_System_Collections_Generic_HashSet<LogType>_Contains__);
    if (!bVar1) {
      return;
    }
    pMVar7 = extraout_x1;
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar7 = extraout_x1_00;
    }
    UVar2 = CFEANGJDHEE__MLILINDNABO(ACCIHBHMFPN,pMVar7);
                    /* try { // try from 031b0608 to 032b062f has its CatchHandler @ 031b082c */
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
    local_44 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
    if (args != (System_Object_array *)0x0) {
                    /* try { // try from 031b0648 to 032b066b has its CatchHandler @ 031b0820 */
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
LAB_031b07fc:
                    /* try { // try from 031b07fc to 032b07ff has its CatchHandler @ 031b0834 */
        uVar6 = thunk_FUN_01be8e1c();
                    /* try { // try from 031b0800 to 032b0803 has its CatchHandler @ 031b0818 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031b0804 to 032b0807 has its CatchHandler @ 031b0810 */
        FUN_01bab798(uVar6,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar3;
                    /* try { // try from 031b066c to 032b0673 has its CatchHandler @ 031b0814 */
        thunk_FUN_01c20e04(args->m_Items,pIVar3);
        local_48 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
                    /* try { // try from 031b067c to 032b0687 has its CatchHandler @ 031b080c */
        pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_48);
                    /* try { // try from 031b0698 to 032b06c3 has its CatchHandler @ 031b081c */
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0))
        goto LAB_031b07fc;
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar3;
          thunk_FUN_01c20e04(args->m_Items + 1,pIVar3);
                    /* try { // try from 031b06d0 to 032b0757 has its CatchHandler @ 031b0830 */
          local_60.klass = (System_Enum_c *)UnityEngine_LogType_TypeInfo;
          local_60.monitor = (void *)0xffffffffffffffff;
          local_50 = ACCIHBHMFPN;
          pSVar5 = System_Enum__ToString(&local_60,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_o *)0x0) goto LAB_031b07f4;
          pSVar5 = System_String__ToUpper(pSVar5,(MethodInfo *)0x0);
          if ((pSVar5 != (System_String_o *)0x0) &&
             (lVar4 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class), lVar4 == 0
             )) goto LAB_031b07fc;
          if (2 < (uint)args->max_length) {
            args->m_Items[2] = (Il2CppObject *)pSVar5;
            thunk_FUN_01c20e04(args->m_Items + 2,pSVar5);
            if ((NIPCCKMNCGF != (System_String_o *)0x0) &&
               (lVar4 = thunk_FUN_01bda71c(NIPCCKMNCGF,(((args->obj).klass)->_1).element_class),
               lVar4 == 0)) goto LAB_031b07fc;
            if (3 < (uint)args->max_length) {
              args->m_Items[3] = (Il2CppObject *)NIPCCKMNCGF;
                    /* try { // try from 031b0760 to 032b0767 has its CatchHandler @ 031b0824 */
              thunk_FUN_01c20e04(args->m_Items + 3,NIPCCKMNCGF);
              pMVar7 = (MethodInfo *)0x0;
              pSVar5 = System_String__Format(StringLiteral_129/*"\n{0:D4}|{1:F} {2}, MSG: {3}"*/,args,(MethodInfo *)0x0);
              CFEANGJDHEE__DHAAGKPHJLA
                        (pSVar5,(UnityEngine_Color32_o)(UVar2.fields & 0xffffffffU),pMVar7);
              if (ACCIHBHMFPN == 4) {
                if (GNLGLGHFLDD == (System_String_o *)0x0) goto LAB_031b07f4;
                if (0x28 < (GNLGLGHFLDD->fields)._stringLength) {
                    /* try { // try from 031b07a8 to 032b07df has its CatchHandler @ 031b0834 */
                  pMVar7 = (MethodInfo *)0x0;
                  pSVar5 = System_String__Concat(StringLiteral_11628/*"STACK: "*/,GNLGLGHFLDD,(MethodInfo *)0x0);
                  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo);
                  }
                  CFEANGJDHEE__DHAAGKPHJLA
                            (pSVar5,(UnityEngine_Color32_o)(UVar2.fields & 0xffffffffU),pMVar7);
                }
              }
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031b07f8 to 032b07fb has its CatchHandler @ 031b0828 */
      FUN_01bab8d0();
    }
  }
LAB_031b07f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void NKLGCNHLBAF(JOCIOCLPIHI OHKEKFCKBED)  [RVA 0x30B0808]
// CFEANGJDHEE$$NKLGCNHLBAF @ RVA 0x30B0808

void CFEANGJDHEE__NKLGCNHLBAF(JOCIOCLPIHI_o *OHKEKFCKBED,MethodInfo *method)

{
  bool bVar1;
  System_Net_HttpListenerRequest_o *pSVar2;
  System_Collections_Specialized_NameValueCollection_o *pSVar3;
  System_String_o *pSVar4;
  System_Byte_array *AIGOBLJEBCA;
  System_Net_HttpListenerResponse_o *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
                    /* try { // try from 031b0808 to 032b080b has its CatchHandler @ 031b0830 */
                    /* catch() { ... } // from try @ 031b067c with catch @ 031b080c
                       try { // try from 031b080c to 032b084b has its CatchHandler @ 031b0548 */
                    /* catch() { ... } // from try @ 031b0804 with catch @ 031b0810 */
                    /* catch() { ... } // from try @ 031b066c with catch @ 031b0814 */
                    /* catch() { ... } // from try @ 031b0800 with catch @ 031b0818 */
                    /* catch() { ... } // from try @ 031b0698 with catch @ 031b081c */
  if ((DAT_045661da & 1) == 0) {
                    /* catch() { ... } // from try @ 031b0648 with catch @ 031b0820 */
                    /* catch() { ... } // from try @ 031b0760 with catch @ 031b0824 */
                    /* catch() { ... } // from try @ 031b07f8 with catch @ 031b0828 */
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
                    /* catch() { ... } // from try @ 031b0608 with catch @ 031b082c */
                    /* catch() { ... } // from try @ 031b06d0 with catch @ 031b0830
                       catch() { ... } // from try @ 031b0808 with catch @ 031b0830 */
                    /* catch() { ... } // from try @ 031b07a8 with catch @ 031b0834
                       catch() { ... } // from try @ 031b07fc with catch @ 031b0834 */
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&System_Uri_TypeInfo);
                    /* try { // try from 031b084c to 032b0863 has its CatchHandler @ 031b08f8 */
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17283/*"command"*/);
    DAT_045661da = 1;
  }
                    /* try { // try from 031b0864 to 032b08e7 has its CatchHandler @ 031b0548 */
  if (((OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) &&
      (pSVar2 = JOCIOCLPIHI__AEIKKFELIDK(OHKEKFCKBED,(MethodInfo *)0x0),
      pSVar2 != (System_Net_HttpListenerRequest_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).query_string,
     pSVar3 != (System_Collections_Specialized_NameValueCollection_o *)0x0)) {
    pSVar4 = (System_String_o *)
             (*(pSVar3->klass->vtable)._16_Get.methodPtr)
                       (pSVar3,StringLiteral_17283/*"command"*/,(pSVar3->klass->vtable)._16_Get.method);
    if ((System_Uri_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Uri_TypeInfo);
    }
    pSVar4 = System_Uri__UnescapeDataString(pSVar4,(MethodInfo *)0x0);
    if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Convert_TypeInfo);
    }
                    /* try { // try from 031b08e8 to 032b08f7 has its CatchHandler @ 031b08f8 */
    AIGOBLJEBCA = System_Convert__FromBase64String(pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b084c with catch @ 031b08f8
                       catch() { ... } // from try @ 031b08e8 with catch @ 031b08f8 */
    pSVar4 = DBIJLEGANCE__CJBLFEPGPID(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 031b08fc to 032b08ff has its CatchHandler @ 031b0908 */
                    /* try { // try from 031b0900 to 032b090b has its CatchHandler @ 031b0548 */
    bVar1 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b08fc with catch @ 031b0908 */
    if (!bVar1) {
      method_00 = extraout_x1;
      if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      CFEANGJDHEE__NKLGCNHLBAF(pSVar4,method_00);
    }
    pSVar5 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
    if (pSVar5 != (System_Net_HttpListenerResponse_o *)0x0) {
      System_Net_HttpListenerResponse__set_StatusCode(pSVar5,200,(MethodInfo *)0x0);
      pSVar5 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
      if (pSVar5 != (System_Net_HttpListenerResponse_o *)0x0) {
        (pSVar5->fields).status_description = StringLiteral_9679/*"OK"*/;
        thunk_FUN_01c20e04();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

