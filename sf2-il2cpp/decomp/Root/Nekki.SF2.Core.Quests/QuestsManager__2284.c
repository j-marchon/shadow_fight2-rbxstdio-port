// TypeDefIndex 2284
// Namespace: Nekki.SF2.Core.Quests
// public sealed class QuestsManager : MonoBehaviour
// Fields:
//   private static QuestsManager CBDMFFMCJBK; // 0x0
//   private bool _isRunActions; // 0x20
//   public string CurrentQuestName; // 0x28
//   public string CurrentActionName; // 0x30
//   private int _questsEndedMaxCount; // 0x38
//   private List<string> _runningQuestStagesInfo; // 0x40
//   private List<string> _questsEnded; // 0x48
//   private List<string> _questsInQueue; // 0x50
//   private List<MEMHEPBAJJA.HIAEDCDJJDJ.DebugReport> _localVariablesInfo; // 0x58
//   private Action IPDPGDFFNFI; // 0x60
//   public PKHMIGFEJCL QuestParametersBeforeLottery; // 0x68
//   public PKHMIGFEJCL QuestParameters; // 0x70
//   public readonly List<FPPKHNNABAD> QuestsAll; // 0x78
//   private readonly Dictionary<KFKFNDEJLKK.PCJFAKMBHCE, List<FPPKHNNABAD>> LEJLGCMCPLG; // 0x80
//   private readonly List<FPPKHNNABAD> GOAJEJNPDFA; // 0x88
//   private readonly CNOGDCKPLMJ LJMFDFGELCO; // 0x90
//   private readonly List<FPPKHNNABAD> GAMJEFPADCD; // 0x98
//   private bool HFOJKJFILDB; // 0xA0

// ===== public bool ScheduleQuests(KFKFNDEJLKK.PCJFAKMBHCE HIHCBMNGGEO)  [RVA 0x3305428]
// Nekki.SF2.Core.Quests.QuestsManager$$ScheduleQuests @ RVA 0x3305428

