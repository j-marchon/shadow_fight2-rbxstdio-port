// TypeDefIndex 3017
// Namespace: 
// public abstract class KDPDBGNOFEN
// Fields:
//   public const bool AKGPHABIPEM = False;
//   public const bool HKKGMGBFOLB = False;
//   public DCHAJIMIFHP FNHOHLGNHGN; // 0x10
//   public const int KDCHBNMOEJH = 10000;
//   public const int FDNKAEAPEBI = 5000;
//   public const char OBAEILNGALN = '\x5f';
//   public readonly string GNHILLNIKJJ; // 0x18
//   public int CEOPOBGHGPD; // 0x20
//   public int PGADIBFBJCJ; // 0x24
//   public string LHBDPNOCKHG; // 0x28
//   public Func<string, float> MOACHOFFNCO; // 0x30
//   private SmartFox EBJCMEOKKOK; // 0x38
//   public const bool GLMAKOKEPCK = False;
//   private bool <KKNAFGJEFJG>k__BackingField; // 0x40
//   private bool <MGGBEPKMPCF>k__BackingField; // 0x41
//   protected FLBBKMOHIOG KPDFPANJBJB; // 0x48
//   private readonly ACAEKBNCODE PGDGCNKLKMN; // 0x50
//   protected MOEEMFAHGPL<PEDENGEGDNI> DDBFMMHDCBK; // 0x58
//   protected MOEEMFAHGPL<string> LECCKLBDCEN; // 0x60
//   private Action<int> NDNBEBJGGPF; // 0x68
//   private IEnumerator OEKNOHANEKC; // 0x70
//   private string[] DHBJBCIMDBB; // 0x78

// ===== public string ONKNEALNBBB()  [RVA 0x34AD0E4]
// KDPDBGNOFEN$$ONKNEALNBBB @ RVA 0x34AD0E4

