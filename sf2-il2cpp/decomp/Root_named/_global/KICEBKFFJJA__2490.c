// TypeDefIndex 2490
// Namespace: 
// public class KICEBKFFJJA : HPNCDKOBCON
// Fields:
//   private const KFKFNDEJLKK.PCJFAKMBHCE PBFCCFIBCEK = 77;
//   private const string DHGLMMLGKGN = "DownloadPacksForced";
//   private const string IOCOANJBKEH = "DownloadPacksAliasOverride";
//   private const string DNCBJAEKGLK = "OnDownloadPacksEnd";

// ===== public void OPGLLBKKKOG(IReadOnlyList<PackSettings> KOMNGPDDOFN, KAKGABBLHGP OKBIKHHKOEN, Action<bool> BLMFLPJJMPF)  [RVA 0x3377DA0]
// KICEBKFFJJA$$OPGLLBKKKOG @ RVA 0x3377DA0

void KICEBKFFJJA__OPGLLBKKKOG
               (KICEBKFFJJA_o *__this,
               System_Collections_Generic_IReadOnlyList_PackSettings__o *KOMNGPDDOFN,
               KAKGABBLHGP_o *OKBIKHHKOEN,System_Action_bool__o *BLMFLPJJMPF,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Func_PackSettings__string__o **ppSVar2;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar3;
  System_String_o *pSVar4;
  Il2CppObject *arg2;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_01;
  System_Collections_Generic_List_TSource__o *KOMNGPDDOFN_00;
  GCPFDLNAFDF_o *CKCAFBMLFHG;
  Roster_o *pAVar5;
  PKHMIGFEJCL_PLLEKFKIIME_o *__this_02;
  Il2CppClass *pIVar6;
  PKHMIGFEJCL_o *__this_03;
  void **ppvVar7;
  Il2CppObject *arg1;
  Il2CppObject *pIVar8;
  System_Func_PackSettings__string__o *pSVar9;
  undefined1 local_54 [4];
  
  if ((DAT_04567b56 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_KICEBKFFJJA_EDEMEPDGLOP_CMJJGGHHCEN__);
    FUN_01bab630(&KICEBKFFJJA_EDEMEPDGLOP_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<string>__);
    FUN_01bab630(&System_Func<PackSettings,_string>_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PKHMIGFEJCL_PLLEKFKIIME_TypeInfo);
    FUN_01bab630(&Method_KICEBKFFJJA_<>c_JHJGLBLCKKE__);
    FUN_01bab630(&Method_KICEBKFFJJA_<>c_NHEOMGDFLKB__);
    FUN_01bab630(&KICEBKFFJJA_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_9863/*"OnDownloadPacksEnd"*/);
    FUN_01bab630(&StringLiteral_5477/*"DownloadPacks"*/);
    FUN_01bab630(&StringLiteral_5480/*"DownloadPacksForced"*/);
    FUN_01bab630(&StringLiteral_1155/*", "*/);
    FUN_01bab630(&StringLiteral_5479/*"DownloadPacksAliasOverride"*/);
    FUN_01bab630(&StringLiteral_22379/*"{0}: STARTED - packs='{1}', forceDownload='{2}'"*/);
    FUN_01bab630(&StringLiteral_5478/*"DownloadPacks: CANCELED - download is already in progress! Skip..."*/);
    DAT_04567b56 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KICEBKFFJJA_EDEMEPDGLOP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    pIVar8 = __this_00 + 2;
    pIVar8->klass = (Il2CppClass *)BLMFLPJJMPF;
    thunk_FUN_01c20e04(pIVar8,BLMFLPJJMPF);
    if ((KICEBKFFJJA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = StringLiteral_1155/*", "*/;
    pSVar9 = KICEBKFFJJA_<>c_TypeInfo->static_fields->__9__4_0;
    if (pSVar9 == (System_Func_PackSettings__string__o *)0x0) {
      if ((KICEBKFFJJA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar9 = (System_Func_PackSettings__string__o *)
               thunk_FUN_01bda818(System_Func<PackSettings,_string>_TypeInfo);
      System_Func<object,_object>___ctor();
      ppSVar2 = &KICEBKFFJJA_<>c_TypeInfo->static_fields->__9__4_0;
      *ppSVar2 = pSVar9;
      thunk_FUN_01c20e04(ppSVar2,pSVar9);
    }
    pSVar3 = System_Linq_Enumerable__Select<object,_object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)KOMNGPDDOFN,
                        (System_Func_TSource__TResult__o *)pSVar9,
                        Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
    pSVar4 = System_String__Join(pSVar4,(System_Collections_Generic_IEnumerable_string__o *)pSVar3,
                                 (MethodInfo *)0x0);
    ppvVar7 = &__this_00[1].monitor;
    *ppvVar7 = pSVar4;
    thunk_FUN_01c20e04(ppvVar7,pSVar4);
    if (OKBIKHHKOEN != (KAKGABBLHGP_o *)0x0) {
      local_54[0] = (OKBIKHHKOEN->fields).EDIEJIKLKAF;
      arg1 = *ppvVar7;
      arg2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_54);
      pSVar4 = System_String__Format
                         (StringLiteral_22379/*"{0}: STARTED - packs='{1}', forceDownload='{2}'"*/,StringLiteral_5477/*"DownloadPacks"*/,arg1,arg2,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
      __this_01 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (__this_01 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        bVar1 = Nekki_SF2_Core_Quests_QuestsManager__IsQuestForEventTypeInQueue
                          (__this_01,0x4d,(MethodInfo *)0x0);
        if (bVar1) {
          pIVar6 = pIVar8->klass;
          if (pIVar6 != (Il2CppClass *)0x0) {
            (*(code *)(pIVar6->_1).namespaze)
                      ((pIVar6->_1).element_class,0,*(undefined8 *)&(pIVar6->_1).byval_arg.bits);
          }
          KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_5478/*"DownloadPacks: CANCELED - download is already in progress! Skip..."*/,(MethodInfo *)0x0);
                    /* try { // try from 03478288 to 035782ab has its CatchHandler @ 03479cac */
          return;
        }
        __this_03 = (__this_01->fields).QuestParameters;
        if ((KICEBKFFJJA_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar9 = KICEBKFFJJA_<>c_TypeInfo->static_fields->__9__4_1;
        if (pSVar9 == (System_Func_PackSettings__string__o *)0x0) {
          if ((KICEBKFFJJA_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar9 = (System_Func_PackSettings__string__o *)
                   thunk_FUN_01bda818(System_Func<PackSettings,_string>_TypeInfo);
          System_Func<object,_object>___ctor();
          ppSVar2 = &KICEBKFFJJA_<>c_TypeInfo->static_fields->__9__4_1;
          *ppSVar2 = pSVar9;
          thunk_FUN_01c20e04(ppSVar2,pSVar9);
        }
        pSVar3 = System_Linq_Enumerable__Select<object,_object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)KOMNGPDDOFN,
                            (System_Func_TSource__TResult__o *)pSVar9,
                            Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
        KOMNGPDDOFN_00 =
             System_Linq_Enumerable__ToList<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                        Method_System_Linq_Enumerable_ToList<string>__);
                    /* try { // try from 03478120 to 03578147 has its CatchHandler @ 03479fe0 */
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
        }
        CKCAFBMLFHG = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
        if (__this_03 != (PKHMIGFEJCL_o *)0x0) {
          PKHMIGFEJCL__DMBKEIPLELM
                    (__this_03,(System_Collections_Generic_IReadOnlyList_string__o *)KOMNGPDDOFN_00,
                     (HHMDFAMGHPB_o *)CKCAFBMLFHG,(MethodInfo *)0x0);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 0347817c to 035781a7 has its CatchHandler @ 03479fdc */
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar5 != (Roster_o *)0x0) {
            Roster__HEMDIAFAMAO
                      (pAVar5,StringLiteral_5480/*"DownloadPacksForced"*/,(OKBIKHHKOEN->fields).EDIEJIKLKAF,1,
                       (MethodInfo *)0x0);
            if (DAT_04565b7d == '\0') {
                    /* try { // try from 034781e4 to 035781eb has its CatchHandler @ 03479f04 */
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
                    /* try { // try from 034781f0 to 035781f7 has its CatchHandler @ 03479f08 */
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 03478208 to 0357820f has its CatchHandler @ 03479ca8 */
            pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar5 != (Roster_o *)0x0) {
                    /* try { // try from 03478218 to 0357821f has its CatchHandler @ 03479ca4 */
                    /* try { // try from 03478224 to 0357823f has its CatchHandler @ 03479d7c */
              Roster__LMJFPPDAPBF
                        (pAVar5,StringLiteral_5479/*"DownloadPacksAliasOverride"*/,(OKBIKHHKOEN->fields).CLHEDDAKFHK,1,
                         (MethodInfo *)0x0);
              __this_02 = (PKHMIGFEJCL_PLLEKFKIIME_o *)
                          thunk_FUN_01bda818(PKHMIGFEJCL_PLLEKFKIIME_TypeInfo);
              PKHMIGFEJCL_PLLEKFKIIME___ctor
                        (__this_02,__this_00,Method_KICEBKFFJJA_EDEMEPDGLOP_CMJJGGHHCEN__,
                         (MethodInfo *)0x0);
              PKHMIGFEJCL__OPCNBJOLDNG(__this_03,__this_02,StringLiteral_9863/*"OnDownloadPacksEnd"*/,(MethodInfo *)0x0);
              Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                        (__this_01,0x4d,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x33782AC]
// KICEBKFFJJA$$.ctor @ RVA 0x33782AC

void KICEBKFFJJA___ctor(KICEBKFFJJA_o *__this,MethodInfo *method)

{
                    /* try { // try from 034782ac to 03578417 has its CatchHandler @ 03477bc4 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

