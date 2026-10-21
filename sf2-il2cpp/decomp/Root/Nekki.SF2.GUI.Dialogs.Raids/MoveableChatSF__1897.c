// TypeDefIndex 1897
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class MoveableChatSF : MonoBehaviour, JEFOMACMAAD, MKIDEJJPLCE, EKMDOGKFEBJ
// Fields:
//   public static MoveableChatSF.KOONBHBJDEF ShowChatMode; // 0x0
//   private const float AANHNBOMEFE = 0.05;
//   private SidePanel _sidePanel; // 0x20
//   private ChatContent _chatContent; // 0x28
//   private ChatHandleButton _btnHandle; // 0x30
//   private ClanChatViewController _clanChatViewController; // 0x38
//   private RaidBattleChatViewController _raidBattleChatViewController; // 0x40
//   private GameObject _chatMessageViewPrefab; // 0x48
//   private GameObject _clanJoinInfoViewPrefab; // 0x50
//   private GameObject _clanQuickRaidAccessViewPrefab; // 0x58
//   private GameObject _missingConnectionViewPrefab; // 0x60
//   private RectTransform[] _touchDetectors; // 0x68
//   private GameObject _optimizeChatRenderRoot; // 0x70
//   private Image _leftChatHider; // 0x78
//   private Image _moveButtonHider; // 0x80
//   private IEnumerator OALIOADCDAP; // 0x88
//   private FEKEAPCCOOB HIOOMAJPEJP; // 0x90
//   private Dictionary<CKLIGNAPKFO, ChatSFViewController> KGPGGBPLEFB; // 0x98
//   private long LMANLFKJNKN; // 0xA0
//   private SidePanelScroll PGOJBPBDODE; // 0xA8
//   private Action DAKAFGCLMPG; // 0xB0
//   public static bool HasEverShownChat; // 0x4
//   private static MoveableChatSF CBDMFFMCJBK; // 0x8

// ===== public bool IsClosed()  [RVA 0x3253928]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$IsClosed @ RVA 0x3253928

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IsClosed
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._sidePanel;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
    return (pNVar1->fields).DBNELADJPIJ == false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ClanJoinInfoView CreateClanJoinInfoView(ClanChatViewController ELHFHAPBFMI)  [RVA 0x325394C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CreateClanJoinInfoView @ RVA 0x325394C

Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateClanJoinInfoView
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
          Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *ELHFHAPBFMI,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_o *pNVar1;
  
  if ((DAT_0456714b & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<ClanJoinInfoView>__);
    DAT_0456714b = 1;
  }
  pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_o *)
           Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Create<object>
                     (__this,(__this->fields)._clanJoinInfoViewPrefab,
                      (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)ELHFHAPBFMI,
                      Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<ClanJoinInfoView>__);
  return pNVar1;
}