System_String_o * KDPDBGNOFEN__ONKNEALNBBB(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  bool bVar1;
  Sfs2X_SmartFox_o *pSVar2;
  System_String_o **ppSVar3;
  
  if ((DAT_0456853b & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456853b = 1;
  }
  pSVar2 = (__this->fields).EBJCMEOKKOK;
  if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
    bVar1 = Sfs2X_SmartFox__get_IsConnected(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).EBJCMEOKKOK;
      if (pSVar2 == (Sfs2X_SmartFox_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppSVar3 = &(pSVar2->fields).sessionToken;
      goto LAB_035ad13c;
    }
  }
  ppSVar3 = (System_String_o **)&StringLiteral_1/*""*/;
LAB_035ad13c:
  return *ppSVar3;
}


// ===== private void ILHNLFNMPCN(BaseEvent JPLEIGKMFDA)  [RVA 0x34AD164]
// KDPDBGNOFEN$$ILHNLFNMPCN @ RVA 0x34AD164

void KDPDBGNOFEN__ILHNLFNMPCN
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  char *pcVar6;
  Sfs2X_SmartFox_o *__this_00;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_01;
  int32_t ICLHKEAILDM;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Hashtable_c *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_Hashtable_o *pSVar10;
  
  method_00 = (MethodInfo *)JPLEIGKMFDA;
  if ((DAT_0456853c & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&System_Collections_IDictionary_TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&StringLiteral_21305/*"success"*/);
    FUN_01bab630(&StringLiteral_11555/*"SFSConnection::OnConnection"*/);
    DAT_0456853c = 1;
    method_00 = extraout_x1;
  }
  KDPDBGNOFEN__IMLDFGHHMND(__this,method_00);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11555/*"SFSConnection::OnConnection"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    uVar2 = StringLiteral_21305/*"success"*/;
    if ((JPLEIGKMFDA != (Sfs2X_Core_BaseEvent_o *)0x0) &&
       (pSVar10 = (JPLEIGKMFDA->fields).arguments, pSVar10 != (System_Collections_Hashtable_o *)0x0)
       ) {
      pSVar7 = pSVar10->klass;
      uVar1._0_1_ = (pSVar7->_2).rank;
      uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IDictionary_TypeInfo) {
            pVVar4 = &(pSVar7->vtable)._0_Equals + *piVar9;
            goto LAB_035ad288;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar10,System_Collections_IDictionary_TypeInfo,0);
LAB_035ad288:
      plVar5 = (long *)(*pVVar4->methodPtr)(pSVar10,uVar2,pVVar4->method);
      if (plVar5 != (long *)0x0) {
        if (*(Il2CppClass **)(*plVar5 + 0x40) != (bool_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        pcVar6 = (char *)thunk_FUN_01bda96c();
        if (((*pcVar6 == '\0') ||
            (__this_00 = (__this->fields).EBJCMEOKKOK, __this_00 == (Sfs2X_SmartFox_o *)0x0)) ||
           (bVar3 = Sfs2X_SmartFox__get_IsConnected(__this_00,(MethodInfo *)0x0), !bVar3)) {
          __this_01 = (__this->fields).DDBFMMHDCBK;
          (__this->fields)._MGGBEPKMPCF_k__BackingField = false;
          if (__this_01 == (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) goto LAB_035ad324;
          ICLHKEAILDM = 1;
        }
        else {
          __this_01 = (__this->fields).DDBFMMHDCBK;
          (__this->fields)._MGGBEPKMPCF_k__BackingField = true;
          if (__this_01 == (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) goto LAB_035ad324;
          ICLHKEAILDM = 0;
        }
        JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                  ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_01,ICLHKEAILDM,(Il2CppObject *)0x0,
                   Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
        return;
      }
    }
  }
LAB_035ad324:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JOBOOAECDCO(Action<int> CJNHFNHJHPE)  [RVA 0x34AD408]
// KDPDBGNOFEN$$JOBOOAECDCO @ RVA 0x34AD408

void KDPDBGNOFEN__JOBOOAECDCO
               (KDPDBGNOFEN_o *__this,System_Action_int__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_int__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_int__o *pSVar5;
  System_Action_int__o **ppSVar6;
  System_Action_int__o *source;
  
  if ((DAT_0456853d & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    DAT_0456853d = 1;
  }
  ppSVar6 = &(__this->fields).NDNBEBJGGPF;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<int>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<int>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_int__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void CKBMGIOBIFN()  [RVA 0x34AD4B8]
// KDPDBGNOFEN$$CKBMGIOBIFN @ RVA 0x34AD4B8

void KDPDBGNOFEN__CKBMGIOBIFN(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  bool bVar1;
  Sfs2X_SmartFox_o *pSVar2;
  Sfs2X_Core_EventListenerDelegate_o *pSVar3;
  ACAEKBNCODE_o *__this_00;
  Sfs2X_SmartFox_o **ppSVar4;
  System_String_o *pSVar5;
  
  if ((DAT_0456853e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Sfs2X_Core_EventListenerDelegate_TypeInfo);
    FUN_01bab630(&Method_KDPDBGNOFEN_AKEKGJAFBOC__);
    FUN_01bab630(&Method_KDPDBGNOFEN_BLFHCIKFJNG__);
    FUN_01bab630(&Method_KDPDBGNOFEN_CHBPEDDCIHG__);
    FUN_01bab630(&Method_KDPDBGNOFEN_DAHOADHHAHM__);
    FUN_01bab630(&Method_KDPDBGNOFEN_DFINCBCDDKJ__);
    FUN_01bab630(&Method_KDPDBGNOFEN_GKICNJPIOPE__);
    FUN_01bab630(&Method_KDPDBGNOFEN_IEBAGEPBOBB__);
    FUN_01bab630(&Method_KDPDBGNOFEN_ILHNLFNMPCN__);
    FUN_01bab630(&Method_KDPDBGNOFEN_LKKAIFOFGMN__);
    FUN_01bab630(&Method_KDPDBGNOFEN_NEMMLKGAOFE__);
    FUN_01bab630(&Method_KDPDBGNOFEN_OLJODDGBIJD__);
    FUN_01bab630(&Sfs2X_Core_SFSEvent_TypeInfo);
    FUN_01bab630(&Sfs2X_SmartFox_TypeInfo);
    FUN_01bab630(&StringLiteral_13673/*"This can be called only after we disconnected form outside"*/);
    DAT_0456853e = 1;
  }
  ppSVar4 = &(__this->fields).EBJCMEOKKOK;
  (__this->fields)._KKNAFGJEFJG_k__BackingField = false;
  if ((*ppSVar4 != (Sfs2X_SmartFox_o *)0x0) &&
     (bVar1 = Sfs2X_SmartFox__get_IsConnected(*ppSVar4,(MethodInfo *)0x0), bVar1)) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_13673/*"This can be called only after we disconnected form outside"*/,(MethodInfo *)0x0);
    return;
  }
  pSVar2 = (Sfs2X_SmartFox_o *)thunk_FUN_01bda818(Sfs2X_SmartFox_TypeInfo);
  Sfs2X_SmartFox___ctor(pSVar2,false,(MethodInfo *)0x0);
  if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
    (pSVar2->fields).threadSafeMode = true;
    *ppSVar4 = pSVar2;
    thunk_FUN_01c20e04(ppSVar4,pSVar2);
    pSVar2 = *ppSVar4;
    if ((Sfs2X_Core_SFSEvent_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = Sfs2X_Core_SFSEvent_TypeInfo->static_fields->CONNECTION;
    pSVar3 = (Sfs2X_Core_EventListenerDelegate_o *)
             thunk_FUN_01bda818(Sfs2X_Core_EventListenerDelegate_TypeInfo);
    Sfs2X_Core_EventListenerDelegate___ctor();
    if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
      Sfs2X_SmartFox__AddEventListener(pSVar2,pSVar5,pSVar3,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).EBJCMEOKKOK;
      pSVar5 = Sfs2X_Core_SFSEvent_TypeInfo->static_fields->CONNECTION_LOST;
      pSVar3 = (Sfs2X_Core_EventListenerDelegate_o *)
               thunk_FUN_01bda818(Sfs2X_Core_EventListenerDelegate_TypeInfo);
      Sfs2X_Core_EventListenerDelegate___ctor();
      if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
                    /* try { // try from 035ad6e8 to 036ad897 has its CatchHandler @ 035ad6e8
                       catch() { ... } // from try @ 035ad6e8 with catch @ 035ad6e8
                       catch() { ... } // from try @ 035ad924 with catch @ 035ad6e8
                       catch() { ... } // from try @ 035ad978 with catch @ 035ad6e8
                       catch() { ... } // from try @ 035ad9b0 with catch @ 035ad6e8
                       catch() { ... } // from try @ 035ad9dc with catch @ 035ad6e8
                       catch() { ... } // from try @ 035ada18 with catch @ 035ad6e8
                       catch() { ... } // from try @ 035ada30 with catch @ 035ad6e8
                       catch() { ... } // from try @ 035ada64 with catch @ 035ad6e8 */
        Sfs2X_SmartFox__AddEventListener(pSVar2,pSVar5,pSVar3,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).EBJCMEOKKOK;
        pSVar5 = Sfs2X_Core_SFSEvent_TypeInfo->static_fields->LOGIN;
        pSVar3 = (Sfs2X_Core_EventListenerDelegate_o *)
                 thunk_FUN_01bda818(Sfs2X_Core_EventListenerDelegate_TypeInfo);
        Sfs2X_Core_EventListenerDelegate___ctor();
        if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
          Sfs2X_SmartFox__AddEventListener(pSVar2,pSVar5,pSVar3,(MethodInfo *)0x0);
          pSVar2 = (__this->fields).EBJCMEOKKOK;
          pSVar5 = Sfs2X_Core_SFSEvent_TypeInfo->static_fields->LOGIN_ERROR;
          pSVar3 = (Sfs2X_Core_EventListenerDelegate_o *)
                   thunk_FUN_01bda818(Sfs2X_Core_EventListenerDelegate_TypeInfo);
          Sfs2X_Core_EventListenerDelegate___ctor();
          if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
            Sfs2X_SmartFox__AddEventListener(pSVar2,pSVar5,pSVar3,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).EBJCMEOKKOK;
            pSVar5 = Sfs2X_Core_SFSEvent_TypeInfo->static_fields->ROOM_JOIN;
            pSVar3 = (Sfs2X_Core_EventListenerDelegate_o *)
                     thunk_FUN_01bda818(Sfs2X_Core_EventListenerDelegate_TypeInfo);
            Sfs2X_Core_EventListenerDelegate___ctor();
            if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
              Sfs2X_SmartFox__AddEventListener(pSVar2,pSVar5,pSVar3,(MethodInfo *)0x0);
              pSVar2 = (__this->fields).EBJCMEOKKOK;
              pSVar5 = Sfs2X_Core_SFSEvent_TypeInfo->static_fields->ROOM_JOIN_ERROR;
              pSVar3 = (Sfs2X_Core_EventListenerDelegate_o *)
                       thunk_FUN_01bda818(Sfs2X_Core_EventListenerDelegate_TypeInfo);
              Sfs2X_Core_EventListenerDelegate___ctor();
              if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
                Sfs2X_SmartFox__AddEventListener(pSVar2,pSVar5,pSVar3,(MethodInfo *)0x0);
                pSVar2 = (__this->fields).EBJCMEOKKOK;
                pSVar5 = Sfs2X_Core_SFSEvent_TypeInfo->static_fields->EXTENSION_RESPONSE;
                pSVar3 = (Sfs2X_Core_EventListenerDelegate_o *)
                         thunk_FUN_01bda818(Sfs2X_Core_EventListenerDelegate_TypeInfo);
                Sfs2X_Core_EventListenerDelegate___ctor();
                if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
                  Sfs2X_SmartFox__AddEventListener(pSVar2,pSVar5,pSVar3,(MethodInfo *)0x0);
                  pSVar2 = (__this->fields).EBJCMEOKKOK;
                  pSVar5 = Sfs2X_Core_SFSEvent_TypeInfo->static_fields->LOGOUT;
                  pSVar3 = (Sfs2X_Core_EventListenerDelegate_o *)
                           thunk_FUN_01bda818(Sfs2X_Core_EventListenerDelegate_TypeInfo);
                    /* try { // try from 035ad898 to 036ad89f has its CatchHandler @ 035ad9bc */
                  Sfs2X_Core_EventListenerDelegate___ctor();
                  if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
                    Sfs2X_SmartFox__AddEventListener(pSVar2,pSVar5,pSVar3,(MethodInfo *)0x0);
                    pSVar2 = (__this->fields).EBJCMEOKKOK;
                    pSVar5 = Sfs2X_Core_SFSEvent_TypeInfo->static_fields->SOCKET_ERROR;
                    pSVar3 = (Sfs2X_Core_EventListenerDelegate_o *)
                             thunk_FUN_01bda818(Sfs2X_Core_EventListenerDelegate_TypeInfo);
                    Sfs2X_Core_EventListenerDelegate___ctor();
                    if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
                    /* try { // try from 035ad8f8 to 036ad8ff has its CatchHandler @ 035ad9b4 */
                      Sfs2X_SmartFox__AddEventListener(pSVar2,pSVar5,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 035ad90c to 036ad923 has its CatchHandler @ 035ada18 */
                      pSVar2 = (__this->fields).EBJCMEOKKOK;
                      pSVar3 = (Sfs2X_Core_EventListenerDelegate_o *)
                               thunk_FUN_01bda818(Sfs2X_Core_EventListenerDelegate_TypeInfo);
                    /* try { // try from 035ad924 to 036ad95b has its CatchHandler @ 035ad6e8 */
                      Sfs2X_Core_EventListenerDelegate___ctor();
                      if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
                        Sfs2X_SmartFox__AddLogListener(pSVar2,400,pSVar3,(MethodInfo *)0x0);
                        pSVar2 = (__this->fields).EBJCMEOKKOK;
                        pSVar3 = (Sfs2X_Core_EventListenerDelegate_o *)
                                 thunk_FUN_01bda818(Sfs2X_Core_EventListenerDelegate_TypeInfo);
                    /* try { // try from 035ad95c to 036ad963 has its CatchHandler @ 035ad9c0 */
                        Sfs2X_Core_EventListenerDelegate___ctor();
                        if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
                    /* try { // try from 035ad96c to 036ad977 has its CatchHandler @ 035ad9b8 */
                    /* try { // try from 035ad978 to 036ad9a7 has its CatchHandler @ 035ad6e8 */
                          Sfs2X_SmartFox__AddLogListener(pSVar2,300,pSVar3,(MethodInfo *)0x0);
                          __this_00 = (__this->fields).PGDGCNKLKMN;
                          if (__this_00 != (ACAEKBNCODE_o *)0x0) {
                            ACAEKBNCODE__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
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


// ===== protected static void LMFIKNOJNPJ()  [RVA 0x34AD9A4]
// KDPDBGNOFEN$$LMFIKNOJNPJ @ RVA 0x34AD9A4

void KDPDBGNOFEN__LMFIKNOJNPJ(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  Il2CppObject *pIVar6;
  long lVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *pSVar9;
  System_String_o *NONPLOOOOAG;
  PDGHODJHCGP_o *__this;
  PDGHODJHCGP_HIBNPLAHCBH_o *__this_00;
  long lVar10;
  Il2CppClass *pIVar11;
  ulong uVar12;
  int32_t *piVar13;
  undefined8 uVar14;
  
                    /* try { // try from 035ad9a8 to 036ad9af has its CatchHandler @ 035ada1c */
                    /* try { // try from 035ad9b0 to 036ad9d7 has its CatchHandler @ 035ad6e8 */
                    /* catch() { ... } // from try @ 035ad8f8 with catch @ 035ad9b4 */
                    /* catch() { ... } // from try @ 035ad96c with catch @ 035ad9b8 */
                    /* catch() { ... } // from try @ 035ad898 with catch @ 035ad9bc */
                    /* catch() { ... } // from try @ 035ad95c with catch @ 035ad9c0 */
  if ((DAT_0456853f & 1) == 0) {
                    /* try { // try from 035ad9d8 to 036ad9db has its CatchHandler @ 035ad9fc */
                    /* try { // try from 035ad9dc to 036ada03 has its CatchHandler @ 035ad6e8 */
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* catch() { ... } // from try @ 035ad9d8 with catch @ 035ad9fc */
    FUN_01bab630(&PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
                    /* try { // try from 035ada04 to 036ada17 has its CatchHandler @ 035ada78 */
    FUN_01bab630(&Method_KDPDBGNOFEN_EGFBLPFMABC__);
                    /* catch() { ... } // from try @ 035ad90c with catch @ 035ada18
                       try { // try from 035ada18 to 036ada2b has its CatchHandler @ 035ad6e8 */
    FUN_01bab630(&PDGHODJHCGP_TypeInfo);
                    /* catch() { ... } // from try @ 035ad9a8 with catch @ 035ada1c */
    FUN_01bab630(&StringLiteral_20392/*"raidUpdateVersionMessage"*/);
                    /* try { // try from 035ada2c to 036ada2f has its CatchHandler @ 035ada54 */
                    /* try { // try from 035ada30 to 036ada5b has its CatchHandler @ 035ad6e8 */
    FUN_01bab630(&StringLiteral_20393/*"raidUpdateVersionTitle"*/);
    FUN_01bab630(&StringLiteral_19859/*"newVersionUpdate"*/);
    FUN_01bab630(&StringLiteral_19857/*"newVersionCancel"*/);
    DAT_0456853f = 1;
  }
                    /* catch() { ... } // from try @ 035ada2c with catch @ 035ada54 */
  pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar7 = Method_System_Array_Empty<string>__;
                    /* try { // try from 035ada5c to 036ada63 has its CatchHandler @ 035ada78 */
                    /* try { // try from 035ada64 to 036ada6f has its CatchHandler @ 035ad6e8 */
  lVar10 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar10 == 0) {
                    /* try { // try from 035ada70 to 036ada77 has its CatchHandler @ 035ada78 */
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar10 = *(long *)(lVar7 + 0x38);
  }
                    /* catch() { ... } // from try @ 035ada04 with catch @ 035ada78
                       catch() { ... } // from try @ 035ada5c with catch @ 035ada78
                       catch() { ... } // from try @ 035ada70 with catch @ 035ada78 */
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01b81620();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  uVar5 = StringLiteral_20393/*"raidUpdateVersionTitle"*/;
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar11 = pIVar6->klass;
    uVar14 = **(undefined8 **)(lVar7 + 0xb8);
    uVar1._0_1_ = (pIVar11->_2).rank;
    uVar1._1_1_ = (pIVar11->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pIVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar8 = pIVar11->vtable + (*piVar13 + 0xc);
          goto LAB_035adb18;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035adb18:
    pSVar9 = (System_String_o *)(*pVVar8->methodPtr)(pIVar6,uVar5,uVar14,pVVar8->method);
    pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar7 = Method_System_Array_Empty<string>__;
    lVar10 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar10 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar10 = *(long *)(lVar7 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01b81620();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01b81620();
    }
    uVar5 = StringLiteral_20392/*"raidUpdateVersionMessage"*/;
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar11 = pIVar6->klass;
      uVar14 = **(undefined8 **)(lVar7 + 0xb8);
      uVar2._0_1_ = (pIVar11->_2).rank;
      uVar2._1_1_ = (pIVar11->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pIVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar8 = pIVar11->vtable + (*piVar13 + 0xc);
            goto LAB_035adbf8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035adbf8:
      NONPLOOOOAG = (System_String_o *)(*pVVar8->methodPtr)(pIVar6,uVar5,uVar14,pVVar8->method);
      __this = (PDGHODJHCGP_o *)thunk_FUN_01bda818(PDGHODJHCGP_TypeInfo);
      PDGHODJHCGP___ctor(__this,pSVar9,NONPLOOOOAG,(MethodInfo *)0x0);
      pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar7 = Method_System_Array_Empty<string>__;
      lVar10 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar10 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar10 = *(long *)(lVar7 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01b81620();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      uVar5 = StringLiteral_19859/*"newVersionUpdate"*/;
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar11 = pIVar6->klass;
        uVar14 = **(undefined8 **)(lVar7 + 0xb8);
        uVar3._0_1_ = (pIVar11->_2).rank;
        uVar3._1_1_ = (pIVar11->_2).minimumAlignment;
        uVar12 = (ulong)uVar3;
        if (uVar12 != 0) {
          piVar13 = &((pIVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar8 = pIVar11->vtable + (*piVar13 + 0xc);
              goto LAB_035adcfc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035adcfc:
        pSVar9 = (System_String_o *)(*pVVar8->methodPtr)(pIVar6,uVar5,uVar14,pVVar8->method);
        __this_00 = (PDGHODJHCGP_HIBNPLAHCBH_o *)
                    thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
        PDGHODJHCGP_HIBNPLAHCBH___ctor
                  (__this_00,(Il2CppObject *)0x0,Method_KDPDBGNOFEN_EGFBLPFMABC__,(MethodInfo *)0x0)
        ;
        if (__this != (PDGHODJHCGP_o *)0x0) {
          PDGHODJHCGP__IEFEBMICIHN(__this,pSVar9,__this_00,(MethodInfo *)0x0);
          pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar7 = Method_System_Array_Empty<string>__;
          lVar10 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar10 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar10 = *(long *)(lVar7 + 0x38);
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01b81620();
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01b81620();
          }
          uVar5 = StringLiteral_19857/*"newVersionCancel"*/;
          if (pIVar6 != (Il2CppObject *)0x0) {
            pIVar11 = pIVar6->klass;
            uVar14 = **(undefined8 **)(lVar7 + 0xb8);
            uVar4._0_1_ = (pIVar11->_2).rank;
            uVar4._1_1_ = (pIVar11->_2).minimumAlignment;
            uVar12 = (ulong)uVar4;
            if (uVar12 != 0) {
              piVar13 = &((pIVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar8 = pIVar11->vtable + (*piVar13 + 0xc);
                  goto LAB_035ade08;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035ade08:
            pSVar9 = (System_String_o *)(*pVVar8->methodPtr)(pIVar6,uVar5,uVar14,pVVar8->method);
            PDGHODJHCGP__IEFEBMICIHN
                      (__this,pSVar9,(PDGHODJHCGP_HIBNPLAHCBH_o *)0x0,(MethodInfo *)0x0);
            PDGHODJHCGP__BFCCEGGDJEF(__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void AIJHJNAPOFC()  [RVA 0x34ADE54]
// KDPDBGNOFEN$$AIJHJNAPOFC @ RVA 0x34ADE54

void KDPDBGNOFEN__AIJHJNAPOFC(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  FKDLCJJOGIP_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  Sfs2X_SmartFox_o **ppSVar2;
  
  if ((DAT_04568540 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_16466/*"application_quit"*/);
    FUN_01bab630(&StringLiteral_2482/*">>> SFS: disconnect SFSConnection::Disconnect"*/);
    DAT_04568540 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_035adf7c;
  if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  BBBLOLJAMJP->m_Items[0] = 6;
  Nekki_Utils_DetailedLog__Log(StringLiteral_2482/*">>> SFS: disconnect SFSConnection::Disconnect"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).EBJCMEOKKOK;
  if (*ppSVar2 != (Sfs2X_SmartFox_o *)0x0) {
    Sfs2X_SmartFox__RemoveAllEventListeners(*ppSVar2,(MethodInfo *)0x0);
    if (*ppSVar2 == (Sfs2X_SmartFox_o *)0x0) goto LAB_035adf7c;
    bVar1 = Sfs2X_SmartFox__get_IsConnected(*ppSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      if (*ppSVar2 == (Sfs2X_SmartFox_o *)0x0) goto LAB_035adf7c;
      Sfs2X_SmartFox__Disconnect(*ppSVar2,(MethodInfo *)0x0);
      if (*ppSVar2 == (Sfs2X_SmartFox_o *)0x0) goto LAB_035adf7c;
      Sfs2X_SmartFox__HandleClientDisconnection(*ppSVar2,StringLiteral_16466/*"application_quit"*/,(MethodInfo *)0x0);
    }
    (__this->fields).EBJCMEOKKOK = (Sfs2X_SmartFox_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
    (__this->fields)._KKNAFGJEFJG_k__BackingField = false;
  }
  (__this->fields)._MGGBEPKMPCF_k__BackingField = false;
  Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__Hide((MethodInfo *)0x0);
  __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
    FKDLCJJOGIP__LLBIEPFEJPG(__this_00,(MethodInfo *)0x0);
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__HOIIJGMCDEM(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
LAB_035adf7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GKICNJPIOPE(BaseEvent ICLHKEAILDM)  [RVA 0x34ADF84]
// KDPDBGNOFEN$$GKICNJPIOPE @ RVA 0x34ADF84

void KDPDBGNOFEN__GKICNJPIOPE
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *ICLHKEAILDM,MethodInfo *method)

{
  KDPDBGNOFEN_o *__this_00;
  System_String_o *pSVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  
  if ((DAT_04568541 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_15577/*"[SFS2X Warning] "*/);
    DAT_04568541 = 1;
  }
  __this_00 = (KDPDBGNOFEN_o *)
              (*(__this->klass->vtable)._7_AAOJINBEIFF.methodPtr)
                        (__this,(__this->klass->vtable)._7_AAOJINBEIFF.method);
  if (((ulong)__this_00 & 1) == 0) {
    return;
  }
  pSVar1 = KDPDBGNOFEN__NAGMMNGLGAI(__this_00,ICLHKEAILDM,method);
  pSVar1 = System_String__Concat(StringLiteral_15577/*"[SFS2X Warning] "*/,pSVar1,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)BBBLOLJAMJP->max_length != 0) {
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Warning(pSVar1,BBBLOLJAMJP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private IEnumerator DCHKHNPICNI()  [RVA 0x34AE2F8]
// KDPDBGNOFEN$$DCHKHNPICNI @ RVA 0x34AE2F8

System_Collections_IEnumerator_o *
KDPDBGNOFEN__DCHKHNPICNI(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568542 & 1) == 0) {
    FUN_01bab630(&KDPDBGNOFEN_KDFLJCAMJPJ_TypeInfo);
    DAT_04568542 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KDPDBGNOFEN_KDFLJCAMJPJ_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void NFMIDHIDEIA(BaseEvent ICLHKEAILDM)  [RVA 0x34AE38C]
// KDPDBGNOFEN$$NFMIDHIDEIA @ RVA 0x34AE38C

void KDPDBGNOFEN__NFMIDHIDEIA
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *ICLHKEAILDM,MethodInfo *method)

{
  KDPDBGNOFEN_o *__this_00;
  System_String_o *pSVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  
  if ((DAT_04568543 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_15576/*"[SFS2X Info] "*/);
    DAT_04568543 = 1;
  }
  __this_00 = (KDPDBGNOFEN_o *)
              (*(__this->klass->vtable)._7_AAOJINBEIFF.methodPtr)
                        (__this,(__this->klass->vtable)._7_AAOJINBEIFF.method);
  if (((ulong)__this_00 & 1) == 0) {
    return;
  }
  pSVar1 = KDPDBGNOFEN__NAGMMNGLGAI(__this_00,ICLHKEAILDM,method);
  pSVar1 = System_String__Concat(StringLiteral_15576/*"[SFS2X Info] "*/,pSVar1,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)BBBLOLJAMJP->max_length != 0) {
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Log(pSVar1,BBBLOLJAMJP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private void DALMFMJBAOJ(string CELOLGNMKCG, Type ACCIHBHMFPN, IMessage JPLEIGKMFDA)  [RVA 0x34AE45C]
// KDPDBGNOFEN$$DALMFMJBAOJ @ RVA 0x34AE45C

void KDPDBGNOFEN__DALMFMJBAOJ
               (KDPDBGNOFEN_o *__this,System_String_o *CELOLGNMKCG,System_Type_o *ACCIHBHMFPN,
               Google_Protobuf_IMessage_o *JPLEIGKMFDA,MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  System_String_o *pSVar3;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)ACCIHBHMFPN;
  if ((DAT_04568544 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_15583/*"[Server Event] cmd:<b>{0}</b> type:<b>{1}</b> extensible:\n<b>{2}</b>"*/);
    DAT_04568544 = 1;
  }
  uVar2 = (*(__this->klass->vtable)._7_AAOJINBEIFF.methodPtr)
                    (__this,(__this->klass->vtable)._7_AAOJINBEIFF.method);
  if (((uVar2 & 1) == 0) || (bVar1 = KDPDBGNOFEN__DNHGHLJMHHH(__this,CELOLGNMKCG,method_00), bVar1))
  {
    return;
  }
  pSVar3 = ICAJGHJPOBL__APBCALFHJJE((Il2CppObject *)JPLEIGKMFDA,false,(MethodInfo *)0x0);
  pSVar3 = System_String__Format
                     (StringLiteral_15583/*"[Server Event] cmd:<b>{0}</b> type:<b>{1}</b> extensible:\n<b>{2}</b>"*/,(Il2CppObject *)CELOLGNMKCG,(Il2CppObject *)ACCIHBHMFPN,
                      (Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)BBBLOLJAMJP->max_length != 0) {
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Log(pSVar3,BBBLOLJAMJP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void KDNEGNGBNEO()  [RVA 0x34AE5C0]
// KDPDBGNOFEN$$KDNEGNGBNEO @ RVA 0x34AE5C0

void KDPDBGNOFEN__KDNEGNGBNEO(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  Sfs2X_SmartFox_o *__this_00;
  
  __this_00 = (__this->fields).EBJCMEOKKOK;
  if (__this_00 != (Sfs2X_SmartFox_o *)0x0) {
    Sfs2X_SmartFox__KillConnection(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void KNEGBCEBPJO(Action<int> CJNHFNHJHPE)  [RVA 0x34AE5D4]
// KDPDBGNOFEN$$KNEGBCEBPJO @ RVA 0x34AE5D4

void KDPDBGNOFEN__KNEGBCEBPJO
               (KDPDBGNOFEN_o *__this,System_Action_int__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_int__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_int__o *pSVar5;
  System_Action_int__o **ppSVar6;
  System_Action_int__o *a;
  
  if ((DAT_04568545 & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    DAT_04568545 = 1;
  }
  ppSVar6 = &(__this->fields).NDNBEBJGGPF;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<int>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<int>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_int__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== protected bool MAIBEGCOCKG()  [RVA 0x34AD150]
// KDPDBGNOFEN$$MAIBEGCOCKG @ RVA 0x34AD150

bool KDPDBGNOFEN__MAIBEGCOCKG(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  bool bVar1;
  Sfs2X_SmartFox_o *__this_00;
  
  __this_00 = (__this->fields).EBJCMEOKKOK;
  if (__this_00 != (Sfs2X_SmartFox_o *)0x0) {
    bVar1 = Sfs2X_SmartFox__get_IsConnected(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public bool EFHIKBFOFEL()  [RVA 0x34AE684]
// KDPDBGNOFEN$$EFHIKBFOFEL @ RVA 0x34AE684

bool KDPDBGNOFEN__EFHIKBFOFEL(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  return (__this->fields)._KKNAFGJEFJG_k__BackingField;
}


// ===== protected void GHKJILFKNDN(ConfigData PCMFDDODKED)  [RVA 0x34AE68C]
// KDPDBGNOFEN$$GHKJILFKNDN @ RVA 0x34AE68C

void KDPDBGNOFEN__GHKJILFKNDN
               (KDPDBGNOFEN_o *__this,Sfs2X_Util_ConfigData_o *PCMFDDODKED,MethodInfo *method)

{
  ushort uVar1;
  Sfs2X_SmartFox_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  
  method_00 = (MethodInfo *)PCMFDDODKED;
  if ((DAT_04568546 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568546 = 1;
    method_00 = extraout_x1;
  }
  KDPDBGNOFEN__CKBMGIOBIFN(__this,method_00);
  __this_00 = (__this->fields).EBJCMEOKKOK;
  if (__this_00 != (Sfs2X_SmartFox_o *)0x0) {
    Sfs2X_SmartFox__Connect(__this_00,PCMFDDODKED,(MethodInfo *)0x0);
    KDPDBGNOFEN__IMLDFGHHMND(__this,method_01);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar3 = KDPDBGNOFEN__DCHKHNPICNI(__this,method_02);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + *piVar7;
            goto LAB_035ae750;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_035ae750:
      pSVar3 = (System_Collections_IEnumerator_o *)
               (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
      ppSVar8 = &(__this->fields).OEKNOHANEKC;
      *ppSVar8 = pSVar3;
      thunk_FUN_01c20e04(ppSVar8,pSVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OLJODDGBIJD(BaseEvent JPLEIGKMFDA)  [RVA 0x34AE780]
// KDPDBGNOFEN$$OLJODDGBIJD @ RVA 0x34AE780

void KDPDBGNOFEN__OLJODDGBIJD
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_00;
  
  if ((DAT_04568547 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&StringLiteral_11563/*"SFSConnection::OnSocketError"*/);
    DAT_04568547 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11563/*"SFSConnection::OnSocketError"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    __this_00 = (__this->fields).DDBFMMHDCBK;
    if (__this_00 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
      JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_00,4,(Il2CppObject *)0x0,
                 Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void CHMEICFBNAK(string JGHIJMJNJLE, string CELOLGNMKCG, string PAAGBBHAOEO, Type ACCIHBHMFPN, IMessage JPLEIGKMFDA)  [RVA 0x34AE834]
// KDPDBGNOFEN$$CHMEICFBNAK @ RVA 0x34AE834

void KDPDBGNOFEN__CHMEICFBNAK
               (KDPDBGNOFEN_o *__this,System_String_o *JGHIJMJNJLE,System_String_o *CELOLGNMKCG,
               System_String_o *PAAGBBHAOEO,System_Type_o *ACCIHBHMFPN,
               Google_Protobuf_IMessage_o *JPLEIGKMFDA,MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  System_Object_array *args;
  long lVar3;
  System_String_o *pSVar4;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  undefined8 uVar5;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CELOLGNMKCG;
  if ((DAT_04568548 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11552/*"SFSConnection::LogRequest: [{0}] cmd:<b>{1}</b> type:<b>{2}</b> extrainfo:<b>{3}</b> extensible:\n<b>{4}</b>"*/);
    DAT_04568548 = 1;
  }
  uVar2 = (*(__this->klass->vtable)._7_AAOJINBEIFF.methodPtr)
                    (__this,(__this->klass->vtable)._7_AAOJINBEIFF.method);
  if (((uVar2 & 1) == 0) || (bVar1 = KDPDBGNOFEN__DNHGHLJMHHH(__this,CELOLGNMKCG,method_00), bVar1))
  {
    return;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
  if (args == (System_Object_array *)0x0) {
LAB_035aea74:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((JGHIJMJNJLE != (System_String_o *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(JGHIJMJNJLE,(((args->obj).klass)->_1).element_class), lVar3 == 0))
  {
LAB_035aea68:
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)JGHIJMJNJLE;
    thunk_FUN_01c20e04(args->m_Items,JGHIJMJNJLE);
    if ((CELOLGNMKCG != (System_String_o *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(CELOLGNMKCG,(((args->obj).klass)->_1).element_class), lVar3 == 0)
       ) goto LAB_035aea68;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)CELOLGNMKCG;
      thunk_FUN_01c20e04(args->m_Items + 1,CELOLGNMKCG);
      if ((ACCIHBHMFPN != (System_Type_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(ACCIHBHMFPN,(((args->obj).klass)->_1).element_class),
         lVar3 == 0)) goto LAB_035aea68;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)ACCIHBHMFPN;
        thunk_FUN_01c20e04(args->m_Items + 2,ACCIHBHMFPN);
        if ((PAAGBBHAOEO != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(PAAGBBHAOEO,(((args->obj).klass)->_1).element_class),
           lVar3 == 0)) goto LAB_035aea68;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)PAAGBBHAOEO;
          thunk_FUN_01c20e04(args->m_Items + 3,PAAGBBHAOEO);
          pSVar4 = ICAJGHJPOBL__APBCALFHJJE((Il2CppObject *)JPLEIGKMFDA,false,(MethodInfo *)0x0);
                    /* try { // try from 035ae9c4 to 036aeb17 has its CatchHandler @ 035ae9c4
                       catch() { ... } // from try @ 035ae9c4 with catch @ 035ae9c4
                       catch() { ... } // from try @ 035aec7c with catch @ 035ae9c4
                       catch() { ... } // from try @ 035aedc4 with catch @ 035ae9c4
                       catch() { ... } // from try @ 035aeebc with catch @ 035ae9c4 */
          if ((pSVar4 != (System_String_o *)0x0) &&
             (lVar3 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar3 == 0
             )) goto LAB_035aea68;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = (Il2CppObject *)pSVar4;
            thunk_FUN_01c20e04(args->m_Items + 4,pSVar4);
            pSVar4 = System_String__Format(StringLiteral_11552/*"SFSConnection::LogRequest: [{0}] cmd:<b>{1}</b> type:<b>{2}</b> extrainfo:<b>{3}</b> extensible:\n<b>{4}</b>"*/,args,(MethodInfo *)0x0);
            BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                          FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
            if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_035aea74;
            if ((int)BBBLOLJAMJP->max_length != 0) {
              BBBLOLJAMJP->m_Items[0] = 6;
              Nekki_Utils_DetailedLog__Log(pSVar4,BBBLOLJAMJP,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private bool DNHGHLJMHHH(string CELOLGNMKCG)  [RVA 0x34AE560]
// KDPDBGNOFEN$$DNHGHLJMHHH @ RVA 0x34AE560

bool KDPDBGNOFEN__DNHGHLJMHHH(KDPDBGNOFEN_o *__this,System_String_o *CELOLGNMKCG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_array *array;
  
  if ((DAT_04568549 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_IndexOf<string>__);
    DAT_04568549 = 1;
  }
  array = (__this->fields).DHBJBCIMDBB;
  bVar1 = false;
  if (array != (System_String_array *)0x0) {
    iVar2 = System_Array__IndexOf<object>
                      ((System_Object_array *)array,(Il2CppObject *)CELOLGNMKCG,
                       Method_System_Array_IndexOf<string>__);
    bVar1 = (bool)((byte)~(byte)((uint)iVar2 >> 0x18) >> 7);
  }
  return bVar1;
}


// ===== public int KLNMLOOCAAO(string CELOLGNMKCG, IMessage HJEKJFLBKDB, Action<KEFHDOHHHML> BLMFLPJJMPF, float HEDFGDPDHAL = 0, object IMMNELPBGIF)  [RVA 0x34AEA78]
// KDPDBGNOFEN$$KLNMLOOCAAO @ RVA 0x34AEA78

int32_t KDPDBGNOFEN__KLNMLOOCAAO
                  (KDPDBGNOFEN_o *__this,System_String_o *CELOLGNMKCG,
                  Google_Protobuf_IMessage_o *HJEKJFLBKDB,System_Action_KEFHDOHHHML__o *BLMFLPJJMPF,
                  float HEDFGDPDHAL,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  undefined4 uVar2;
  Il2CppObject *__this_00;
  FLBBKMOHIOG_o *__this_01;
  Sfs2X_Entities_Data_SFSObject_o *parameters;
  ulong uVar3;
  System_Type_o *pSVar4;
  System_Type_o *right;
  System_String_array *values;
  System_String_o *pSVar5;
  ONPHBGJDFBM_o *__this_02;
  System_Action_o *JPBADEBNNLL;
  ACAEKBNCODE_o *__this_03;
  Sfs2X_Requests_ExtensionRequest_o *__this_04;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar6;
  Sfs2X_SmartFox_o *__this_05;
  void **ppvVar7;
  undefined4 local_64;
  
  if ((DAT_0456854a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Sfs2X_Requests_ExtensionRequest_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    FUN_01bab630(&Method_KDPDBGNOFEN_IDAJCGIEJCJ_APBOPKDOCJP__);
    FUN_01bab630(&KDPDBGNOFEN_IDAJCGIEJCJ_TypeInfo);
                    /* try { // try from 035aeb18 to 036aeb3f has its CatchHandler @ 035aee1c */
    FUN_01bab630(&ONPHBGJDFBM_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_355/*" but got: "*/);
    FUN_01bab630(&StringLiteral_11564/*"SFSConnection::Send while disconnected, skipped: "*/);
    FUN_01bab630(&StringLiteral_20761/*"session_request_id:"*/);
    FUN_01bab630(&StringLiteral_1155/*", "*/);
                    /* try { // try from 035aeb74 to 036aeb9f has its CatchHandler @ 035aee18 */
    FUN_01bab630(&StringLiteral_11566/*"SFSConnection::Send: start request message: "*/);
    FUN_01bab630(&StringLiteral_83/*"\nExcpected: "*/);
    FUN_01bab630(&StringLiteral_18911/*"id"*/);
    FUN_01bab630(&StringLiteral_11565/*"SFSConnection::Send: sending wrong type with cmd="*/);
    FUN_01bab630(&StringLiteral_4430/*"Client SFS.send"*/);
    DAT_0456854a = 1;
  }
  local_64 = 0;
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KDPDBGNOFEN_IDAJCGIEJCJ_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
                    /* try { // try from 035aebd4 to 036aebdf has its CatchHandler @ 035aede4 */
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    if ((__this->fields).EBJCMEOKKOK == (Sfs2X_SmartFox_o *)0x0) {
      pSVar5 = System_String__Concat(StringLiteral_11564/*"SFSConnection::Send while disconnected, skipped: "*/,CELOLGNMKCG,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      return -1;
    }
                    /* try { // try from 035aebe4 to 036aebeb has its CatchHandler @ 035aede8 */
    __this_01 = (__this->fields).KPDFPANJBJB;
    if (__this_01 == (FLBBKMOHIOG_o *)0x0) goto LAB_035af094;
                    /* try { // try from 035aebf0 to 036aebfb has its CatchHandler @ 035aee04 */
    parameters = FLBBKMOHIOG__IIKIKJJCNNM(__this_01,HJEKJFLBKDB,(MethodInfo *)0x0);
                    /* try { // try from 035aec00 to 036aec07 has its CatchHandler @ 035aede0 */
    uVar3 = (*(__this->klass->vtable)._7_AAOJINBEIFF.methodPtr)
                      (__this,(__this->klass->vtable)._7_AAOJINBEIFF.method);
    if ((uVar3 & 1) == 0) {
      if (parameters == (Sfs2X_Entities_Data_SFSObject_o *)0x0) goto LAB_035af094;
    }
    else {
                    /* try { // try from 035aec10 to 036aec17 has its CatchHandler @ 035aee00 */
                    /* try { // try from 035aec1c to 036aec23 has its CatchHandler @ 035aedec */
      if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 035aec2c to 036aec47 has its CatchHandler @ 035aee14 */
      pSVar4 = ICOEHFKOMGO__HLFDFELPNHP(CELOLGNMKCG,(MethodInfo *)0x0);
      if (HJEKJFLBKDB == (Google_Protobuf_IMessage_o *)0x0) goto LAB_035af094;
      right = System_Object__GetType((Il2CppObject *)HJEKJFLBKDB,(MethodInfo *)0x0);
                    /* try { // try from 035aec48 to 036aec57 has its CatchHandler @ 035aeddc */
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035aec60 to 036aec67 has its CatchHandler @ 035aedd0 */
        thunk_FUN_01ba7564(System_Type_TypeInfo);
      }
      bVar1 = System_Type__op_Inequality(pSVar4,right,(MethodInfo *)0x0);
                    /* try { // try from 035aec78 to 036aec7b has its CatchHandler @ 035aedd4 */
      if (bVar1) {
                    /* try { // try from 035aec7c to 036aeda3 has its CatchHandler @ 035ae9c4 */
        values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
        if (values == (System_String_array *)0x0) goto LAB_035af094;
        if ((int)values->max_length != 0) {
          values->m_Items[0] = StringLiteral_11565/*"SFSConnection::Send: sending wrong type with cmd="*/;
          thunk_FUN_01c20e04(values->m_Items);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = CELOLGNMKCG;
            thunk_FUN_01c20e04(values->m_Items + 1,CELOLGNMKCG);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = StringLiteral_83/*"\nExcpected: "*/;
              thunk_FUN_01c20e04();
              if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar4 = ICOEHFKOMGO__HLFDFELPNHP(CELOLGNMKCG,(MethodInfo *)0x0);
              if (pSVar4 == (System_Type_o *)0x0) {
                pSVar5 = (System_String_o *)0x0;
              }
              else {
                pSVar5 = (System_String_o *)
                         (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                                   (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
              }
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar5;
                thunk_FUN_01c20e04(values->m_Items + 3);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = StringLiteral_355/*" but got: "*/;
                  thunk_FUN_01c20e04();
                  pSVar4 = System_Object__GetType((Il2CppObject *)HJEKJFLBKDB,(MethodInfo *)0x0);
                  if (pSVar4 == (System_Type_o *)0x0) {
                    pSVar5 = (System_String_o *)0x0;
                  }
                  else {
                    pSVar5 = (System_String_o *)
                             (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                                       (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
                  }
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = pSVar5;
                    thunk_FUN_01c20e04();
                    pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
                    pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                             FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
                    if (pNVar6 == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0)
                    goto LAB_035af094;
                    if ((int)pNVar6->max_length != 0) {
                      pNVar6->m_Items[0] = 6;
                      Nekki_Utils_DetailedLog__Error(pSVar5,pNVar6,(MethodInfo *)0x0);
                      return -1;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_035af098;
      }
      if (parameters == (Sfs2X_Entities_Data_SFSObject_o *)0x0) goto LAB_035af094;
                    /* try { // try from 035aeda4 to 036aedab has its CatchHandler @ 035aee20 */
      local_64 = (*(parameters->klass->vtable)._34_GetInt.methodPtr)
                           (parameters,StringLiteral_18911/*"id"*/,
                            (parameters->klass->vtable)._34_GetInt.method);
                    /* try { // try from 035aedac to 036aedaf has its CatchHandler @ 035aee08 */
                    /* try { // try from 035aedb0 to 036aedb3 has its CatchHandler @ 035aedfc */
                    /* try { // try from 035aedb4 to 036aedb7 has its CatchHandler @ 035aedf8 */
      pSVar5 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                    /* try { // try from 035aedb8 to 036aedbb has its CatchHandler @ 035aedf4 */
                    /* try { // try from 035aedbc to 036aedbf has its CatchHandler @ 035aedf0 */
                    /* try { // try from 035aedc0 to 036aedc3 has its CatchHandler @ 035aedd8 */
                    /* try { // try from 035aedc4 to 036aee2f has its CatchHandler @ 035ae9c4 */
                    /* catch() { ... } // from try @ 035aec60 with catch @ 035aedd0 */
      pSVar5 = System_String__Concat(StringLiteral_20761/*"session_request_id:"*/,pSVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035aec78 with catch @ 035aedd4 */
                    /* catch() { ... } // from try @ 035aedc0 with catch @ 035aedd8 */
                    /* catch() { ... } // from try @ 035aec48 with catch @ 035aeddc */
                    /* catch() { ... } // from try @ 035aec00 with catch @ 035aede0 */
      pSVar4 = System_Object__GetType((Il2CppObject *)HJEKJFLBKDB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035aebd4 with catch @ 035aede4 */
                    /* catch() { ... } // from try @ 035aebe4 with catch @ 035aede8 */
                    /* catch() { ... } // from try @ 035aec1c with catch @ 035aedec */
                    /* catch() { ... } // from try @ 035aedbc with catch @ 035aedf0 */
                    /* catch() { ... } // from try @ 035aedb8 with catch @ 035aedf4 */
                    /* catch() { ... } // from try @ 035aedb4 with catch @ 035aedf8 */
                    /* catch() { ... } // from try @ 035aedb0 with catch @ 035aedfc */
                    /* catch() { ... } // from try @ 035aec10 with catch @ 035aee00 */
                    /* catch() { ... } // from try @ 035aebf0 with catch @ 035aee04 */
                    /* catch() { ... } // from try @ 035aedac with catch @ 035aee08 */
      (*(__this->klass->vtable)._5_CHMEICFBNAK.methodPtr)
                (__this,StringLiteral_4430/*"Client SFS.send"*/,CELOLGNMKCG,pSVar5,pSVar4,HJEKJFLBKDB,
                 (__this->klass->vtable)._5_CHMEICFBNAK.method);
    }
                    /* catch() { ... } // from try @ 035aec2c with catch @ 035aee14 */
                    /* catch() { ... } // from try @ 035aeb74 with catch @ 035aee18 */
                    /* catch() { ... } // from try @ 035aeb18 with catch @ 035aee1c */
                    /* catch() { ... } // from try @ 035aeda4 with catch @ 035aee20 */
    uVar2 = (*(parameters->klass->vtable)._34_GetInt.methodPtr)
                      (parameters,StringLiteral_18911/*"id"*/,(parameters->klass->vtable)._34_GetInt.method)
    ;
    ppvVar7 = &__this_00[1].monitor;
                    /* try { // try from 035aee30 to 036aee33 has its CatchHandler @ 035aee44 */
    *(undefined4 *)ppvVar7 = uVar2;
                    /* catch() { ... } // from try @ 035aee30 with catch @ 035aee44 */
    __this_02 = (ONPHBGJDFBM_o *)thunk_FUN_01bda818(ONPHBGJDFBM_TypeInfo);
                    /* try { // try from 035aee54 to 036aeebb has its CatchHandler @ 035aeed0 */
    ONPHBGJDFBM___ctor(__this_02,CELOLGNMKCG,BLMFLPJJMPF,IMMNELPBGIF,(MethodInfo *)0x0);
    if (0.0 < HEDFGDPDHAL) {
      JPBADEBNNLL = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (__this_02 == (ONPHBGJDFBM_o *)0x0) goto LAB_035af094;
      ONPHBGJDFBM__OCECLIFLFHK(__this_02,JPBADEBNNLL,HEDFGDPDHAL / 1000.0,(MethodInfo *)0x0);
    }
    __this_03 = (__this->fields).PGDGCNKLKMN;
    if (__this_03 != (ACAEKBNCODE_o *)0x0) {
                    /* try { // try from 035aeebc to 036aeec7 has its CatchHandler @ 035ae9c4 */
                    /* try { // try from 035aeec8 to 036aeecf has its CatchHandler @ 035aeed0 */
      ACAEKBNCODE__ELDMBCFMOKO(__this_03,*(int32_t *)ppvVar7,__this_02,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035aee54 with catch @ 035aeed0
                       catch() { ... } // from try @ 035aeec8 with catch @ 035aeed0 */
      uVar3 = (*(__this->klass->vtable)._7_AAOJINBEIFF.methodPtr)
                        (__this,(__this->klass->vtable)._7_AAOJINBEIFF.method);
      if ((uVar3 & 1) != 0) {
        pSVar5 = System_Int32__ToString((int32_t)ppvVar7,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat
                           (StringLiteral_11566/*"SFSConnection::Send: start request message: "*/,pSVar5,StringLiteral_1155/*", "*/,CELOLGNMKCG,
                            (MethodInfo *)0x0);
        pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                 FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
        if (pNVar6 == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_035af094;
        if ((int)pNVar6->max_length == 0) {
LAB_035af098:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pNVar6->m_Items[0] = 6;
        Nekki_Utils_DetailedLog__Log(pSVar5,pNVar6,(MethodInfo *)0x0);
      }
      __this_05 = (__this->fields).EBJCMEOKKOK;
      __this_04 = (Sfs2X_Requests_ExtensionRequest_o *)
                  thunk_FUN_01bda818(Sfs2X_Requests_ExtensionRequest_TypeInfo);
      Sfs2X_Requests_ExtensionRequest___ctor
                (__this_04,CELOLGNMKCG,(Sfs2X_Entities_Data_ISFSObject_o *)parameters,
                 (MethodInfo *)0x0);
      if (__this_05 != (Sfs2X_SmartFox_o *)0x0) {
        Sfs2X_SmartFox__Send(__this_05,(Sfs2X_Requests_IRequest_o *)__this_04,(MethodInfo *)0x0);
        return *(int32_t *)ppvVar7;
      }
    }
  }
LAB_035af094:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IMLDFGHHMND()  [RVA 0x34AD330]
// KDPDBGNOFEN$$IMLDFGHHMND @ RVA 0x34AD330

void KDPDBGNOFEN__IMLDFGHHMND(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456854b & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456854b = 1;
  }
  ppSVar7 = &(__this->fields).OEKNOHANEKC;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_035ad3dc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_035ad3dc:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void CHBPEDDCIHG(BaseEvent JPLEIGKMFDA)  [RVA 0x34AF0A4]
// KDPDBGNOFEN$$CHBPEDDCIHG @ RVA 0x34AF0A4

void KDPDBGNOFEN__CHBPEDDCIHG
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_00;
  
  if ((DAT_0456854c & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&StringLiteral_11560/*"SFSConnection::OnLogout"*/);
    DAT_0456854c = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11560/*"SFSConnection::OnLogout"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    __this_00 = (__this->fields).DDBFMMHDCBK;
    if (__this_00 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
      JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_00,3,(Il2CppObject *)0x0,
                 Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LKKAIFOFGMN(BaseEvent JPLEIGKMFDA)  [RVA 0x34AF158]
// KDPDBGNOFEN$$LKKAIFOFGMN @ RVA 0x34AF158

void KDPDBGNOFEN__LKKAIFOFGMN
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  int32_t CEOLOKFCKIG;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  System_String_o *__this_00;
  System_String_array *__this_01;
  KEFHDOHHHML_o *FDLJCNLNCOC;
  System_String_array *NONPLOOOOAG;
  MethodInfo *method_00;
  System_Collections_Hashtable_c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_02;
  System_Collections_Hashtable_o *pSVar9;
  
  if ((DAT_0456854d & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&System_Collections_IDictionary_TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&StringLiteral_18075/*"errorMessage"*/);
    FUN_01bab630(&StringLiteral_8624/*"LoginError: unknown server error (nothing to split)"*/);
    FUN_01bab630(&StringLiteral_8625/*"LoginError: {0} - {1}"*/);
    FUN_01bab630(&StringLiteral_11559/*"SFSConnection::OnLoginError"*/);
    DAT_0456854d = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
LAB_035af354:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11559/*"SFSConnection::OnLoginError"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    uVar3 = StringLiteral_18075/*"errorMessage"*/;
    if ((JPLEIGKMFDA != (Sfs2X_Core_BaseEvent_o *)0x0) &&
       (pSVar9 = (JPLEIGKMFDA->fields).arguments, pSVar9 != (System_Collections_Hashtable_o *)0x0))
    {
      pSVar6 = pSVar9->klass;
      uVar2._0_1_ = (pSVar6->_2).rank;
      uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar2;
      if (uVar7 != 0) {
        piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IDictionary_TypeInfo) {
            pVVar4 = &(pSVar6->vtable)._0_Equals + *piVar8;
            goto LAB_035af280;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar9,System_Collections_IDictionary_TypeInfo,0);
LAB_035af280:
      plVar5 = (long *)(*pVVar4->methodPtr)(pSVar9,uVar3,pVVar4->method);
      if (plVar5 != (long *)0x0) {
        __this_00 = (System_String_o *)
                    (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        if (__this_00 != (System_String_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          __this_01 = System_String__Split(__this_00,0x5f,0,(MethodInfo *)0x0);
          if (__this_01 != (System_String_array *)0x0) {
            __this_02 = (__this->fields).DDBFMMHDCBK;
            if ((int)__this_01->max_length < 2) {
              CEOLOKFCKIG = -0x65;
              NONPLOOOOAG = StringLiteral_8624/*"LoginError: unknown server error (nothing to split)"*/;
            }
            else {
              CEOLOKFCKIG = System_Int32__Parse(__this_01->m_Items[0],(MethodInfo *)0x0);
              iVar1 = (int)__this_01->max_length;
              if ((iVar1 == 1) || (iVar1 == 0)) goto LAB_035af354;
              method_00 = (MethodInfo *)0x0;
              __this_01 = (System_String_array *)
                          System_String__Format
                                    (StringLiteral_8625/*"LoginError: {0} - {1}"*/,(Il2CppObject *)__this_01->m_Items[0],
                                     (Il2CppObject *)__this_01->m_Items[1],(MethodInfo *)0x0);
              NONPLOOOOAG = __this_01;
            }
            FDLJCNLNCOC = KDPDBGNOFEN__NEDONAJNFHE
                                    ((KDPDBGNOFEN_o *)__this_01,CEOLOKFCKIG,
                                     (System_String_o *)NONPLOOOOAG,method_00);
            if (__this_02 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
              JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                        ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_02,6,(Il2CppObject *)FDLJCNLNCOC
                         ,Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
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


// ===== public virtual void NONJDMMENLN()  [RVA 0x34AF418]
// KDPDBGNOFEN$$NONJDMMENLN @ RVA 0x34AF418

void KDPDBGNOFEN__NONJDMMENLN(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  ACAEKBNCODE_o *pAVar1;
  
  pAVar1 = (__this->fields).PGDGCNKLKMN;
  if (pAVar1 != (ACAEKBNCODE_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035af430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->klass->vtable)._4_NONJDMMENLN.methodPtr)
              (pAVar1,(pAVar1->klass->vtable)._4_NONJDMMENLN.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DAHOADHHAHM(BaseEvent JPLEIGKMFDA)  [RVA 0x34AF438]
// KDPDBGNOFEN$$DAHOADHHAHM @ RVA 0x34AF438

void KDPDBGNOFEN__DAHOADHHAHM
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_00;
  
                    /* try { // try from 035af450 to 036af457 has its CatchHandler @ 035af4dc */
  if ((DAT_0456854e & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&StringLiteral_11561/*"SFSConnection::OnRoomJoin"*/);
    DAT_0456854e = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
                    /* try { // try from 035af490 to 036af497 has its CatchHandler @ 035af4d8 */
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
                    /* try { // try from 035af498 to 036af4a3 has its CatchHandler @ 035af4d4 */
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 035af4a4 to 036af4c7 has its CatchHandler @ 035af37c */
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11561/*"SFSConnection::OnRoomJoin"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    __this_00 = (__this->fields).DDBFMMHDCBK;
    if (__this_00 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                    /* try { // try from 035af4c8 to 036af4cf has its CatchHandler @ 035af4e0 */
                    /* try { // try from 035af4d0 to 036af4ef has its CatchHandler @ 035af37c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035af498 with catch @ 035af4d4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035af490 with catch @ 035af4d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035af450 with catch @ 035af4dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035af4c8 with catch @ 035af4e0
                        */
      JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_00,7,(Il2CppObject *)0x0,
                 Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool JMBHICGNMIG()  [RVA 0x34AF4EC]
// KDPDBGNOFEN$$JMBHICGNMIG @ RVA 0x34AF4EC

bool KDPDBGNOFEN__JMBHICGNMIG(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
                    /* try { // try from 035af4f0 to 036af4f3 has its CatchHandler @ 035af518 */
  return (__this->fields)._MGGBEPKMPCF_k__BackingField;
}


// ===== private static void EGFBLPFMABC()  [RVA 0x34AF4F4]
// KDPDBGNOFEN$$EGFBLPFMABC @ RVA 0x34AF4F4

void KDPDBGNOFEN__EGFBLPFMABC(MethodInfo *method)

{
                    /* try { // try from 035af4f4 to 036af51f has its CatchHandler @ 035af37c */
  JJPNLEPEAFM__JHLIJCCIKHF((MethodInfo *)0x0);
  return;
}


// ===== protected void NPODDNIHKBO(PGICCMFLDPI LFJGFLNMBMC, JSONObject NKLHCIIJBLL)  [RVA 0x34AF4FC]
// KDPDBGNOFEN$$NPODDNIHKBO @ RVA 0x34AF4FC

void KDPDBGNOFEN__NPODDNIHKBO
               (KDPDBGNOFEN_o *__this,PGICCMFLDPI_o *LFJGFLNMBMC,
               SimpleJSON_JSONObject_o *NKLHCIIJBLL,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  System_Object_array *pSVar6;
  System_Object_array *pSVar7;
  System_String_o *pSVar8;
  long lVar9;
  Il2CppObject *pIVar10;
  GCPFDLNAFDF_o *pGVar11;
  VirtualInvokeData *pVVar12;
  System_Action_o *BLMFLPJJMPF;
  undefined8 uVar13;
  GCPFDLNAFDF_c *pGVar14;
  ulong uVar15;
  int32_t *piVar16;
  undefined1 auVar17 [16];
  undefined1 local_78 [16];
  undefined4 local_68;
  int32_t local_64;
  
                    /* catch() { ... } // from try @ 035af4f0 with catch @ 035af518 */
                    /* try { // try from 035af520 to 036af527 has its CatchHandler @ 035af53c */
                    /* try { // try from 035af528 to 036af533 has its CatchHandler @ 035af37c */
                    /* try { // try from 035af534 to 036af53b has its CatchHandler @ 035af53c */
  if ((DAT_0456854f & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035af520 with catch @ 035af53c
                       catch(type#2 @ 00000000) { ... } // from try @ 035af534 with catch @ 035af53c
                        */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&KADDELABILH_TypeInfo);
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    FUN_01bab630(&Method_KDPDBGNOFEN_LGOKOMKOBFK_DFICFAGPMHF__);
    FUN_01bab630(&KDPDBGNOFEN_LGOKOMKOBFK_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&StringLiteral_11553/*"SFSConnection::Login: connecting to RaidServer...\nTargetServer: {0}  {1}\nClient Min version: {2}\nClient Max(Curren..."*/);
    FUN_01bab630(&StringLiteral_11554/*"SFSConnection::Login: trying to connect to RaidServer with UNSUPPORTED Client versions:\nTargetServer: {0}  {1}\nClie..."*/);
    DAT_0456854f = 1;
  }
  pIVar5 = (Il2CppObject *)thunk_FUN_01bda818(KDPDBGNOFEN_LGOKOMKOBFK_TypeInfo);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar5[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(pIVar5 + 1,__this);
    pIVar5[2].klass = (Il2CppClass *)LFJGFLNMBMC;
    thunk_FUN_01c20e04(pIVar5 + 2,LFJGFLNMBMC);
    pIVar5[2].monitor = NKLHCIIJBLL;
    thunk_FUN_01c20e04(&pIVar5[2].monitor,NKLHCIIJBLL);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (HJPEKDOPBHN_TypeInfo->static_fields->MJEPNDCEBCK).fields,(MethodInfo *)0x0);
    *(int32_t *)&pIVar5[1].monitor = iVar4;
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (HJPEKDOPBHN_TypeInfo->static_fields->ENCOAOMGLKD).fields,(MethodInfo *)0x0);
    bVar3 = HJPEKDOPBHN__OOCIJPLODLJ((MethodInfo *)0x0);
    if (!bVar3) {
      pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
      pSVar7 = pSVar6;
      if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
        pSVar7 = (System_Object_array *)thunk_FUN_01ba7564(KDDOKHLOKMI_TypeInfo);
      }
      pSVar8 = KDDOKHLOKMI__HMOPEPHMMIA((MethodInfo *)pSVar7);
      if (pSVar6 == (System_Object_array *)0x0) goto LAB_035afb9c;
      if ((pSVar8 != (System_String_o *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pSVar8,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0))
      goto LAB_035afba0;
      if ((int)pSVar6->max_length == 0) goto LAB_035afb98;
      pSVar6->m_Items[0] = (Il2CppObject *)pSVar8;
      thunk_FUN_01c20e04(pSVar6->m_Items,pSVar8);
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar10 = IFAMAAGNCBJ__GPBMELHDADN<object>
                          (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      auVar17._8_8_ = local_78._8_8_;
      auVar17._0_8_ = local_78._0_8_;
      if ((pIVar10 == (Il2CppObject *)0x0) ||
         (local_78 = auVar17, pIVar10[9].monitor == (void *)0x0)) goto LAB_035afb9c;
      pIVar10 = *(Il2CppObject **)((long)pIVar10[9].monitor + 0x10);
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0)
         ) goto LAB_035afba0;
      if ((uint)pSVar6->max_length < 2) goto LAB_035afb98;
      pSVar6->m_Items[1] = pIVar10;
      thunk_FUN_01c20e04(pSVar6->m_Items + 1,pIVar10);
      local_64 = iVar4;
      pIVar10 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0)
         ) goto LAB_035afba0;
      if ((uint)pSVar6->max_length < 3) goto LAB_035afb98;
      pSVar6->m_Items[2] = pIVar10;
      thunk_FUN_01c20e04(pSVar6->m_Items + 2,pIVar10);
      local_68 = *(undefined4 *)&pIVar5[1].monitor;
      pIVar10 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0)
         ) goto LAB_035afba0;
      if ((uint)pSVar6->max_length < 4) goto LAB_035afb98;
      pSVar6->m_Items[3] = pIVar10;
      thunk_FUN_01c20e04(pSVar6->m_Items + 3,pIVar10);
      pGVar11 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
      if (pGVar11 == (GCPFDLNAFDF_o *)0x0) goto LAB_035afb9c;
      pGVar14 = pGVar11->klass;
      uVar1._0_1_ = (pGVar14->_2).rank;
      uVar1._1_1_ = (pGVar14->_2).minimumAlignment;
      uVar15 = (ulong)uVar1;
      if (uVar15 != 0) {
        piVar16 = &((pGVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
              (Il2CppClass *)KADDELABILH_TypeInfo) {
            pVVar12 = pGVar14->vtable + (*piVar16 + 4);
            goto LAB_035af86c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      pVVar12 = (VirtualInvokeData *)FUN_01b81914(pGVar11,KADDELABILH_TypeInfo,4);
LAB_035af86c:
      local_78 = (*pVVar12->methodPtr)(pGVar11,pVVar12->method);
      pIVar10 = (Il2CppObject *)
                thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,local_78);
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0)
         ) goto LAB_035afba0;
      if ((uint)pSVar6->max_length < 5) goto LAB_035afb98;
      pSVar6->m_Items[4] = pIVar10;
      thunk_FUN_01c20e04(pSVar6->m_Items + 4,pIVar10);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_11554/*"SFSConnection::Login: trying to connect to RaidServer with UNSUPPORTED Client versions:\nTargetServer: {0}  {1}\nClie..."*/,pSVar6,(MethodInfo *)0x0);
    }
    pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
    pSVar7 = pSVar6;
    if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
      pSVar7 = (System_Object_array *)thunk_FUN_01ba7564(KDDOKHLOKMI_TypeInfo);
    }
    pSVar8 = KDDOKHLOKMI__HMOPEPHMMIA((MethodInfo *)pSVar7);
    if (pSVar6 != (System_Object_array *)0x0) {
      if ((pSVar8 != (System_String_o *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pSVar8,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0))
      goto LAB_035afba0;
      if ((int)pSVar6->max_length == 0) goto LAB_035afb98;
      pSVar6->m_Items[0] = (Il2CppObject *)pSVar8;
      thunk_FUN_01c20e04(pSVar6->m_Items,pSVar8);
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar10 = IFAMAAGNCBJ__GPBMELHDADN<object>
                          (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      if ((pIVar10 == (Il2CppObject *)0x0) || (pIVar10[9].monitor == (void *)0x0))
      goto LAB_035afb9c;
      pIVar10 = *(Il2CppObject **)((long)pIVar10[9].monitor + 0x10);
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0)
         ) {
LAB_035afba0:
        uVar13 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar13,0);
      }
      if (1 < (uint)pSVar6->max_length) {
        pSVar6->m_Items[1] = pIVar10;
        thunk_FUN_01c20e04(pSVar6->m_Items + 1,pIVar10);
        local_64 = iVar4;
        pIVar10 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
        if ((pIVar10 != (Il2CppObject *)0x0) &&
           (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar6->obj).klass)->_1).element_class),
           lVar9 == 0)) goto LAB_035afba0;
        if (2 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[2] = pIVar10;
          thunk_FUN_01c20e04(pSVar6->m_Items + 2,pIVar10);
          local_68 = *(undefined4 *)&pIVar5[1].monitor;
          pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (lVar9 = thunk_FUN_01bda71c(pIVar5,(((pSVar6->obj).klass)->_1).element_class),
             lVar9 == 0)) goto LAB_035afba0;
          if (3 < (uint)pSVar6->max_length) {
            pSVar6->m_Items[3] = pIVar5;
            thunk_FUN_01c20e04(pSVar6->m_Items + 3,pIVar5);
            pGVar11 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
            if (pGVar11 == (GCPFDLNAFDF_o *)0x0) goto LAB_035afb9c;
            pGVar14 = pGVar11->klass;
            uVar2._0_1_ = (pGVar14->_2).rank;
            uVar2._1_1_ = (pGVar14->_2).minimumAlignment;
            uVar15 = (ulong)uVar2;
            if (uVar15 != 0) {
              piVar16 = &((pGVar14->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                    (Il2CppClass *)KADDELABILH_TypeInfo) {
                  pVVar12 = pGVar14->vtable + (*piVar16 + 4);
                  goto LAB_035afaac;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            pVVar12 = (VirtualInvokeData *)FUN_01b81914(pGVar11,KADDELABILH_TypeInfo,4);
LAB_035afaac:
            auVar17 = (*pVVar12->methodPtr)(pGVar11,pVVar12->method);
            local_78 = auVar17;
            pIVar5 = (Il2CppObject *)
                     thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                        local_78);
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (lVar9 = thunk_FUN_01bda71c(pIVar5,(((pSVar6->obj).klass)->_1).element_class),
               lVar9 == 0)) goto LAB_035afba0;
            if (4 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[4] = pIVar5;
              thunk_FUN_01c20e04(pSVar6->m_Items + 4,pIVar5);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogWarningFormat(StringLiteral_11553/*"SFSConnection::Login: connecting to RaidServer...\nTargetServer: {0}  {1}\nClient Min version: {2}\nClient Max(Curren..."*/,pSVar6,(MethodInfo *)0x0);
              BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              IMAPABEJECG__CBNFJDHJCNK(BLMFLPJJMPF,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
LAB_035afb98:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_035afb9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LIENGHMEECH(int BMBCPGEOCCJ)  [RVA 0x34AFC64]
// KDPDBGNOFEN$$LIENGHMEECH @ RVA 0x34AFC64

void KDPDBGNOFEN__LIENGHMEECH(KDPDBGNOFEN_o *__this,int32_t BMBCPGEOCCJ,MethodInfo *method)

{
  bool bVar1;
  ACAEKBNCODE_o *pAVar2;
  ONPHBGJDFBM_o *__this_00;
  System_Object_array *args;
  long lVar3;
  Il2CppObject *pIVar4;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_01;
  KEFHDOHHHML_o *JPLEIGKMFDA;
  undefined8 uVar5;
  MethodInfo *method_00;
  System_Action_int__o *pSVar6;
  System_String_o *pSVar7;
  int32_t local_34;
  
  if ((DAT_04568550 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11266/*"Request timeout cmd={0} id={1}"*/);
    FUN_01bab630(&StringLiteral_11549/*"SFS.onRequestTimeout"*/);
    DAT_04568550 = 1;
  }
  pAVar2 = (__this->fields).PGDGCNKLKMN;
  if (pAVar2 != (ACAEKBNCODE_o *)0x0) {
    __this_00 = ACAEKBNCODE__AOPEMKAGCCD(pAVar2,BMBCPGEOCCJ,(MethodInfo *)0x0);
    if (__this_00 == (ONPHBGJDFBM_o *)0x0) {
      return;
    }
    pAVar2 = (__this->fields).PGDGCNKLKMN;
    if (pAVar2 != (ACAEKBNCODE_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      ACAEKBNCODE__MELCGNHNCDA(pAVar2,BMBCPGEOCCJ,false,(MethodInfo *)0x0);
      NFNBHPOJFNJ__KCBJCLNBGAO((__this_00->fields).LKMJHMMBNAO,(MethodInfo *)0x0);
      bVar1 = KDPDBGNOFEN__DNHGHLJMHHH(__this,(__this_00->fields).LKMJHMMBNAO,method_00);
      if (!bVar1) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        if (args == (System_Object_array *)0x0) goto LAB_035afe74;
        pSVar7 = (__this_00->fields).LKMJHMMBNAO;
        if ((pSVar7 != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        {
LAB_035afe7c:
          uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar5,0);
        }
        if ((int)args->max_length == 0) {
LAB_035afe78:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = (Il2CppObject *)pSVar7;
        thunk_FUN_01c20e04(args->m_Items,pSVar7);
        local_34 = BMBCPGEOCCJ;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_035afe7c;
        if ((uint)args->max_length < 2) goto LAB_035afe78;
        args->m_Items[1] = pIVar4;
        thunk_FUN_01c20e04(args->m_Items + 1,pIVar4);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_11266/*"Request timeout cmd={0} id={1}"*/,args,(MethodInfo *)0x0);
      }
      __this_01 = (__this->fields).DDBFMMHDCBK;
      if (__this_01 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
        JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                  ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_01,9,(Il2CppObject *)0x0,
                   Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
        JPLEIGKMFDA = KEFHDOHHHML__LDKCIHHCHCE
                                ((__this_00->fields).LKMJHMMBNAO,BMBCPGEOCCJ,
                                 (__this_00->fields).KOANCCDDBDA,StringLiteral_11549/*"SFS.onRequestTimeout"*/,
                                 (MethodInfo *)0x0);
        ONPHBGJDFBM__HCBAKFNPGDN(__this_00,JPLEIGKMFDA,(MethodInfo *)0x0);
        pSVar6 = (__this->fields).NDNBEBJGGPF;
        if (pSVar6 != (System_Action_int__o *)0x0) {
          (*(code *)(pSVar6->fields).super.super.invoke_impl)
                    ((pSVar6->fields).super.super.method_code,BMBCPGEOCCJ,
                     (pSVar6->fields).super.super.method);
          return;
        }
      }
    }
  }
LAB_035afe74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GAMDBBJFLCO(BaseEvent ICLHKEAILDM)  [RVA 0x34AFE88]
// KDPDBGNOFEN$$GAMDBBJFLCO @ RVA 0x34AFE88

void KDPDBGNOFEN__GAMDBBJFLCO
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *ICLHKEAILDM,MethodInfo *method)

{
  KDPDBGNOFEN_o *__this_00;
  System_String_o *pSVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  
  if ((DAT_04568551 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_15574/*"[SFS2X Debug] "*/);
    DAT_04568551 = 1;
  }
  __this_00 = (KDPDBGNOFEN_o *)
              (*(__this->klass->vtable)._7_AAOJINBEIFF.methodPtr)
                        (__this,(__this->klass->vtable)._7_AAOJINBEIFF.method);
  if (((ulong)__this_00 & 1) == 0) {
    return;
  }
  pSVar1 = KDPDBGNOFEN__NAGMMNGLGAI(__this_00,ICLHKEAILDM,method);
  pSVar1 = System_String__Concat(StringLiteral_15574/*"[SFS2X Debug] "*/,pSVar1,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)BBBLOLJAMJP->max_length != 0) {
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Log(pSVar1,BBBLOLJAMJP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private void LLCONNGHGKD()  [RVA 0x34AFF58]
// KDPDBGNOFEN$$LLCONNGHGKD @ RVA 0x34AFF58

void KDPDBGNOFEN__LLCONNGHGKD(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  Sfs2X_SmartFox_o *__this_00;
  
  __this_00 = (__this->fields).EBJCMEOKKOK;
  if (__this_00 != (Sfs2X_SmartFox_o *)0x0) {
    Sfs2X_SmartFox__ProcessEvents(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== protected virtual bool AAOJINBEIFF()  [RVA 0x34AFF6C]
// KDPDBGNOFEN$$AAOJINBEIFF @ RVA 0x34AFF6C

bool KDPDBGNOFEN__AAOJINBEIFF(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  return false;
}


// ===== private void BDIMFLJMEBL(bool CJNHFNHJHPE)  [RVA 0x34AFF74]
// KDPDBGNOFEN$$BDIMFLJMEBL @ RVA 0x34AFF74

void KDPDBGNOFEN__BDIMFLJMEBL(KDPDBGNOFEN_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._KKNAFGJEFJG_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void DFINCBCDDKJ(BaseEvent JPLEIGKMFDA)  [RVA 0x34AFF80]
// KDPDBGNOFEN$$DFINCBCDDKJ @ RVA 0x34AFF80

/* WARNING: Removing unreachable block (ram,0x035b04c0) */

void KDPDBGNOFEN__DFINCBCDDKJ
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  int32_t CEOLOKFCKIG;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int32_t OGPGLGPMEPD;
  Il2CppMethodPointer *ppIVar5;
  System_String_o *pSVar6;
  Sfs2X_Entities_Data_SFSObject_o *AIHDHHOFOMB;
  FLBBKMOHIOG_o *__this_00;
  JCPHJPJJLCK_o *pJVar7;
  System_Type_o *left;
  long lVar8;
  System_Type_o *right;
  HCKCBFOGMMJ_o *pHVar9;
  IKCANHIFLGJ_o *__this_01;
  ACAEKBNCODE_o *pAVar10;
  ONPHBGJDFBM_o *__this_02;
  KEFHDOHHHML_o *__this_03;
  System_String_o *pSVar11;
  MOEEMFAHGPL_string__o *__this_04;
  DCHAJIMIFHP_o *__this_05;
  System_String_o *str2;
  System_Exception_o *__this_06;
  undefined8 uVar12;
  System_Collections_Hashtable_c *pSVar13;
  System_Action_int__o *pSVar14;
  ulong uVar15;
  int32_t *piVar16;
  System_Collections_Hashtable_o *pSVar17;
  Google_Protobuf_IMessage_o *IKKAMAMLIKA;
  System_Byte_array *LLAICPOILGF;
  MethodInfo *method_00;
  Il2CppObject *IMMNELPBGIF;
  int32_t local_54;
  
  if ((DAT_04568552 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    FUN_01bab630(&System_Collections_IDictionary_TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<string>,_string>_FLOAPDCEIDB__);
    FUN_01bab630(&KEFHDOHHHML_TypeInfo);
    FUN_01bab630(&Sfs2X_Entities_Data_SFSObject_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_11852/*"Server Response"*/);
    FUN_01bab630(&StringLiteral_16576/*"b"*/);
    FUN_01bab630(&StringLiteral_20761/*"session_request_id:"*/);
    FUN_01bab630(&StringLiteral_17100/*"cmd"*/);
    FUN_01bab630(&StringLiteral_20152/*"params"*/);
    FUN_01bab630(&StringLiteral_18911/*"id"*/);
    DAT_04568552 = 1;
  }
  uVar12 = StringLiteral_17100/*"cmd"*/;
  local_54 = 0;
  if ((JPLEIGKMFDA == (Sfs2X_Core_BaseEvent_o *)0x0) ||
     (pSVar17 = (JPLEIGKMFDA->fields).arguments, pSVar17 == (System_Collections_Hashtable_o *)0x0))
  goto LAB_035b0870;
  pSVar13 = pSVar17->klass;
  uVar2._0_1_ = (pSVar13->_2).rank;
  uVar2._1_1_ = (pSVar13->_2).minimumAlignment;
  uVar15 = (ulong)uVar2;
  if (uVar15 != 0) {
    piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_IDictionary_TypeInfo) {
        ppIVar5 = &(&(pSVar13->vtable)._0_Equals)[*piVar16].methodPtr;
        goto LAB_035b00cc;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  ppIVar5 = (Il2CppMethodPointer *)FUN_01b81914(pSVar17,System_Collections_IDictionary_TypeInfo,0);
LAB_035b00cc:
  pSVar6 = (System_String_o *)(**ppIVar5)(pSVar17,uVar12,(MethodInfo *)ppIVar5[1]);
  uVar12 = StringLiteral_20152/*"params"*/;
  if ((pSVar6 != (System_String_o *)0x0) && (pSVar6->klass != string_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(pSVar6);
  }
  pSVar17 = (JPLEIGKMFDA->fields).arguments;
  if (pSVar17 == (System_Collections_Hashtable_o *)0x0) goto LAB_035b0870;
  pSVar13 = pSVar17->klass;
  uVar3._0_1_ = (pSVar13->_2).rank;
  uVar3._1_1_ = (pSVar13->_2).minimumAlignment;
  uVar15 = (ulong)uVar3;
  if (uVar15 != 0) {
    piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_IDictionary_TypeInfo) {
        ppIVar5 = &(&(pSVar13->vtable)._0_Equals)[*piVar16].methodPtr;
        goto LAB_035b015c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  ppIVar5 = (Il2CppMethodPointer *)FUN_01b81914(pSVar17,System_Collections_IDictionary_TypeInfo,0);
LAB_035b015c:
  AIHDHHOFOMB = (Sfs2X_Entities_Data_SFSObject_o *)
                (**ppIVar5)(pSVar17,uVar12,(MethodInfo *)ppIVar5[1]);
  if (AIHDHHOFOMB != (Sfs2X_Entities_Data_SFSObject_o *)0x0) {
    bVar1 = (Sfs2X_Entities_Data_SFSObject_TypeInfo->_2).naturalAligment;
    if (((AIHDHHOFOMB->klass->_2).naturalAligment < bVar1) ||
       ((AIHDHHOFOMB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Sfs2X_Entities_Data_SFSObject_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AIHDHHOFOMB);
    }
  }
  __this_00 = (__this->fields).KPDFPANJBJB;
  if (__this_00 == (FLBBKMOHIOG_o *)0x0) goto LAB_035b0870;
  pJVar7 = FLBBKMOHIOG__MJJIIFENDHL(__this_00,AIHDHHOFOMB,(MethodInfo *)0x0);
  if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ICOEHFKOMGO_TypeInfo);
  }
  left = ICOEHFKOMGO__AAANKDGBOKJ(pSVar6,(MethodInfo *)0x0);
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo);
  }
  bVar4 = System_Type__op_Equality(left,(System_Type_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if (pJVar7 == (JCPHJPJJLCK_o *)0x0) goto LAB_035b0870;
  if ((pJVar7->fields).ODECJNJDMPF == 0) {
    if ((AIHDHHOFOMB == (Sfs2X_Entities_Data_SFSObject_o *)0x0) ||
       (lVar8 = (*(AIHDHHOFOMB->klass->vtable)._37_GetByteArray.methodPtr)
                          (AIHDHHOFOMB,StringLiteral_16576/*"b"*/,
                           (AIHDHHOFOMB->klass->vtable)._37_GetByteArray.method), lVar8 == 0)) {
LAB_035b02b8:
      right = JLAHCMDABIM__JKNEODPGLPM((MethodInfo *)0x0);
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = System_Type__op_Inequality(left,right,(MethodInfo *)0x0);
      if (bVar4) {
        if (left == (System_Type_o *)0x0) {
          pSVar6 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_12525/*"Such type"*/);
          pSVar11 = (System_String_o *)0x0;
        }
        else {
          pSVar6 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_12525/*"Such type"*/);
          pSVar11 = (System_String_o *)
                    (*(left->klass->vtable)._3_ToString.methodPtr)
                              (left,(left->klass->vtable)._3_ToString.method);
        }
        str2 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_21005/*"should have an IMessage command"*/);
        pSVar6 = System_String__Concat(pSVar6,pSVar11,str2,(MethodInfo *)0x0);
        thunk_FUN_01bb9178(&System_Exception_TypeInfo);
        __this_06 = (System_Exception_o *)thunk_FUN_01bda818();
        System_Exception___ctor(__this_06,pSVar6,(MethodInfo *)0x0);
        uVar12 = thunk_FUN_01bb9178(&Method_KDPDBGNOFEN_DFINCBCDDKJ__);
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(__this_06,uVar12);
      }
      IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
    }
    else {
      LLAICPOILGF = *(System_Byte_array **)(lVar8 + 0x10);
      if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(ICOEHFKOMGO_TypeInfo);
      }
      bVar4 = ICOEHFKOMGO__PMEDJDGCDIN(pSVar6,(MethodInfo *)0x0);
      if (bVar4) {
        LLAICPOILGF = (System_Byte_array *)
                      (*(__this->klass->vtable)._10_MIEEHIBEMNH.methodPtr)
                                (__this,pSVar6,LLAICPOILGF,
                                 (__this->klass->vtable)._10_MIEEHIBEMNH.method);
      }
      IKKAMAMLIKA = CIGGKLMOMJN__GIGMOMOGDAC(LLAICPOILGF,left,(MethodInfo *)0x0);
      if (IKKAMAMLIKA == (Google_Protobuf_IMessage_o *)0x0) goto LAB_035b02b8;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pHVar9 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    if (pHVar9 == (HCKCBFOGMMJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = (pHVar9->fields).HDPMNCIAOFO;
    if (__this_01 == (IKCANHIFLGJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IKCANHIFLGJ__KNANFMMEGHO(__this_01,IKKAMAMLIKA,left,(MethodInfo *)0x0);
  }
  else {
    IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
  }
  if (AIHDHHOFOMB != (Sfs2X_Entities_Data_SFSObject_o *)0x0) {
    bVar4 = Sfs2X_Entities_Data_SFSObject__ContainsKey
                      (AIHDHHOFOMB,StringLiteral_18911/*"id"*/,(MethodInfo *)0x0);
    if (bVar4) {
      OGPGLGPMEPD = (*(AIHDHHOFOMB->klass->vtable)._34_GetInt.methodPtr)
                              (AIHDHHOFOMB,StringLiteral_18911/*"id"*/,
                               (AIHDHHOFOMB->klass->vtable)._34_GetInt.method);
    }
    else {
      OGPGLGPMEPD = -1;
    }
    pAVar10 = (__this->fields).PGDGCNKLKMN;
    local_54 = OGPGLGPMEPD;
    if (pAVar10 != (ACAEKBNCODE_o *)0x0) {
      __this_02 = ACAEKBNCODE__AOPEMKAGCCD(pAVar10,OGPGLGPMEPD,(MethodInfo *)0x0);
      pAVar10 = (__this->fields).PGDGCNKLKMN;
      if (pAVar10 != (ACAEKBNCODE_o *)0x0) {
        ACAEKBNCODE__MELCGNHNCDA(pAVar10,OGPGLGPMEPD,true,(MethodInfo *)0x0);
        CEOLOKFCKIG = (pJVar7->fields).ODECJNJDMPF;
        method_00 = (MethodInfo *)(pJVar7->fields).EBCALIJLIFB;
        if (__this_02 == (ONPHBGJDFBM_o *)0x0) {
          IMMNELPBGIF = (Il2CppObject *)0x0;
        }
        else {
          IMMNELPBGIF = (__this_02->fields).KOANCCDDBDA;
        }
        __this_03 = (KEFHDOHHHML_o *)thunk_FUN_01bda818(KEFHDOHHHML_TypeInfo);
        KEFHDOHHHML___ctor(__this_03,pSVar6,IKKAMAMLIKA,CEOLOKFCKIG,(System_String_o *)method_00,
                           OGPGLGPMEPD,IMMNELPBGIF,(MethodInfo *)0x0);
        if (OGPGLGPMEPD == -1) {
          KDPDBGNOFEN__DALMFMJBAOJ(__this,pSVar6,left,IKKAMAMLIKA,method_00);
          __this_04 = (__this->fields).LECCKLBDCEN;
          if (((__this_04 != (MOEEMFAHGPL_string__o *)0x0) &&
              (JGGEJJLPMNL<object,_object>__FLOAPDCEIDB
                         ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_04,(Il2CppObject *)pSVar6,
                          (Il2CppObject *)__this_03,
                          Method_JGGEJJLPMNL<MDOKGPFICNK<string>,_string>_FLOAPDCEIDB__),
              __this_03 != (KEFHDOHHHML_o *)0x0)) &&
             (__this_05 = (__this->fields).FNHOHLGNHGN, __this_05 != (DCHAJIMIFHP_o *)0x0)) {
            DCHAJIMIFHP__MJKJHFHHFNG
                      (__this_05,(__this_03->fields)._GOBNFBDNIHO_k__BackingField,__this_03,
                       (MethodInfo *)0x0);
            return;
          }
        }
        else {
          if (__this_02 == (ONPHBGJDFBM_o *)0x0) {
            return;
          }
          ONPHBGJDFBM__DCLABJGIAIG(__this_02,(MethodInfo *)0x0);
          pSVar11 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
          pSVar11 = System_String__Concat(StringLiteral_20761/*"session_request_id:"*/,pSVar11,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._5_CHMEICFBNAK.methodPtr)
                    (__this,StringLiteral_11852/*"Server Response"*/,pSVar6,pSVar11,left,IKKAMAMLIKA,
                     (__this->klass->vtable)._5_CHMEICFBNAK.method);
          ONPHBGJDFBM__HCBAKFNPGDN(__this_02,__this_03,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._11_AGODKOENJLC.methodPtr)
                    (__this,__this_03,(__this->klass->vtable)._11_AGODKOENJLC.method);
          if (__this_03 != (KEFHDOHHHML_o *)0x0) {
            KEFHDOHHHML__BOJJBGPIKDP(__this_03,(MethodInfo *)0x0);
            KEFHDOHHHML__LLJAPEFCDLD(__this_03,(MethodInfo *)0x0);
            pSVar14 = (__this->fields).NDNBEBJGGPF;
            if (pSVar14 != (System_Action_int__o *)0x0) {
              (*(code *)(pSVar14->fields).super.super.invoke_impl)
                        ((pSVar14->fields).super.super.method_code,local_54,
                         (pSVar14->fields).super.super.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_035b0870:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DAPKKEHIHAL(bool CJNHFNHJHPE)  [RVA 0x34B08B8]
// KDPDBGNOFEN$$DAPKKEHIHAL @ RVA 0x34B08B8

void KDPDBGNOFEN__DAPKKEHIHAL(KDPDBGNOFEN_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 035b08bc to 036b08cb has its CatchHandler @ 035b0b30 */
  (__this->fields)._MGGBEPKMPCF_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public virtual void IKAAFAICDMD(Action<KEFHDOHHHML> BLMFLPJJMPF)  [RVA 0x34B08C4]
// KDPDBGNOFEN$$IKAAFAICDMD @ RVA 0x34B08C4

void KDPDBGNOFEN__IKAAFAICDMD
               (KDPDBGNOFEN_o *__this,System_Action_KEFHDOHHHML__o *BLMFLPJJMPF,MethodInfo *method)

{
  ACAEKBNCODE_o *__this_00;
  
                    /* try { // try from 035b08d8 to 036b08df has its CatchHandler @ 035b0b18 */
  if ((DAT_04568553 & 1) == 0) {
    FUN_01bab630(&Method_ACAEKBNCODE_IKAAFAICDMD<Action<KEFHDOHHHML>>__);
    DAT_04568553 = 1;
  }
  __this_00 = (__this->fields).PGDGCNKLKMN;
  if (__this_00 != (ACAEKBNCODE_o *)0x0) {
    ACAEKBNCODE__IKAAFAICDMD<object>
              (__this_00,(Il2CppObject *)BLMFLPJJMPF,
               Method_ACAEKBNCODE_IKAAFAICDMD<Action<KEFHDOHHHML>>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035b0918 to 036b0953 has its CatchHandler @ 035b0b34 */
  FUN_01bab8c8();
}


// ===== public virtual void IKAAFAICDMD(object ANGBPBINHBL)  [RVA 0x34B091C]
// KDPDBGNOFEN$$IKAAFAICDMD @ RVA 0x34B091C

void KDPDBGNOFEN__IKAAFAICDMD(KDPDBGNOFEN_o *__this,Il2CppObject *ANGBPBINHBL,MethodInfo *method)

{
  ACAEKBNCODE_o *__this_00;
  
  if ((DAT_04568554 & 1) == 0) {
    FUN_01bab630(&Method_ACAEKBNCODE_IKAAFAICDMD<object>__);
    DAT_04568554 = 1;
  }
  __this_00 = (__this->fields).PGDGCNKLKMN;
  if (__this_00 != (ACAEKBNCODE_o *)0x0) {
                    /* try { // try from 035b095c to 036b0963 has its CatchHandler @ 035b0b28 */
    ACAEKBNCODE__IKAAFAICDMD<object>(__this_00,ANGBPBINHBL,Method_ACAEKBNCODE_IKAAFAICDMD<object>__)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035b0970 to 036b0977 has its CatchHandler @ 035b0aec */
  FUN_01bab8c8();
}


// ===== protected virtual byte[] MIEEHIBEMNH(string CELOLGNMKCG, byte[] MMEEMFOLKPP)  [RVA 0x34B0974]
// KDPDBGNOFEN$$MIEEHIBEMNH @ RVA 0x34B0974

System_Byte_array *
KDPDBGNOFEN__MIEEHIBEMNH
          (KDPDBGNOFEN_o *__this,System_String_o *CELOLGNMKCG,System_Byte_array *MMEEMFOLKPP,
          MethodInfo *method)

{
  return MMEEMFOLKPP;
}


// ===== private void NEMMLKGAOFE(BaseEvent JPLEIGKMFDA)  [RVA 0x34B097C]
// KDPDBGNOFEN$$NEMMLKGAOFE @ RVA 0x34B097C

void KDPDBGNOFEN__NEMMLKGAOFE
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_00;
  
                    /* try { // try from 035b0998 to 036b09a7 has its CatchHandler @ 035b0b24 */
  if ((DAT_04568555 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&StringLiteral_11558/*"SFSConnection::OnLogin"*/);
                    /* try { // try from 035b09c0 to 036b09c7 has its CatchHandler @ 035b0b08 */
    DAT_04568555 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
                    /* try { // try from 035b09e0 to 036b0a0b has its CatchHandler @ 035b0b38 */
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11558/*"SFSConnection::OnLogin"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    __this_00 = (__this->fields).DDBFMMHDCBK;
    (__this->fields)._KKNAFGJEFJG_k__BackingField = true;
    if (__this_00 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                    /* try { // try from 035b0a14 to 036b0a1f has its CatchHandler @ 035b0b00 */
                    /* try { // try from 035b0a20 to 036b0aaf has its CatchHandler @ 035b05ec */
      JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_00,5,(Il2CppObject *)0x0,
                 Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DBGOOIBNDEJ(string[] EPJCOLABPBC)  [RVA 0x34B0A38]
// KDPDBGNOFEN$$DBGOOIBNDEJ @ RVA 0x34B0A38

void KDPDBGNOFEN__DBGOOIBNDEJ
               (KDPDBGNOFEN_o *__this,System_String_array *EPJCOLABPBC,MethodInfo *method)

{
  (__this->fields).DHBJBCIMDBB = EPJCOLABPBC;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected virtual void AGODKOENJLC(KEFHDOHHHML JPLEIGKMFDA)  [RVA 0x34B0A40]
// KDPDBGNOFEN$$AGODKOENJLC @ RVA 0x34B0A40

void KDPDBGNOFEN__AGODKOENJLC(KDPDBGNOFEN_o *__this,KEFHDOHHHML_o *JPLEIGKMFDA,MethodInfo *method)

{
  return;
}


// ===== private string NAGMMNGLGAI(BaseEvent ICLHKEAILDM)  [RVA 0x34AE054]
// KDPDBGNOFEN$$NAGMMNGLGAI @ RVA 0x34AE054

System_String_o *
KDPDBGNOFEN__NAGMMNGLGAI
          (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *ICLHKEAILDM,MethodInfo *method)

{
  ushort uVar1;
  System_String_o *pSVar2;
  undefined8 uVar3;
  bool bVar4;
  int32_t length;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  System_String_o *pSVar7;
  System_String_array *values;
  System_Collections_Hashtable_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_Hashtable_o *pSVar11;
  
  if ((DAT_04568556 & 1) == 0) {
    FUN_01bab630(&System_Collections_IDictionary_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_16698/*"binary data stripped"*/);
    FUN_01bab630(&StringLiteral_329/*" ["*/);
    FUN_01bab630(&StringLiteral_3479/*"Binary"*/);
    FUN_01bab630(&StringLiteral_585/*" | message = "*/);
    FUN_01bab630(&StringLiteral_19658/*"message"*/);
    __this = (KDPDBGNOFEN_o *)FUN_01bab630(&StringLiteral_15775/*"]"*/);
    DAT_04568556 = 1;
  }
  uVar3 = StringLiteral_19658/*"message"*/;
  if ((ICLHKEAILDM != (Sfs2X_Core_BaseEvent_o *)0x0) &&
     (pSVar11 = (ICLHKEAILDM->fields).arguments, pSVar11 != (System_Collections_Hashtable_o *)0x0))
  {
    pSVar8 = pSVar11->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IDictionary_TypeInfo) {
          pVVar5 = &(pSVar8->vtable)._0_Equals + *piVar10;
          goto LAB_035ae148;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar11,System_Collections_IDictionary_TypeInfo,0);
LAB_035ae148:
    plVar6 = (long *)(*pVVar5->methodPtr)(pSVar11,uVar3,pVVar5->method);
    __this = (KDPDBGNOFEN_o *)0x0;
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)
               (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      __this = (KDPDBGNOFEN_o *)0x0;
      if (pSVar7 != (System_String_o *)0x0) {
        bVar4 = System_String__Contains(pSVar7,StringLiteral_3479/*"Binary"*/,(MethodInfo *)0x0);
        if ((!bVar4) ||
           (length = System_String__IndexOf(pSVar7,10,(MethodInfo *)0x0),
           pSVar2 = StringLiteral_16698/*"binary data stripped"*/, length < 1)) {
          pSVar7 = System_String__Concat
                             ((ICLHKEAILDM->fields).type,StringLiteral_585/*" | message = "*/,pSVar7,(MethodInfo *)0x0)
          ;
          return pSVar7;
        }
        values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
        __this = (KDPDBGNOFEN_o *)0x0;
        if (values != (System_String_array *)0x0) {
          if ((int)values->max_length != 0) {
            values->m_Items[0] = (ICLHKEAILDM->fields).type;
            thunk_FUN_01c20e04(values->m_Items);
            if (1 < (uint)values->max_length) {
              values->m_Items[1] = StringLiteral_585/*" | message = "*/;
              thunk_FUN_01c20e04(values->m_Items + 1);
              pSVar7 = System_String__Substring(pSVar7,0,length,(MethodInfo *)0x0);
              if (2 < (uint)values->max_length) {
                values->m_Items[2] = pSVar7;
                thunk_FUN_01c20e04(values->m_Items + 2,pSVar7);
                if (3 < (uint)values->max_length) {
                  values->m_Items[3] = StringLiteral_329/*" ["*/;
                  thunk_FUN_01c20e04(values->m_Items + 3);
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = pSVar2;
                    thunk_FUN_01c20e04(values->m_Items + 4,pSVar2);
                    if (5 < (uint)values->max_length) {
                      values->m_Items[5] = StringLiteral_15775/*"]"*/;
                      thunk_FUN_01c20e04();
                      pSVar7 = System_String__Concat(values,(MethodInfo *)0x0);
                      return pSVar7;
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void AKEKGJAFBOC(BaseEvent JPLEIGKMFDA)  [RVA 0x34B0A44]
// KDPDBGNOFEN$$AKEKGJAFBOC @ RVA 0x34B0A44

void KDPDBGNOFEN__AKEKGJAFBOC
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568557 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&StringLiteral_11556/*"SFSConnection::OnConnectionLost"*/);
    DAT_04568557 = 1;
    JPLEIGKMFDA = (Sfs2X_Core_BaseEvent_o *)extraout_x1;
  }
  KDPDBGNOFEN__IMLDFGHHMND(__this,(MethodInfo *)JPLEIGKMFDA);
  NFNBHPOJFNJ__KCBJCLNBGAO(1,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
                    /* try { // try from 035b0ab0 to 036b0ab3 has its CatchHandler @ 035b0b20 */
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
                    /* try { // try from 035b0ab4 to 036b0ab7 has its CatchHandler @ 035b0b1c */
                    /* try { // try from 035b0ab8 to 036b0abb has its CatchHandler @ 035b0b14 */
                    /* try { // try from 035b0abc to 036b0abf has its CatchHandler @ 035b0b10 */
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035b09c0 with catch @ 035b0b08 */
      FUN_01bab8d0();
    }
                    /* try { // try from 035b0ac0 to 036b0ac3 has its CatchHandler @ 035b0b0c */
                    /* try { // try from 035b0ac4 to 036b0ac7 has its CatchHandler @ 035b0b04 */
                    /* try { // try from 035b0ac8 to 036b0acb has its CatchHandler @ 035b0afc */
                    /* try { // try from 035b0acc to 036b0acf has its CatchHandler @ 035b0af8 */
    BBBLOLJAMJP->m_Items[0] = 6;
                    /* try { // try from 035b0ad0 to 036b0ad3 has its CatchHandler @ 035b0af4 */
                    /* try { // try from 035b0ad4 to 036b0ad7 has its CatchHandler @ 035b0af0 */
                    /* try { // try from 035b0ad8 to 036b0adb has its CatchHandler @ 035b05ec */
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11556/*"SFSConnection::OnConnectionLost"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
                    /* try { // try from 035b0adc to 036b0adf has its CatchHandler @ 035b0ae8 */
    __this_00 = (__this->fields).DDBFMMHDCBK;
                    /* try { // try from 035b0ae0 to 036b0b4f has its CatchHandler @ 035b05ec */
    if (__this_00 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                    /* catch() { ... } // from try @ 035b0adc with catch @ 035b0ae8 */
                    /* catch() { ... } // from try @ 035b0970 with catch @ 035b0aec */
                    /* catch() { ... } // from try @ 035b0ad4 with catch @ 035b0af0 */
                    /* catch() { ... } // from try @ 035b0ad0 with catch @ 035b0af4 */
                    /* catch() { ... } // from try @ 035b0acc with catch @ 035b0af8 */
                    /* catch() { ... } // from try @ 035b0ac8 with catch @ 035b0afc */
                    /* catch() { ... } // from try @ 035b0a14 with catch @ 035b0b00 */
      JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_00,2,(Il2CppObject *)0x0,
                 Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035b0ac4 with catch @ 035b0b04 */
  FUN_01bab8c8();
}


// ===== private void IEBAGEPBOBB(BaseEvent JPLEIGKMFDA)  [RVA 0x34B0B0C]
// KDPDBGNOFEN$$IEBAGEPBOBB @ RVA 0x34B0B0C

void KDPDBGNOFEN__IEBAGEPBOBB
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_00;
  
                    /* catch() { ... } // from try @ 035b0ac0 with catch @ 035b0b0c */
                    /* catch() { ... } // from try @ 035b0abc with catch @ 035b0b10 */
                    /* catch() { ... } // from try @ 035b0ab8 with catch @ 035b0b14 */
                    /* catch() { ... } // from try @ 035b08d8 with catch @ 035b0b18 */
                    /* catch() { ... } // from try @ 035b0ab4 with catch @ 035b0b1c */
                    /* catch() { ... } // from try @ 035b0ab0 with catch @ 035b0b20 */
                    /* catch() { ... } // from try @ 035b0998 with catch @ 035b0b24 */
                    /* catch() { ... } // from try @ 035b095c with catch @ 035b0b28 */
  if ((DAT_04568558 & 1) == 0) {
                    /* catch() { ... } // from try @ 035b0884 with catch @ 035b0b2c */
                    /* catch() { ... } // from try @ 035b08bc with catch @ 035b0b30 */
                    /* catch() { ... } // from try @ 035b0918 with catch @ 035b0b34 */
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
                    /* catch() { ... } // from try @ 035b09e0 with catch @ 035b0b38 */
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&StringLiteral_11562/*"SFSConnection::OnRoomJoinError"*/);
                    /* try { // try from 035b0b50 to 036b0b53 has its CatchHandler @ 035b0b60 */
    DAT_04568558 = 1;
  }
                    /* catch() { ... } // from try @ 035b0b50 with catch @ 035b0b60 */
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11562/*"SFSConnection::OnRoomJoinError"*/,BBBLOLJAMJP,(MethodInfo *)0x0);
    __this_00 = (__this->fields).DDBFMMHDCBK;
    if (__this_00 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                    /* try { // try from 035b0ba0 to 036b0bc7 has its CatchHandler @ 035b0bdc */
      JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_00,8,(Il2CppObject *)0x0,
                 Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void .ctor()  [RVA 0x34B0BC0]
// KDPDBGNOFEN$$.ctor @ RVA 0x34B0BC0

void KDPDBGNOFEN___ctor(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  DCHAJIMIFHP_o *__this_00;
  FLBBKMOHIOG_o *__this_01;
  FLBBKMOHIOG_o **ppFVar1;
  ACAEKBNCODE_o *__this_02;
  ACAEKBNCODE_o **ppAVar2;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_03;
  MOEEMFAHGPL_PEDENGEGDNI__o **ppMVar3;
  MOEEMFAHGPL_string__o *__this_04;
  MOEEMFAHGPL_string__o **ppMVar4;
  System_Action_int__o **ppSVar5;
  System_Action_o *CJNHFNHJHPE;
  System_Func_string__float__o **ppSVar6;
  MethodInfo *extraout_x1;
  System_Action_int__o *pSVar7;
  System_Func_string__float__o *pSVar8;
  
                    /* try { // try from 035b0bc8 to 036b0bd3 has its CatchHandler @ 035b05ec */
                    /* try { // try from 035b0bd4 to 036b0bdb has its CatchHandler @ 035b0bdc */
                    /* catch() { ... } // from try @ 035b0ba0 with catch @ 035b0bdc
                       catch() { ... } // from try @ 035b0bd4 with catch @ 035b0bdc */
  if ((DAT_04568559 & 1) == 0) {
    FUN_01bab630(&ACAEKBNCODE_TypeInfo);
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&DCHAJIMIFHP_TypeInfo);
    FUN_01bab630(&FLBBKMOHIOG_TypeInfo);
    FUN_01bab630(&System_Func<string,_float>_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_KDPDBGNOFEN_LLCONNGHGKD__);
    FUN_01bab630(&Method_MOEEMFAHGPL<PEDENGEGDNI>__ctor__);
    FUN_01bab630(&Method_MOEEMFAHGPL<string>__ctor__);
    FUN_01bab630(&MOEEMFAHGPL<string>_TypeInfo);
    FUN_01bab630(&MOEEMFAHGPL<PEDENGEGDNI>_TypeInfo);
    FUN_01bab630(&Method_KDPDBGNOFEN_<>c_CAMMODJJDJE__);
    FUN_01bab630(&Method_KDPDBGNOFEN_<>c_JCJGEMKOHCI__);
    FUN_01bab630(&KDPDBGNOFEN_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_20956/*"sf2-sfs-lobby"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568559 = 1;
    method = extraout_x1;
  }
  __this_00 = (DCHAJIMIFHP_o *)thunk_FUN_01bda818(DCHAJIMIFHP_TypeInfo,method);
  DCHAJIMIFHP___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).FNHOHLGNHGN = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (FLBBKMOHIOG_o *)thunk_FUN_01bda818(FLBBKMOHIOG_TypeInfo);
  FLBBKMOHIOG___ctor(__this_01,(MethodInfo *)0x0);
  ppFVar1 = &(__this->fields).KPDFPANJBJB;
  *ppFVar1 = __this_01;
  thunk_FUN_01c20e04(ppFVar1,__this_01);
  __this_02 = (ACAEKBNCODE_o *)thunk_FUN_01bda818(ACAEKBNCODE_TypeInfo);
  ACAEKBNCODE___ctor(__this_02,(MethodInfo *)0x0);
  ppAVar2 = &(__this->fields).PGDGCNKLKMN;
  *ppAVar2 = __this_02;
  thunk_FUN_01c20e04(ppAVar2,__this_02);
  __this_03 = (MOEEMFAHGPL_PEDENGEGDNI__o *)thunk_FUN_01bda818(MOEEMFAHGPL<PEDENGEGDNI>_TypeInfo);
  MOEEMFAHGPL<Int32Enum>___ctor
            ((MOEEMFAHGPL_TEventType__o *)__this_03,Method_MOEEMFAHGPL<PEDENGEGDNI>__ctor__);
  ppMVar3 = &(__this->fields).DDBFMMHDCBK;
  *ppMVar3 = __this_03;
  thunk_FUN_01c20e04(ppMVar3,__this_03);
  __this_04 = (MOEEMFAHGPL_string__o *)thunk_FUN_01bda818(MOEEMFAHGPL<string>_TypeInfo);
  MOEEMFAHGPL<object>___ctor
            ((MOEEMFAHGPL_TEventType__o *)__this_04,Method_MOEEMFAHGPL<string>__ctor__);
  ppMVar4 = &(__this->fields).LECCKLBDCEN;
  *ppMVar4 = __this_04;
  thunk_FUN_01c20e04(ppMVar4,__this_04);
  if ((KDPDBGNOFEN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar7 = KDPDBGNOFEN_<>c_TypeInfo->static_fields->__9__33_1;
  if (pSVar7 == (System_Action_int__o *)0x0) {
    if ((KDPDBGNOFEN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
    System_Action<int>___ctor();
    ppSVar5 = &KDPDBGNOFEN_<>c_TypeInfo->static_fields->__9__33_1;
    *ppSVar5 = pSVar7;
    thunk_FUN_01c20e04(ppSVar5,pSVar7);
  }
  ppSVar5 = &(__this->fields).NDNBEBJGGPF;
  *ppSVar5 = pSVar7;
  thunk_FUN_01c20e04(ppSVar5,pSVar7);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).GNHILLNIKJJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).CEOPOBGHGPD = 0;
  (__this->fields).PGADIBFBJCJ = 0;
  (__this->fields).LHBDPNOCKHG = StringLiteral_20956/*"sf2-sfs-lobby"*/;
  thunk_FUN_01c20e04();
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnUpdate(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((KDPDBGNOFEN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = KDPDBGNOFEN_<>c_TypeInfo->static_fields->__9__33_0;
  if (pSVar8 == (System_Func_string__float__o *)0x0) {
    if ((KDPDBGNOFEN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = (System_Func_string__float__o *)thunk_FUN_01bda818(System_Func<string,_float>_TypeInfo)
    ;
    System_Func<object,_float>___ctor();
    ppSVar6 = &KDPDBGNOFEN_<>c_TypeInfo->static_fields->__9__33_0;
    *ppSVar6 = pSVar8;
    thunk_FUN_01c20e04(ppSVar6,pSVar8);
  }
  ppSVar6 = &(__this->fields).MOACHOFFNCO;
  *ppSVar6 = pSVar8;
  thunk_FUN_01c20e04(ppSVar6,pSVar8);
  return;
}


// ===== private KEFHDOHHHML NEDONAJNFHE(int CEOLOKFCKIG, string NONPLOOOOAG)  [RVA 0x34AF358]
// KDPDBGNOFEN$$NEDONAJNFHE @ RVA 0x34AF358

KEFHDOHHHML_o *
KDPDBGNOFEN__NEDONAJNFHE
          (KDPDBGNOFEN_o *__this,int32_t CEOLOKFCKIG,System_String_o *NONPLOOOOAG,MethodInfo *method
          )

{
  System_String_o *KGLJICLJHEL;
  KEFHDOHHHML_o *__this_00;
  System_Enum_o local_48;
  undefined4 local_38;
  
                    /* try { // try from 035af37c to 036af44f has its CatchHandler @ 035af37c
                       catch() { ... } // from try @ 035af37c with catch @ 035af37c
                       catch() { ... } // from try @ 035af4a4 with catch @ 035af37c
                       catch() { ... } // from try @ 035af4d0 with catch @ 035af37c
                       catch() { ... } // from try @ 035af4f4 with catch @ 035af37c
                       catch() { ... } // from try @ 035af528 with catch @ 035af37c */
  if ((DAT_0456855a & 1) == 0) {
    FUN_01bab630(&KEFHDOHHHML_TypeInfo);
    FUN_01bab630(&PEDENGEGDNI_TypeInfo);
    DAT_0456855a = 1;
  }
  local_48.klass = (System_Enum_c *)PEDENGEGDNI_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = 6;
  KGLJICLJHEL = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  __this_00 = (KEFHDOHHHML_o *)thunk_FUN_01bda818(KEFHDOHHHML_TypeInfo);
  KEFHDOHHHML___ctor(__this_00,KGLJICLJHEL,(Google_Protobuf_IMessage_o *)0x0,CEOLOKFCKIG,NONPLOOOOAG
                     ,-1,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return __this_00;
}


// ===== private void BLFHCIKFJNG(BaseEvent ICLHKEAILDM)  [RVA 0x34B0F68]
// KDPDBGNOFEN$$BLFHCIKFJNG @ RVA 0x34B0F68

void KDPDBGNOFEN__BLFHCIKFJNG
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *ICLHKEAILDM,MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  
  if ((DAT_0456855b & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    __this = (KDPDBGNOFEN_o *)FUN_01bab630(&StringLiteral_15575/*"[SFS2X Error] "*/);
    DAT_0456855b = 1;
  }
  pSVar1 = KDPDBGNOFEN__NAGMMNGLGAI(__this,ICLHKEAILDM,method);
  pSVar1 = System_String__Concat(StringLiteral_15575/*"[SFS2X Error] "*/,pSVar1,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 6;
      Nekki_Utils_DetailedLog__Error(pSVar1,BBBLOLJAMJP,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