bool Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,int32_t HIHCBMNGGEO,MethodInfo *method
               )

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_00;
  FPPKHNNABAD_o *NDBPOFMECGL;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar3;
  MethodInfo *in_x3;
  int index;
  
  if ((DAT_04567751 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
    DAT_04567751 = 1;
  }
                    /* try { // try from 03405470 to 0350547b has its CatchHandler @ 03404dd0 */
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__GetQuests(__this,HIHCBMNGGEO,method);
  if (__this_00 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* try { // try from 0340547c to 03505483 has its CatchHandler @ 03405484 */
                    /* catch() { ... } // from try @ 03405408 with catch @ 03405484
                       catch() { ... } // from try @ 0340547c with catch @ 03405484 */
    if ((__this_00->fields)._size < 1) {
      bVar2 = false;
    }
    else {
      bVar2 = false;
      index = 0;
      do {
        pMVar3 = Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__;
        NDBPOFMECGL = (FPPKHNNABAD_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,index,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
        bVar1 = Nekki_SF2_Core_Quests_QuestsManager__HGKKAHIMGFI(__this,NDBPOFMECGL,pMVar3);
        pMVar3 = extraout_x1;
        if (!bVar1) {
          if (NDBPOFMECGL == (FPPKHNNABAD_o *)0x0) goto LAB_03405530;
          bVar1 = FPPKHNNABAD__DGCODECJJCC
                            (NDBPOFMECGL,(__this->fields).QuestParameters,(MethodInfo *)0x0);
          pMVar3 = extraout_x1_00;
          if (bVar1) {
                    /* try { // try from 034054e0 to 03505607 has its CatchHandler @ 034054e0
                       catch() { ... } // from try @ 034054e0 with catch @ 034054e0
                       catch() { ... } // from try @ 0340597c with catch @ 034054e0
                       catch() { ... } // from try @ 034059bc with catch @ 034054e0
                       catch() { ... } // from try @ 03405acc with catch @ 034054e0
                       catch() { ... } // from try @ 03405b50 with catch @ 034054e0
                       catch() { ... } // from try @ 03405b94 with catch @ 034054e0 */
            Nekki_SF2_Core_Quests_QuestsManager__AddQuestToStack(__this,NDBPOFMECGL,false,in_x3);
            bVar2 = true;
            pMVar3 = extraout_x1_01;
          }
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
      if (bVar2) {
        Nekki_SF2_Core_Quests_QuestsManager__PHHDBNIKFDK(__this,pMVar3);
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    return bVar2;
  }
LAB_03405530:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LogQuestsEnded()  [RVA 0x330595C]
// Nekki.SF2.Core.Quests.QuestsManager$$LogQuestsEnded @ RVA 0x330595C

void Nekki_SF2_Core_Quests_QuestsManager__LogQuestsEnded
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  System_String_o *IINPPDJHHKC;
  System_String_o *ALHDMEKMLPH;
  System_Action_string__StringBuilder__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_string__o *GHAAKPDHIJJ;
  System_Action_string__StringBuilder__o *CPECAEHDDDB;
  
                    /* try { // try from 0340595c to 03505963 has its CatchHandler @ 034059a4 */
                    /* try { // try from 03405968 to 0350596b has its CatchHandler @ 03405988 */
                    /* try { // try from 03405970 to 03505973 has its CatchHandler @ 03405984 */
                    /* try { // try from 03405978 to 0350597b has its CatchHandler @ 03405980 */
                    /* try { // try from 0340597c to 035059b7 has its CatchHandler @ 034054e0 */
                    /* catch() { ... } // from try @ 03405978 with catch @ 03405980 */
  if ((DAT_04567752 & 1) == 0) {
                    /* catch() { ... } // from try @ 03405970 with catch @ 03405984 */
                    /* catch() { ... } // from try @ 03405968 with catch @ 03405988 */
                    /* catch() { ... } // from try @ 03405808 with catch @ 0340598c */
    FUN_01bab630(&System_Action<string,_StringBuilder>_TypeInfo);
                    /* catch() { ... } // from try @ 03405818 with catch @ 03405990 */
                    /* catch() { ... } // from try @ 03405824 with catch @ 03405994 */
                    /* catch() { ... } // from try @ 03405830 with catch @ 03405998 */
    FUN_01bab630(&Method_OCLJMFBDKOA_ODFNLCMHHDA<string>__);
                    /* catch() { ... } // from try @ 034057a0 with catch @ 0340599c */
                    /* catch() { ... } // from try @ 03405744 with catch @ 034059a0 */
                    /* catch() { ... } // from try @ 0340595c with catch @ 034059a4 */
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_<>c_DMDGCOCGBMI__);
                    /* try { // try from 034059b8 to 035059bb has its CatchHandler @ 03405ad0 */
                    /* try { // try from 034059bc to 03505a17 has its CatchHandler @ 034054e0 */
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_11247/*"Reporting Quests ended, count = "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567752 = 1;
    method = extraout_x1;
  }
  GHAAKPDHIJJ = (__this->fields)._questsEnded;
  if ((Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  ALHDMEKMLPH = StringLiteral_11247/*"Reporting Quests ended, count = "*/;
  IINPPDJHHKC = StringLiteral_1/*""*/;
                    /* try { // try from 03405a18 to 03505a6b has its CatchHandler @ 03405ba8 */
  CPECAEHDDDB = Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->static_fields->__9__33_0;
  if (CPECAEHDDDB == (System_Action_string__StringBuilder__o *)0x0) {
    if ((Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo,method);
    }
    CPECAEHDDDB = (System_Action_string__StringBuilder__o *)
                  thunk_FUN_01bda818(System_Action<string,_StringBuilder>_TypeInfo);
    System_Action<object,_object>___ctor();
                    /* try { // try from 03405a70 to 03505a73 has its CatchHandler @ 03405b38 */
    ppSVar1 = &Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->static_fields->__9__33_0;
    *ppSVar1 = CPECAEHDDDB;
    thunk_FUN_01c20e04(ppSVar1,CPECAEHDDDB);
    method = extraout_x1_01;
  }
                    /* try { // try from 03405a84 to 03505aa3 has its CatchHandler @ 03405ba8 */
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo,method);
  }
                    /* try { // try from 03405aa4 to 03505aa7 has its CatchHandler @ 03405b20 */
                    /* try { // try from 03405aa8 to 03505aab has its CatchHandler @ 03405b1c */
                    /* try { // try from 03405aac to 03505aaf has its CatchHandler @ 03405b18 */
                    /* try { // try from 03405ab0 to 03505ab3 has its CatchHandler @ 03405b14 */
                    /* try { // try from 03405ab4 to 03505ab7 has its CatchHandler @ 03405b04 */
                    /* try { // try from 03405ab8 to 03505abb has its CatchHandler @ 03405af8 */
                    /* try { // try from 03405abc to 03505abf has its CatchHandler @ 03405af4 */
                    /* try { // try from 03405ac0 to 03505ac3 has its CatchHandler @ 03405af0 */
                    /* try { // try from 03405ac4 to 03505ac7 has its CatchHandler @ 03405ae8 */
  OCLJMFBDKOA__ODFNLCMHHDA<object>
            ((System_Collections_Generic_IList_T__o *)GHAAKPDHIJJ,ALHDMEKMLPH,IINPPDJHHKC,
             (System_Action_T__StringBuilder__o *)CPECAEHDDDB,true,false,false,
             Method_OCLJMFBDKOA_ODFNLCMHHDA<string>__);
  return;
}


// ===== public void LogQuestsInQueue()  [RVA 0x3305AC8]
// Nekki.SF2.Core.Quests.QuestsManager$$LogQuestsInQueue @ RVA 0x3305AC8

void Nekki_SF2_Core_Quests_QuestsManager__LogQuestsInQueue
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  System_Action_string__StringBuilder__o **ppSVar3;
  Il2CppClass *pIVar4;
  System_Action_T__o *action;
  Il2CppObject *arg1;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_string__o *pSVar6;
  System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *__this_00;
  System_Action_string__StringBuilder__o *pSVar7;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
                    /* try { // try from 03405ac8 to 03505acb has its CatchHandler @ 03405ae4 */
                    /* try { // try from 03405acc to 03505b4b has its CatchHandler @ 034054e0 */
                    /* catch() { ... } // from try @ 034059b8 with catch @ 03405ad0 */
                    /* catch() { ... } // from try @ 034056d8 with catch @ 03405adc */
                    /* catch() { ... } // from try @ 034056c8 with catch @ 03405ae0 */
                    /* catch() { ... } // from try @ 03405ac8 with catch @ 03405ae4 */
                    /* catch() { ... } // from try @ 03405ac4 with catch @ 03405ae8 */
                    /* catch() { ... } // from try @ 03405918 with catch @ 03405aec */
                    /* catch() { ... } // from try @ 03405ac0 with catch @ 03405af0 */
                    /* catch() { ... } // from try @ 03405abc with catch @ 03405af4 */
                    /* catch() { ... } // from try @ 03405ab8 with catch @ 03405af8 */
                    /* catch() { ... } // from try @ 03405904 with catch @ 03405afc */
                    /* catch() { ... } // from try @ 03405950 with catch @ 03405b00 */
  if ((DAT_04567753 & 1) == 0) {
                    /* catch() { ... } // from try @ 03405ab4 with catch @ 03405b04 */
                    /* catch() { ... } // from try @ 03405698 with catch @ 03405b08 */
                    /* catch() { ... } // from try @ 03405678 with catch @ 03405b0c */
    FUN_01bab630(&System_Action<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_TypeInfo);
                    /* catch() { ... } // from try @ 03405648 with catch @ 03405b10 */
                    /* catch() { ... } // from try @ 03405ab0 with catch @ 03405b14 */
                    /* catch() { ... } // from try @ 03405aac with catch @ 03405b18 */
    FUN_01bab630(&System_Action<string,_StringBuilder>_TypeInfo);
                    /* catch() { ... } // from try @ 03405aa8 with catch @ 03405b1c */
                    /* catch() { ... } // from try @ 03405aa4 with catch @ 03405b20 */
                    /* catch() { ... } // from try @ 03405708 with catch @ 03405b24 */
    FUN_01bab630(&bool_TypeInfo);
                    /* catch() { ... } // from try @ 034056f4 with catch @ 03405b28 */
                    /* catch() { ... } // from try @ 03405924 with catch @ 03405b2c */
                    /* catch() { ... } // from try @ 03405638 with catch @ 03405b30 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 03405864 with catch @ 03405b34 */
                    /* catch() { ... } // from try @ 03405a70 with catch @ 03405b38 */
                    /* catch() { ... } // from try @ 03405608 with catch @ 03405b3c */
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_GOMALLHONAD_MKOIIMINJJB__);
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_GOMALLHONAD_TypeInfo);
                    /* try { // try from 03405b4c to 03505b4f has its CatchHandler @ 03405b7c */
                    /* try { // try from 03405b50 to 03505b8b has its CatchHandler @ 034054e0 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_ForEach__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&Method_OCLJMFBDKOA_ODFNLCMHHDA<string>__);
                    /* catch() { ... } // from try @ 03405b4c with catch @ 03405b7c */
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
                    /* try { // try from 03405b8c to 03505b93 has its CatchHandler @ 03405ba8 */
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_<>c_IJOGHONILMP__);
                    /* try { // try from 03405b94 to 03505b9f has its CatchHandler @ 034054e0 */
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_<>c_MJDHHIOFJDF__);
                    /* try { // try from 03405ba0 to 03505ba7 has its CatchHandler @ 03405ba8 */
                    /* catch() { ... } // from try @ 03405a18 with catch @ 03405ba8
                       catch() { ... } // from try @ 03405a84 with catch @ 03405ba8
                       catch() { ... } // from try @ 03405b8c with catch @ 03405ba8
                       catch() { ... } // from try @ 03405ba0 with catch @ 03405ba8 */
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_<>c_OBBLNHDFDOL__);
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_11248/*"Reporting Quests in queue, count = "*/);
    FUN_01bab630(&StringLiteral_21940/*"values _isRunActions {0} isRender {1} CurrentActionName {2}"*/);
    FUN_01bab630(&StringLiteral_11250/*"Reporting _runningQuestStagesInfo, count = "*/);
    FUN_01bab630(&StringLiteral_11249/*"Reporting _localVariablesInfo, count = "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567753 = 1;
    method = extraout_x1;
  }
  pIVar2 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_Core_Quests_QuestsManager_GOMALLHONAD_TypeInfo,method);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._questsInQueue;
  if ((Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = StringLiteral_11248/*"Reporting Quests in queue, count = "*/;
  pSVar5 = StringLiteral_1/*""*/;
  pSVar7 = Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->static_fields->__9__34_0;
  if (pSVar7 == (System_Action_string__StringBuilder__o *)0x0) {
    if ((Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = (System_Action_string__StringBuilder__o *)
             thunk_FUN_01bda818(System_Action<string,_StringBuilder>_TypeInfo);
    System_Action<object,_object>___ctor();
    ppSVar3 = &Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->static_fields->__9__34_0;
    *ppSVar3 = pSVar7;
    thunk_FUN_01c20e04(ppSVar3,pSVar7);
  }
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCLJMFBDKOA__ODFNLCMHHDA<object>
            ((System_Collections_Generic_IList_T__o *)pSVar6,pSVar1,pSVar5,
             (System_Action_T__StringBuilder__o *)pSVar7,true,false,false,
             Method_OCLJMFBDKOA_ODFNLCMHHDA<string>__);
  pSVar6 = (__this->fields)._runningQuestStagesInfo;
  if ((Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = StringLiteral_11250/*"Reporting _runningQuestStagesInfo, count = "*/;
  pSVar5 = StringLiteral_1/*""*/;
  pSVar7 = Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->static_fields->__9__34_1;
  if (pSVar7 == (System_Action_string__StringBuilder__o *)0x0) {
    if ((Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = (System_Action_string__StringBuilder__o *)
             thunk_FUN_01bda818(System_Action<string,_StringBuilder>_TypeInfo);
    System_Action<object,_object>___ctor();
    ppSVar3 = &Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->static_fields->__9__34_1;
    *ppSVar3 = pSVar7;
    thunk_FUN_01c20e04(ppSVar3,pSVar7);
  }
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCLJMFBDKOA__ODFNLCMHHDA<object>
            ((System_Collections_Generic_IList_T__o *)pSVar6,pSVar1,pSVar5,
             (System_Action_T__StringBuilder__o *)pSVar7,true,false,false,
             Method_OCLJMFBDKOA_ODFNLCMHHDA<string>__);
  pIVar4 = (Il2CppClass *)thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pIVar4,
             Method_System_Collections_Generic_List<string>__ctor__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = pIVar4;
    thunk_FUN_01c20e04(pIVar2,pIVar4);
    __this_00 = (__this->fields)._localVariablesInfo;
    action = (System_Action_T__o *)
             thunk_FUN_01bda818(System_Action<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *)0x0)
    {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,action,
                 Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_ForEach__
                );
      pIVar4 = pIVar2->klass;
      if ((Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar1 = StringLiteral_11249/*"Reporting _localVariablesInfo, count = "*/;
      pSVar5 = StringLiteral_1/*""*/;
      pSVar7 = Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->static_fields->__9__34_3;
      if (pSVar7 == (System_Action_string__StringBuilder__o *)0x0) {
        if ((Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar7 = (System_Action_string__StringBuilder__o *)
                 thunk_FUN_01bda818(System_Action<string,_StringBuilder>_TypeInfo);
        System_Action<object,_object>___ctor();
        ppSVar3 = &Nekki_SF2_Core_Quests_QuestsManager_<>c_TypeInfo->static_fields->__9__34_3;
        *ppSVar3 = pSVar7;
        thunk_FUN_01c20e04(ppSVar3,pSVar7);
      }
      if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OCLJMFBDKOA__ODFNLCMHHDA<object>
                ((System_Collections_Generic_IList_T__o *)pIVar4,pSVar1,pSVar5,
                 (System_Action_T__StringBuilder__o *)pSVar7,true,false,false,
                 Method_OCLJMFBDKOA_ODFNLCMHHDA<string>__);
      local_64[0] = (__this->fields)._isRunActions;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_64);
      local_68[0] = (__this->fields).HFOJKJFILDB;
      arg1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_68);
      pSVar5 = System_String__Format
                         (StringLiteral_21940/*"values _isRunActions {0} isRender {1} CurrentActionName {2}"*/,pIVar2,arg1,
                          (Il2CppObject *)(__this->fields).CurrentActionName,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ScheduleAndRunQuests(KFKFNDEJLKK.PCJFAKMBHCE HIHCBMNGGEO)  [RVA 0x3300FB8]
// Nekki.SF2.Core.Quests.QuestsManager$$ScheduleAndRunQuests @ RVA 0x3300FB8

bool Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,int32_t HIHCBMNGGEO,MethodInfo *method
               )

{
  bool bVar1;
  MethodInfo *method_00;
  
  bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this,HIHCBMNGGEO,method);
  if ((bVar1) && ((__this->fields)._isRunActions == false)) {
    Nekki_SF2_Core_Quests_QuestsManager__KNCLEHBPCIN(__this,method_00);
  }
  return bVar1;
}


// ===== public void RegisterLocalVariable(MEMHEPBAJJA.HIAEDCDJJDJ ECGIMBNBIMM, string FDHGPAPAPDF)  [RVA 0x3305FC4]
// Nekki.SF2.Core.Quests.QuestsManager$$RegisterLocalVariable @ RVA 0x3305FC4

void Nekki_SF2_Core_Quests_QuestsManager__RegisterLocalVariable
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MEMHEPBAJJA_HIAEDCDJJDJ_o *ECGIMBNBIMM
               ,System_String_o *FDHGPAPAPDF,MethodInfo *method)

{
  System_Collections_Generic_List_FPPKHNNABAD__o *EDEHNHIHDDH;
  FPPKHNNABAD_o *__this_00;
  
  if ((DAT_04567754 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<FPPKHNNABAD>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&StringLiteral_4069/*"Cannot register any LocalVariable, _currentQuestStages is empty"*/);
    DAT_04567754 = 1;
  }
  EDEHNHIHDDH = (__this->fields).GAMJEFPADCD;
  if (EDEHNHIHDDH != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    if ((EDEHNHIHDDH->fields)._size < 1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_4069/*"Cannot register any LocalVariable, _currentQuestStages is empty"*/,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (FPPKHNNABAD_o *)
                DJNBJHPDKDP__KIKGKKGDCKK<object>
                          ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                           Method_DJNBJHPDKDP_KIKGKKGDCKK<FPPKHNNABAD>__);
    if (__this_00 != (FPPKHNNABAD_o *)0x0) {
      FPPKHNNABAD__CCHEJCDCGFE(__this_00,ECGIMBNBIMM,FDHGPAPAPDF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void Destroy()  [RVA 0x33060A0]
// Nekki.SF2.Core.Quests.QuestsManager$$Destroy @ RVA 0x33060A0

void Nekki_SF2_Core_Quests_QuestsManager__Destroy(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *obj;
  PKHMIGFEJCL_o *__this;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  
  if ((DAT_04567755 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 034060d8 to 035062cf has its CatchHandler @ 034060d8
                       catch() { ... } // from try @ 034060d8 with catch @ 034060d8
                       catch() { ... } // from try @ 03406418 with catch @ 034060d8
                       catch() { ... } // from try @ 034064d4 with catch @ 034060d8
                       catch() { ... } // from try @ 034064dc with catch @ 034060d8
                       catch() { ... } // from try @ 034064e8 with catch @ 034060d8
                       catch() { ... } // from try @ 034065b8 with catch @ 034060d8 */
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_TypeInfo);
    DAT_04567755 = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    __this = (pNVar2->fields).QuestParameters;
    if (__this != (PKHMIGFEJCL_o *)0x0) {
      PKHMIGFEJCL__Dispose(__this,(MethodInfo *)0x0);
      pNVar2 = Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK;
      if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_034061a4;
    }
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0)
    ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK =
         (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0;
    thunk_FUN_01c20e04(Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields,0);
    return;
  }
LAB_034061a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AAEPGFMPPNA(string HBDNGIDONHG)  [RVA 0x33061A8]
// Nekki.SF2.Core.Quests.QuestsManager$$AAEPGFMPPNA @ RVA 0x33061A8

void Nekki_SF2_Core_Quests_QuestsManager__AAEPGFMPPNA
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_String_o *HBDNGIDONHG,
               MethodInfo *method)

{
  return;
}


// ===== public void RefreshQuest_Debug(string HBDNGIDONHG)  [RVA 0x33061AC]
// Nekki.SF2.Core.Quests.QuestsManager$$RefreshQuest_Debug @ RVA 0x33061AC

void Nekki_SF2_Core_Quests_QuestsManager__RefreshQuest_Debug
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_String_o *HBDNGIDONHG,
               MethodInfo *method)

{
  return;
}


// ===== public FPPKHNNABAD GetQuestByName(string HBDNGIDONHG)  [RVA 0x33061B0]
// Nekki.SF2.Core.Quests.QuestsManager$$GetQuestByName @ RVA 0x33061B0

FPPKHNNABAD_o *
Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
          (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_String_o *HBDNGIDONHG,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  FPPKHNNABAD_o *pFVar1;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_01;
  
  if ((DAT_04567756 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Find__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_PBNGHJMCEEP_JGKPIIALJJN__);
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_PBNGHJMCEEP_TypeInfo);
    FUN_01bab630(&System_Predicate<FPPKHNNABAD>_TypeInfo);
    DAT_04567756 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_Core_Quests_QuestsManager_PBNGHJMCEEP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)HBDNGIDONHG;
    thunk_FUN_01c20e04(__this_00 + 1,HBDNGIDONHG);
    __this_01 = (__this->fields).QuestsAll;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<FPPKHNNABAD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
      pFVar1 = (FPPKHNNABAD_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<FPPKHNNABAD>_Find__);
      return pFVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KNCLEHBPCIN()  [RVA 0x330629C]
// Nekki.SF2.Core.Quests.QuestsManager$$KNCLEHBPCIN @ RVA 0x330629C

void Nekki_SF2_Core_Quests_QuestsManager__KNCLEHBPCIN
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar2;
  FPPKHNNABAD_o *__this_00;
  System_Action_FPPKHNNABAD__o *CJNHFNHJHPE;
  System_Object_array *args;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  System_String_o **ppSVar7;
  System_String_o *pSVar8;
  
  if ((DAT_04567757 & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 034062d0 to 035062f7 has its CatchHandler @ 03406514 */
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_PHBFKBEHGIK__);
    FUN_01bab630(&StringLiteral_15640/*"[{0}] Running quest : [{1}]"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567757 = 1;
  }
                    /* try { // try from 0340632c to 03506357 has its CatchHandler @ 03406510 */
  pSVar2 = (__this->fields).GOAJEJNPDFA;
  if (pSVar2 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
LAB_03406528:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (pSVar2->fields)._size) {
    (__this->fields)._isRunActions = true;
    (__this->fields).HFOJKJFILDB = false;
    do {
      __this_00 = (FPPKHNNABAD_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar2,0,
                             Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
      if ((__this_00 != (FPPKHNNABAD_o *)0x0) &&
         (bVar1 = FPPKHNNABAD__AAOKDJMOBPE(__this_00,(MethodInfo *)0x0), bVar1)) {
                    /* try { // try from 034063a8 to 035063af has its CatchHandler @ 03406508 */
                    /* try { // try from 034063b0 to 035063bb has its CatchHandler @ 0340650c */
        CJNHFNHJHPE = (System_Action_FPPKHNNABAD__o *)
                      thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
                    /* try { // try from 034063d0 to 035063d7 has its CatchHandler @ 034064f4 */
        System_Action<object>___ctor();
        FPPKHNNABAD__EIAAJACOKDP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 034063e8 to 035063ef has its CatchHandler @ 034064f0 */
        FPPKHNNABAD__IKDPMKOIDMP(__this_00,(__this->fields).QuestParameters,false,(MethodInfo *)0x0)
        ;
        ppSVar7 = &(__this->fields).CurrentQuestName;
                    /* try { // try from 034063fc to 03506403 has its CatchHandler @ 034064ec */
        *ppSVar7 = (__this_00->fields)._COIPKAKHDFP_k__BackingField;
        thunk_FUN_01c20e04(ppSVar7);
                    /* try { // try from 03406410 to 03506417 has its CatchHandler @ 034064e8 */
                    /* try { // try from 03406418 to 035064c3 has its CatchHandler @ 034060d8 */
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        pSVar3 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
        if ((pSVar3 == (System_Type_o *)0x0) ||
           (pIVar4 = (Il2CppObject *)
                     (*(pSVar3->klass->vtable)._8_unknown.methodPtr)
                               (pSVar3,(pSVar3->klass->vtable)._8_unknown.method),
           args == (System_Object_array *)0x0)) goto LAB_03406528;
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
        {
LAB_03406530:
                    /* try { // try from 03406530 to 03506533 has its CatchHandler @ 03406540 */
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(args->m_Items,pIVar4);
          pSVar8 = *ppSVar7;
          if ((pSVar8 != (System_String_o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class), lVar5 == 0
             )) goto LAB_03406530;
          if (1 < (uint)args->max_length) {
            args->m_Items[1] = (Il2CppObject *)pSVar8;
            thunk_FUN_01c20e04(args->m_Items + 1,pSVar8);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034064c4 to 035064cb has its CatchHandler @ 03406518 */
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 034064cc to 035064cf has its CatchHandler @ 03406500 */
                    /* try { // try from 034064d0 to 035064d3 has its CatchHandler @ 034064fc */
                    /* try { // try from 034064d4 to 035064d7 has its CatchHandler @ 034060d8 */
                    /* try { // try from 034064d8 to 035064db has its CatchHandler @ 034064f8 */
                    /* try { // try from 034064dc to 035064e3 has its CatchHandler @ 034060d8 */
            UnityEngine_Debug__LogFormat(StringLiteral_15640/*"[{0}] Running quest : [{1}]"*/,args,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).GOAJEJNPDFA;
                    /* try { // try from 034064e4 to 035064e7 has its CatchHandler @ 034064f4 */
            if (pSVar2 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) goto LAB_03406528;
            break;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pSVar2 = (__this->fields).GOAJEJNPDFA;
      if (pSVar2 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) goto LAB_03406528;
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar2,0,
                 Method_System_Collections_Generic_List<FPPKHNNABAD>_RemoveAt__);
      pSVar2 = (__this->fields).GOAJEJNPDFA;
      if (pSVar2 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) goto LAB_03406528;
                    /* try { // try from 03406398 to 0350639f has its CatchHandler @ 03406504 */
    } while (0 < (pSVar2->fields)._size);
                    /* catch() { ... } // from try @ 03406410 with catch @ 034064e8
                       try { // try from 034064e8 to 0350652f has its CatchHandler @ 034060d8 */
                    /* catch() { ... } // from try @ 034063fc with catch @ 034064ec */
    if ((pSVar2->fields)._size == 0) {
                    /* catch() { ... } // from try @ 034064cc with catch @ 03406500 */
      (__this->fields)._isRunActions = false;
      ppSVar7 = &(__this->fields).CurrentQuestName;
                    /* catch() { ... } // from try @ 03406398 with catch @ 03406504 */
                    /* catch() { ... } // from try @ 034063a8 with catch @ 03406508 */
                    /* catch() { ... } // from try @ 034063b0 with catch @ 0340650c */
                    /* catch() { ... } // from try @ 0340632c with catch @ 03406510 */
                    /* catch() { ... } // from try @ 034062d0 with catch @ 03406514 */
      *ppSVar7 = StringLiteral_1/*""*/;
                    /* catch() { ... } // from try @ 034064c4 with catch @ 03406518 */
      thunk_FUN_01c20e04(ppSVar7);
      return;
    }
  }
                    /* catch() { ... } // from try @ 034063e8 with catch @ 034064f0 */
                    /* catch() { ... } // from try @ 034063d0 with catch @ 034064f4
                       catch() { ... } // from try @ 034064e4 with catch @ 034064f4 */
                    /* catch() { ... } // from try @ 034064d8 with catch @ 034064f8 */
                    /* catch() { ... } // from try @ 034064d0 with catch @ 034064fc */
  return;
}


// ===== public bool HasAnyActionQuest(KFKFNDEJLKK.PCJFAKMBHCE HIHCBMNGGEO)  [RVA 0x3306540]
// Nekki.SF2.Core.Quests.QuestsManager$$HasAnyActionQuest @ RVA 0x3306540

bool Nekki_SF2_Core_Quests_QuestsManager__HasAnyActionQuest
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,int32_t HIHCBMNGGEO,MethodInfo *method
               )

{
  Il2CppObject *__this_00;
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_01;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* catch() { ... } // from try @ 03406530 with catch @ 03406540 */
                    /* try { // try from 03406550 to 035065b7 has its CatchHandler @ 034065cc */
  if ((DAT_04567758 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
    DAT_04567758 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = Nekki_SF2_Core_Quests_QuestsManager__GetQuests(__this,HIHCBMNGGEO,method);
  if (__this_01 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034065b8 to 035065c3 has its CatchHandler @ 034060d8 */
                    /* try { // try from 034065c4 to 035065cb has its CatchHandler @ 034065cc */
                    /* catch() { ... } // from try @ 03406550 with catch @ 034065cc
                       catch() { ... } // from try @ 034065c4 with catch @ 034065cc */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
  do {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
      __this_00 = local_48.fields._current;
      if (!bVar1) {
        iVar3 = 5;
        goto LAB_03406624;
      }
      bVar2 = Nekki_SF2_Core_Quests_QuestsManager__HGKKAHIMGFI
                        (__this,(FPPKHNNABAD_o *)local_48.fields._current,method);
    } while (bVar2);
    if ((FPPKHNNABAD_o *)__this_00 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method = (MethodInfo *)0x0;
    bVar2 = FPPKHNNABAD__DGCODECJJCC
                      ((FPPKHNNABAD_o *)__this_00,(__this->fields).QuestParameters,(MethodInfo *)0x0
                      );
  } while (!bVar2);
  iVar3 = 4;
LAB_03406624:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
  return bVar1 && iVar3 == 4;
}


// ===== public List<FPPKHNNABAD> GetQuests(KFKFNDEJLKK.PCJFAKMBHCE HIHCBMNGGEO)  [RVA 0x3305534]
// Nekki.SF2.Core.Quests.QuestsManager$$GetQuests @ RVA 0x3305534

System_Collections_Generic_List_FPPKHNNABAD__o *
Nekki_SF2_Core_Quests_QuestsManager__GetQuests
          (Nekki_SF2_Core_Quests_QuestsManager_o *__this,int32_t HIHCBMNGGEO,MethodInfo *method)

{
  bool bVar1;
  CNOGDCKPLMJ_o *__this_00;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar2;
  System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o *pSVar3;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *args;
  System_Type_o *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  int32_t local_24;
  
  if ((DAT_04567759 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&KFKFNDEJLKK_PCJFAKMBHCE_TypeInfo);
    FUN_01bab630(&StringLiteral_15639/*"[{0}] No quests registered to handle [{1}]"*/);
    DAT_04567759 = 1;
  }
  if (HIHCBMNGGEO == 10) {
    __this_00 = (__this->fields).LJMFDFGELCO;
    if (__this_00 != (CNOGDCKPLMJ_o *)0x0) {
      pSVar2 = CNOGDCKPLMJ__BIPAMLPKNCP(__this_00,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  else {
    pSVar3 = (__this->fields).LEJLGCMCPLG;
    if (pSVar3 != (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                   *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,HIHCBMNGGEO
                         ,
                         Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_ContainsKey__
                        );
                    /* try { // try from 03405608 to 0350560f has its CatchHandler @ 03405b3c */
      pSVar3 = (__this->fields).LEJLGCMCPLG;
      if (bVar1) {
        if (pSVar3 != (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                       *)0x0) {
          pSVar2 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
                   System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                              HIHCBMNGGEO,
                              Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_get_Item__
                             );
          return pSVar2;
        }
      }
      else {
                    /* try { // try from 03405638 to 0350563f has its CatchHandler @ 03405b30 */
        __this_01 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
                    /* try { // try from 03405648 to 03505653 has its CatchHandler @ 03405b10 */
        System_Collections_Generic_List<object>___ctor
                  (__this_01,Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
        if (pSVar3 != (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                       *)0x0) {
                    /* try { // try from 03405678 to 0350567b has its CatchHandler @ 03405b0c */
          System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,HIHCBMNGGEO,
                     (Il2CppObject *)__this_01,
                     Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_Add__
                    );
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
                    /* try { // try from 03405698 to 0350569b has its CatchHandler @ 03405b08 */
          pSVar4 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
          if (pSVar4 != (System_Type_o *)0x0) {
            pIVar5 = (Il2CppObject *)
                     (*(pSVar4->klass->vtable)._8_unknown.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._8_unknown.method);
            if (args != (System_Object_array *)0x0) {
                    /* try { // try from 034056c8 to 035056cb has its CatchHandler @ 03405ae0 */
              if ((pIVar5 != (Il2CppObject *)0x0) &&
                 (lVar6 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class),
                 lVar6 == 0)) {
LAB_0340579c:
                uVar7 = thunk_FUN_01be8e1c();
                    /* try { // try from 034057a0 to 035057cb has its CatchHandler @ 0340599c */
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar7,0);
              }
              if ((int)args->max_length != 0) {
                    /* try { // try from 034056d8 to 035056df has its CatchHandler @ 03405adc */
                args->m_Items[0] = pIVar5;
                thunk_FUN_01c20e04(args->m_Items,pIVar5);
                local_24 = HIHCBMNGGEO;
                    /* try { // try from 034056f4 to 035056fb has its CatchHandler @ 03405b28 */
                pIVar5 = (Il2CppObject *)
                         thunk_FUN_01bda448(KFKFNDEJLKK_PCJFAKMBHCE_TypeInfo,&local_24);
                    /* try { // try from 03405708 to 0350570b has its CatchHandler @ 03405b24 */
                if ((pIVar5 != (Il2CppObject *)0x0) &&
                   (lVar6 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class),
                   lVar6 == 0)) goto LAB_0340579c;
                if (1 < (uint)args->max_length) {
                  args->m_Items[1] = pIVar5;
                  thunk_FUN_01c20e04(args->m_Items + 1,pIVar5);
                    /* try { // try from 03405744 to 0350576b has its CatchHandler @ 034059a0 */
                  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  UnityEngine_Debug__LogWarningFormat(StringLiteral_15639/*"[{0}] No quests registered to handle [{1}]"*/,args,(MethodInfo *)0x0);
                  pSVar3 = (__this->fields).LEJLGCMCPLG;
                  if (pSVar3 != (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                                 *)0x0) {
                    pSVar2 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
                             System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                        pSVar3,HIHCBMNGGEO,
                                        Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_get_Item__
                                       );
                    return pSVar2;
                  }
                  goto LAB_03405794;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
          }
        }
      }
    }
  }
LAB_03405794:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PHBFKBEHGIK(FPPKHNNABAD NDBPOFMECGL)  [RVA 0x33066D0]
// Nekki.SF2.Core.Quests.QuestsManager$$PHBFKBEHGIK @ RVA 0x33066D0

void Nekki_SF2_Core_Quests_QuestsManager__PHBFKBEHGIK
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               MethodInfo *method)

{
  int32_t index;
  Il2CppObject *pIVar1;
  System_Action_FPPKHNNABAD__o *CJNHFNHJHPE;
  System_Predicate_T__o *match;
  PKHMIGFEJCL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Action_o *pSVar2;
  Il2CppClass *__this_01;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar3;
  
  if ((DAT_0456775a & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_FindLastIndex__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_PPPHDEGLIIA_NMCABINAHMK__);
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_PPPHDEGLIIA_TypeInfo);
    FUN_01bab630(&System_Predicate<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_PHBFKBEHGIK__);
    DAT_0456775a = 1;
  }
  pIVar1 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_Core_Quests_QuestsManager_PPPHDEGLIIA_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar1 + 1;
    pIVar1->klass = (Il2CppClass *)NDBPOFMECGL;
    thunk_FUN_01c20e04(pIVar1,NDBPOFMECGL);
    __this_01 = pIVar1->klass;
    if (__this_01 == (Il2CppClass *)0x0) {
      return;
    }
    CJNHFNHJHPE = (System_Action_FPPKHNNABAD__o *)
                  thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
    System_Action<object>___ctor();
    FPPKHNNABAD__HAFNHPBMIBI((FPPKHNNABAD_o *)__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).GOAJEJNPDFA;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<FPPKHNNABAD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar3 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
      index = System_Collections_Generic_List<object>__FindLastIndex
                        ((System_Collections_Generic_List_object__o *)pSVar3,match,
                         Method_System_Collections_Generic_List<FPPKHNNABAD>_FindLastIndex__);
      method_00 = extraout_x1;
      if (-1 < index) {
        pSVar3 = (__this->fields).GOAJEJNPDFA;
        if (pSVar3 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) goto LAB_034068b8;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                   Method_System_Collections_Generic_List<FPPKHNNABAD>_RemoveAt__);
        method_00 = extraout_x1_00;
      }
      if ((pIVar1->klass != (Il2CppClass *)0x0) &&
         (pSVar3 = (__this->fields).GOAJEJNPDFA,
         pSVar3 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0)) {
        if ((pSVar3->fields)._size < 1) {
          Nekki_SF2_Core_Quests_QuestsManager__ClearActions(__this,method_00);
          __this_00 = (__this->fields).QuestParameters;
          if (__this_00 == (PKHMIGFEJCL_o *)0x0) goto LAB_034068b8;
          PKHMIGFEJCL__FCOONLKJDAK(__this_00,(MethodInfo *)0x0);
          pSVar2 = (__this->fields).IPDPGDFFNFI;
          if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034068b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar2->fields).super.super.invoke_impl)
                      ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method)
            ;
            return;
          }
        }
        else {
          (__this->fields).HFOJKJFILDB = true;
        }
        return;
      }
    }
  }
LAB_034068b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnQuestsListEmpty(Action CJNHFNHJHPE)  [RVA 0x33069A0]
// Nekki.SF2.Core.Quests.QuestsManager$$add_OnQuestsListEmpty @ RVA 0x33069A0

void Nekki_SF2_Core_Quests_QuestsManager__add_OnQuestsListEmpty
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_0456775b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456775b = 1;
  }
  ppSVar4 = &(__this->fields).IPDPGDFFNFI;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 03406a10 to 03506a17 has its CatchHandler @ 03406a9c */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* try { // try from 03406a34 to 03506a3b has its CatchHandler @ 03406a94 */
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public List<FPPKHNNABAD> GetQuestsForTests(KFKFNDEJLKK.PCJFAKMBHCE HIHCBMNGGEO)  [RVA 0x3306A3C]
// Nekki.SF2.Core.Quests.QuestsManager$$GetQuestsForTests @ RVA 0x3306A3C

System_Collections_Generic_List_FPPKHNNABAD__o *
Nekki_SF2_Core_Quests_QuestsManager__GetQuestsForTests
          (Nekki_SF2_Core_Quests_QuestsManager_o *__this,int32_t HIHCBMNGGEO,MethodInfo *method)

{
  return (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0;
}


// ===== private void GCEPBOJCJAE(string HBDNGIDONHG)  [RVA 0x33068C4]
// Nekki.SF2.Core.Quests.QuestsManager$$GCEPBOJCJAE @ RVA 0x33068C4

void Nekki_SF2_Core_Quests_QuestsManager__GCEPBOJCJAE
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_String_o *HBDNGIDONHG,
               MethodInfo *method)

{
  return;
}


// ===== public void RunQuestByName_DEBUG(string HBDNGIDONHG)  [RVA 0x3306A44]
// Nekki.SF2.Core.Quests.QuestsManager$$RunQuestByName_DEBUG @ RVA 0x3306A44

void Nekki_SF2_Core_Quests_QuestsManager__RunQuestByName_DEBUG
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_String_o *HBDNGIDONHG,
               MethodInfo *method)

{
  FPPKHNNABAD_o *NDBPOFMECGL;
  System_Object_array *args;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
                    /* try { // try from 03406a4c to 03506a4f has its CatchHandler @ 03406a8c */
                    /* try { // try from 03406a50 to 03506a5f has its CatchHandler @ 03406a90 */
  if ((DAT_0456775c & 1) == 0) {
                    /* try { // try from 03406a60 to 03506a83 has its CatchHandler @ 034068ec */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9500/*"No quest [{0}] found"*/);
                    /* try { // try from 03406a84 to 03506a87 has its CatchHandler @ 03406a98 */
                    /* try { // try from 03406a88 to 03506ab3 has its CatchHandler @ 034068ec */
    DAT_0456775c = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406a4c with catch @ 03406a8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406a50 with catch @ 03406a90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406a34 with catch @ 03406a94
                        */
  NDBPOFMECGL = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName(__this,HBDNGIDONHG,method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406a84 with catch @ 03406a98
                        */
  if (NDBPOFMECGL != (FPPKHNNABAD_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406a10 with catch @ 03406a9c
                        */
    Nekki_SF2_Core_Quests_QuestsManager__AddQuestToStack(__this,NDBPOFMECGL,false,in_x3);
    if ((__this->fields)._isRunActions != false) {
                    /* try { // try from 03406ab4 to 03506ab7 has its CatchHandler @ 03406ad8 */
                    /* try { // try from 03406ab8 to 03506adf has its CatchHandler @ 034068ec */
      return;
    }
    Nekki_SF2_Core_Quests_QuestsManager__KNCLEHBPCIN(__this,method_00);
    return;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03406ab4 with catch @ 03406ad8 */
                    /* try { // try from 03406ae0 to 03506ae7 has its CatchHandler @ 03406afc */
                    /* try { // try from 03406ae8 to 03506af3 has its CatchHandler @ 034068ec */
  if ((HBDNGIDONHG != (System_String_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(HBDNGIDONHG,(((args->obj).klass)->_1).element_class), lVar1 == 0))
  {
    uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar2,0);
  }
                    /* try { // try from 03406af4 to 03506afb has its CatchHandler @ 03406afc */
  if ((int)args->max_length != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03406ae0 with catch @ 03406afc
                       catch(type#2 @ 00000000) { ... } // from try @ 03406af4 with catch @ 03406afc
                        */
    args->m_Items[0] = (Il2CppObject *)HBDNGIDONHG;
    thunk_FUN_01c20e04(args->m_Items,HBDNGIDONHG);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_9500/*"No quest [{0}] found"*/,args,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void AddQuestToStack(FPPKHNNABAD NDBPOFMECGL, bool HOKEEIDBPAG = False)  [RVA 0x33058B4]
// Nekki.SF2.Core.Quests.QuestsManager$$AddQuestToStack @ RVA 0x33058B4

void Nekki_SF2_Core_Quests_QuestsManager__AddQuestToStack
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               bool HOKEEIDBPAG,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (NDBPOFMECGL == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  method_01 = (MethodInfo *)0x0;
  FPPKHNNABAD__MLKGFGDCLIF(NDBPOFMECGL,(__this->fields).QuestParameters,(MethodInfo *)0x0);
  Nekki_SF2_Core_Quests_QuestsManager__LFENGGKOJDO(__this,NDBPOFMECGL,method_01);
  if (HOKEEIDBPAG) {
    Nekki_SF2_Core_Quests_QuestsManager__PHHDBNIKFDK(__this,method_00);
    return;
  }
                    /* try { // try from 03405904 to 0350590f has its CatchHandler @ 03405afc */
  return;
}


// ===== public bool IsScheduledQuestsEmpty()  [RVA 0x3306D24]
// Nekki.SF2.Core.Quests.QuestsManager$$IsScheduledQuestsEmpty @ RVA 0x3306D24

bool Nekki_SF2_Core_Quests_QuestsManager__IsScheduledQuestsEmpty
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_0456775d & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    DAT_0456775d = 1;
  }
  pSVar1 = (__this->fields).GOAJEJNPDFA;
  if (pSVar1 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    return (pSVar1->fields)._size == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private void KAECEBNNMIP(int DPJIDNBJIBG)  [RVA 0x330653C]
// Nekki.SF2.Core.Quests.QuestsManager$$KAECEBNNMIP @ RVA 0x330653C

void Nekki_SF2_Core_Quests_QuestsManager__KAECEBNNMIP
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method
               )

{
  return;
}


// ===== private void PHHDBNIKFDK()  [RVA 0x330590C]
// Nekki.SF2.Core.Quests.QuestsManager$$PHHDBNIKFDK @ RVA 0x330590C

void Nekki_SF2_Core_Quests_QuestsManager__PHHDBNIKFDK
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03405918 to 0350591f has its CatchHandler @ 03405aec */
  if ((DAT_0456775e & 1) == 0) {
                    /* try { // try from 03405924 to 03505943 has its CatchHandler @ 03405b2c */
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Sort__);
    DAT_0456775e = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).GOAJEJNPDFA;
  if (__this_00 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* try { // try from 03405950 to 03505957 has its CatchHandler @ 03405b00 */
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<FPPKHNNABAD>_Sort__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void InterruptQuest(string HBDNGIDONHG)  [RVA 0x3306D74]
// Nekki.SF2.Core.Quests.QuestsManager$$InterruptQuest @ RVA 0x3306D74

void Nekki_SF2_Core_Quests_QuestsManager__InterruptQuest
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_String_o *HBDNGIDONHG,
               MethodInfo *method)

{
  FPPKHNNABAD_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName(__this,HBDNGIDONHG,method);
  if (__this_00 != (FPPKHNNABAD_o *)0x0) {
    FPPKHNNABAD__NBHELNKAKNN(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void Update()  [RVA 0x3306D94]
// Nekki.SF2.Core.Quests.QuestsManager$$Update @ RVA 0x3306D94

void Nekki_SF2_Core_Quests_QuestsManager__Update
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
                    /* try { // try from 03406d98 to 03506eff has its CatchHandler @ 03406d98
                       catch() { ... } // from try @ 03406d98 with catch @ 03406d98
                       catch() { ... } // from try @ 03406ff0 with catch @ 03406d98
                       catch() { ... } // from try @ 03407228 with catch @ 03406d98
                       catch() { ... } // from try @ 03407230 with catch @ 03406d98
                       catch() { ... } // from try @ 034072f0 with catch @ 03406d98 */
  if ((__this->fields).HFOJKJFILDB != false) {
    Nekki_SF2_Core_Quests_QuestsManager__KNCLEHBPCIN(__this,method);
    return;
  }
  return;
}


// ===== public void OnQuestStageStartedToRun(FPPKHNNABAD NDBPOFMECGL)  [RVA 0x3306DA4]
// Nekki.SF2.Core.Quests.QuestsManager$$OnQuestStageStartedToRun @ RVA 0x3306DA4

void Nekki_SF2_Core_Quests_QuestsManager__OnQuestStageStartedToRun
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_00;
  FPPKHNNABAD_array *pFVar3;
  
  if ((DAT_0456775f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__);
    DAT_0456775f = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
  __this_00 = (__this->fields).GAMJEFPADCD;
  if (__this_00 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    pFVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pFVar3 != (FPPKHNNABAD_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pFVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pFVar3->m_Items[(int)uVar1] = NDBPOFMECGL;
        thunk_FUN_01c20e04(pFVar3->m_Items + (int)uVar1,NDBPOFMECGL);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)NDBPOFMECGL,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RunQuests()  [RVA 0x3305FB4]
// Nekki.SF2.Core.Quests.QuestsManager$$RunQuests @ RVA 0x3305FB4

void Nekki_SF2_Core_Quests_QuestsManager__RunQuests
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  if ((__this->fields)._isRunActions != false) {
    return;
  }
  Nekki_SF2_Core_Quests_QuestsManager__KNCLEHBPCIN(__this,method);
  return;
}


// ===== public int get_ScheduledQuestsCount()  [RVA 0x3306E50]
// Nekki.SF2.Core.Quests.QuestsManager$$get_ScheduledQuestsCount @ RVA 0x3306E50

int32_t Nekki_SF2_Core_Quests_QuestsManager__get_ScheduledQuestsCount
                  (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567760 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    DAT_04567760 = 1;
  }
  pSVar1 = (__this->fields).GOAJEJNPDFA;
  if (pSVar1 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void ClearActions()  [RVA 0x33068C8]
// Nekki.SF2.Core.Quests.QuestsManager$$ClearActions @ RVA 0x33068C8

void Nekki_SF2_Core_Quests_QuestsManager__ClearActions
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567761 & 1) == 0) {
                    /* try { // try from 034068ec to 03506a0f has its CatchHandler @ 034068ec
                       catch() { ... } // from try @ 034068ec with catch @ 034068ec
                       catch() { ... } // from try @ 03406a60 with catch @ 034068ec
                       catch() { ... } // from try @ 03406a88 with catch @ 034068ec
                       catch() { ... } // from try @ 03406ab8 with catch @ 034068ec
                       catch() { ... } // from try @ 03406ae8 with catch @ 034068ec */
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567761 = 1;
  }
  (__this->fields).HFOJKJFILDB = false;
  (__this->fields)._isRunActions = false;
  ppSVar4 = &(__this->fields).CurrentQuestName;
  *ppSVar4 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar4);
  pSVar2 = (__this->fields).GOAJEJNPDFA;
  if (pSVar2 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields)._questsInQueue;
    if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public MEMHEPBAJJA.HIAEDCDJJDJ GetLocalVariable(string FDHGPAPAPDF)  [RVA 0x3306E98]
// Nekki.SF2.Core.Quests.QuestsManager$$GetLocalVariable @ RVA 0x3306E98

MEMHEPBAJJA_HIAEDCDJJDJ_o *
Nekki_SF2_Core_Quests_QuestsManager__GetLocalVariable
          (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_String_o *FDHGPAPAPDF,
          MethodInfo *method)

{
  System_Collections_Generic_List_FPPKHNNABAD__o *EDEHNHIHDDH;
  FPPKHNNABAD_o *__this_00;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar1;
  
  if ((DAT_04567762 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<FPPKHNNABAD>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    DAT_04567762 = 1;
  }
  EDEHNHIHDDH = (__this->fields).GAMJEFPADCD;
  if (EDEHNHIHDDH != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    if ((EDEHNHIHDDH->fields)._size < 1) {
      return (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
    }
    __this_00 = (FPPKHNNABAD_o *)
                DJNBJHPDKDP__KIKGKKGDCKK<object>
                          ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                           Method_DJNBJHPDKDP_KIKGKKGDCKK<FPPKHNNABAD>__);
    if (__this_00 != (FPPKHNNABAD_o *)0x0) {
                    /* try { // try from 03406f00 to 03506f27 has its CatchHandler @ 03407258 */
      pMVar1 = FPPKHNNABAD__FDBCKDLEGEH(__this_00,FDHGPAPAPDF,(MethodInfo *)0x0);
      return pMVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AddActionQuest(List<FPPKHNNABAD> IHBNELGLLEB)  [RVA 0x3306F24]
// Nekki.SF2.Core.Quests.QuestsManager$$AddActionQuest @ RVA 0x3306F24

void Nekki_SF2_Core_Quests_QuestsManager__AddActionQuest
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,
               System_Collections_Generic_List_FPPKHNNABAD__o *IHBNELGLLEB,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  FPPKHNNABAD_o *__this_00;
  PKHMIGFEJCL_o *pPVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  KCFIOKDFHIB_o *JMCEAKJCJLH;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567763 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
                    /* try { // try from 03406f5c to 03506f87 has its CatchHandler @ 03407254 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
    DAT_04567763 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (IHBNELGLLEB != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    method_01 = Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__;
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)IHBNELGLLEB,0,
                        (MethodInfo_26E4ADC *)
                        Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
    if (pIVar2 != (Il2CppObject *)0x0) {
      if (pIVar2[2].klass != (Il2CppClass *)0x0) {
        method_01 = Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__;
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)IHBNELGLLEB,0,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
                    /* try { // try from 03406fcc to 03506fd3 has its CatchHandler @ 03407240 */
        if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[2].klass == (Il2CppClass *)0x0))
        goto LAB_034070b4;
        JMCEAKJCJLH = (KCFIOKDFHIB_o *)((pIVar2[2].klass)->_1).name;
                    /* try { // try from 03406fdc to 03506fe3 has its CatchHandler @ 03407244 */
        if (JMCEAKJCJLH != (KCFIOKDFHIB_o *)0x0) {
                    /* try { // try from 03406fe4 to 03506fef has its CatchHandler @ 03407250 */
          __this_00 = (FPPKHNNABAD_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)IHBNELGLLEB,0,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
                    /* try { // try from 03406ff0 to 03507217 has its CatchHandler @ 03406d98 */
          if (__this_00 == (FPPKHNNABAD_o *)0x0) goto LAB_034070b4;
          method_01 = (MethodInfo *)0x0;
          pPVar3 = FPPKHNNABAD__LGJMJMJJGIM(__this_00,JMCEAKJCJLH,(MethodInfo *)0x0);
          (__this->fields).QuestParameters = pPVar3;
          thunk_FUN_01c20e04();
        }
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)IHBNELGLLEB,
                 Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__
                          );
        pIVar2 = local_48.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
          Nekki_SF2_Core_Quests_QuestsManager__PHHDBNIKFDK(__this,method_00);
          return;
        }
        if ((FPPKHNNABAD_o *)local_48.fields._current == (FPPKHNNABAD_o *)0x0) break;
        if ((((FPPKHNNABAD_Fields *)((long)local_48.fields._current + 0x10))->
             _FIEEJDGCLKH_k__BackingField != (MEMHEPBAJJA_o *)0x0) &&
           (bVar1 = Nekki_SF2_Core_Quests_QuestsManager__HGKKAHIMGFI
                              (__this,(FPPKHNNABAD_o *)local_48.fields._current,method_01), !bVar1))
        {
          method_01 = (MethodInfo *)0x0;
          FPPKHNNABAD__MLKGFGDCLIF
                    ((FPPKHNNABAD_o *)pIVar2,(__this->fields).QuestParameters,(MethodInfo *)0x0);
          Nekki_SF2_Core_Quests_QuestsManager__LFENGGKOJDO(__this,(FPPKHNNABAD_o *)pIVar2,method_01)
          ;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_034070b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool HGKKAHIMGFI(FPPKHNNABAD NDBPOFMECGL)  [RVA 0x33057A8]
// Nekki.SF2.Core.Quests.QuestsManager$$HGKKAHIMGFI @ RVA 0x33057A8

bool Nekki_SF2_Core_Quests_QuestsManager__HGKKAHIMGFI
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_00;
  
  if ((DAT_04567764 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_FMJCOFMECGL_LLCDPGPAFFP__);
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_FMJCOFMECGL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Exists__);
    FUN_01bab630(&System_Predicate<FPPKHNNABAD>_TypeInfo);
    DAT_04567764 = 1;
  }
                    /* try { // try from 03405808 to 0350580f has its CatchHandler @ 0340598c */
  pIVar2 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_Core_Quests_QuestsManager_FMJCOFMECGL_TypeInfo);
                    /* try { // try from 03405818 to 0350581f has its CatchHandler @ 03405990 */
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
                    /* try { // try from 03405824 to 0350582b has its CatchHandler @ 03405994 */
    pIVar2->klass = (Il2CppClass *)NDBPOFMECGL;
                    /* try { // try from 03405830 to 03505837 has its CatchHandler @ 03405998 */
    thunk_FUN_01c20e04(pIVar2,NDBPOFMECGL);
    if (pIVar2->klass != (Il2CppClass *)0x0) {
      if (*(char *)((long)&(pIVar2->klass->_1).events + 4) != '\0') {
        return false;
      }
      __this_00 = (__this->fields).GOAJEJNPDFA;
                    /* try { // try from 03405864 to 035058d3 has its CatchHandler @ 03405b34 */
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<FPPKHNNABAD>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_00 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
        bVar1 = System_Collections_Generic_List<object>__Exists
                          ((System_Collections_Generic_List_object__o *)__this_00,match,
                           Method_System_Collections_Generic_List<FPPKHNNABAD>_Exists__);
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LFENGGKOJDO(FPPKHNNABAD NDBPOFMECGL)  [RVA 0x3306B68]
// Nekki.SF2.Core.Quests.QuestsManager$$LFENGGKOJDO @ RVA 0x3306B68

void Nekki_SF2_Core_Quests_QuestsManager__LFENGGKOJDO
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar4;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_00;
  NDPMLPGANCI_o *__this_01;
  FPPKHNNABAD_array *pFVar5;
  
  if ((DAT_04567765 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3628);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3629);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__);
    DAT_04567765 = 1;
  }
  if (NDBPOFMECGL == (FPPKHNNABAD_o *)0x0) {
    return;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3628,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3629,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat
                     (pSVar4,(NDBPOFMECGL->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
  __this_00 = (__this->fields).GOAJEJNPDFA;
  if (__this_00 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    pFVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pFVar5 != (FPPKHNNABAD_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pFVar5->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pFVar5->m_Items[(int)uVar1] = NDBPOFMECGL;
        thunk_FUN_01c20e04(pFVar5->m_Items + (int)uVar1,NDBPOFMECGL);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)NDBPOFMECGL,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_01 != (NDPMLPGANCI_o *)0x0) {
        iVar3 = NDPMLPGANCI__FFIOCEOHPEM(__this_01,(MethodInfo *)0x0);
        if ((__this->fields).HFOJKJFILDB != false) {
          return;
        }
        if (iVar3 == 6) {
          return;
        }
        if ((__this->fields)._isRunActions != false) {
          return;
        }
        (__this->fields).HFOJKJFILDB = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnQuestsListEmpty(Action CJNHFNHJHPE)  [RVA 0x3307144]
// Nekki.SF2.Core.Quests.QuestsManager$$remove_OnQuestsListEmpty @ RVA 0x3307144

void Nekki_SF2_Core_Quests_QuestsManager__remove_OnQuestsListEmpty
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04567766 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567766 = 1;
  }
  ppSVar4 = &(__this->fields).IPDPGDFFNFI;
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


// ===== public bool IsQuestForEventTypeInQueue(KFKFNDEJLKK.PCJFAKMBHCE FGCDFELEGGN)  [RVA 0x33071E0]
// Nekki.SF2.Core.Quests.QuestsManager$$IsQuestForEventTypeInQueue @ RVA 0x33071E0

bool Nekki_SF2_Core_Quests_QuestsManager__IsQuestForEventTypeInQueue
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,int32_t FGCDFELEGGN,MethodInfo *method
               )

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_00;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_01;
  Il2CppClass *a;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567767 & 1) == 0) {
                    /* try { // try from 03407218 to 0350721f has its CatchHandler @ 0340725c */
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<FPPKHNNABAD>__);
                    /* try { // try from 03407220 to 03507223 has its CatchHandler @ 0340724c */
                    /* try { // try from 03407224 to 03507227 has its CatchHandler @ 03407248 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
                    /* try { // try from 03407228 to 0350722b has its CatchHandler @ 03406d98 */
                    /* try { // try from 0340722c to 0350722f has its CatchHandler @ 03407238 */
                    /* try { // try from 03407230 to 0350726b has its CatchHandler @ 03406d98 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340722c with catch @ 03407238
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_get_Current__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406fcc with catch @ 03407240
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406fdc with catch @ 03407244
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03407224 with catch @ 03407248
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03407220 with catch @ 0340724c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406fe4 with catch @ 03407250
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406f5c with catch @ 03407254
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03406f00 with catch @ 03407258
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03407218 with catch @ 0340725c
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
    DAT_04567767 = 1;
  }
                    /* try { // try from 0340726c to 0350726f has its CatchHandler @ 03407280 */
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).GOAJEJNPDFA,
                     Method_DJNBJHPDKDP_OBECCOPBADO<FPPKHNNABAD>__);
                    /* catch() { ... } // from try @ 0340726c with catch @ 03407280 */
  if (bVar1) {
    bVar1 = false;
                    /* try { // try from 03407288 to 035072ef has its CatchHandler @ 03407304 */
  }
  else {
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__GetQuests(__this,FGCDFELEGGN,method);
    __this_01 = (__this->fields).GOAJEJNPDFA;
    if (__this_01 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__
                             ), bVar1) {
                    /* try { // try from 034072f0 to 035072fb has its CatchHandler @ 03406d98 */
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (__this_00 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 034072fc to 03507303 has its CatchHandler @ 03407304 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03407288 with catch @ 03407304
                       catch(type#2 @ 00000000) { ... } // from try @ 034072fc with catch @ 03407304
                        */
      if (0 < (__this_00->fields)._size) {
        a = local_60.fields._current[1].klass;
        iVar4 = 0;
        do {
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,iVar4,
                              Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
          if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__op_Equality
                            ((System_String_o *)a,(System_String_o *)pIVar3[1].klass,
                             (MethodInfo *)0x0);
          if (bVar2) {
            iVar4 = 8;
            goto LAB_03407350;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (__this_00->fields)._size);
      }
    }
    iVar4 = 9;
LAB_03407350:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
    bVar1 = bVar1 && iVar4 == 8;
  }
  return bVar1;
}


// ===== public static QuestsManager get_Instance()  [RVA 0x3300E8C]
// Nekki.SF2.Core.Quests.QuestsManager$$get_Instance @ RVA 0x3300E8C

Nekki_SF2_Core_Quests_QuestsManager_o *
Nekki_SF2_Core_Quests_QuestsManager__get_Instance(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  
  if ((DAT_04567768 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<QuestsManager>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_TypeInfo);
    FUN_01bab630(&StringLiteral_15566/*"[QuestsManager]"*/);
    DAT_04567768 = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor
              ((UnityEngine_GameObject_o *)target,StringLiteral_15566/*"[QuestsManager]"*/,(MethodInfo *)0x0);
    if (target == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar2 = (Nekki_SF2_Core_Quests_QuestsManager_o *)
             UnityEngine_GameObject__AddComponent<object>
                       ((UnityEngine_GameObject_o *)target,
                        Method_UnityEngine_GameObject_AddComponent<QuestsManager>__);
    Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK = pNVar2;
    thunk_FUN_01c20e04(Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields,pNVar2);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
  }
  return Nekki_SF2_Core_Quests_QuestsManager_TypeInfo->static_fields->CBDMFFMCJBK;
}


// ===== public void OnQuestStageEndedToRun(FPPKHNNABAD NDBPOFMECGL)  [RVA 0x3307430]
// Nekki.SF2.Core.Quests.QuestsManager$$OnQuestStageEndedToRun @ RVA 0x3307430

void Nekki_SF2_Core_Quests_QuestsManager__OnQuestStageEndedToRun
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_FPPKHNNABAD__o *EDEHNHIHDDH;
  FPPKHNNABAD_o *OFBDKKMPCMI;
  
  if ((DAT_04567769 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_JKPAELNNEFG<string>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<FPPKHNNABAD>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OLAGEPMKJFC<FPPKHNNABAD>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&StringLiteral_10713/*"QuestManager::OnQuestStageEndedToRun trying to Pop in non-sequentional order, this mustn't happen!"*/);
    DAT_04567769 = 1;
  }
  EDEHNHIHDDH = (__this->fields).GAMJEFPADCD;
  if (EDEHNHIHDDH == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((EDEHNHIHDDH->fields)._size < 1) {
    return;
  }
  OFBDKKMPCMI = (FPPKHNNABAD_o *)
                DJNBJHPDKDP__KIKGKKGDCKK<object>
                          ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                           Method_DJNBJHPDKDP_KIKGKKGDCKK<FPPKHNNABAD>__);
  bVar1 = FPPKHNNABAD__LFHPFJOAJIO(OFBDKKMPCMI,NDBPOFMECGL,(MethodInfo *)0x0);
  if (bVar1) {
    DJNBJHPDKDP__OLAGEPMKJFC<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields).GAMJEFPADCD,
               Method_DJNBJHPDKDP_OLAGEPMKJFC<FPPKHNNABAD>__);
    DJNBJHPDKDP__JKPAELNNEFG<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields)._runningQuestStagesInfo,
               Method_DJNBJHPDKDP_JKPAELNNEFG<string>__);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_10713/*"QuestManager::OnQuestStageEndedToRun trying to Pop in non-sequentional order, this mustn't happen!"*/,(MethodInfo *)0x0);
  return;
}


// ===== public bool ExistsQuestsWithActOrShowVideoAction()  [RVA 0x3307544]
// Nekki.SF2.Core.Quests.QuestsManager$$ExistsQuestsWithActOrShowVideoAction @ RVA 0x3307544

bool Nekki_SF2_Core_Quests_QuestsManager__ExistsQuestsWithActOrShowVideoAction
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar2;
  System_Type_o *pSVar3;
  System_Func_TSource__bool__o *pSVar4;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar5;
  
  if ((DAT_0456776a & 1) == 0) {
    FUN_01bab630(&CPJDJFPABGI_var);
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<FPPKHNNABAD>__);
    FUN_01bab630(&System_Func<FPPKHNNABAD,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG_INEIJPAINGL__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG_LJOECDLDGKP__);
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG_TypeInfo);
    FUN_01bab630(&LJFLEGDMCMI_var);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_0456776a = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  handle = CPJDJFPABGI_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar2 = (Il2CppClass *)
           System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = pIVar2;
    thunk_FUN_01c20e04();
    pSVar3 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)LJFLEGDMCMI_var,(MethodInfo *)0x0);
    __this_00[1].monitor = pSVar3;
    thunk_FUN_01c20e04();
    pSVar5 = (__this->fields).GOAJEJNPDFA;
    pSVar4 = (System_Func_TSource__bool__o *)
             thunk_FUN_01bda818(System_Func<FPPKHNNABAD,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    bVar1 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,pSVar4,
                       Method_System_Linq_Enumerable_Any<FPPKHNNABAD>__);
    if (bVar1) {
      return true;
    }
    pSVar5 = (__this->fields).GOAJEJNPDFA;
    pSVar4 = (System_Func_TSource__bool__o *)
             thunk_FUN_01bda818(System_Func<FPPKHNNABAD,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    bVar1 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,pSVar4,
                       Method_System_Linq_Enumerable_Any<FPPKHNNABAD>__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3307708]
// Nekki.SF2.Core.Quests.QuestsManager$$.ctor @ RVA 0x3307708

void Nekki_SF2_Core_Quests_QuestsManager___ctor
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_string__o **ppSVar2;
  System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *__this_00;
  System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o **ppSVar3;
  PKHMIGFEJCL_o *pPVar4;
  PKHMIGFEJCL_o **ppPVar5;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar6;
  System_Collections_Generic_List_FPPKHNNABAD__o **ppSVar7;
  System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o *__this_01;
  System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o **ppSVar8;
  CNOGDCKPLMJ_o *__this_02;
  CNOGDCKPLMJ_o **ppCVar9;
  
  if ((DAT_0456776b & 1) == 0) {
    FUN_01bab630(&CNOGDCKPLMJ_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_TypeInfo
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&PKHMIGFEJCL_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456776b = 1;
  }
  (__this->fields).CurrentQuestName = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).CurrentActionName = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields)._questsEndedMaxCount = 100;
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields)._runningQuestStagesInfo;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields)._questsEnded;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields)._questsInQueue;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_00 = (System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>__ctor__);
  ppSVar3 = &(__this->fields)._localVariablesInfo;
  *ppSVar3 = __this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  pPVar4 = (PKHMIGFEJCL_o *)thunk_FUN_01bda818(PKHMIGFEJCL_TypeInfo);
  PKHMIGFEJCL___ctor(pPVar4,(MethodInfo *)0x0);
  ppPVar5 = &(__this->fields).QuestParametersBeforeLottery;
  *ppPVar5 = pPVar4;
  thunk_FUN_01c20e04(ppPVar5,pPVar4);
  pPVar4 = (PKHMIGFEJCL_o *)thunk_FUN_01bda818(PKHMIGFEJCL_TypeInfo);
  PKHMIGFEJCL___ctor(pPVar4,(MethodInfo *)0x0);
  ppPVar5 = &(__this->fields).QuestParameters;
  *ppPVar5 = pPVar4;
  thunk_FUN_01c20e04(ppPVar5,pPVar4);
  pSVar6 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
  ppSVar7 = &(__this->fields).QuestsAll;
  *ppSVar7 = pSVar6;
  thunk_FUN_01c20e04(ppSVar7,pSVar6);
  __this_01 = (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o *
              )thunk_FUN_01bda818(
                                 System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_TypeInfo
                                 );
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>__ctor__
            );
  ppSVar8 = &(__this->fields).LEJLGCMCPLG;
  *ppSVar8 = __this_01;
  thunk_FUN_01c20e04(ppSVar8,__this_01);
  pSVar6 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
  ppSVar7 = &(__this->fields).GOAJEJNPDFA;
  *ppSVar7 = pSVar6;
  thunk_FUN_01c20e04(ppSVar7,pSVar6);
  __this_02 = (CNOGDCKPLMJ_o *)thunk_FUN_01bda818(CNOGDCKPLMJ_TypeInfo);
  CNOGDCKPLMJ___ctor(__this_02,(MethodInfo *)0x0);
  ppCVar9 = &(__this->fields).LJMFDFGELCO;
  *ppCVar9 = __this_02;
  thunk_FUN_01c20e04(ppCVar9,__this_02);
  pSVar6 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
  ppSVar7 = &(__this->fields).GAMJEFPADCD;
  *ppSVar7 = pSVar6;
  thunk_FUN_01c20e04(ppSVar7,pSVar6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void AddQuest(FPPKHNNABAD JOBNGBCPEGO)  [RVA 0x33079EC]
// Nekki.SF2.Core.Quests.QuestsManager$$AddQuest @ RVA 0x33079EC

void Nekki_SF2_Core_Quests_QuestsManager__AddQuest
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *JOBNGBCPEGO,
               MethodInfo *method)

