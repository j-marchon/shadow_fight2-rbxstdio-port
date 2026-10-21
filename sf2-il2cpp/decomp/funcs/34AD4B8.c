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
    FUN_01bab630(&StringLiteral_13673);
    DAT_0456853e = 1;
  }
  ppSVar4 = &(__this->fields).EBJCMEOKKOK;
  (__this->fields)._KKNAFGJEFJG_k__BackingField = false;
  if ((*ppSVar4 != (Sfs2X_SmartFox_o *)0x0) &&
     (bVar1 = Sfs2X_SmartFox__get_IsConnected(*ppSVar4,(MethodInfo *)0x0), bVar1)) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_13673,(MethodInfo *)0x0);
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