// ===== private void MEIAHIJOJEA()  [RVA 0x32539A8]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$MEIAHIJOJEA @ RVA 0x32539A8

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MEIAHIJOJEA
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  FEKEAPCCOOB_o *__this_00;
  MethodInfo *extraout_x1;
  FEKEAPCCOOB_o **ppFVar1;
  
  if ((DAT_0456714c & 1) == 0) {
    FUN_01bab630(&FEKEAPCCOOB_TypeInfo);
    DAT_0456714c = 1;
    method = extraout_x1;
  }
  __this_00 = (FEKEAPCCOOB_o *)thunk_FUN_01bda818(FEKEAPCCOOB_TypeInfo,method);
  FEKEAPCCOOB___ctor(__this_00,(MethodInfo *)0x0);
  ppFVar1 = &(__this->fields).HIOOMAJPEJP;
  *ppFVar1 = __this_00;
  thunk_FUN_01c20e04(ppFVar1,__this_00);
  if (*ppFVar1 != (FEKEAPCCOOB_o *)0x0) {
    FEKEAPCCOOB__GIENGNEGHPJ(*ppFVar1,(JEFOMACMAAD_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EMABOKFDKFO(object IMMNELPBGIF)  [RVA 0x3253A24]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$EMABOKFDKFO @ RVA 0x3253A24

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__EMABOKFDKFO
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int32_t iVar5;
  FEKEAPCCOOB_o *pFVar6;
  TabView_o *x;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  int DPJIDNBJIBG;
  
  if ((DAT_04567164 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567164 = 1;
  }
  pFVar6 = (__this->fields).HIOOMAJPEJP;
  if (pFVar6 == (FEKEAPCCOOB_o *)0x0) {
LAB_03353c00:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (pFVar6->fields).GEKOMLGOJOP;
  iVar5 = FEKEAPCCOOB__KPOBFGCNFAG(pFVar6,(MethodInfo *)0x0);
  if (0 < iVar5) {
    bVar2 = false;
    DPJIDNBJIBG = 0;
    do {
      pFVar6 = (__this->fields).HIOOMAJPEJP;
      if (pFVar6 == (FEKEAPCCOOB_o *)0x0) goto LAB_03353c00;
      x = FEKEAPCCOOB__IDLJKBJEEHF(pFVar6,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (x == (TabView_o *)0x0) {
LAB_03353ad8:
        x = (TabView_o *)0x0;
      }
      else {
        bVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo->_2).naturalAligment;
        if ((x->klass->_2).naturalAligment < bVar4) goto LAB_03353ad8;
        if ((x->klass->_2).typeHierarchy[(ulong)bVar4 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo) {
          x = (TabView_o *)0x0;
        }
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        if (x == (TabView_o *)0x0) goto LAB_03353c00;
        bVar4 = (*(code *)x->klass[1]._1.name)(x,x->klass[1]._1.namespaze);
        if ((bVar4 & 1) == 0) {
          (*(x->klass->vtable)._18_Hide.methodPtr)(x,(x->klass->vtable)._18_Hide.method);
          bVar2 = iVar1 == DPJIDNBJIBG;
        }
        else if (iVar1 == DPJIDNBJIBG) {
          (*x->klass[1]._1.image)(x,0,x->klass[1]._1.gc_desc);
        }
        pFVar6 = (__this->fields).HIOOMAJPEJP;
        if (((pFVar6 == (FEKEAPCCOOB_o *)0x0) ||
            (__this_00 = FEKEAPCCOOB__MJEMLECEAHI(pFVar6,DPJIDNBJIBG,(MethodInfo *)0x0),
            __this_00 == (UnityEngine_UI_Button_o *)0x0)) ||
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03353c00;
        UnityEngine_GameObject__SetActive(__this_01,(bool)(bVar4 & 1),(MethodInfo *)0x0);
      }
      DPJIDNBJIBG = DPJIDNBJIBG + 1;
    } while (iVar5 != DPJIDNBJIBG);
    if (bVar2) {
      pFVar6 = (__this->fields).HIOOMAJPEJP;
      if (pFVar6 != (FEKEAPCCOOB_o *)0x0) {
        FEKEAPCCOOB__KJDNLILMFFF(pFVar6,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03353c00;
    }
  }
  return;
}


// ===== private void MBAONPCGIOF()  [RVA 0x3253C04]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$MBAONPCGIOF @ RVA 0x3253C04

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MBAONPCGIOF
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  FEKEAPCCOOB_o *__this_00;
  TabView_o *x;
  ulong uVar5;
  KKLJIDJBFEI_o *__this_01;
  PGICCMFLDPI_o *pPVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  long lVar9;
  VirtualInvokeData *pVVar10;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar11;
  Il2CppClass *pIVar12;
  long lVar13;
  int32_t *piVar14;
  undefined8 uVar15;
  
  if ((DAT_0456714d & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_4282/*"ChatBanTemp"*/);
    FUN_01bab630(&StringLiteral_4281/*"ChatBanPermanent"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456714d = 1;
  }
  __this_00 = (__this->fields).HIOOMAJPEJP;
  if (__this_00 == (FEKEAPCCOOB_o *)0x0) goto LAB_03353fe4;
  x = FEKEAPCCOOB__CKNDOOPOOEF(__this_00,(MethodInfo *)0x0);
  if (x == (TabView_o *)0x0) {
LAB_03353cf0:
    x = (TabView_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo->_2).naturalAligment;
    if ((x->klass->_2).naturalAligment < bVar1) goto LAB_03353cf0;
    if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo) {
      x = (TabView_o *)0x0;
    }
  }
  uVar5 = (*(__this->klass->vtable)._15_IsOpened.methodPtr)
                    (__this,(__this->klass->vtable)._15_IsOpened.method);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if (x == (TabView_o *)0x0) {
LAB_03353fe4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(int *)&x[1].monitor != 2) {
    return;
  }
  __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((__this_01 == (KKLJIDJBFEI_o *)0x0) ||
     (pPVar6 = KKLJIDJBFEI__MPBLBEGCAKP(__this_01,(MethodInfo *)0x0), pPVar6 == (PGICCMFLDPI_o *)0x0
     )) goto LAB_03353fe4;
  uVar5 = (__this->fields).LMANLFKJNKN;
  if ((long)uVar5 < 0) {
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar9 = Method_System_Array_Empty<string>__;
    lVar13 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar13 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar13 = *(long *)(lVar9 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_01b81620();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03353fe4;
    pIVar12 = pIVar8->klass;
    lVar9 = **(long **)(lVar9 + 0xb8);
    uVar3._0_1_ = (pIVar12->_2).rank;
    uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar5 = (ulong)uVar3;
    uVar15 = StringLiteral_4281/*"ChatBanPermanent"*/;
    if (uVar5 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        uVar15 = StringLiteral_4281/*"ChatBanPermanent"*/;
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_03353f40;
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 4;
        uVar15 = StringLiteral_4281/*"ChatBanPermanent"*/;
      } while (uVar5 != 0);
    }
  }
  else {
    pMVar11 = extraout_x1;
    if ((long)uVar5 <= (pPVar6->fields).GDKPGIBMFPA) goto LAB_03353fcc;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = MGNPHCAAEIO__HIIEINMMNGG(uVar5 / 1000,(MethodInfo *)0x0);
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar9 = FUN_01bab718(string___TypeInfo,1);
    if (lVar9 == 0) goto LAB_03353fe4;
    if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(undefined8 *)(lVar9 + 0x20) = pSVar7;
    thunk_FUN_01c20e04((undefined8 *)(lVar9 + 0x20),pSVar7);
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03353fe4;
    pIVar12 = pIVar8->klass;
    uVar2._0_1_ = (pIVar12->_2).rank;
    uVar2._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar5 = (ulong)uVar2;
    uVar15 = StringLiteral_4282/*"ChatBanTemp"*/;
    if (uVar5 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_03353f40;
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar5 != 0);
    }
  }
  pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03353f50:
  pSVar7 = (System_String_o *)(*pVVar10->methodPtr)(pIVar8,uVar15,lVar9,pVVar10->method);
  pMVar11 = StringLiteral_9679/*"OK"*/;
  JJPNLEPEAFM__JNDPLPKDPCP
            (StringLiteral_17850/*"dlgWarning"*/,pSVar7,(System_String_o *)StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
             (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,false,true,true,true,
             (MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__SelectTabWithChannel(__this,3,pMVar11);
  pMVar11 = extraout_x1_00;
LAB_03353fcc:
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__BHLHBBKAFHH(__this,pMVar11);
  return;
LAB_03353f40:
  pVVar10 = pIVar12->vtable + (*piVar14 + 0xc);
  goto LAB_03353f50;
}


// ===== public void CreateChatChannel(CKLIGNAPKFO BOFAKAEIMME, bool NCHOIJKHAOF = True)  [RVA 0x32542C0]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CreateChatChannel @ RVA 0x32542C0

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatChannel
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int32_t BOFAKAEIMME,
               bool NCHOIJKHAOF,MethodInfo *method)

{
  bool bVar1;
  int32_t DPJIDNBJIBG;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *pSVar2;
  AKOMJPINHEN_o *pAVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_o *__this_00;
  FEKEAPCCOOB_o *pFVar5;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *pNVar6;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *DJIMJLMCAPI;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_0456714e & 1) == 0) {
    FUN_01bab630(&CKLIGNAPKFO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_ContainsKey__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9215/*"MoveableChatSF::CreateChatChannel: wrong ChatMessageType "*/);
    DAT_0456714e = 1;
  }
  pSVar2 = (__this->fields).KGPGGBPLEFB;
  if (pSVar2 == (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)0x0) {
LAB_03354570:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,BOFAKAEIMME,
                     Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_ContainsKey__
                    );
  if (!bVar1) {
                    /* try { // try from 03354368 to 0345438f has its CatchHandler @ 033546d8 */
    if (BOFAKAEIMME == 2) {
      __this_01 = (__this->fields)._raidBattleChatViewController;
                    /* try { // try from 033543c4 to 034543ef has its CatchHandler @ 033546d4 */
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar3 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
      if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *)0x0)
      goto LAB_03354570;
      Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController__Init
                (__this_01,(KPBOJBLLKPJ_o *)pAVar3,(MKIDEJJPLCE_o *)__this,(MethodInfo *)0x0);
      pNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)
               (__this->fields)._raidBattleChatViewController;
    }
    else if (BOFAKAEIMME == 3) {
      pNVar6 = (__this->fields)._clanChatViewController;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar3 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
      if (pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)0x0) goto LAB_03354570;
      Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController__Init
                (pNVar6,(KPBOJBLLKPJ_o *)pAVar3,(MKIDEJJPLCE_o *)__this,(MethodInfo *)0x0);
      pNVar6 = (__this->fields)._clanChatViewController;
    }
    else {
      local_48.klass = (System_Enum_c *)CKLIGNAPKFO_TypeInfo;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = BOFAKAEIMME;
      pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
                    /* try { // try from 03354430 to 03454437 has its CatchHandler @ 033546c4 */
      pSVar4 = System_String__Concat(StringLiteral_9215/*"MoveableChatSF::CreateChatChannel: wrong ChatMessageType "*/,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03354440 to 03454447 has its CatchHandler @ 033546c0 */
                    /* try { // try from 03354450 to 0345445b has its CatchHandler @ 033546d0 */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03354468 to 0345446f has its CatchHandler @ 033546a8 */
      pNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)0x0;
    }
                    /* try { // try from 03354478 to 0345447f has its CatchHandler @ 033546a4 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03354494 to 034544af has its CatchHandler @ 033546c8 */
    if (bVar1) {
      if (pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)0x0) {
        DJIMJLMCAPI = (pNVar6->fields).super._tabButton;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)DJIMJLMCAPI,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
                    /* try { // try from 033544c0 to 034544fb has its CatchHandler @ 033546dc */
        if (!bVar1) {
          return;
        }
        (*(pNVar6->klass->vtable)._21_InitController.methodPtr)
                  (pNVar6,(pNVar6->klass->vtable)._21_InitController.method);
        if ((DJIMJLMCAPI != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)DJIMJLMCAPI,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
          pFVar5 = (__this->fields).HIOOMAJPEJP;
          if (pFVar5 != (FEKEAPCCOOB_o *)0x0) {
            DPJIDNBJIBG = FEKEAPCCOOB__GDCPIEANEJF
                                    (pFVar5,(UnityEngine_UI_Button_o *)DJIMJLMCAPI,
                                     (TabView_o *)pNVar6,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).KGPGGBPLEFB;
            if (pSVar2 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o
                           *)0x0) {
              System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,BOFAKAEIMME
                         ,(Il2CppObject *)pNVar6,
                         Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_Add__
                        );
              if (!NCHOIJKHAOF) {
                Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__POIOFMEMHBP(__this,method_00);
                return;
              }
                    /* try { // try from 0335453c to 0345455f has its CatchHandler @ 033546b4 */
              pFVar5 = (__this->fields).HIOOMAJPEJP;
              if (pFVar5 != (FEKEAPCCOOB_o *)0x0) {
                FEKEAPCCOOB__AAOLKEFFIIN(pFVar5,DPJIDNBJIBG,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto LAB_03354570;
    }
  }
                    /* try { // try from 03354560 to 0345466f has its CatchHandler @ 033541e4 */
  return;
}


// ===== public void SelectTabWithChannel(CKLIGNAPKFO BOFAKAEIMME)  [RVA 0x3253FEC]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$SelectTabWithChannel @ RVA 0x3253FEC

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__SelectTabWithChannel
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int32_t BOFAKAEIMME,
               MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *__this_00;
  FEKEAPCCOOB_o *pFVar5;
  TabView_o *x;
  System_String_o *pSVar6;
  int DPJIDNBJIBG;
  System_Enum_o local_68;
  int32_t local_58;
  
  if ((DAT_0456714f & 1) == 0) {
    FUN_01bab630(&CKLIGNAPKFO_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_ContainsKey__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12790/*"Tab (channel: "*/);
    FUN_01bab630(&StringLiteral_1112/*") isn't created"*/);
    DAT_0456714f = 1;
  }
  __this_00 = (__this->fields).KGPGGBPLEFB;
  if (__this_00 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)0x0
     ) {
    bVar3 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       BOFAKAEIMME,
                       Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_ContainsKey__
                      );
    if (bVar3) {
      pFVar5 = (__this->fields).HIOOMAJPEJP;
      if (pFVar5 == (FEKEAPCCOOB_o *)0x0) goto LAB_0335421c;
      iVar1 = (pFVar5->fields).GEKOMLGOJOP;
      iVar4 = FEKEAPCCOOB__KPOBFGCNFAG(pFVar5,(MethodInfo *)0x0);
      if (0 < iVar4) {
        DPJIDNBJIBG = 0;
        do {
          pFVar5 = (__this->fields).HIOOMAJPEJP;
          if (pFVar5 == (FEKEAPCCOOB_o *)0x0) goto LAB_0335421c;
          x = FEKEAPCCOOB__IDLJKBJEEHF(pFVar5,DPJIDNBJIBG,(MethodInfo *)0x0);
          if (x != (TabView_o *)0x0) {
            bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo->_2).naturalAligment;
            if (((x->klass->_2).naturalAligment < bVar2) ||
               ((x->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(x);
            }
          }
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                            );
          if (!bVar3) {
            if (x == (TabView_o *)0x0) goto LAB_0335421c;
            if (*(int *)&x[1].monitor == BOFAKAEIMME) {
              if (iVar1 == DPJIDNBJIBG) {
                return;
              }
              pFVar5 = (__this->fields).HIOOMAJPEJP;
              if (pFVar5 != (FEKEAPCCOOB_o *)0x0) {
                FEKEAPCCOOB__AAOLKEFFIIN(pFVar5,DPJIDNBJIBG,(MethodInfo *)0x0);
                return;
              }
              goto LAB_0335421c;
            }
          }
          DPJIDNBJIBG = DPJIDNBJIBG + 1;
        } while (iVar4 != DPJIDNBJIBG);
      }
    }
    else {
      local_68.klass = (System_Enum_c *)CKLIGNAPKFO_TypeInfo;
      local_68.monitor = (void *)0xffffffffffffffff;
      local_58 = BOFAKAEIMME;
      pSVar6 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat
                         (StringLiteral_12790/*"Tab (channel: "*/,pSVar6,StringLiteral_1112/*") isn't created"*/,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
    }
                    /* try { // try from 033541e4 to 03454367 has its CatchHandler @ 033541e4
                       catch() { ... } // from try @ 033541e4 with catch @ 033541e4
                       catch() { ... } // from try @ 03354560 with catch @ 033541e4
                       catch() { ... } // from try @ 03354690 with catch @ 033541e4
                       catch() { ... } // from try @ 03354698 with catch @ 033541e4
                       catch() { ... } // from try @ 0335478c with catch @ 033541e4 */
    return;
  }
LAB_0335421c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ChatContent get_ChatContent()  [RVA 0x3254574]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$get_ChatContent @ RVA 0x3254574

Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_ChatContent
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  return (__this->fields)._chatContent;
}


// ===== private static void .cctor()  [RVA 0x325457C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$.cctor @ RVA 0x325457C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_StaticFields *pNVar1;
  
  if ((DAT_04567150 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_04567150 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields;
  pNVar1->ShowChatMode = 1;
  pNVar1->HasEverShownChat = false;
  return;
}


// ===== public void add_OnPanelOpened(Action CJNHFNHJHPE)  [RVA 0x32545CC]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$add_OnPanelOpened @ RVA 0x32545CC

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__add_OnPanelOpened
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567151 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567151 = 1;
  }
  ppSVar4 = &(__this->fields).DAKAFGCLMPG;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public virtual bool IsOpened()  [RVA 0x3254668]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$IsOpened @ RVA 0x3254668

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IsOpened
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._sidePanel;
                    /* try { // try from 03354670 to 03454677 has its CatchHandler @ 033546e0 */
  if (pNVar1 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                    /* try { // try from 03354678 to 0345467b has its CatchHandler @ 033546bc */
                    /* try { // try from 0335467c to 0345467f has its CatchHandler @ 033546b8 */
    return (pNVar1->fields).DBNELADJPIJ;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03354680 to 03454683 has its CatchHandler @ 033546b0 */
  FUN_01bab8c8();
}


// ===== public virtual void Open()  [RVA 0x3254684]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$Open @ RVA 0x3254684

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Open
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_SidePanel_o *__this_00;
  MethodInfo *method_00;
  
                    /* try { // try from 03354684 to 03454687 has its CatchHandler @ 033546ac */
                    /* try { // try from 03354688 to 0345468f has its CatchHandler @ 033546cc */
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IKIMAGJOBLI(__this,method);
                    /* try { // try from 03354690 to 03454693 has its CatchHandler @ 033541e4 */
                    /* try { // try from 03354694 to 03454697 has its CatchHandler @ 033546a0 */
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__TryOpenChat(__this,method_00);
                    /* try { // try from 03354698 to 034546f7 has its CatchHandler @ 033541e4 */
  if (!bVar1) {
                    /* catch() { ... } // from try @ 0335467c with catch @ 033546b8 */
                    /* catch() { ... } // from try @ 03354678 with catch @ 033546bc */
    return;
  }
  __this_00 = (__this->fields)._sidePanel;
                    /* catch() { ... } // from try @ 03354694 with catch @ 033546a0 */
  if (__this_00 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                    /* catch() { ... } // from try @ 03354478 with catch @ 033546a4 */
                    /* catch() { ... } // from try @ 03354468 with catch @ 033546a8 */
                    /* catch() { ... } // from try @ 03354684 with catch @ 033546ac */
                    /* catch() { ... } // from try @ 03354680 with catch @ 033546b0 */
                    /* catch() { ... } // from try @ 0335453c with catch @ 033546b4 */
    Nekki_SF2_GUI_Shop_SidePanel__SetOpen(__this_00,true,-1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03354440 with catch @ 033546c0 */
  FUN_01bab8c8();
}


// ===== public ChatMessageView CreateChatMessageView(ChatSFViewController ELHFHAPBFMI)  [RVA 0x32547E0]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CreateChatMessageView @ RVA 0x32547E0

Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatMessageView
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
          Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *ELHFHAPBFMI,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *pNVar1;
  
  if ((DAT_04567152 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<ChatMessageView>__);
    DAT_04567152 = 1;
  }
  pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)
           Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Create<object>
                     (__this,(__this->fields)._chatMessageViewPrefab,ELHFHAPBFMI,
                      Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<ChatMessageView>__);
  return pNVar1;
}


// ===== public void remove_OnPanelOpened(Action CJNHFNHJHPE)  [RVA 0x325483C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$remove_OnPanelOpened @ RVA 0x325483C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__remove_OnPanelOpened
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04567153 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567153 = 1;
  }
  ppSVar4 = &(__this->fields).DAKAFGCLMPG;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void OAJGFHDGJBK()  [RVA 0x32548D8]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$OAJGFHDGJBK @ RVA 0x32548D8

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__OAJGFHDGJBK
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
                    /* try { // try from 033548d8 to 034549e3 has its CatchHandler @ 033548d8
                       catch() { ... } // from try @ 033548d8 with catch @ 033548d8
                       catch() { ... } // from try @ 03354a44 with catch @ 033548d8
                       catch() { ... } // from try @ 03354a94 with catch @ 033548d8
                       catch() { ... } // from try @ 03354a9c with catch @ 033548d8
                       catch() { ... } // from try @ 03354acc with catch @ 033548d8
                       catch() { ... } // from try @ 03354afc with catch @ 033548d8 */
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CanOpenChat(__this,method);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__TryOpenChat(__this,method_00);
  return;
}