{
  int iVar1;
  int key;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_KFKFNDEJLKK__o *__this_00;
  Il2CppObject *pIVar5;
  System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o *pSVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  CNOGDCKPLMJ_o *__this_01;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_02;
  System_Object_array *pSVar8;
  FPPKHNNABAD_array *pFVar9;
  int index;
  
  if ((DAT_0456776c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFKFNDEJLKK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFKFNDEJLKK>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    DAT_0456776c = 1;
  }
  if ((JOBNGBCPEGO != (FPPKHNNABAD_o *)0x0) &&
     (__this_00 = (JOBNGBCPEGO->fields).AFFIHBMACFF,
     __this_00 != (System_Collections_Generic_List_KFKFNDEJLKK__o *)0x0)) {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        pIVar5 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<KFKFNDEJLKK>_get_Item__);
        if ((pIVar5 == (Il2CppObject *)0x0) ||
           (pSVar6 = (__this->fields).LEJLGCMCPLG,
           pSVar6 == (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                      *)0x0)) goto LAB_03407c6c;
        key = *(int *)&pIVar5[1].klass;
        bVar4 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,key,
                           Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_ContainsKey__
                          );
        if (!bVar4) {
          pSVar6 = (__this->fields).LEJLGCMCPLG;
          pSVar7 = (System_Collections_Generic_List_object__o *)
                   thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    (pSVar7,Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
          if (pSVar6 == (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                         *)0x0) goto LAB_03407c6c;
          System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,key,
                     (Il2CppObject *)pSVar7,
                     Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_Add__
                    );
        }
        pSVar6 = (__this->fields).LEJLGCMCPLG;
        if ((pSVar6 == (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                        *)0x0) ||
           (pSVar7 = (System_Collections_Generic_List_object__o *)
                     System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,key,
                                Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_get_Item__
                               ), lVar3 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__,
           pSVar7 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03407c6c;
        pSVar8 = (pSVar7->fields)._items;
        (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
        if (pSVar8 == (System_Object_array *)0x0) goto LAB_03407c6c;
        uVar2 = (pSVar7->fields)._size;
        if (uVar2 < (uint)pSVar8->max_length) {
          (pSVar7->fields)._size = uVar2 + 1;
          pSVar8->m_Items[(int)uVar2] = (Il2CppObject *)JOBNGBCPEGO;
          thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar2,JOBNGBCPEGO);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar7,(Il2CppObject *)JOBNGBCPEGO,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        if (key == 10) {
          __this_01 = (__this->fields).LJMFDFGELCO;
          if (__this_01 == (CNOGDCKPLMJ_o *)0x0) goto LAB_03407c6c;
          CNOGDCKPLMJ__BLJJKMIEHFG(__this_01,JOBNGBCPEGO,(MethodInfo *)0x0);
        }
        index = index + 1;
        if (iVar1 == index) break;
        __this_00 = (JOBNGBCPEGO->fields).AFFIHBMACFF;
        if (__this_00 == (System_Collections_Generic_List_KFKFNDEJLKK__o *)0x0) goto LAB_03407c6c;
      } while( true );
    }
    lVar3 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
    __this_02 = (__this->fields).QuestsAll;
    if (__this_02 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
      pFVar9 = (__this_02->fields)._items;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pFVar9 != (FPPKHNNABAD_array *)0x0) {
        uVar2 = (__this_02->fields)._size;
        if ((uint)pFVar9->max_length <= uVar2) {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_02,
                     (Il2CppObject *)JOBNGBCPEGO,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          return;
        }
        (__this_02->fields)._size = uVar2 + 1;
        pFVar9->m_Items[(int)uVar2] = JOBNGBCPEGO;
        thunk_FUN_01c20e04(pFVar9->m_Items + (int)uVar2,JOBNGBCPEGO);
        return;
      }
    }
  }
