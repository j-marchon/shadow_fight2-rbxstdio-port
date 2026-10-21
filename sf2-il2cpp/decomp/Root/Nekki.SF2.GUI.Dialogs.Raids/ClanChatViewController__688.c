// TypeDefIndex 688
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class ClanChatViewController : ChatSFViewController
// Fields:

// ===== public void Init(KPBOJBLLKPJ KBIIAPCMIGJ, MKIDEJJPLCE DOOAEHPGKNL)  [RVA 0x3031B24]
// Nekki.SF2.GUI.Dialogs.Raids.ClanChatViewController$$Init @ RVA 0x3031B24

void Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *__this,
               KPBOJBLLKPJ_o *KBIIAPCMIGJ,MKIDEJJPLCE_o *DOOAEHPGKNL,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *pNVar2;
  
  if ((DAT_04565d0a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d0a = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__Init
            ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,KBIIAPCMIGJ,DOOAEHPGKNL,3,
             in_x4);
  pNVar2 = (__this->fields).super._tabButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).super._tabButton;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__Init(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public override void UpdateContent(object IMMNELPBGIF)  [RVA 0x3031C18]
// Nekki.SF2.GUI.Dialogs.Raids.ClanChatViewController$$UpdateContent @ RVA 0x3031C18

void Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool_conflict bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  KKLJIDJBFEI_o *pKVar6;
  FKDLCJJOGIP_o *pFVar7;
  Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *exists;
  Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *MIJCJJCICDA;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar8;
  Il2CppObject *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_c *pNVar9;
  char cVar10;
  
  if ((DAT_04565d0b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d0b = 1;
    IMMNELPBGIF = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__UpdateContent
            ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,IMMNELPBGIF,method);
  pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar6 == (KKLJIDJBFEI_o *)0x0) goto LAB_03131ff4;
  if ((pKVar6->fields)._CPLKKCAJOJJ_k__BackingField == false) {
    pFVar7 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pFVar7 == (FKDLCJJOGIP_o *)0x0) goto LAB_03131ff4;
    cVar10 = (pFVar7->fields)._OHFODMIBJME_k__BackingField;
  }
  else {
    cVar10 = '\x01';
  }
  pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar6 == (KKLJIDJBFEI_o *)0x0) goto LAB_03131ff4;
  bVar1 = (pKVar6->fields).super._MGGBEPKMPCF_k__BackingField;
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *)
              Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OFBDOPOJDEH
                        ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,method_00);
  if (cVar10 == '\0') {
    if (bVar1 != false) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
        bVar5 = EEGDOGKBLNG__CLJIMCDAEKO(__this_01,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__EMCBIGBMKLN
                  ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,method_01);
        exists = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OFBDOPOJDEH
                           ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,method_02);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
        if (bVar4) {
          if (exists == (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0) {
            return;
          }
          pNVar9 = exists->klass;
          bVar2 = (pNVar9->_2).naturalAligment;
          bVar3 = (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_TypeInfo->_2).naturalAligment;
          if ((bVar2 < bVar3) ||
             (((pNVar9->_2).typeHierarchy[(ulong)bVar3 - 1] ==
               (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_TypeInfo & (bVar5 ^ 0xffU)
              ) == 0)) {
            bVar3 = (Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_TypeInfo->_2).naturalAligment;
            if (bVar2 < bVar3) {
              return;
            }
                    /* try { // try from 03131ddc to 03231e23 has its CatchHandler @ 03131ddc
                       catch() { ... } // from try @ 03131ddc with catch @ 03131ddc
                       catch() { ... } // from try @ 03131e40 with catch @ 03131ddc
                       catch() { ... } // from try @ 03131e98 with catch @ 03131ddc
                       catch() { ... } // from try @ 03131edc with catch @ 03131ddc
                       catch() { ... } // from try @ 03131f30 with catch @ 03131ddc
                       catch() { ... } // from try @ 03131f70 with catch @ 03131ddc */
            if ((pNVar9->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_TypeInfo ||
                ((bVar5 ^ 0xffU) & 1) != 0) {
              return;
            }
          }
        }
        Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__KPBCGFECNJA
                  ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,method_03);
        if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar8 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
        if (pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
          if (bVar5) {
            MIJCJJCICDA = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatMessageView
                                    (pNVar8,(Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)
                                            __this,(MethodInfo *)0x0);
                    /* try { // try from 03131e24 to 03231e2f has its CatchHandler @ 03131f30 */
          }
          else {
            MIJCJJCICDA = (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)
                          Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateClanJoinInfoView
                                    (pNVar8,__this,(MethodInfo *)0x0);
          }
                    /* catch() { ... } // from try @ 03131f00 with catch @ 03131f10 */
                    /* try { // try from 03131f1c to 03231f2f has its CatchHandler @ 03131f84 */
          Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__KOJMOHMGLAI
                    ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,
                     (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)MIJCJJCICDA,true,in_x3);
          return;
        }
      }
      goto LAB_03131ff4;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03131e6c with catch @ 03131ee4
                        */
    if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *)0x0) {
LAB_03131f00:
                    /* try { // try from 03131f00 to 03231f03 has its CatchHandler @ 03131f10 */
      __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *)0x0;
    }
    else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03131e88 with catch @ 03131ee8
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03131ed8 with catch @ 03131ee8
                        */
      bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_TypeInfo->_2).naturalAligment;
      if ((((Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_c *)__this_00->klass)->_2).naturalAligment <
          bVar2) goto LAB_03131f00;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03131e24 with catch @ 03131f30
                       try { // try from 03131f30 to 03231f4b has its CatchHandler @ 03131ddc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03131e34 with catch @ 03131f34
                        */
      if ((((Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_c *)__this_00->klass)->_2).typeHierarchy
          [(ulong)bVar2 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_TypeInfo) {
        __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *)0x0;
      }
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03131f4c to 03231f4f has its CatchHandler @ 03131f5c */
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03131f4c with catch @ 03131f5c */
    if (bVar5) {
                    /* try { // try from 03131f68 to 03231f6f has its CatchHandler @ 03131f84 */
                    /* try { // try from 03131f70 to 03231f7b has its CatchHandler @ 03131ddc */
      if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03131f7c to 03231f83 has its CatchHandler @ 03131f84 */
      pNVar8 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
      if (pNVar8 == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) goto LAB_03131ff4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03131f1c with catch @ 03131f84
                       catch(type#2 @ 00000000) { ... } // from try @ 03131f68 with catch @ 03131f84
                       catch(type#2 @ 00000000) { ... } // from try @ 03131f7c with catch @ 03131f84
                        */
      __this_00 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateMissingConnectionView
                            (pNVar8,(Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,
                             (MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__KOJMOHMGLAI
                ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,
                 (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)__this_00,false,in_x3);
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar5) {
      return;
    }
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *)0x0) {
                    /* try { // try from 03131fdc to 032321cf has its CatchHandler @ 03131fdc
                       catch() { ... } // from try @ 03131fdc with catch @ 03131fdc
                       catch() { ... } // from try @ 0313229c with catch @ 03131fdc
                       catch() { ... } // from try @ 03132330 with catch @ 03131fdc
                       catch() { ... } // from try @ 03132370 with catch @ 03131fdc
                       catch() { ... } // from try @ 031323e8 with catch @ 03131fdc
                       catch() { ... } // from try @ 0313246c with catch @ 03131fdc
                       catch() { ... } // from try @ 03132488 with catch @ 03131fdc
                       catch() { ... } // from try @ 031324c4 with catch @ 03131fdc */
      Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView__SetStateNoConnection
                (__this_00,(MethodInfo *)0x0);
      return;
    }
    goto LAB_03131ff4;
  }
  if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *)0x0) {
LAB_03131d00:
    __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *)0x0;
  }
  else {
    bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_TypeInfo->_2).naturalAligment;
    if ((((Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_c *)__this_00->klass)->_2).naturalAligment < bVar2
       ) goto LAB_03131d00;
                    /* try { // try from 03131e34 to 03231e3f has its CatchHandler @ 03131f34 */
    if ((((Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_c *)__this_00->klass)->_2).typeHierarchy
        [(ulong)bVar2 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_TypeInfo) {
      __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *)0x0;
    }
  }
                    /* try { // try from 03131e40 to 03231e6b has its CatchHandler @ 03131ddc */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar5) {
                    /* try { // try from 03131e6c to 03231e77 has its CatchHandler @ 03131ee4 */
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03131e7c to 03231e7f has its CatchHandler @ 03131ee0 */
    pNVar8 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
    if (pNVar8 == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) goto LAB_03131ff4;
                    /* try { // try from 03131e88 to 03231e8b has its CatchHandler @ 03131ee8 */
    __this_00 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateMissingConnectionView
                          (pNVar8,(Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,
                           (MethodInfo *)0x0);
                    /* try { // try from 03131e90 to 03231e97 has its CatchHandler @ 03131edc */
                    /* try { // try from 03131e98 to 03231ed7 has its CatchHandler @ 03131ddc */
    Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__KOJMOHMGLAI
              ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)__this_00,false,in_x3);
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (!bVar5) {
    return;
  }
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *)0x0) {
                    /* try { // try from 03131ed8 to 03231edb has its CatchHandler @ 03131ee8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03131e90 with catch @ 03131edc
                       try { // try from 03131edc to 03231eff has its CatchHandler @ 03131ddc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03131e7c with catch @ 03131ee0
                        */
    Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView__SetStateConnecting
              (__this_00,(MethodInfo *)0x0);
    return;
  }