// ===== private void AGOFLEMMFNJ(Button PAOPMKEAGBI, TabView EOACICBFBAM, int ACMHJAJPANF, Button BECCOGAMKJL, TabView FNCBJFJMIPB, int OGPGLGPMEPD)  [RVA 0x325496C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$AGOFLEMMFNJ @ RVA 0x325496C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__AGOFLEMMFNJ
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
               UnityEngine_UI_Button_o *PAOPMKEAGBI,TabView_o *EOACICBFBAM,int32_t ACMHJAJPANF,
               UnityEngine_UI_Button_o *BECCOGAMKJL,TabView_o *FNCBJFJMIPB,int32_t OGPGLGPMEPD,
               MethodInfo *method)

{
  return;
}


// ===== private void BHLHBBKAFHH()  [RVA 0x3254228]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$BHLHBBKAFHH @ RVA 0x3254228

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__BHLHBBKAFHH
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *pSVar2;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_00;
  MethodInfo *in_x3;
  
  if ((DAT_04567154 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_get_Item__
                );
    DAT_04567154 = 1;
  }
  pSVar2 = (__this->fields).KGPGGBPLEFB;
  if (pSVar2 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,2,
                       Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_ContainsKey__
                      );
    if (!bVar1) {
      return;
    }
    pSVar2 = (__this->fields).KGPGGBPLEFB;
    if (pSVar2 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)0x0)
    {
      __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)
                  System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,2,
                             Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_get_Item__
                            );
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GIAJHGPACMK
                (__this_00,(Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this_00,
                 (__this->fields).LMANLFKJNKN,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsTweening()  [RVA 0x3254A30]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$IsTweening @ RVA 0x3254A30

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IsTweening
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_SidePanel_o *__this_00;
  
  __this_00 = (__this->fields)._sidePanel;
                    /* try { // try from 03354a38 to 03454a43 has its CatchHandler @ 03354a9c */
  if (__this_00 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                    /* try { // try from 03354a44 to 03454a8f has its CatchHandler @ 033548d8 */
    bVar1 = Nekki_SF2_GUI_Shop_SidePanel__IsTweening(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool TryOpenChat()  [RVA 0x325479C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$TryOpenChat @ RVA 0x325479C

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__TryOpenChat
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  Nekki_SF2_GUI_SidePanelScroll_o *pNVar2;
  
                    /* catch() { ... } // from try @ 0335471c with catch @ 033547a0
                       catch() { ... } // from try @ 03354798 with catch @ 033547a0 */
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                      (__this_00,0x2d,(MethodInfo *)0x0);
    if (!bVar1) {
      pNVar2 = (__this->fields).PGOJBPBDODE;
      if (pNVar2 == (Nekki_SF2_GUI_SidePanelScroll_o *)0x0) goto LAB_033547dc;
      *(undefined1 *)&(pNVar2->fields).JNFBDGALDJJ = 0;
    }
    return (bool)(~bVar1 & 1);
  }
LAB_033547dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HEMCHIANOBD()  [RVA 0x3254A4C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$HEMCHIANOBD @ RVA 0x3254A4C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__HEMCHIANOBD
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  ulong uVar3;
  AKOMJPINHEN_o *pAVar4;
  Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *__this_00;
  int DFIBGGDJPLM;
  
  if ((DAT_04567155 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567155 = 1;
  }
  uVar3 = (*(__this->klass->vtable)._15_IsOpened.methodPtr)
                    (__this,(__this->klass->vtable)._15_IsOpened.method);
  if ((uVar3 & 1) == 0) {
                    /* try { // try from 03354a98 to 03454a9b has its CatchHandler @ 03354a9c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354a38 with catch @ 03354a9c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03354a98 with catch @ 03354a9c
                       try { // try from 03354a9c to 03454ac7 has its CatchHandler @ 033548d8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354a08 with catch @ 03354aa0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354a0c with catch @ 03354aa4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354a20 with catch @ 03354aa8
                        */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354a90 with catch @ 03354aac
                        */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033549e4 with catch @ 03354ab0
                        */
    pAVar4 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
    if (pAVar4 == (AKOMJPINHEN_o *)0x0) goto LAB_03354b00;
    iVar1 = AKOMJPINHEN__ILGBGMMJHMK(pAVar4,2,(MethodInfo *)0x0);
                    /* try { // try from 03354ac8 to 03454acb has its CatchHandler @ 03354aec */
                    /* try { // try from 03354acc to 03454af3 has its CatchHandler @ 033548d8 */
    pAVar4 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
    if (pAVar4 == (AKOMJPINHEN_o *)0x0) goto LAB_03354b00;
    iVar2 = AKOMJPINHEN__ILGBGMMJHMK(pAVar4,3,(MethodInfo *)0x0);
    DFIBGGDJPLM = iVar2 + iVar1;
  }
  else {
                    /* try { // try from 03354a90 to 03454a93 has its CatchHandler @ 03354aac */
    DFIBGGDJPLM = 0;
                    /* try { // try from 03354a94 to 03454a97 has its CatchHandler @ 033548d8 */
  }
  __this_00 = (__this->fields)._btnHandle;
                    /* catch() { ... } // from try @ 03354ac8 with catch @ 03354aec */
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *)0x0) {
                    /* try { // try from 03354af4 to 03454afb has its CatchHandler @ 03354b10 */
                    /* try { // try from 03354afc to 03454b07 has its CatchHandler @ 033548d8 */
    Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__SetUnreadedMsgCount
              (__this_00,DFIBGGDJPLM,(MethodInfo *)0x0);
    return;
  }
LAB_03354b00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public SidePanel GetSidePanel()  [RVA 0x3254B04]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$GetSidePanel @ RVA 0x3254B04

Nekki_SF2_GUI_Shop_SidePanel_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GetSidePanel
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
                    /* try { // try from 03354b08 to 03454b0f has its CatchHandler @ 03354b10 */
  return (__this->fields)._sidePanel;
}


// ===== public void .ctor()  [RVA 0x3254B0C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$.ctor @ RVA 0x3254B0C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *__this_00;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o **ppSVar1;
  System_Action_o **ppSVar2;
  MethodInfo *extraout_x1;
  System_Action_o *pSVar3;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03354af4 with catch @ 03354b10
                       catch(type#2 @ 00000000) { ... } // from try @ 03354b08 with catch @ 03354b10
                        */
                    /* try { // try from 03354b14 to 03454bab has its CatchHandler @ 03354b14
                       catch() { ... } // from try @ 03354b14 with catch @ 03354b14
                       catch() { ... } // from try @ 03354bd0 with catch @ 03354b14
                       catch() { ... } // from try @ 03354c08 with catch @ 03354b14
                       catch() { ... } // from try @ 03354c34 with catch @ 03354b14
                       catch() { ... } // from try @ 03354c74 with catch @ 03354b14 */
  if ((DAT_04567156 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_TypeInfo)
    ;
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_<>c_DFOOGPBHOJB__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_<>c_TypeInfo);
    DAT_04567156 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>__ctor__
            );
  ppSVar1 = &(__this->fields).KGPGGBPLEFB;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 03354bac to 03454bb3 has its CatchHandler @ 03354c18 */
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_<>c_TypeInfo->static_fields->__9__77_0;
  if (pSVar3 == (System_Action_o *)0x0) {
                    /* try { // try from 03354bc8 to 03454bcf has its CatchHandler @ 03354c14 */
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03354bd0 to 03454bff has its CatchHandler @ 03354b14 */
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 03354c00 to 03454c03 has its CatchHandler @ 03354c10 */
                    /* try { // try from 03354c04 to 03454c07 has its CatchHandler @ 03354c0c */
                    /* try { // try from 03354c08 to 03454c2f has its CatchHandler @ 03354b14 */
    System_Action___ctor();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354c04 with catch @ 03354c0c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354c00 with catch @ 03354c10
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354bc8 with catch @ 03354c14
                        */
    ppSVar2 = &Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_<>c_TypeInfo->static_fields->__9__77_0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354bac with catch @ 03354c18
                        */
    *ppSVar2 = pSVar3;
    thunk_FUN_01c20e04(ppSVar2,pSVar3);
  }
  ppSVar2 = &(__this->fields).DAKAFGCLMPG;
  *ppSVar2 = pSVar3;
  thunk_FUN_01c20e04(ppSVar2,pSVar3);
                    /* try { // try from 03354c30 to 03454c33 has its CatchHandler @ 03354c5c */
                    /* try { // try from 03354c34 to 03454c6b has its CatchHandler @ 03354b14 */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void JPNLCEGEMMB(ChatSFViewController ELHFHAPBFMI)  [RVA 0x3254C48]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$JPNLCEGEMMB @ RVA 0x3254C48

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__JPNLCEGEMMB
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *ELHFHAPBFMI,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  AKOMJPINHEN_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this_01;
  
                    /* catch() { ... } // from try @ 03354c30 with catch @ 03354c5c */
  if ((DAT_04567157 & 1) == 0) {
                    /* try { // try from 03354c6c to 03454c73 has its CatchHandler @ 03354c88 */
                    /* try { // try from 03354c74 to 03454c7f has its CatchHandler @ 03354b14 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03354c80 to 03454c87 has its CatchHandler @ 03354c88 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03354c6c with catch @ 03354c88
                       catch(type#2 @ 00000000) { ... } // from try @ 03354c80 with catch @ 03354c88
                        */
    DAT_04567157 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)ELHFHAPBFMI,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (ELHFHAPBFMI != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
    iVar2 = (ELHFHAPBFMI->fields).FIACGKGFFJP;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
    bVar1 = TabView__get_InFocus((TabView_o *)ELHFHAPBFMI,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (AKOMJPINHEN_o *)0x0) goto LAB_03354d68;
      AKOMJPINHEN__JKHLALJIKOJ(__this_00,iVar2,(MethodInfo *)0x0);
    }
    __this_01 = (ELHFHAPBFMI->fields)._tabButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if ((__this_00 != (AKOMJPINHEN_o *)0x0) &&
       (iVar2 = AKOMJPINHEN__ILGBGMMJHMK(__this_00,iVar2,(MethodInfo *)0x0),
       __this_01 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0)) {
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__SetUnreadedMsgCount
                (__this_01,iVar2,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03354d68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x3254D6C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$OnDestroy @ RVA 0x3254D6C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  GCIFMNHADDF_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  KKLJIDJBFEI_o *pKVar2;
  FKDLCJJOGIP_o *pFVar3;
  EEOMEMBBGNA_o *pEVar4;
  System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE_00;
  System_Action_NLFLMJPNOLF__o *CJNHFNHJHPE_01;
  System_Action_long__o *CJNHFNHJHPE_02;
  CHDGOFBHAFI_o *pCVar5;
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *CJNHFNHJHPE_03;
  AKOMJPINHEN_o *__this_01;
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar6;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar7;
  CJFBGEEIPBA_o *pCVar8;
  UnityEngine_Events_UnityEvent_bool__o *__this_02;
  
  if ((DAT_04567158 & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_BHLHBBKAFHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_EMABOKFDKFO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_GDPFPAHLCJM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_GJBIHHLINEG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_IEFPBGKNKFH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_IOFNONPFCDB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JOEGAINPJCI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_POIOFMEMHBP__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04567158 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IKIMAGJOBLI(__this,method);
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  WideScreenController__remove_UpdateEvent(pSVar1,(MethodInfo *)0x0);
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    GCIFMNHADDF__JNDNMPDMDGB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__PILMCAFCLMN(pKVar2,pSVar1,(MethodInfo *)0x0);
      pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
        KKLJIDJBFEI__HGMNJNFOMDO(pKVar2,pSVar1,(MethodInfo *)0x0);
        pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
          KKLJIDJBFEI__JGNHEIICALL(pKVar2,pSVar1,(MethodInfo *)0x0);
          pFVar3 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
          pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pFVar3 != (FKDLCJJOGIP_o *)0x0) {
            FKDLCJJOGIP__LJAKDBDIGDG(pFVar3,pSVar1,(MethodInfo *)0x0);
            pFVar3 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
            pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pFVar3 != (FKDLCJJOGIP_o *)0x0) {
              FKDLCJJOGIP__DAGFKDGOBBF(pFVar3,pSVar1,(MethodInfo *)0x0);
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pEVar4 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
              pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              if (pEVar4 != (EEOMEMBBGNA_o *)0x0) {
                    /* try { // try from 033550b4 to 0345519b has its CatchHandler @ 033550b4
                       catch() { ... } // from try @ 033550b4 with catch @ 033550b4
                       catch() { ... } // from try @ 03355210 with catch @ 033550b4
                       catch() { ... } // from try @ 033552a0 with catch @ 033550b4
                       catch() { ... } // from try @ 033552d8 with catch @ 033550b4
                       catch() { ... } // from try @ 03355308 with catch @ 033550b4 */
                EEOMEMBBGNA__GPLEIOLCBOF(pEVar4,pSVar1,(MethodInfo *)0x0);
                pEVar4 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                System_Action___ctor();
                if (pEVar4 != (EEOMEMBBGNA_o *)0x0) {
                  EEOMEMBBGNA__PLBALCBJMMP(pEVar4,pSVar1,(MethodInfo *)0x0);
                  pEVar4 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                  CJNHFNHJHPE_00 =
                       (System_Action_MGDJPGGPDJI__o *)
                       thunk_FUN_01bda818(System_Action<MGDJPGGPDJI>_TypeInfo);
                  System_Action<object>___ctor();
                  if (pEVar4 != (EEOMEMBBGNA_o *)0x0) {
                    EEOMEMBBGNA__BLGMCMLEBDI(pEVar4,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                    pEVar4 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    if (pEVar4 != (EEOMEMBBGNA_o *)0x0) {
                      pCVar8 = (pEVar4->fields).GMNJEBCECDA;
                      CJNHFNHJHPE_01 =
                           (System_Action_NLFLMJPNOLF__o *)
                           thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
                      System_Action<object>___ctor();
                      if (pCVar8 != (CJFBGEEIPBA_o *)0x0) {
                        CJFBGEEIPBA__LLBGOEFBOAP(pCVar8,CJNHFNHJHPE_01,(MethodInfo *)0x0);
                    /* try { // try from 0335519c to 034551a3 has its CatchHandler @ 033552b8 */
                        pEVar4 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                        if (pEVar4 != (EEOMEMBBGNA_o *)0x0) {
                          pCVar8 = (pEVar4->fields).GMNJEBCECDA;
                          CJNHFNHJHPE_02 =
                               (System_Action_long__o *)
                               thunk_FUN_01bda818(System_Action<long>_TypeInfo);
                    /* try { // try from 033551c8 to 034551cb has its CatchHandler @ 033552a4 */
                          System_Action<long>___ctor();
                    /* try { // try from 033551d4 to 034551ef has its CatchHandler @ 033552a8 */
                          if (pCVar8 != (CJFBGEEIPBA_o *)0x0) {
                            CJFBGEEIPBA__OONONOKDLGD(pCVar8,CJNHFNHJHPE_02,(MethodInfo *)0x0);
                            pCVar5 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                            pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                            pMVar6 = Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_POIOFMEMHBP__
                            ;
                    /* try { // try from 03355204 to 0345520f has its CatchHandler @ 033552b0 */
                    /* try { // try from 03355210 to 0345528f has its CatchHandler @ 033550b4 */
                            System_Action___ctor();
                            if (pCVar5 != (CHDGOFBHAFI_o *)0x0) {
                              CHDGOFBHAFI__JOKHNMCDKJJ(pCVar5,pSVar1,pMVar6);
                              pCVar5 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                              pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo)
                              ;
                              pMVar6 = 
                              Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_POIOFMEMHBP__;
                              System_Action___ctor();
                              if (pCVar5 != (CHDGOFBHAFI_o *)0x0) {
                                CHDGOFBHAFI__CBOCLANFPOC(pCVar5,pSVar1,pMVar6);
                                pCVar5 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                                CJNHFNHJHPE_03 =
                                     (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)
                                     thunk_FUN_01bda818(
                                                  System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
                                pMVar6 = 
                                Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JOEGAINPJCI__;
                    /* try { // try from 03355290 to 03455297 has its CatchHandler @ 033552b4 */
                    /* try { // try from 03355298 to 0345529f has its CatchHandler @ 033552ac */
                                System_Action<Int32Enum>___ctor();
                                if (pCVar5 != (CHDGOFBHAFI_o *)0x0) {
                    /* try { // try from 033552a0 to 034552d3 has its CatchHandler @ 033550b4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033551c8 with catch @ 033552a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033551d4 with catch @ 033552a8
                        */
                                  CHDGOFBHAFI__HHCMKPOJKFH(pCVar5,CJNHFNHJHPE_03,pMVar6);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355298 with catch @ 033552ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355204 with catch @ 033552b0
                        */
                                  __this_01 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355290 with catch @ 033552b4
                        */
                                  if (__this_01 != (AKOMJPINHEN_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335519c with catch @ 033552b8
                        */
                                    AKOMJPINHEN__EHJAAHEJFEO
                                              (__this_01,(EKMDOGKFEBJ_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 033552d4 to 034552d7 has its CatchHandler @ 033552f8 */
                    /* try { // try from 033552d8 to 034552ff has its CatchHandler @ 033550b4 */
                                    pSVar1 = (System_Action_o *)
                                             thunk_FUN_01bda818(System_Action_TypeInfo);
                                    System_Action___ctor();
                    /* catch() { ... } // from try @ 033552d4 with catch @ 033552f8 */
                                    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0)
                                    {
                                      thunk_FUN_01ba7564();
                                    }
                    /* try { // try from 03355300 to 03455307 has its CatchHandler @ 0335531c */
                    /* try { // try from 03355308 to 03455313 has its CatchHandler @ 033550b4 */
                                    Nekki_Utils_GlobalTimer__remove_OnTick(pSVar1,(MethodInfo *)0x0)
                                    ;
                                    pNVar7 = (__this->fields)._sidePanel;
                                    if (pNVar7 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                    /* try { // try from 03355314 to 0345531b has its CatchHandler @ 0335531c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03355300 with catch @ 0335531c
                       catch(type#2 @ 00000000) { ... } // from try @ 03355314 with catch @ 0335531c
                        */
                                      __this_02 = (UnityEngine_Events_UnityEvent_bool__o *)
                                                  (pNVar7->fields)._OnMove;
                                      call = (UnityEngine_Events_UnityAction_T0__o *)
                                             thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<bool>_TypeInfo);
                                      UnityEngine_Events_UnityAction<bool>___ctor();
                                      if (__this_02 != (UnityEngine_Events_UnityEvent_bool__o *)0x0)
                                      {
                                        UnityEngine_Events_UnityEvent<bool>__RemoveListener
                                                  (__this_02,call,
                                                                                                      
                                                  Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__
                                                  );
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RaidBattleChatTabEnable(bool CMPKOOEKFKF)  [RVA 0x3255374]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$RaidBattleChatTabEnable @ RVA 0x3255374

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__RaidBattleChatTabEnable
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,bool CMPKOOEKFKF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *pNVar3;
  
  if ((DAT_04567159 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567159 = 1;
  }
  if (!CMPKOOEKFKF) {
    pNVar2 = (__this->fields)._clanChatViewController;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields)._clanChatViewController;
      if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)0x0) goto LAB_03355450;
      LJLLAKHOFFF__AKKDDJDBIBD
                ((UnityEngine_UI_Selectable_o *)(pNVar2->fields).super._tabButton,(MethodInfo *)0x0)
      ;
    }
  }
  pNVar3 = (__this->fields)._raidBattleChatViewController;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields)._raidBattleChatViewController;
  if ((pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *)0x0) &&
     (__this_00 = (pNVar3->fields).super._tabButton,
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0)) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)__this_00,CMPKOOEKFKF,(MethodInfo *)0x0);
    return;
  }
LAB_03355450:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MoveableChatSF get_Instance()  [RVA 0x3255454]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$get_Instance @ RVA 0x3255454

Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *pNVar2;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o **ppNVar3;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar4;
  UnityEngine_RectTransform_o *parent;
  
  if ((DAT_0456715a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MoveableChatSF>__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10408/*"Prefabs/Raids/Chat/MoveableChatSF"*/);
    DAT_0456715a = 1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10408/*"Prefabs/Raids/Chat/MoveableChatSF"*/,Method_UnityEngine_Resources_Load<GameObject>__);
    pNVar2 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
      parent = (pNVar2->fields)._chatShownMount;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      __this = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         (original,(UnityEngine_Transform_o *)parent,
                          Method_UnityEngine_Object_Instantiate<GameObject>__);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (__this,Method_UnityEngine_GameObject_GetComponent<MoveableChatSF>__);
        if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
        }
        ppNVar3 = &Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->CBDMFFMCJBK;
        *ppNVar3 = pNVar4;
        thunk_FUN_01c20e04(ppNVar3,pNVar4);
        pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->CBDMFFMCJBK;
        if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GIENGNEGHPJ(pNVar4,method_00);
          goto LAB_033555bc;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_033555bc:
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->CBDMFFMCJBK;
}


// ===== public virtual void Hide()  [RVA 0x3256020]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$Hide @ RVA 0x3256020

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Hide
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnTabChanged(int DPJIDNBJIBG)  [RVA 0x3256044]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$OnTabChanged @ RVA 0x3256044

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__OnTabChanged
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  byte bVar1;
  FEKEAPCCOOB_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 auVar2 [16];
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *ELHFHAPBFMI;
  
  if ((DAT_0456715b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo,DPJIDNBJIBG);
    DAT_0456715b = 1;
  }
  auVar2 = (*(__this->klass->vtable)._15_IsOpened.methodPtr)
                     (__this,(__this->klass->vtable)._15_IsOpened.method);
  method_00 = auVar2._8_8_;
  if ((auVar2._0_8_ & 1) == 0) goto LAB_033560dc;
  __this_00 = (__this->fields).HIOOMAJPEJP;
  if (__this_00 == (FEKEAPCCOOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)
              FEKEAPCCOOB__CKNDOOPOOEF(__this_00,(MethodInfo *)0x0);
  if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
LAB_033560bc:
    ELHFHAPBFMI = (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo->_2).naturalAligment;
    if ((__this_01->klass->_2).naturalAligment < bVar1) goto LAB_033560bc;
                    /* try { // try from 033560d0 to 034560d3 has its CatchHandler @ 033560dc */
    ELHFHAPBFMI = __this_01;
                    /* try { // try from 033560d4 to 03456103 has its CatchHandler @ 03355db0 */
    if ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo) {
      ELHFHAPBFMI = (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0;
    }
  }
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__JPNLCEGEMMB
            (__this_01,(Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)ELHFHAPBFMI,method);
  method_00 = extraout_x1;
LAB_033560dc:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033560d0 with catch @ 033560dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355fd8 with catch @ 033560e0
                        */
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__POIOFMEMHBP(__this,method_00);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355fa0 with catch @ 033560e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355f40 with catch @ 033560e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355fcc with catch @ 033560ec
                        */
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MBAONPCGIOF(__this,method_01);
  return;
}


// ===== public virtual void Close()  [RVA 0x32560F8]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$Close @ RVA 0x32560F8

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Close
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanel_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._sidePanel;
                    /* try { // try from 03356104 to 03456107 has its CatchHandler @ 0335611c */
  if (__this_00 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_SidePanel__SetOpen(__this_00,false,-1.0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03356104 with catch @ 0335611c */
    Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IKIMAGJOBLI(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GIAJHGPACMK(ChatSFViewController ELHFHAPBFMI, long FNCOALJKOCK)  [RVA 0x3254970]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$GIAJHGPACMK @ RVA 0x3254970

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GIAJHGPACMK
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *ELHFHAPBFMI,int64_t FNCOALJKOCK,
               MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *__this_00;
  PGICCMFLDPI_o *pPVar2;
  
  if ((DAT_0456715c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456715c = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)ELHFHAPBFMI,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 033549e4 to 034549eb has its CatchHandler @ 03354ab0 */
    if (((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
        (pPVar2 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
        pPVar2 != (PGICCMFLDPI_o *)0x0)) &&
       (ELHFHAPBFMI != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0)) {
                    /* try { // try from 03354a08 to 03454a0b has its CatchHandler @ 03354aa0 */
                    /* try { // try from 03354a0c to 03454a1f has its CatchHandler @ 03354aa4 */
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__SetEditBoxVisible
                (ELHFHAPBFMI,-1 < FNCOALJKOCK && FNCOALJKOCK < (pPVar2->fields).GDKPGIBMFPA,
                 (MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03354a20 to 03454a2b has its CatchHandler @ 03354aa8 */
  return;
}


// ===== public void OnRaidMute(long FNCOALJKOCK)  [RVA 0x3256128]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$OnRaidMute @ RVA 0x3256128

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__OnRaidMute
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int64_t FNCOALJKOCK,
               MethodInfo *method)

{
  (__this->fields).LMANLFKJNKN = FNCOALJKOCK;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MBAONPCGIOF(__this,(MethodInfo *)FNCOALJKOCK);
  return;
}


// ===== public virtual void OnNewMessageInChannel(CKLIGNAPKFO BOFAKAEIMME)  [RVA 0x3256130]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$OnNewMessageInChannel @ RVA 0x3256130

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__OnNewMessageInChannel
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int32_t BOFAKAEIMME,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_01;
  MethodInfo *method_00;
  undefined1 auVar1 [16];
  
  if ((DAT_0456715d & 1) == 0) {
                    /* try { // try from 03356154 to 0345617b has its CatchHandler @ 03356190 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_get_Item__
                );
    DAT_0456715d = 1;
  }
  auVar1 = (*(__this->klass->vtable)._15_IsOpened.methodPtr)
                     (__this,(__this->klass->vtable)._15_IsOpened.method);
  if ((auVar1._0_8_ & 1) != 0) {
    __this_00 = (__this->fields).KGPGGBPLEFB;
                    /* try { // try from 0335617c to 03456187 has its CatchHandler @ 03355db0 */
    if (__this_00 !=
        (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)0x0) {
      method_00 = 
      Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_get_Item__;
                    /* try { // try from 03356188 to 0345618f has its CatchHandler @ 03356190 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03356154 with catch @ 03356190
                       catch(type#2 @ 00000000) { ... } // from try @ 03356188 with catch @ 03356190
                        */
      __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)
                  System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             BOFAKAEIMME,
                             (MethodInfo_230F3DC *)
                             Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_get_Item__
                            );
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__JPNLCEGEMMB
                (__this_01,(Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this_01,method_00
                );
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__HEMCHIANOBD(__this,auVar1._8_8_);
  return;
}


// ===== public void RequestToStayOpened()  [RVA 0x32561B8]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$RequestToStayOpened @ RVA 0x32561B8

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__RequestToStayOpened
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04567167 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567167 = 1;
  }
  ppSVar7 = &(__this->fields).OALIOADCDAP;
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
        goto LAB_03354770;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03354770:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void JOEGAINPJCI(CHDGOFBHAFI.DCENIHNBCAA IMMNELPBGIF)  [RVA 0x32561BC]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$JOEGAINPJCI @ RVA 0x32561BC

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__JOEGAINPJCI
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int32_t IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int32_t iVar5;
  FEKEAPCCOOB_o *pFVar6;
  TabView_o *x;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  int DPJIDNBJIBG;
  
  if ((DAT_04567164 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo,IMMNELPBGIF);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567164 = 1;
  }
  pFVar6 = (__this->fields).HIOOMAJPEJP;
  if (pFVar6 == (FEKEAPCCOOB_o *)0x0) {
LAB_03353c00:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (pFVar6->fields).GEKOMLGOJOP;
  iVar5 = FEKEAPCCOOB__KPOBFGCNFAG(pFVar6,(MethodInfo *)0x0);
  if (0 < iVar5) {
    bVar2 = false;
    DPJIDNBJIBG = 0;
    do {
      pFVar6 = (__this->fields).HIOOMAJPEJP;
      if (pFVar6 == (FEKEAPCCOOB_o *)0x0) goto LAB_03353c00;
      x = FEKEAPCCOOB__IDLJKBJEEHF(pFVar6,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (x == (TabView_o *)0x0) {
LAB_03353ad8:
        x = (TabView_o *)0x0;
      }
      else {
        bVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo->_2).naturalAligment;
        if ((x->klass->_2).naturalAligment < bVar4) goto LAB_03353ad8;
        if ((x->klass->_2).typeHierarchy[(ulong)bVar4 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo) {
          x = (TabView_o *)0x0;
        }
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        if (x == (TabView_o *)0x0) goto LAB_03353c00;
        bVar4 = (*(code *)x->klass[1]._1.name)(x,x->klass[1]._1.namespaze);
        if ((bVar4 & 1) == 0) {
          (*(x->klass->vtable)._18_Hide.methodPtr)(x,(x->klass->vtable)._18_Hide.method);
          bVar2 = iVar1 == DPJIDNBJIBG;
        }
        else if (iVar1 == DPJIDNBJIBG) {
          (*x->klass[1]._1.image)(x,0,x->klass[1]._1.gc_desc);
        }
        pFVar6 = (__this->fields).HIOOMAJPEJP;
        if (((pFVar6 == (FEKEAPCCOOB_o *)0x0) ||
            (__this_00 = FEKEAPCCOOB__MJEMLECEAHI(pFVar6,DPJIDNBJIBG,(MethodInfo *)0x0),
            __this_00 == (UnityEngine_UI_Button_o *)0x0)) ||
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03353c00;
        UnityEngine_GameObject__SetActive(__this_01,(bool)(bVar4 & 1),(MethodInfo *)0x0);
      }
      DPJIDNBJIBG = DPJIDNBJIBG + 1;
    } while (iVar5 != DPJIDNBJIBG);
    if (bVar2) {
      pFVar6 = (__this->fields).HIOOMAJPEJP;
      if (pFVar6 != (FEKEAPCCOOB_o *)0x0) {
        FEKEAPCCOOB__KJDNLILMFFF(pFVar6,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03353c00;
    }
  }
  return;
}


// ===== private void IEFPBGKNKFH(BaseDialog LMEHKLFGEHI)  [RVA 0x32561C0]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$IEFPBGKNKFH @ RVA 0x32561C0

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IEFPBGKNKFH
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
               Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *pNVar4;
  Nekki_SF2_GUI_Dialogs_BaseDialog_c *pNVar5;
  UnityEngine_RectTransform_o **ppUVar6;
  
  if ((DAT_0456715e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_TypeInfo);
    FUN_01bab630(&MatchingDialog_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456715e = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)LMEHKLFGEHI,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (LMEHKLFGEHI == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
LAB_0335631c:
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pNVar4 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
    if ((pNVar4 == (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) ||
       (__this_00 == (UnityEngine_Transform_o *)0x0)) {
LAB_03356388:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppUVar6 = &(pNVar4->fields)._chatHidedMount;
  }
  else {
    pNVar5 = LMEHKLFGEHI->klass;
    bVar1 = (pNVar5->_2).naturalAligment;
    bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_TypeInfo->_2).naturalAligment;
    if ((bVar1 < bVar2) ||
       ((pNVar5->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_TypeInfo)) {
      bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_TypeInfo->_2).naturalAligment;
      if ((bVar1 < bVar2) ||
         ((pNVar5->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_TypeInfo)) {
        bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_TypeInfo->_2).naturalAligment;
        if ((bVar1 < bVar2) ||
           ((pNVar5->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_TypeInfo)) {
          bVar2 = (MatchingDialog_TypeInfo->_2).naturalAligment;
          if ((bVar1 < bVar2) ||
             ((pNVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)MatchingDialog_TypeInfo
             )) goto LAB_0335631c;
        }
      }
    }
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pNVar4 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
    if ((pNVar4 == (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) ||
       (__this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03356388;
    ppUVar6 = &(pNVar4->fields)._chatShownMount;
  }
  UnityEngine_Transform__SetParent
            (__this_00,(UnityEngine_Transform_o *)*ppUVar6,false,(MethodInfo *)0x0);
  return;
}


// ===== public ClanQuickRaidAccessView CreateClanQuickRaidAccessView(RaidBattleChatViewController ELHFHAPBFMI)  [RVA 0x325638C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CreateClanQuickRaidAccessView @ RVA 0x325638C

Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateClanQuickRaidAccessView
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
          Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *ELHFHAPBFMI,MethodInfo *method
          )

{
  Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_o *pNVar1;
  
  if ((DAT_0456715f & 1) == 0) {
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<ClanQuickRaidAccessView>__
                );
    DAT_0456715f = 1;
  }
  pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_o *)
           Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Create<object>
                     (__this,(__this->fields)._clanQuickRaidAccessViewPrefab,
                      (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)ELHFHAPBFMI,
                      Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<ClanQuickRaidAccessView>__
                     );
  return pNVar1;
}


// ===== private void IOFNONPFCDB(bool JBAFJCMPPBK)  [RVA 0x32563E8]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$IOFNONPFCDB @ RVA 0x32563E8

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IOFNONPFCDB
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,bool JBAFJCMPPBK,
               MethodInfo *method)

{
  if (JBAFJCMPPBK) {
    Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GNOFHCGJLGB(__this,(MethodInfo *)0x1);
    return;
  }
  return;
}


// ===== private void GNOFHCGJLGB()  [RVA 0x32563F4]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$GNOFHCGJLGB @ RVA 0x32563F4

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GNOFHCGJLGB
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  System_Action_o *pSVar2;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_04567160 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<CKLIGNAPKFO,_ChatSFViewController>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<CKLIGNAPKFO,_ChatSFViewController>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<CKLIGNAPKFO,_ChatSFViewController>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_ChatSFViewController>_get_Value__
                );
    DAT_04567160 = 1;
  }
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KGPGGBPLEFB;
  if (__this_00 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)0x0
     ) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__GetEnumerator
              (&local_50,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_GetEnumerator__
              );
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_Enumerator<CKLIGNAPKFO,_ChatSFViewController>_MoveNext__
                        );
      if (!bVar1) break;
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__JPNLCEGEMMB
                ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)(ulong)bVar1,
                 (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)
                 local_50.fields._current.fields.value,in_x2);
    }
    System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__Dispose
              (&local_50,
               Method_System_Collections_Generic_Dictionary_Enumerator<CKLIGNAPKFO,_ChatSFViewController>_Dispose__
              );
    Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__HEMCHIANOBD(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MBAONPCGIOF(__this,method_01);
    pSVar2 = (__this->fields).DAKAFGCLMPG;
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GKNMDAMGCJG(int DPJIDNBJIBG)  [RVA 0x3256568]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$GKNMDAMGCJG @ RVA 0x3256568

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GKNMDAMGCJG
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  return;
}


// ===== private void GIENGNEGHPJ()  [RVA 0x32555E8]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$GIENGNEGHPJ @ RVA 0x32555E8

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GIENGNEGHPJ
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar2;
  Nekki_SF2_GUI_SidePanelScroll_o *pNVar3;
  System_Action_o *pSVar4;
  AKOMJPINHEN_o *pAVar5;
  GCIFMNHADDF_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  KKLJIDJBFEI_o *pKVar6;
  FKDLCJJOGIP_o *pFVar7;
  EEOMEMBBGNA_o *pEVar8;
  System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE_00;
  System_Action_NLFLMJPNOLF__o *CJNHFNHJHPE_01;
  System_Action_long__o *CJNHFNHJHPE_02;
  CHDGOFBHAFI_o *pCVar9;
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *CJNHFNHJHPE_03;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *pMVar10;
  Nekki_SF2_GUI_SidePanelScroll_o **ppNVar11;
  CJFBGEEIPBA_o *pCVar12;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *pNVar13;
  UnityEngine_Events_UnityEvent_bool__o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *x;
  Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *pNVar14;
  Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *pNVar15;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *pNVar16;
  UnityEngine_Object_o *pUVar17;
  
  if ((DAT_04567161 & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_BHLHBBKAFHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_EMABOKFDKFO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_GDPFPAHLCJM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_GJBIHHLINEG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_IEFPBGKNKFH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_IOFNONPFCDB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JOEGAINPJCI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_OAJGFHDGJBK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_POIOFMEMHBP__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
    FUN_01bab630(&WideScreenController_TypeInfo);
    FUN_01bab630(&StringLiteral_9216/*"MoveableChatSF::Init: some of fields are NULL"*/);
    FUN_01bab630(&StringLiteral_10813/*"RaidChat.tab_light_active"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_04567161 = 1;
  }
  pNVar2 = (__this->fields)._sidePanel;
  if (pNVar2 == (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) goto LAB_0335601c;
  pNVar3 = Nekki_SF2_GUI_Shop_SidePanel__TryGetSidePanelScroll(pNVar2,(MethodInfo *)0x0);
  ppNVar11 = &(__this->fields).PGOJBPBDODE;
  *ppNVar11 = pNVar3;
  thunk_FUN_01c20e04(ppNVar11,pNVar3);
  pNVar2 = (__this->fields)._sidePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
LAB_03355914:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_9216/*"MoveableChatSF::Init: some of fields are NULL"*/,(MethodInfo *)0x0);
  }
  else {
    x = (__this->fields)._chatContent;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03355914;
    pNVar14 = (__this->fields)._btnHandle;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar1) goto LAB_03355914;
    pNVar15 = (__this->fields)._clanChatViewController;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar1) goto LAB_03355914;
    pNVar16 = (__this->fields)._raidBattleChatViewController;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar1) goto LAB_03355914;
    pUVar17 = (UnityEngine_Object_o *)(__this->fields)._chatMessageViewPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03355914;
    pUVar17 = (UnityEngine_Object_o *)(__this->fields)._clanJoinInfoViewPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03355914;
    pUVar17 = (UnityEngine_Object_o *)(__this->fields)._clanQuickRaidAccessViewPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03355914;
    pUVar17 = (UnityEngine_Object_o *)(__this->fields)._missingConnectionViewPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03355914;
    pNVar3 = *ppNVar11;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) goto LAB_03355914;
  }
  pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  WideScreenController__add_UpdateEvent(pSVar4,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GJBIHHLINEG(__this,method_00);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
  if (pAVar5 != (AKOMJPINHEN_o *)0x0) {
    pNVar14 = (__this->fields)._btnHandle;
    (__this->fields).LMANLFKJNKN = (pAVar5->fields).LMANLFKJNKN;
    if (pNVar14 != (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__Init(pNVar14,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MEIAHIJOJEA(__this,method_01);
      __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                    thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (GCIFMNHADDF_o *)0x0) {
        GCIFMNHADDF__EOAPHMAFKKP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
          KKLJIDJBFEI__KGJHOLAEPAI(pKVar6,pSVar4,(MethodInfo *)0x0);
          pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
            KKLJIDJBFEI__PJOBAFCNJAM(pKVar6,pSVar4,(MethodInfo *)0x0);
            pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
            pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
              KKLJIDJBFEI__HKAALOKPBPG(pKVar6,pSVar4,(MethodInfo *)0x0);
              pFVar7 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
              pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              if (pFVar7 != (FKDLCJJOGIP_o *)0x0) {
                FKDLCJJOGIP__ALADOEDCONI(pFVar7,pSVar4,(MethodInfo *)0x0);
                pFVar7 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
                pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                System_Action___ctor();
                    /* try { // try from 03355b48 to 03455c03 has its CatchHandler @ 03355b48
                       catch() { ... } // from try @ 03355b48 with catch @ 03355b48
                       catch() { ... } // from try @ 03355c68 with catch @ 03355b48
                       catch() { ... } // from try @ 03355ca8 with catch @ 03355b48
                       catch() { ... } // from try @ 03355ce0 with catch @ 03355b48
                       catch() { ... } // from try @ 03355d10 with catch @ 03355b48 */
                if (pFVar7 != (FKDLCJJOGIP_o *)0x0) {
                  FKDLCJJOGIP__AJLLLOFFOHF(pFVar7,pSVar4,(MethodInfo *)0x0);
                  pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                  pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                  System_Action___ctor();
                  if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
                    EEOMEMBBGNA__LLNDCMBPEJP(pEVar8,pSVar4,(MethodInfo *)0x0);
                    pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    System_Action___ctor();
                    if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
                      EEOMEMBBGNA__EMKEMHIPNOF(pEVar8,pSVar4,(MethodInfo *)0x0);
                      pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                      CJNHFNHJHPE_00 =
                           (System_Action_MGDJPGGPDJI__o *)
                           thunk_FUN_01bda818(System_Action<MGDJPGGPDJI>_TypeInfo);
                    /* try { // try from 03355c04 to 03455c0b has its CatchHandler @ 03355cc4 */
                      System_Action<object>___ctor();
                      if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
                        EEOMEMBBGNA__DEGNMFHGAFB(pEVar8,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                    /* try { // try from 03355c2c to 03455c37 has its CatchHandler @ 03355cb0 */
                        pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                        if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
                          pCVar12 = (pEVar8->fields).GMNJEBCECDA;
                    /* try { // try from 03355c48 to 03455c4b has its CatchHandler @ 03355cac */
                          CJNHFNHJHPE_01 =
                               (System_Action_NLFLMJPNOLF__o *)
                               thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
                    /* try { // try from 03355c4c to 03455c5b has its CatchHandler @ 03355cbc */
                    /* try { // try from 03355c5c to 03455c67 has its CatchHandler @ 03355cc0 */
                          System_Action<object>___ctor();
                          if (pCVar12 != (CJFBGEEIPBA_o *)0x0) {
                    /* try { // try from 03355c68 to 03455c9f has its CatchHandler @ 03355b48 */
                            CJFBGEEIPBA__LIKOAKDJPJI(pCVar12,CJNHFNHJHPE_01,(MethodInfo *)0x0);
                            pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                            if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
                              pCVar12 = (pEVar8->fields).GMNJEBCECDA;
                              CJNHFNHJHPE_02 =
                                   (System_Action_long__o *)
                                   thunk_FUN_01bda818(System_Action<long>_TypeInfo);
                    /* try { // try from 03355ca0 to 03455ca3 has its CatchHandler @ 03355cb8 */
                    /* try { // try from 03355ca4 to 03455ca7 has its CatchHandler @ 03355cb4 */
                    /* try { // try from 03355ca8 to 03455cdb has its CatchHandler @ 03355b48 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355c48 with catch @ 03355cac
                        */
                              System_Action<long>___ctor();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355c2c with catch @ 03355cb0
                        */
                              if (pCVar12 != (CJFBGEEIPBA_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355ca4 with catch @ 03355cb4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355ca0 with catch @ 03355cb8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355c4c with catch @ 03355cbc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355c5c with catch @ 03355cc0
                        */
                                CJFBGEEIPBA__EHJDAGPJFAB(pCVar12,CJNHFNHJHPE_02,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355c04 with catch @ 03355cc4
                        */
                                pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                                pSVar4 = (System_Action_o *)
                                         thunk_FUN_01bda818(System_Action_TypeInfo);
                                pMVar10 = 
                                Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_POIOFMEMHBP__;
                    /* try { // try from 03355cdc to 03455cdf has its CatchHandler @ 03355d00 */
                    /* try { // try from 03355ce0 to 03455d07 has its CatchHandler @ 03355b48 */
                                System_Action___ctor();
                                if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
                                  CHDGOFBHAFI__HMBJHHDACKC(pCVar9,pSVar4,pMVar10);
                    /* catch() { ... } // from try @ 03355cdc with catch @ 03355d00 */
                                  pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    /* try { // try from 03355d08 to 03455d0f has its CatchHandler @ 03355d24 */
                    /* try { // try from 03355d10 to 03455d1b has its CatchHandler @ 03355b48 */
                                  pSVar4 = (System_Action_o *)
                                           thunk_FUN_01bda818(System_Action_TypeInfo);
                                  pMVar10 = 
                                  Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_POIOFMEMHBP__;
                    /* try { // try from 03355d1c to 03455d23 has its CatchHandler @ 03355d24 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03355d08 with catch @ 03355d24
                       catch(type#2 @ 00000000) { ... } // from try @ 03355d1c with catch @ 03355d24
                        */
                                  System_Action___ctor();
                                  if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
                                    CHDGOFBHAFI__LCMOGMIIEIN(pCVar9,pSVar4,pMVar10);
                                    pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                                    CJNHFNHJHPE_03 =
                                         (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)
                                         thunk_FUN_01bda818(
                                                  System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
                                    pMVar10 = 
                                    Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JOEGAINPJCI__;
                                    System_Action<Int32Enum>___ctor();
                                    if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
                                      CHDGOFBHAFI__ENIDGKKPNAO(pCVar9,CJNHFNHJHPE_03,pMVar10);
                                      pAVar5 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
                                      if (pAVar5 != (AKOMJPINHEN_o *)0x0) {
                                        AKOMJPINHEN__CNCFBMNAIMG
                                                  (pAVar5,(EKMDOGKFEBJ_o *)__this,(MethodInfo *)0x0)
                                        ;
                    /* try { // try from 03355db0 to 03455f3f has its CatchHandler @ 03355db0
                       catch() { ... } // from try @ 03355db0 with catch @ 03355db0
                       catch() { ... } // from try @ 03355fe8 with catch @ 03355db0
                       catch() { ... } // from try @ 033560d4 with catch @ 03355db0
                       catch() { ... } // from try @ 0335617c with catch @ 03355db0 */
                                        pSVar4 = (System_Action_o *)
                                                 thunk_FUN_01bda818(System_Action_TypeInfo);
                                        System_Action___ctor();
                                        if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished ==
                                            0) {
                                          thunk_FUN_01ba7564();
                                        }
                                        Nekki_Utils_GlobalTimer__add_OnTick
                                                  (pSVar4,(MethodInfo *)0x0);
                                        pNVar15 = (__this->fields)._clanChatViewController;
                                        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                                          thunk_FUN_01ba7564();
                                        }
                                        bVar1 = UnityEngine_Object__op_Inequality
                                                          ((UnityEngine_Object_o *)pNVar15,
                                                           (UnityEngine_Object_o *)0x0,
                                                           (MethodInfo *)0x0);
                                        if (bVar1) {
                                          pNVar15 = (__this->fields)._clanChatViewController;
                                          if (pNVar15 ==
                                              (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o
                                               *)0x0) goto LAB_0335601c;
                                          pNVar13 = (pNVar15->fields).super._tabButton;
                                          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0)
                                          {
                                            thunk_FUN_01ba7564();
                                          }
                                          bVar1 = UnityEngine_Object__op_Inequality
                                                            ((UnityEngine_Object_o *)pNVar13,
                                                             (UnityEngine_Object_o *)0x0,
                                                             (MethodInfo *)0x0);
                                          if (bVar1) {
                                            pNVar15 = (__this->fields)._clanChatViewController;
                                            if ((pNVar15 ==
                                                 (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o
                                                  *)0x0) ||
                                               (pNVar13 = (pNVar15->fields).super._tabButton,
                                               pNVar13 ==
                                               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0)
                                               ) goto LAB_0335601c;
                                            Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                                      ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar13,
                                                       StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,
                                                       (MethodInfo *)0x0);
                                            pNVar15 = (__this->fields)._clanChatViewController;
                                            if ((pNVar15 ==
                                                 (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o
                                                  *)0x0) ||
                                               (pNVar13 = (pNVar15->fields).super._tabButton,
                                               pNVar13 ==
                                               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0)
                                               ) goto LAB_0335601c;
                                            Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                                                      ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar13,
                                                       StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,
                                                       (MethodInfo *)0x0);
                                          }
                                        }
                                        pNVar16 = (__this->fields)._raidBattleChatViewController;
                                        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                                          thunk_FUN_01ba7564();
                                        }
                                        bVar1 = UnityEngine_Object__op_Inequality
                                                          ((UnityEngine_Object_o *)pNVar16,
                                                           (UnityEngine_Object_o *)0x0,
                                                           (MethodInfo *)0x0);
                                        if (bVar1) {
                                          pNVar16 = (__this->fields)._raidBattleChatViewController;
                                          if (pNVar16 ==
                                              (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o
                                               *)0x0) goto LAB_0335601c;
                                          pNVar13 = (pNVar16->fields).super._tabButton;
                                          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0)
                                          {
                                            thunk_FUN_01ba7564();
                                          }
                                          bVar1 = UnityEngine_Object__op_Inequality
                                                            ((UnityEngine_Object_o *)pNVar13,
                                                             (UnityEngine_Object_o *)0x0,
                                                             (MethodInfo *)0x0);
                                          if (bVar1) {
                                            pNVar16 = (__this->fields)._raidBattleChatViewController
                                            ;
                                            if ((pNVar16 ==
                                                 (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o
                                                  *)0x0) ||
                                               (pNVar13 = (pNVar16->fields).super._tabButton,
                                               pNVar13 ==
                                               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0)
                                               ) goto LAB_0335601c;
                                            Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                                      ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar13,
                                                       StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,
                                                       (MethodInfo *)0x0);
                                            pNVar16 = (__this->fields)._raidBattleChatViewController
                                            ;
                                            if ((pNVar16 ==
                                                 (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o
                                                  *)0x0) ||
                                               (pNVar13 = (pNVar16->fields).super._tabButton,
                                               pNVar13 ==
                                               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0)
                                               ) goto LAB_0335601c;
                                            Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                                                      ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar13,
                                                       StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,
                                                       (MethodInfo *)0x0);
                                          }
                                        }
                                        pNVar2 = (__this->fields)._sidePanel;
                                        if (pNVar2 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                    /* try { // try from 03355f40 to 03455f67 has its CatchHandler @ 033560e8 */
                                          Nekki_SF2_GUI_Shop_SidePanel__Init
                                                    (pNVar2,(Nekki_SF2_GUI_Shop_SidePanelContent_o *
                                                            )(__this->fields)._chatContent,false,
                                                     (MethodInfo *)0x0);
                                          pNVar2 = (__this->fields)._sidePanel;
                                          if (pNVar2 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                                            __this_02 = (UnityEngine_Events_UnityEvent_bool__o *)
                                                        (pNVar2->fields)._OnMove;
                                            call = (UnityEngine_Events_UnityAction_T0__o *)
                                                   thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<bool>_TypeInfo);
                                            UnityEngine_Events_UnityAction<bool>___ctor();
                                            if (__this_02 !=
                                                (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
                    /* try { // try from 03355fa0 to 03455fc7 has its CatchHandler @ 033560e4 */
                                              UnityEngine_Events_UnityEvent<bool>__AddListener
                                                        (__this_02,call,
                                                                                                                  
                                                  Method_UnityEngine_Events_UnityEvent<bool>_AddListener__
                                                  );
                                              Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__HEMCHIANOBD
                                                        (__this,method_02);
                                              Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__NFEHJDIAOOD
                                                        (__this,method_03);
                                              pNVar3 = (__this->fields).PGOJBPBDODE;
                                              bVar1 = 
                                                  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CanOpenChat
                                                            (__this_01,method_04);
                                              if (pNVar3 != (Nekki_SF2_GUI_SidePanelScroll_o *)0x0)
                                              {
                                                *(byte *)&(pNVar3->fields).JNFBDGALDJJ = ~bVar1 & 1;
                    /* try { // try from 03355fcc to 03455fd7 has its CatchHandler @ 033560ec */
                                                pNVar3 = (__this->fields).PGOJBPBDODE;
                    /* try { // try from 03355fd8 to 03455fe7 has its CatchHandler @ 033560e0 */
                                                pSVar4 = (System_Action_o *)
                                                         thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 03355fe8 to 034560cf has its CatchHandler @ 03355db0 */
                                                System_Action___ctor();
                                                if (pNVar3 != (Nekki_SF2_GUI_SidePanelScroll_o *)0x0
                                                   ) {
                                                  Nekki_SF2_GUI_SidePanelScroll__add_OnIgnored_OnBeginDrag
                                                            (pNVar3,pSVar4,(MethodInfo *)0x0);
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
LAB_0335601c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator MDLEKAACDNA()  [RVA 0x3256810]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$MDLEKAACDNA @ RVA 0x3256810

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MDLEKAACDNA
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03356814 to 03456877 has its CatchHandler @ 03356814
                       catch() { ... } // from try @ 03356814 with catch @ 03356814
                       catch() { ... } // from try @ 033569f0 with catch @ 03356814
                       catch() { ... } // from try @ 03356a50 with catch @ 03356814
                       catch() { ... } // from try @ 03356aec with catch @ 03356814 */
  if ((DAT_04567162 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH_TypeInfo);
    DAT_04567162 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH_TypeInfo,
                                 method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
                    /* try { // try from 03356878 to 03456887 has its CatchHandler @ 03356a20 */
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void NFEHJDIAOOD()  [RVA 0x3256608]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$NFEHJDIAOOD @ RVA 0x3256608

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__NFEHJDIAOOD
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *pNVar4;
  WideScreenController_StaticFields *pWVar5;
  
  if ((DAT_04567163 & 1) == 0) {
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04567163 = 1;
  }
  pNVar4 = (__this->fields)._chatContent;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *)0x0) {
    if (((pNVar4->fields).super._DDIEMKPIMAJ_k__BackingField == false) &&
       ((pNVar4->fields).super._HLLLGIDPLEN_k__BackingField == false)) {
      if ((pNVar4->fields).super._JHGIPNHGGOK_k__BackingField == false) {
        bVar1 = (pNVar4->fields).super._LDBEGKGOHKI_k__BackingField != false;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
    Util__IHPDCBOFHPA((__this->fields)._optimizeChatRenderRoot,bVar1,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._leftChatHider;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._chatContent;
      if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *)0x0) {
        if ((((pNVar4->fields).super._HLLLGIDPLEN_k__BackingField == false) &&
            ((pNVar4->fields).super._JHGIPNHGGOK_k__BackingField == false)) &&
           ((pNVar4->fields).super._LDBEGKGOHKI_k__BackingField == false)) {
          bVar1 = false;
        }
        else {
          if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = WideScreenController__ShouldRenderBorders((MethodInfo *)0x0);
        }
        Util__IHPDCBOFHPA(pUVar3,bVar1,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._leftChatHider;
        if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
          pWVar5 = WideScreenController_TypeInfo->static_fields;
          (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                    ((pWVar5->BorderColor).fields.r,(pWVar5->BorderColor).fields.g,
                     (pWVar5->BorderColor).fields.b,(pWVar5->BorderColor).fields.a,pUVar2,
                     (pUVar2->klass->vtable)._23_set_color.method);
          pUVar2 = (__this->fields)._moveButtonHider;
          if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._chatContent;
            if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *)0x0) {
              if ((((pNVar4->fields).super._DDIEMKPIMAJ_k__BackingField == false) ||
                  ((pNVar4->fields).super._JHGIPNHGGOK_k__BackingField != false)) ||
                 (((pNVar4->fields).super._HLLLGIDPLEN_k__BackingField != false ||
                  ((pNVar4->fields).super._LDBEGKGOHKI_k__BackingField != false)))) {
                if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar1 = WideScreenController__ShouldRenderBorders((MethodInfo *)0x0);
              }
              else {
                bVar1 = false;
              }
              Util__IHPDCBOFHPA(pUVar3,bVar1,(MethodInfo *)0x0);
              pUVar2 = (__this->fields)._moveButtonHider;
              if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                pWVar5 = WideScreenController_TypeInfo->static_fields;
                    /* WARNING: Could not recover jumptable at 0x033567cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                          ((pWVar5->BorderColor).fields.r,(pWVar5->BorderColor).fields.g,
                           (pWVar5->BorderColor).fields.b,(pWVar5->BorderColor).fields.a,pUVar2,
                           (pUVar2->klass->vtable)._23_set_color.method);
                return;
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


// ===== private void POIOFMEMHBP()  [RVA 0x3253A28]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$POIOFMEMHBP @ RVA 0x3253A28

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__POIOFMEMHBP
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int32_t iVar5;
  FEKEAPCCOOB_o *pFVar6;
  TabView_o *x;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  int DPJIDNBJIBG;
  
  if ((DAT_04567164 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567164 = 1;
  }
  pFVar6 = (__this->fields).HIOOMAJPEJP;
  if (pFVar6 == (FEKEAPCCOOB_o *)0x0) {
LAB_03353c00:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (pFVar6->fields).GEKOMLGOJOP;
  iVar5 = FEKEAPCCOOB__KPOBFGCNFAG(pFVar6,(MethodInfo *)0x0);
  if (0 < iVar5) {
    bVar2 = false;
    DPJIDNBJIBG = 0;
    do {
      pFVar6 = (__this->fields).HIOOMAJPEJP;
      if (pFVar6 == (FEKEAPCCOOB_o *)0x0) goto LAB_03353c00;
      x = FEKEAPCCOOB__IDLJKBJEEHF(pFVar6,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (x == (TabView_o *)0x0) {
LAB_03353ad8:
        x = (TabView_o *)0x0;
      }
      else {
        bVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo->_2).naturalAligment;
        if ((x->klass->_2).naturalAligment < bVar4) goto LAB_03353ad8;
        if ((x->klass->_2).typeHierarchy[(ulong)bVar4 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo) {
          x = (TabView_o *)0x0;
        }
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        if (x == (TabView_o *)0x0) goto LAB_03353c00;
        bVar4 = (*(code *)x->klass[1]._1.name)(x,x->klass[1]._1.namespaze);
        if ((bVar4 & 1) == 0) {
          (*(x->klass->vtable)._18_Hide.methodPtr)(x,(x->klass->vtable)._18_Hide.method);
          bVar2 = iVar1 == DPJIDNBJIBG;
        }
        else if (iVar1 == DPJIDNBJIBG) {
          (*x->klass[1]._1.image)(x,0,x->klass[1]._1.gc_desc);
        }
        pFVar6 = (__this->fields).HIOOMAJPEJP;
        if (((pFVar6 == (FEKEAPCCOOB_o *)0x0) ||
            (__this_00 = FEKEAPCCOOB__MJEMLECEAHI(pFVar6,DPJIDNBJIBG,(MethodInfo *)0x0),
            __this_00 == (UnityEngine_UI_Button_o *)0x0)) ||
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03353c00;
        UnityEngine_GameObject__SetActive(__this_01,(bool)(bVar4 & 1),(MethodInfo *)0x0);
      }
      DPJIDNBJIBG = DPJIDNBJIBG + 1;
    } while (iVar5 != DPJIDNBJIBG);
    if (bVar2) {
      pFVar6 = (__this->fields).HIOOMAJPEJP;
      if (pFVar6 != (FEKEAPCCOOB_o *)0x0) {
        FEKEAPCCOOB__KJDNLILMFFF(pFVar6,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03353c00;
    }
  }
  return;
}


// ===== public MissingConnectionView CreateMissingConnectionView(ChatSFViewController ELHFHAPBFMI)  [RVA 0x32568A4]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CreateMissingConnectionView @ RVA 0x32568A4

Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateMissingConnectionView
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
          Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *ELHFHAPBFMI,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *pNVar1;
  
                    /* try { // try from 033568a4 to 034568af has its CatchHandler @ 03356a10 */
                    /* try { // try from 033568c0 to 034568c7 has its CatchHandler @ 033569f4 */
  if ((DAT_04567165 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<MissingConnectionView>__)
    ;
    DAT_04567165 = 1;
  }
                    /* try { // try from 033568ec to 034568ef has its CatchHandler @ 03356a1c */
  pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *)
           Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Create<object>
                     (__this,(__this->fields)._missingConnectionViewPrefab,ELHFHAPBFMI,
                      Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<MissingConnectionView>__
                     );
  return pNVar1;
}


// ===== public virtual void Show()  [RVA 0x3256900]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$Show @ RVA 0x3256900

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Show
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03356904 to 0345690b has its CatchHandler @ 03356a0c */
  if ((DAT_04567166 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
                    /* try { // try from 0335692c to 0345692f has its CatchHandler @ 03356a08 */
    DAT_04567166 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
                    /* try { // try from 03356948 to 0345694b has its CatchHandler @ 03356a04 */
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->HasEverShownChat = true;
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 0335696c to 0345696f has its CatchHandler @ 03356a00 */
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IKIMAGJOBLI()  [RVA 0x32546C4]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$IKIMAGJOBLI @ RVA 0x32546C4

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IKIMAGJOBLI
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
                    /* catch() { ... } // from try @ 03354430 with catch @ 033546c4 */
                    /* catch() { ... } // from try @ 03354494 with catch @ 033546c8 */
                    /* catch() { ... } // from try @ 03354688 with catch @ 033546cc */
                    /* catch() { ... } // from try @ 03354450 with catch @ 033546d0 */
                    /* catch() { ... } // from try @ 033543c4 with catch @ 033546d4 */
                    /* catch() { ... } // from try @ 03354368 with catch @ 033546d8 */
  if ((DAT_04567167 & 1) == 0) {
                    /* catch() { ... } // from try @ 033544c0 with catch @ 033546dc */
                    /* catch() { ... } // from try @ 03354670 with catch @ 033546e0 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567167 = 1;
  }
  ppSVar7 = &(__this->fields).OALIOADCDAP;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
                    /* try { // try from 033546f8 to 034546fb has its CatchHandler @ 0335470c */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03354798 to 0345479f has its CatchHandler @ 033547a0 */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
                    /* catch() { ... } // from try @ 033546f8 with catch @ 0335470c */
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
                    /* try { // try from 0335471c to 0345478b has its CatchHandler @ 033547a0 */
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_03354770;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03354770:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 0335478c to 03454797 has its CatchHandler @ 033541e4 */
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void GJBIHHLINEG()  [RVA 0x325656C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$GJBIHHLINEG @ RVA 0x325656C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GJBIHHLINEG
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *JNPCENEINON;
  
  if ((DAT_04567168 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04567168 = 1;
  }
  JNPCENEINON = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(WideScreenController_TypeInfo);
  }
  if (JNPCENEINON == (UnityEngine_RectTransform_o *)0x0) {
    JNPCENEINON = (UnityEngine_RectTransform_o *)0x0;
  }
  else if (JNPCENEINON->klass != UnityEngine_RectTransform_TypeInfo) {
    JNPCENEINON = (UnityEngine_RectTransform_o *)0x0;
  }
  WideScreenController__RunCustom(JNPCENEINON,(MethodInfo *)0x0);
  return;
}


// ===== private void OCGIOGEIOCE()  [RVA 0x325697C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$OCGIOGEIOCE @ RVA 0x325697C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__OCGIOGEIOCE
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar3;
  PBAKFOBIHEG_o *pPVar4;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  
                    /* try { // try from 03356984 to 0345698b has its CatchHandler @ 033569fc */
                    /* try { // try from 0335698c to 0345699b has its CatchHandler @ 033569f8 */
  if ((DAT_04567169 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 033569a0 to 034569ab has its CatchHandler @ 033569f0 */
    DAT_04567169 = 1;
  }
  pNVar3 = (__this->fields)._sidePanel;
  if (pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
    bVar2 = Nekki_SF2_GUI_Shop_SidePanel__IsTweening(pNVar3,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pNVar3 = (__this->fields)._sidePanel;
    if (pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                    /* try { // try from 033569c8 to 034569cb has its CatchHandler @ 03356a20 */
      if ((pNVar3->fields).DBNELADJPIJ == false) {
        return;
      }
      ppSVar10 = &(__this->fields).OALIOADCDAP;
                    /* try { // try from 033569cc to 034569cf has its CatchHandler @ 03356a14 */
                    /* try { // try from 033569d0 to 034569d7 has its CatchHandler @ 03356a1c */
      if (*ppSVar10 != (System_Collections_IEnumerator_o *)0x0) {
        return;
      }
                    /* try { // try from 033569d8 to 034569db has its CatchHandler @ 03356a0c */
                    /* try { // try from 033569dc to 034569df has its CatchHandler @ 03356a08 */
                    /* try { // try from 033569e0 to 034569e3 has its CatchHandler @ 03356a04 */
                    /* try { // try from 033569e4 to 034569e7 has its CatchHandler @ 03356a00 */
      bVar2 = HPHIGFJMKAC__JMHANNNMOEA
                        ((System_Collections_Generic_IEnumerable_RectTransform__o *)
                         (__this->fields)._touchDetectors,false,(MethodInfo *)0x0);
                    /* try { // try from 033569e8 to 034569eb has its CatchHandler @ 033569fc */
      if (!bVar2) {
        return;
      }
                    /* try { // try from 033569ec to 034569ef has its CatchHandler @ 033569f8 */
                    /* catch() { ... } // from try @ 033569a0 with catch @ 033569f0
                       try { // try from 033569f0 to 03456a37 has its CatchHandler @ 03356814 */
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IKIMAGJOBLI(__this,method_00);
                    /* catch() { ... } // from try @ 033568c0 with catch @ 033569f4 */
                    /* catch() { ... } // from try @ 0335698c with catch @ 033569f8
                       catch() { ... } // from try @ 033569ec with catch @ 033569f8 */
      pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03356984 with catch @ 033569fc
                       catch() { ... } // from try @ 033569e8 with catch @ 033569fc */
                    /* catch() { ... } // from try @ 0335696c with catch @ 03356a00
                       catch() { ... } // from try @ 033569e4 with catch @ 03356a00 */
                    /* catch() { ... } // from try @ 03356948 with catch @ 03356a04
                       catch() { ... } // from try @ 033569e0 with catch @ 03356a04 */
      pSVar5 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MDLEKAACDNA(__this,method_01);
                    /* catch() { ... } // from try @ 0335692c with catch @ 03356a08
                       catch() { ... } // from try @ 033569dc with catch @ 03356a08 */
      if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
                    /* catch() { ... } // from try @ 03356904 with catch @ 03356a0c
                       catch() { ... } // from try @ 033569d8 with catch @ 03356a0c */
                    /* catch() { ... } // from try @ 033568a4 with catch @ 03356a10 */
        pPVar7 = pPVar4->klass;
        uVar1._0_1_ = (pPVar7->_2).rank;
        uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 033569cc with catch @ 03356a14 */
                    /* catch() { ... } // from try @ 03356888 with catch @ 03356a18 */
                    /* catch() { ... } // from try @ 033568ec with catch @ 03356a1c
                       catch() { ... } // from try @ 033569d0 with catch @ 03356a1c */
        uVar8 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 03356878 with catch @ 03356a20
                       catch() { ... } // from try @ 033569c8 with catch @ 03356a20 */
        if (uVar8 != 0) {
          piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
          do {
                    /* try { // try from 03356a38 to 03456a4f has its CatchHandler @ 03356ae4 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar6 = pPVar7->vtable + *piVar9;
              goto LAB_03356a70;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
                    /* try { // try from 03356a50 to 03456ad3 has its CatchHandler @ 03356814 */
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_03356a70:
        pSVar5 = (System_Collections_IEnumerator_o *)
                 (*pVVar6->methodPtr)(pPVar4,pSVar5,1,pVVar6->method);
        *ppSVar10 = pSVar5;
        thunk_FUN_01c20e04(ppSVar10,pSVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GDPFPAHLCJM(long IMMNELPBGIF)  [RVA 0x3256AA0]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$GDPFPAHLCJM @ RVA 0x3256AA0

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GDPFPAHLCJM
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int64_t IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int32_t iVar5;
  FEKEAPCCOOB_o *pFVar6;
  TabView_o *x;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  int DPJIDNBJIBG;
  
  if ((DAT_04567164 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567164 = 1;
  }
  pFVar6 = (__this->fields).HIOOMAJPEJP;
  if (pFVar6 == (FEKEAPCCOOB_o *)0x0) {
LAB_03353c00:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (pFVar6->fields).GEKOMLGOJOP;
  iVar5 = FEKEAPCCOOB__KPOBFGCNFAG(pFVar6,(MethodInfo *)0x0);
  if (0 < iVar5) {
    bVar2 = false;
    DPJIDNBJIBG = 0;
    do {
      pFVar6 = (__this->fields).HIOOMAJPEJP;
      if (pFVar6 == (FEKEAPCCOOB_o *)0x0) goto LAB_03353c00;
      x = FEKEAPCCOOB__IDLJKBJEEHF(pFVar6,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (x == (TabView_o *)0x0) {
LAB_03353ad8:
        x = (TabView_o *)0x0;
      }
      else {
        bVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo->_2).naturalAligment;
        if ((x->klass->_2).naturalAligment < bVar4) goto LAB_03353ad8;
        if ((x->klass->_2).typeHierarchy[(ulong)bVar4 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo) {
          x = (TabView_o *)0x0;
        }
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        if (x == (TabView_o *)0x0) goto LAB_03353c00;
        bVar4 = (*(code *)x->klass[1]._1.name)(x,x->klass[1]._1.namespaze);
        if ((bVar4 & 1) == 0) {
          (*(x->klass->vtable)._18_Hide.methodPtr)(x,(x->klass->vtable)._18_Hide.method);
          bVar2 = iVar1 == DPJIDNBJIBG;
        }
        else if (iVar1 == DPJIDNBJIBG) {
          (*x->klass[1]._1.image)(x,0,x->klass[1]._1.gc_desc);
        }
        pFVar6 = (__this->fields).HIOOMAJPEJP;
        if (((pFVar6 == (FEKEAPCCOOB_o *)0x0) ||
            (__this_00 = FEKEAPCCOOB__MJEMLECEAHI(pFVar6,DPJIDNBJIBG,(MethodInfo *)0x0),
            __this_00 == (UnityEngine_UI_Button_o *)0x0)) ||
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03353c00;
        UnityEngine_GameObject__SetActive(__this_01,(bool)(bVar4 & 1),(MethodInfo *)0x0);
      }
      DPJIDNBJIBG = DPJIDNBJIBG + 1;
    } while (iVar5 != DPJIDNBJIBG);
    if (bVar2) {
      pFVar6 = (__this->fields).HIOOMAJPEJP;
      if (pFVar6 != (FEKEAPCCOOB_o *)0x0) {
        FEKEAPCCOOB__KJDNLILMFFF(pFVar6,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03353c00;
    }
  }
  return;
}


// ===== private void EBBMADMCCCG(int DPJIDNBJIBG)  [RVA 0x3256AA4]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$EBBMADMCCCG @ RVA 0x3256AA4

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__EBBMADMCCCG
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  return;
}


// ===== public bool CanOpenChat()  [RVA 0x32548FC]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CanOpenChat @ RVA 0x32548FC

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CanOpenChat
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  
  if (DAT_04567182 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatContent_TypeInfo);
    DAT_04567182 = '\x01';
  }
  if (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_TypeInfo->static_fields->_MPEEBDKAEAH_k__BackingField
      == false) {
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Nekki_SF2_Core_Quests_QuestsManager__HasAnyActionQuest(__this_00,0x2d,(MethodInfo *)0x0)
    ;
    bVar1 = !bVar1;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== private void Update()  [RVA 0x3256AA8]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$Update @ RVA 0x3256AA8

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Update
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__OCGIOGEIOCE(__this,method);
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__NFEHJDIAOOD(__this,method_00);
  return;
}


// ===== public static bool CanShowChatNowInShopScene()  [RVA 0x3256AC0]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CanShowChatNowInShopScene @ RVA 0x3256AC0

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CanShowChatNowInShopScene(MethodInfo *method)

{
  int32_t iVar1;
  NDPMLPGANCI_o *__this;
  CHDGOFBHAFI_o *pCVar2;
  int iVar3;
  
  if ((DAT_0456716a & 1) == 0) {
                    /* try { // try from 03356ad4 to 03456ae3 has its CatchHandler @ 03356ae4 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 03356a38 with catch @ 03356ae4
                       catch() { ... } // from try @ 03356ad4 with catch @ 03356ae4 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03356ae8 to 03456aeb has its CatchHandler @ 03356af4 */
                    /* try { // try from 03356aec to 03456af7 has its CatchHandler @ 03356814 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
                    /* catch() { ... } // from try @ 03356ae8 with catch @ 03356af4 */
    FUN_01bab630(&StringLiteral_9214/*"MoveableChatSF::CanShowChatNowInShopScene: incorrect call logic, must be in ShopScene"*/);
    DAT_0456716a = 1;
  }
  __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this == (NDPMLPGANCI_o *)0x0) {
LAB_03356be4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = NDPMLPGANCI__FFIOCEOHPEM(__this,(MethodInfo *)0x0);
  if (iVar1 == 4) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar3 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->ShowChatMode;
    if (iVar3 == 1) {
      return true;
    }
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      iVar3 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->ShowChatMode;
    }
    if (iVar3 == 2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
        return (pCVar2->fields).BLELLCNDBHN != false;
      }
      goto LAB_03356be4;
    }
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_9214/*"MoveableChatSF::CanShowChatNowInShopScene: incorrect call logic, must be in ShopScene"*/,(MethodInfo *)0x0);
  }
  return false;
}