LAB_03407c6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ClearStack(List<string> FPEHEJBLCAO)  [RVA 0x3307C70]
// Nekki.SF2.Core.Quests.QuestsManager$$ClearStack @ RVA 0x3307C70

void Nekki_SF2_Core_Quests_QuestsManager__ClearStack
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar2;
  FPPKHNNABAD_o *__this_00;
  MEMHEPBAJJA_o *__this_01;
  System_Action_FPPKHNNABAD__o *CJNHFNHJHPE;
  ACHLOMELAJE_o *__this_02;
  int index;
  
  if ((DAT_0456776d & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_PHBFKBEHGIK__);
    DAT_0456776d = 1;
  }
  pSVar2 = (__this->fields).GOAJEJNPDFA;
  if (pSVar2 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    index = (pSVar2->fields)._size + -1;
    if (index < 0) {
LAB_03407ddc:
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
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0)
      {
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
      __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_02 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_02,false,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      do {
        __this_00 = (FPPKHNNABAD_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Item__);
        if (__this_00 == (FPPKHNNABAD_o *)0x0) break;
        if (((__this_00->fields)._GJKDJKAKJAP_k__BackingField != 1) &&
           ((bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                               ((System_Collections_Generic_List_T__o *)FPEHEJBLCAO,
                                Method_DJNBJHPDKDP_OBECCOPBADO<string>__), bVar1 ||
            (bVar1 = FPPKHNNABAD__GAKCJNGGBFC(__this_00,FPEHEJBLCAO,(MethodInfo *)0x0), bVar1)))) {
          __this_01 = (__this_00->fields)._FIEEJDGCLKH_k__BackingField;
          if (__this_01 != (MEMHEPBAJJA_o *)0x0) {
            MEMHEPBAJJA__MAMEMHEFIKB(__this_01,(MethodInfo *)0x0);
          }
          CJNHFNHJHPE = (System_Action_FPPKHNNABAD__o *)
                        thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
          System_Action<object>___ctor();
          FPPKHNNABAD__HAFNHPBMIBI(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
          pSVar2 = (__this->fields).GOAJEJNPDFA;
          if (pSVar2 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) break;
          System_Collections_Generic_List<object>__RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar2,index,
                     Method_System_Collections_Generic_List<FPPKHNNABAD>_RemoveAt__);
        }
        index = index + -1;
        if (index < 0) goto LAB_03407ddc;
        pSVar2 = (__this->fields).GOAJEJNPDFA;
      } while (pSVar2 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