LAB_03131ff4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnFindClanPressed()  [RVA 0x3032520]
// Nekki.SF2.GUI.Dialogs.Raids.ClanChatViewController$$OnFindClanPressed @ RVA 0x3032520

void Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController__OnFindClanPressed
               (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MKIDEJJPLCE_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MKIDEJJPLCE_o *pMVar6;
  
  if ((DAT_04565d0c & 1) == 0) {
    FUN_01bab630(&MKIDEJJPLCE_TypeInfo);
    DAT_04565d0c = 1;
  }
  pMVar6 = (__this->fields).super._chatPanel;
  if (pMVar6 != (MKIDEJJPLCE_o *)0x0) {
    pMVar3 = pMVar6->klass;
    uVar1._0_1_ = (pMVar3->_2).rank;
    uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
    uVar4 = (ulong)uVar1;
    if (uVar4 != 0) {
      piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
            (Il2CppClass *)MKIDEJJPLCE_TypeInfo) {
          pVVar2 = pMVar3->vtable + (*piVar5 + 3);
          goto LAB_031325ac;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MKIDEJJPLCE_TypeInfo,3);
LAB_031325ac:
    (*pVVar2->methodPtr)(pMVar6,pVVar2->method);
  }
  JJPNLEPEAFM__DDOCEEFBIGC((Il2CppObject *)0x0,(MethodInfo *)0x0);
  return;
}


// ===== public void OnCreateClanPressed()  [RVA 0x30325CC]
// Nekki.SF2.GUI.Dialogs.Raids.ClanChatViewController$$OnCreateClanPressed @ RVA 0x30325CC

void Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController__OnCreateClanPressed
               (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MKIDEJJPLCE_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MKIDEJJPLCE_o *pMVar6;
  
  if ((DAT_04565d0d & 1) == 0) {
    FUN_01bab630(&MKIDEJJPLCE_TypeInfo);
    DAT_04565d0d = 1;
  }
  pMVar6 = (__this->fields).super._chatPanel;
  if (pMVar6 != (MKIDEJJPLCE_o *)0x0) {
    pMVar3 = pMVar6->klass;
    uVar1._0_1_ = (pMVar3->_2).rank;
    uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
    uVar4 = (ulong)uVar1;
    if (uVar4 != 0) {
      piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
            (Il2CppClass *)MKIDEJJPLCE_TypeInfo) {
          pVVar2 = pMVar3->vtable + (*piVar5 + 3);
          goto LAB_03132658;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MKIDEJJPLCE_TypeInfo,3);
LAB_03132658:
    (*pVVar2->methodPtr)(pMVar6,pVVar2->method);
  }
  JJPNLEPEAFM__HOILBJHCLJG((MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x3032674]
// Nekki.SF2.GUI.Dialogs.Raids.ClanChatViewController$$.ctor @ RVA 0x3032674

void Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ChatSFView__o *__this_00;
  System_Collections_Generic_List_ChatSFView__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d2a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ChatSFView>_TypeInfo);
    DAT_04565d2a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ChatSFView__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ChatSFView>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ChatSFView>__ctor__);
  ppSVar1 = &(__this->fields).super.CACFIIMNJMG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  TabView___ctor((TabView_o *)__this,(MethodInfo *)0x0);
  return;
}

