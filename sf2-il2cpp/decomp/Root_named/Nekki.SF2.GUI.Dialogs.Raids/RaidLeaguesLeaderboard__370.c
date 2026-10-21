// TypeDefIndex 370
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidLeaguesLeaderboard : Selectable
// Fields:
//   private RaidLeaguesDialog CKFDKAIMINP; // 0x100
//   private GameObject IBEANLBJNMM; // 0x108
//   private SimpleScroll PDHMLFAMNCO; // 0x110
//   private HintBoxAutoKilled FOIPEDJENOJ; // 0x118
//   private HintBoxAutoKilled KHCFBHAOLOH; // 0x120
//   private GLPEFEEGCPM DCDPLKDJEIM; // 0x128
//   private RaidConfig.CMLEEJPGHNC LLLCBLJMPIH; // 0x130
//   private Dictionary<int, RaidConfig.HKDMLOKOJPH> OCKAMMNDKCJ; // 0x138
//   private Dictionary<int, List<KGBIBHEFBHA>> ODLKEJCKMPD; // 0x140
//   private List<RaidLeaguesLeaderboard.OIMJFDFDMMM> JKBONEFMACI; // 0x148
//   private Dictionary<int, List<RaidLeaguesLeaderboard.OIMJFDFDMMM>> BGMOJHCPOND; // 0x150
//   private bool JGEPPNPPIKG; // 0x158
//   private IEnumerator CCEJPHCCIMO; // 0x160
//   private Nullable<float> NEOEPOAJBFE; // 0x168
//   private const string FDDFFMLLCDE = "RaidLeaguesCellPool";

// ===== public GLPEFEEGCPM GetSelectedLeague()  [RVA 0x3475394]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$GetSelectedLeague @ RVA 0x3475394

GLPEFEEGCPM_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__GetSelectedLeague
          (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  return (__this->fields).DCDPLKDJEIM;
}


// ===== public void ScrollClearData()  [RVA 0x347539C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$ScrollClearData @ RVA 0x347539C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ScrollClearData
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  float fVar2;
  float value;
  System_Nullable_float__Fields local_28;
  
  if ((DAT_04568325 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    DAT_04568325 = 1;
  }
  pNVar1 = (__this->fields).PDHMLFAMNCO;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    value = (__this->fields).NEOEPOAJBFE.fields.value;
    fVar2 = Nekki_SF2_GUI_SimpleScroll__GetScrollPos(pNVar1,(MethodInfo *)0x0);
    if (value <= fVar2) {
      value = fVar2;
    }
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value = 0.0;
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_28,value,Method_System_Nullable<float>__ctor__);
    pNVar1 = (__this->fields).PDHMLFAMNCO;
    (__this->fields).NEOEPOAJBFE.fields = local_28;
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JHNEFIAMGEE(RaidLeaguesLeaderboard.OIMJFDFDMMM JCGMKBFBANJ)  [RVA 0x3475440]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$JHNEFIAMGEE @ RVA 0x3475440

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__JHNEFIAMGEE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *JCGMKBFBANJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_array *pNVar3;
  
  if ((DAT_04568326 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__);
    DAT_04568326 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__;
  __this_00 = (__this->fields).JKBONEFMACI;
  if (__this_00 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
    pNVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pNVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pNVar3->m_Items[(int)uVar1] = JCGMKBFBANJ;
        thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,JCGMKBFBANJ);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)JCGMKBFBANJ,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AddPlayerCellsDebug()  [RVA 0x34754EC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$AddPlayerCellsDebug @ RVA 0x34754EC

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__AddPlayerCellsDebug
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool LKBALCKCEEJ(RaidConfig.HKDMLOKOJPH EMPKHNEPHPO)  [RVA 0x34754F0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$LKBALCKCEEJ @ RVA 0x34754F0

bool Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__LKBALCKCEEJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               RaidConfig_HKDMLOKOJPH_o *EMPKHNEPHPO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  
  if ((DAT_04568327 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Values__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_Contains<RaidConfig_HKDMLOKOJPH>__);
    DAT_04568327 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).OCKAMMNDKCJ;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    source = System_Collections_Generic_Dictionary<int,_object>__get_Values
                       (__this_00,
                        Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Values__
                       );
    bVar1 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (Il2CppObject *)EMPKHNEPHPO,
                       Method_System_Linq_Enumerable_Contains<RaidConfig_HKDMLOKOJPH>__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Refresh(GLPEFEEGCPM BFFBKNCLLML)  [RVA 0x3475564]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$Refresh @ RVA 0x3475564

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__Refresh
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               GLPEFEEGCPM_o *BFFBKNCLLML,MethodInfo *method)

{
  MethodInfo *method_00;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *pGVar1;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar2;
  long lVar3;
  
  if ((DAT_04568328 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Count__);
    DAT_04568328 = 1;
  }
  if ((__this->fields).DCDPLKDJEIM == BFFBKNCLLML) {
    if ((((BFFBKNCLLML == (GLPEFEEGCPM_o *)0x0) ||
         (pGVar1 = (BFFBKNCLLML->fields).MPAIPMANDEO,
         pGVar1 == (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0)) ||
        (pNVar2 = (__this->fields).PDHMLFAMNCO, pNVar2 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0)) ||
       (lVar3 = *(long *)&(pNVar2->fields)._snapEase, lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pGVar1->fields).count == *(int *)(lVar3 + 0x18)) {
      return;
    }
  }
  (__this->fields).DCDPLKDJEIM = BFFBKNCLLML;
  thunk_FUN_01c20e04(&(__this->fields).DCDPLKDJEIM,BFFBKNCLLML);
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__BEKPONJNIPM(__this,method_00);
  return;
}


// ===== public void ShowHint(Transform FPANKOCKNJA, string KLEGNFLIAPC)  [RVA 0x3475F80]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$ShowHint @ RVA 0x3475F80

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ShowHint
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               UnityEngine_Transform_o *FPANKOCKNJA,System_String_o *KLEGNFLIAPC,MethodInfo *method)

{
  MethodInfo *in_x4;
  
                    /* try { // try from 03575f80 to 03675f83 has its CatchHandler @ 03575f98 */
                    /* try { // try from 03575f84 to 03675f87 has its CatchHandler @ 03575f90 */
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__LHHLFBBBJLD
            (__this,FPANKOCKNJA,KLEGNFLIAPC,(__this->fields).FOIPEDJENOJ,in_x4);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x3476108]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$OnDestroy @ RVA 0x3476108

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  HCKCBFOGMMJ_o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_04568329 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Clear__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_OHDOIFLJMMF__);
    DAT_04568329 = 1;
  }
                    /* try { // try from 03576164 to 03676173 has its CatchHandler @ 03576178 */
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03576174 to 0367617b has its CatchHandler @ 03575d7c */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03575fb8 with catch @ 03576178
                       catch() { ... } // from try @ 03576164 with catch @ 03576178 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0357617c to 0367617f has its CatchHandler @ 03576188 */
                    /* try { // try from 03576180 to 0367618b has its CatchHandler @ 03575d7c */
  __this_00 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
  if (__this_00 != (HCKCBFOGMMJ_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0357617c with catch @ 03576188
                        */
                    /* try { // try from 0357618c to 0367630b has its CatchHandler @ 0357618c
                       catch() { ... } // from try @ 0357618c with catch @ 0357618c
                       catch() { ... } // from try @ 035763f4 with catch @ 0357618c
                       catch() { ... } // from try @ 035764b0 with catch @ 0357618c
                       catch() { ... } // from try @ 03576578 with catch @ 0357618c
                       catch() { ... } // from try @ 03576594 with catch @ 0357618c
                       catch() { ... } // from try @ 035766d8 with catch @ 0357618c */
    JICOLGELJGE<object>__OHDOIFLJMMF
              ((JICOLGELJGE_T__o *)__this_00,(Il2CppObject *)__this,
               Method_JICOLGELJGE<LFELBGMCDHD>_OHDOIFLJMMF__);
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).ODLKEJCKMPD;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary<int,_object>__Clear
                (pSVar1,Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_Clear__
                );
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).BGMOJHCPOND;
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary<int,_object>__Clear
                  (pSVar1,
                   Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Clear__
                  );
        Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__StopFillPlayers(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void StopFillPlayers()  [RVA 0x34761E0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$StopFillPlayers @ RVA 0x34761E0

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__StopFillPlayers
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456832a & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456832a = 1;
  }
  if ((__this->fields).CCEJPHCCIMO == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar3->klass;
  ppSVar1 = &(__this->fields).CCEJPHCCIMO;
  pSVar8 = *ppSVar1;
  uVar2._0_1_ = (pPVar5->_2).rank;
  uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_03576290;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_03576290:
  (*pVVar4->methodPtr)(pPVar3,pSVar8,pVVar4->method);
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== public void Init(RaidLeaguesDialog ODNJEHJPBGA, SimpleScroll FOEKJIBPDGO, GameObject HJCFNKIGBNL, HintBoxAutoKilled BKHPMKPNDGK, HintBoxAutoKilled HADJAPBDMPB)  [RVA 0x34762BC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$Init @ RVA 0x34762BC

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *ODNJEHJPBGA,
               Nekki_SF2_GUI_SimpleScroll_o *FOEKJIBPDGO,UnityEngine_GameObject_o *HJCFNKIGBNL,
               Nekki_SF2_GUI_HintBoxAutoKilled_o *BKHPMKPNDGK,
               Nekki_SF2_GUI_HintBoxAutoKilled_o *HADJAPBDMPB,MethodInfo *method)

{
  (__this->fields).CKFDKAIMINP = ODNJEHJPBGA;
  thunk_FUN_01c20e04(&(__this->fields).CKFDKAIMINP);
  (__this->fields).DCDPLKDJEIM = (GLPEFEEGCPM_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).DCDPLKDJEIM,0);
  (__this->fields).PDHMLFAMNCO = FOEKJIBPDGO;
  thunk_FUN_01c20e04(&(__this->fields).PDHMLFAMNCO,FOEKJIBPDGO);
                    /* try { // try from 0357630c to 0367631f has its CatchHandler @ 035764b8 */
  (__this->fields).FOIPEDJENOJ = BKHPMKPNDGK;
  thunk_FUN_01c20e04(&(__this->fields).FOIPEDJENOJ,BKHPMKPNDGK);
  (__this->fields).KHCFBHAOLOH = HADJAPBDMPB;
  thunk_FUN_01c20e04(&(__this->fields).KHCFBHAOLOH,HADJAPBDMPB);
  (__this->fields).IBEANLBJNMM = HJCFNKIGBNL;
                    /* try { // try from 0357632c to 03676333 has its CatchHandler @ 035764cc */
  (__this->fields).JGEPPNPPIKG = false;
                    /* try { // try from 03576340 to 03676343 has its CatchHandler @ 035764d0 */
  thunk_FUN_01c20e04(&(__this->fields).IBEANLBJNMM,HJCFNKIGBNL);
  return;
}


// ===== private void LCALDCHKNAH()  [RVA 0x3476348]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$LCALDCHKNAH @ RVA 0x3476348

/* WARNING: Removing unreachable block (ram,0x03576f64) */
/* WARNING: Removing unreachable block (ram,0x03576e34) */
/* WARNING: Removing unreachable block (ram,0x03576e38) */
/* WARNING: Removing unreachable block (ram,0x03576afc) */
/* WARNING: Removing unreachable block (ram,0x03576f58) */
/* WARNING: Removing unreachable block (ram,0x03576f2c) */
/* WARNING: Removing unreachable block (ram,0x03576c84) */

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__LCALDCHKNAH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int32_t iVar2;
  ushort uVar3;
  uint uVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  int32_t iVar7;
  System_Collections_Generic_Dictionary_int__object__o *pSVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Func_int__int__o **ppSVar9;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar10;
  VirtualInvokeData *pVVar11;
  long *plVar12;
  undefined8 *puVar13;
  System_Collections_Generic_List_object__o *pSVar14;
  HCKCBFOGMMJ_o *__this_00;
  GKLPDMLELJF_o *pGVar15;
  PlayerData_o *pEVar16;
  System_String_o *pSVar17;
  Il2CppObject *__this_01;
  System_Comparison_T__o *comparison;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar18;
  System_Func_List_RaidLeaguesLeaderboard_OIMJFDFDMMM___bool__o **ppSVar19;
  CPNHNIKFGFB_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *pNVar20;
  MethodInfo *method_00;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *pSVar21;
  System_Linq_IOrderedEnumerable_TSource__c *pSVar22;
  long lVar23;
  System_Object_array *pSVar24;
  ulong uVar25;
  int32_t *piVar26;
  int *piVar27;
  System_Func_int__int__o *keySelector;
  System_Func_List_RaidLeaguesLeaderboard_OIMJFDFDMMM___bool__o *predicate;
  System_String_o *pSVar28;
  Il2CppClass *pIVar29;
  System_String_o *pSVar30;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_d8;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 03576350 to 03676357 has its CatchHandler @ 035764d4 */
                    /* try { // try from 03576364 to 03676367 has its CatchHandler @ 035764d8 */
  if ((DAT_0456832b & 1) == 0) {
                    /* try { // try from 03576378 to 0367637f has its CatchHandler @ 035764c8 */
    FUN_01bab630(&System_Comparison<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Clear__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_get_Item__);
                    /* try { // try from 035763cc to 036763f3 has its CatchHandler @ 035764bc */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_get_Keys__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Values__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_All<List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>__);
                    /* try { // try from 035763f4 to 0367648f has its CatchHandler @ 0357618c */
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderByDescending<int,_int>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KGBIBHEFBHA>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KGBIBHEFBHA>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidLeaguesLeaderboard_OIMJFDFDMMM>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KGBIBHEFBHA>_get_Current__);
    FUN_01bab630(&System_Func<int,_int>_TypeInfo);
    FUN_01bab630(&System_Func<List<RaidLeaguesLeaderboard_OIMJFDFDMMM>,_bool>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03576490 to 03676493 has its CatchHandler @ 035764e0 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 03576498 to 0367649b has its CatchHandler @ 035764dc */
    FUN_01bab630(&System_Collections_Generic_IEnumerable<int>_TypeInfo);
                    /* try { // try from 035764a0 to 036764a3 has its CatchHandler @ 035764b4 */
                    /* try { // try from 035764a8 to 036764af has its CatchHandler @ 035764bc */
    FUN_01bab630(&System_Collections_Generic_IEnumerator<int>_TypeInfo);
                    /* try { // try from 035764b0 to 036764fb has its CatchHandler @ 0357618c */
                    /* catch() { ... } // from try @ 035764a0 with catch @ 035764b4 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* catch() { ... } // from try @ 0357630c with catch @ 035764b8 */
                    /* catch() { ... } // from try @ 035763cc with catch @ 035764bc
                       catch() { ... } // from try @ 035764a8 with catch @ 035764bc */
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__);
                    /* catch() { ... } // from try @ 03576378 with catch @ 035764c8 */
                    /* catch() { ... } // from try @ 0357632c with catch @ 035764cc */
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Clear__
                );
                    /* catch() { ... } // from try @ 03576340 with catch @ 035764d0 */
                    /* catch() { ... } // from try @ 03576350 with catch @ 035764d4 */
                    /* catch() { ... } // from try @ 03576364 with catch @ 035764d8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KGBIBHEFBHA>_GetEnumerator__);
                    /* catch() { ... } // from try @ 03576498 with catch @ 035764dc */
                    /* catch() { ... } // from try @ 03576490 with catch @ 035764e0 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Sort__)
    ;
                    /* try { // try from 035764fc to 036764ff has its CatchHandler @ 03576598 */
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo);
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_IGGPLEHJHKO__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_IJPMMAEMLCB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_OJICBBKAFOH__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo);
                    /* try { // try from 03576550 to 03676577 has its CatchHandler @ 035766ec */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_GetEnumerator__
                );
    DAT_0456832b = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._currentValue = (Il2CppObject *)0x0;
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  pSVar21 = (__this->fields).JKBONEFMACI;
                    /* try { // try from 03576578 to 0367658f has its CatchHandler @ 0357618c */
  if (pSVar21 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
    iVar7 = (pSVar21->fields)._size;
    (pSVar21->fields)._size = 0;
    (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
    if (0 < iVar7) {
                    /* try { // try from 03576590 to 03676593 has its CatchHandler @ 03576670 */
                    /* try { // try from 03576594 to 0367665f has its CatchHandler @ 0357618c */
                    /* catch() { ... } // from try @ 035764fc with catch @ 03576598 */
      System_Array__Clear((System_Array_o *)(pSVar21->fields)._items,0,iVar7,(MethodInfo *)0x0);
    }
    pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).BGMOJHCPOND;
    if (pSVar8 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary<int,_object>__Clear
                (pSVar8,
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Clear__
                );
      pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).ODLKEJCKMPD;
      if (pSVar8 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        source = System_Collections_Generic_Dictionary<int,_object>__get_Keys
                           (pSVar8,
                            Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_get_Keys__
                           );
        if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->_2).cctor_finished ==
            0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo);
        }
        keySelector = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->static_fields
                      ->__9__19_0;
        if (keySelector == (System_Func_int__int__o *)0x0) {
          if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->_2).cctor_finished
              == 0) {
            thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo);
          }
          keySelector = (System_Func_int__int__o *)
                        thunk_FUN_01bda818(System_Func<int,_int>_TypeInfo);
          System_Func<int,_int>___ctor();
          ppSVar9 = &Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->static_fields
                     ->__9__19_0;
          *ppSVar9 = keySelector;
                    /* try { // try from 03576660 to 036766d7 has its CatchHandler @ 035766f0 */
          thunk_FUN_01c20e04(ppSVar9,keySelector);
        }
                    /* catch() { ... } // from try @ 03576590 with catch @ 03576670 */
        pSVar10 = System_Linq_Enumerable__OrderByDescending<int,_int>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__TKey__o *)keySelector,
                             Method_System_Linq_Enumerable_OrderByDescending<int,_int>__);
        if (pSVar10 != (System_Linq_IOrderedEnumerable_TSource__o *)0x0) {
          pSVar22 = pSVar10->klass;
          uVar3._0_1_ = (pSVar22->_2).rank;
          uVar3._1_1_ = (pSVar22->_2).minimumAlignment;
          uVar25 = (ulong)uVar3;
          if (uVar25 != 0) {
            piVar26 = &((pSVar22->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar26 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_IEnumerable<int>_TypeInfo) {
                pVVar11 = pSVar22->vtable + *piVar26;
                goto LAB_035766d0;
              }
              uVar25 = uVar25 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar25 != 0);
          }
          pVVar11 = (VirtualInvokeData *)
                    FUN_01b81914(pSVar10,System_Collections_Generic_IEnumerable<int>_TypeInfo,0);
LAB_035766d0:
                    /* try { // try from 035766d8 to 036766e3 has its CatchHandler @ 0357618c */
          plVar12 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
                    /* catch() { ... } // from try @ 03576550 with catch @ 035766ec */
                    /* catch() { ... } // from try @ 03576660 with catch @ 035766f0
                       catch() { ... } // from try @ 035766e4 with catch @ 035766f0 */
                    /* try { // try from 035766f4 to 0367686b has its CatchHandler @ 035766f4
                       catch() { ... } // from try @ 035766f4 with catch @ 035766f4
                       catch() { ... } // from try @ 03576c1c with catch @ 035766f4
                       catch() { ... } // from try @ 03576cec with catch @ 035766f4
                       catch() { ... } // from try @ 03576d08 with catch @ 035766f4
                       catch() { ... } // from try @ 03576de8 with catch @ 035766f4
                       catch() { ... } // from try @ 03576f64 with catch @ 035766f4
                       catch() { ... } // from try @ 03576f80 with catch @ 035766f4
                       catch() { ... } // from try @ 03577084 with catch @ 035766f4
                       catch() { ... } // from try @ 03577138 with catch @ 035766f4 */
            lVar23 = *plVar12;
            uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar27 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar13 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
                  goto LAB_03576744;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,0);
LAB_03576744:
            uVar25 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if ((uVar25 & 1) == 0) {
                    /* try { // try from 03576bfc to 03676bff has its CatchHandler @ 03576c48 */
                    /* try { // try from 03576c0c to 03676c0f has its CatchHandler @ 03576c24 */
                    /* try { // try from 03576c14 to 03676c1b has its CatchHandler @ 03576c2c */
              if (plVar12 == (long *)0x0) goto LAB_03576c78;
              lVar23 = *plVar12;
                    /* try { // try from 03576c1c to 03676c6f has its CatchHandler @ 035766f4 */
                    /* catch() { ... } // from try @ 035769ac with catch @ 03576c20 */
              uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
                    /* catch() { ... } // from try @ 03576c0c with catch @ 03576c24 */
                    /* catch() { ... } // from try @ 03576988 with catch @ 03576c28 */
                    /* catch() { ... } // from try @ 03576b44 with catch @ 03576c2c
                       catch() { ... } // from try @ 03576c14 with catch @ 03576c2c */
              if (uVar25 == 0) goto LAB_03576c50;
              piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              goto LAB_03576c38;
            }
            lVar23 = *plVar12;
            uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(System_Collections_Generic_IEnumerator_int__c **)(piVar27 + -2) ==
                    System_Collections_Generic_IEnumerator<int>_TypeInfo) {
                  puVar13 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
                  goto LAB_035767ac;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            puVar13 = (undefined8 *)
                      FUN_01b81914(plVar12,System_Collections_Generic_IEnumerator<int>_TypeInfo,0);
LAB_035767ac:
            iVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
                     (__this->fields).ODLKEJCKMPD;
            if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03576f24 to 03676f2f has its CatchHandler @ 0357714c */
              FUN_01bab8c8();
            }
            pSVar14 = (System_Collections_Generic_List_object__o *)
                      System_Collections_Generic_Dictionary<int,_object>__get_Item
                                (pSVar8,iVar7,
                                 Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_get_Item__
                                );
            if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&local_d8,pSVar14,
                       Method_System_Collections_Generic_List<KGBIBHEFBHA>_GetEnumerator__);
            local_80.fields._index = local_d8.fields._index;
            local_80.fields._version = local_d8.fields._version;
            local_80.fields._list =
                 (System_Collections_Generic_List_T__o *)local_d8.fields._dictionary;
            local_80.fields._current = local_d8.fields._currentValue;
            while (bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_80,
                                      Method_System_Collections_Generic_List_Enumerator<KGBIBHEFBHA>_MoveNext__
                                     ), pIVar5 = local_80.fields._current, bVar6) {
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_00 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
              if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)pIVar5 ==
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (__this_00 == (HCKCBFOGMMJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pGVar15 = HCKCBFOGMMJ__LLEJFHJIBHC
                                  (__this_00,
                                   (int64_t)((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_Fields
                                              *)((long)pIVar5 + 0x10))->JIJLBFGKNJK,
                                   (MethodInfo *)0x0);
              if (pGVar15 != (GKLPDMLELJF_o *)0x0) {
                pIVar29 = (Il2CppClass *)
                          ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_Fields *)
                          ((long)pIVar5 + 0x10))->JIJLBFGKNJK;
                pSVar28 = (pGVar15->fields).LLBEKLPKDHK;
                uVar1 = *(undefined4 *)
                         &((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_Fields *)
                          ((long)pIVar5 + 0x10))->HJPOJOPKEKI;
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                }
                    /* try { // try from 0357686c to 03676883 has its CatchHandler @ 03576f98 */
                pEVar16 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                if (pEVar16 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar17 = (System_String_o *)PlayerData__APCMGOCHMGC(pEVar16,(MethodInfo *)0x0);
                pSVar30 = ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_Fields *)
                          ((long)pIVar5 + 0x10))->JIJLBFGKNJK;
                iVar7 = ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_Fields *)
                        ((long)pIVar5 + 0x10))->FPNOLDAJPGK;
                iVar2 = ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_Fields *)
                        ((long)pIVar5 + 0x10))->HHOPNIKFJNE;
                __this_01 = (Il2CppObject *)
                            thunk_FUN_01bda818(
                                              Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_TypeInfo
                                              );
                    /* try { // try from 035768a8 to 036768af has its CatchHandler @ 03576fe4 */
                System_Object___ctor(__this_01,(MethodInfo *)0x0);
                __this_01[1].monitor = pSVar28;
                __this_01[1].klass = pIVar29;
                    /* try { // try from 035768bc to 036768bf has its CatchHandler @ 03576ff4 */
                thunk_FUN_01c20e04(&__this_01[1].monitor,pSVar28);
                *(undefined4 *)&__this_01[2].klass = uVar1;
                *(bool *)((long)&__this_01[2].klass + 4) = pSVar17 == pSVar30;
                    /* try { // try from 035768cc to 036768d3 has its CatchHandler @ 03576fe0 */
                *(int32_t *)&__this_01[2].monitor = iVar2;
                *(int32_t *)((long)&__this_01[2].monitor + 4) = iVar7;
                *(undefined4 *)&__this_01[3].klass = 0;
                pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
                         (__this->fields).BGMOJHCPOND;
                if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                    /* try { // try from 035768e0 to 036768e3 has its CatchHandler @ 03576ff0 */
                bVar6 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                                  (pSVar8,*(int32_t *)
                                           &((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_Fields
                                              *)((long)pIVar5 + 0x10))->HJPOJOPKEKI,
                                   Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_ContainsKey__
                                  );
                pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
                         (__this->fields).BGMOJHCPOND;
                iVar7 = *(int32_t *)
                         &((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_Fields *)
                          ((long)pIVar5 + 0x10))->HJPOJOPKEKI;
                    /* try { // try from 035768f8 to 036768ff has its CatchHandler @ 03576fdc */
                if (bVar6) {
                  if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                    /* try { // try from 03576910 to 03676913 has its CatchHandler @ 03576fc0 */
                    /* try { // try from 03576914 to 0367691f has its CatchHandler @ 03576fd8 */
                  pSVar14 = (System_Collections_Generic_List_object__o *)
                            System_Collections_Generic_Dictionary<int,_object>__get_Item
                                      (pSVar8,iVar7,
                                       Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Item__
                                      );
                  lVar23 = 
                  Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__;
                  if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar24 = (pSVar14->fields)._items;
                    /* try { // try from 03576934 to 0367693f has its CatchHandler @ 03576fcc */
                  (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                  if (pSVar24 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  uVar4 = (pSVar14->fields)._size;
                  if (uVar4 < (uint)pSVar24->max_length) {
                    /* try { // try from 03576950 to 03676957 has its CatchHandler @ 03576fac */
                    (pSVar14->fields)._size = uVar4 + 1;
                    pSVar24->m_Items[(int)uVar4] = __this_01;
                    thunk_FUN_01c20e04(pSVar24->m_Items + (int)uVar4,__this_01);
                    /* try { // try from 03576968 to 0367697b has its CatchHandler @ 03576fd4 */
                  }
                  else {
                    /* try { // try from 035769f0 to 03676a03 has its CatchHandler @ 03576c50 */
                    System_Collections_Generic_List<object>__AddWithResize
                              (pSVar14,__this_01,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                  }
                  pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
                           (__this->fields).BGMOJHCPOND;
                  if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar14 = (System_Collections_Generic_List_object__o *)
                            System_Collections_Generic_Dictionary<int,_object>__get_Item
                                      (pSVar8,*(int32_t *)
                                               &((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_Fields
                                                  *)((long)pIVar5 + 0x10))->HJPOJOPKEKI,
                                       Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Item__
                                      );
                    /* try { // try from 03576a10 to 03676a1b has its CatchHandler @ 03576c44 */
                  comparison = (System_Comparison_T__o *)
                               thunk_FUN_01bda818(
                                                 System_Comparison<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo
                                                 );
                    /* try { // try from 03576a24 to 03676a33 has its CatchHandler @ 03576c4c */
                    /* try { // try from 03576a38 to 03676a4b has its CatchHandler @ 03576c40 */
                  System_Comparison<object>___ctor();
                  if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  System_Collections_Generic_List<object>__Sort
                            (pSVar14,comparison,
                             Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Sort__
                            );
                }
                else {
                  pSVar14 = (System_Collections_Generic_List_object__o *)
                            thunk_FUN_01bda818(
                                              System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo
                                              );
                    /* try { // try from 03576988 to 0367699b has its CatchHandler @ 03576c28 */
                  System_Collections_Generic_List<object>___ctor
                            (pSVar14,
                             Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>__ctor__
                            );
                  lVar23 = 
                  Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__;
                  if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar24 = (pSVar14->fields)._items;
                    /* try { // try from 035769ac to 036769b3 has its CatchHandler @ 03576c20 */
                  (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                  if (pSVar24 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  uVar4 = (pSVar14->fields)._size;
                  if (uVar4 < (uint)pSVar24->max_length) {
                    /* try { // try from 035769cc to 036769cf has its CatchHandler @ 03576c38 */
                    (pSVar14->fields)._size = uVar4 + 1;
                    /* try { // try from 035769d0 to 036769ef has its CatchHandler @ 03576c54 */
                    pSVar24->m_Items[(int)uVar4] = __this_01;
                    thunk_FUN_01c20e04(pSVar24->m_Items + (int)uVar4,__this_01);
                  }
                  else {
                    /* try { // try from 03576a74 to 03676a7f has its CatchHandler @ 03576fc8 */
                    System_Collections_Generic_List<object>__AddWithResize
                              (pSVar14,__this_01,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                  }
                  if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                    /* try { // try from 03576a90 to 03676a97 has its CatchHandler @ 03576fa8 */
                  System_Collections_Generic_Dictionary<int,_object>__Add
                            (pSVar8,iVar7,(Il2CppObject *)pSVar14,
                             Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Add__
                            );
                }
                    /* try { // try from 03576aa0 to 03676aaf has its CatchHandler @ 03576fd0 */
                if ((*(char *)((long)&__this_01[2].klass + 4) != '\0') &&
                   (-1 < *(int *)&((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_Fields
                                    *)((long)pIVar5 + 0x10))->HJPOJOPKEKI)) {
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03576ab4 to 03676acb has its CatchHandler @ 03576fb8 */
                    thunk_FUN_01ba7564();
                  }
                  pEVar16 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                  if (pEVar16 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  (pEVar16->fields).HHOPNIKFJNE =
                       *(int32_t *)
                        &((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_Fields *)
                         ((long)pIVar5 + 0x10))->HJPOJOPKEKI;
                }
              }
            }
                    /* try { // try from 03576ae0 to 03676afb has its CatchHandler @ 03576fc4 */
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<KGBIBHEFBHA>_Dispose__);
          } while( true );
        }
      }
    }
  }
  goto LAB_03576f50;
  while( true ) {
                    /* catch() { ... } // from try @ 03576a10 with catch @ 03576c44 */
    uVar25 = uVar25 - 1;
                    /* catch() { ... } // from try @ 03576bfc with catch @ 03576c48 */
    piVar27 = piVar27 + 4;
                    /* catch() { ... } // from try @ 03576a24 with catch @ 03576c4c */
    if (uVar25 == 0) break;
LAB_03576c38:
                    /* catch() { ... } // from try @ 035769cc with catch @ 03576c38 */
                    /* catch() { ... } // from try @ 03576c04 with catch @ 03576c3c */
                    /* catch() { ... } // from try @ 03576a38 with catch @ 03576c40 */
    if (*(System_IDisposable_c **)(piVar27 + -2) == System_IDisposable_TypeInfo) {
      puVar13 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_03576c6c;
    }
  }
LAB_03576c50:
                    /* catch() { ... } // from try @ 035769f0 with catch @ 03576c50 */
                    /* catch() { ... } // from try @ 035769d0 with catch @ 03576c54 */
  puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_IDisposable_TypeInfo,0);
LAB_03576c6c:
                    /* try { // try from 03576c70 to 03676c73 has its CatchHandler @ 03576d0c */
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_03576c78:
  pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).BGMOJHCPOND;
  if (pSVar8 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    iVar7 = System_Collections_Generic_Dictionary<int,_object>__get_Count
                      (pSVar8,
                       Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Count__
                      );
    if (iVar7 == 0) {
      __this_02 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_02 != (CPNHNIKFGFB_o *)0x0) {
        CPNHNIKFGFB__DIGPCFKCCBK(__this_02,0x29c4,(MethodInfo *)0x0);
        pNVar20 = (__this->fields).CKFDKAIMINP;
        if (pNVar20 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *)0x0) {
          (*(pNVar20->klass->vtable)._20_Close.methodPtr)
                    (pNVar20,(pNVar20->klass->vtable)._20_Close.method);
          return;
        }
      }
    }
    else {
      pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).BGMOJHCPOND;
      if (pSVar8 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        pSVar18 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                            (pSVar8,
                             Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Values__
                            );
                    /* try { // try from 03576cc4 to 03676ceb has its CatchHandler @ 03576f90 */
        if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->_2).cctor_finished ==
            0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo);
        }
        predicate = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->static_fields->
                    __9__19_1;
        if (predicate == (System_Func_List_RaidLeaguesLeaderboard_OIMJFDFDMMM___bool__o *)0x0) {
          if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->_2).cctor_finished
              == 0) {
                    /* try { // try from 03576cec to 03676d03 has its CatchHandler @ 035766f4 */
            thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo);
          }
                    /* try { // try from 03576d04 to 03676d07 has its CatchHandler @ 03576f80 */
                    /* try { // try from 03576d08 to 03676dbf has its CatchHandler @ 035766f4 */
                    /* catch() { ... } // from try @ 03576c70 with catch @ 03576d0c */
          predicate = (System_Func_List_RaidLeaguesLeaderboard_OIMJFDFDMMM___bool__o *)
                      thunk_FUN_01bda818(
                                        System_Func<List<RaidLeaguesLeaderboard_OIMJFDFDMMM>,_bool>_TypeInfo
                                        );
          System_Func<object,_bool>___ctor();
          ppSVar19 = &Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->static_fields
                      ->__9__19_1;
          *ppSVar19 = predicate;
          thunk_FUN_01c20e04(ppSVar19,predicate);
        }
        method_00 = Method_System_Linq_Enumerable_All<List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>__;
        bVar6 = System_Linq_Enumerable__All<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar18,
                           (System_Func_TSource__bool__o *)predicate,
                           (MethodInfo_1E955CC *)
                           Method_System_Linq_Enumerable_All<List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>__
                          );
        if (!bVar6) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__JHNEFIAMGEE
                    (__this,(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0,
                     method_00);
          pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).BGMOJHCPOND;
          if ((pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
             (pSVar18 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                                  (pSVar8,
                                   Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Values__
                                  ),
             pSVar18 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0
             )) goto LAB_03576f50;
          System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
                    (&local_d8,pSVar18,
                     Method_System_Collections_Generic_Dictionary_ValueCollection<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_GetEnumerator__
                    );
          local_a0.fields._index = local_d8.fields._index;
          local_a0.fields._version = local_d8.fields._version;
          local_a0.fields._dictionary = local_d8.fields._dictionary;
          local_a0.fields._currentValue = local_d8.fields._currentValue;
                    /* try { // try from 03576dc0 to 03676de7 has its CatchHandler @ 03576f9c */
          while (bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                                   (&local_a0,
                                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_MoveNext__
                                   ), bVar6) {
            if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)
                local_a0.fields._currentValue ==
                (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&local_d8,
                       (System_Collections_Generic_List_object__o *)local_a0.fields._currentValue,
                       Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_GetEnumerator__
                      );
            local_c0.fields._index = local_d8.fields._index;
            local_c0.fields._version = local_d8.fields._version;
                    /* try { // try from 03576de8 to 03676edb has its CatchHandler @ 035766f4 */
            local_c0.fields._list =
                 (System_Collections_Generic_List_T__o *)local_d8.fields._dictionary;
            local_c0.fields._current = local_d8.fields._currentValue;
            while (bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_c0,
                                      Method_System_Collections_Generic_List_Enumerator<RaidLeaguesLeaderboard_OIMJFDFDMMM>_MoveNext__
                                     ), bVar6) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__JHNEFIAMGEE
                        (__this,(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)
                                local_c0.fields._current,method_00);
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_c0,
                       Method_System_Collections_Generic_List_Enumerator<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Dispose__
                      );
          }
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Dispose__
                    );
          Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__JHNEFIAMGEE
                    (__this,(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0,
                     method_00);
        }
                    /* try { // try from 03576edc to 03676edf has its CatchHandler @ 03576fec */
                    /* try { // try from 03576ee0 to 03676ee3 has its CatchHandler @ 03576fe8 */
        return;
      }
    }
  }
LAB_03576f50:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03576f50 to 03676f63 has its CatchHandler @ 0357714c */
  FUN_01bab8c8();
}


// ===== private IEnumerator NHOJCBHAMIK()  [RVA 0x347715C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$NHOJCBHAMIK @ RVA 0x347715C

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__NHOJCBHAMIK
          (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456832c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH_TypeInfo);
    DAT_0456832c = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH_TypeInfo
                                 ,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void BEKPONJNIPM()  [RVA 0x3475608]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$BEKPONJNIPM @ RVA 0x3475608

/* WARNING: Removing unreachable block (ram,0x03575ddc) */
/* WARNING: Removing unreachable block (ram,0x03575e98) */

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__BEKPONJNIPM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_Dictionary_int__object__o *pSVar6;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_00;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  PlayerData_o *pEVar9;
  RaidConfig_o *pJVar10;
  RaidConfig_CMLEEJPGHNC_o *pJVar11;
  IBMLPPNMDCI_o *__this_01;
  System_Func_KeyValuePair_int__List_KGBIBHEFBHA____int__o **ppSVar12;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar13;
  Il2CppClass *pIVar14;
  VirtualInvokeData *pVVar15;
  long *plVar16;
  undefined8 *puVar17;
  System_Func_KGBIBHEFBHA__long__o **ppSVar18;
  System_Collections_Generic_IEnumerable_TResult__o *values;
  HCKCBFOGMMJ_o *__this_02;
  System_Action_LFELBGMCDHD__o *BLMFLPJJMPF;
  System_Collections_Generic_List_object__o *__this_03;
  GLPEFEEGCPM_o *pGVar19;
  System_Object_array *pSVar20;
  RaidConfig_AEJBILHMFDB_o *pJVar21;
  System_Linq_IOrderedEnumerable_TSource__c *pSVar22;
  long lVar23;
  ulong uVar24;
  int32_t *piVar25;
  int *piVar26;
  int iVar27;
  System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *__this_04;
  System_Collections_Generic_Dictionary_int__List_KGBIBHEFBHA___o *source;
  System_Func_KeyValuePair_int__List_KGBIBHEFBHA____int__o *keySelector;
  System_Comparison_T__o *comparison;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_05;
  System_Func_KGBIBHEFBHA__long__o *selector;
  
  if ((DAT_0456832d & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&System_Comparison<KGBIBHEFBHA>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_get_Item__);
    FUN_01bab630(&
                 Method_System_Linq_Enumerable_OrderByDescending<KeyValuePair<int,_List<KGBIBHEFBHA>>,_int>__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<KGBIBHEFBHA,_long>__);
    FUN_01bab630(&System_Func<KeyValuePair<int,_List<KGBIBHEFBHA>>,_int>_TypeInfo);
    FUN_01bab630(&System_Func<KGBIBHEFBHA,_long>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&
                 System_Collections_Generic_IEnumerable<KeyValuePair<int,_List<KGBIBHEFBHA>>>_TypeInfo
                );
    FUN_01bab630(&
                 System_Collections_Generic_IEnumerator<KeyValuePair<int,_List<KGBIBHEFBHA>>>_TypeInfo
                );
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_List<KGBIBHEFBHA>>_get_Value__
                );
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_LPFAKMADDHI_GHJIFKFHMOM__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_LPFAKMADDHI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KGBIBHEFBHA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KGBIBHEFBHA>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KGBIBHEFBHA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_CMLEEJPGHNC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_CMLEEJPGHNC>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<KGBIBHEFBHA>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_NKLNDGMMAAH__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_AddRange__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_KPDPPBEHFOF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_OLJIOICHFFB__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo);
    DAT_0456832d = 1;
  }
  if ((__this->fields).DCDPLKDJEIM == (GLPEFEEGCPM_o *)0x0) {
    return;
  }
  pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).ODLKEJCKMPD;
  if (pSVar6 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__Clear
              (pSVar6,Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_Clear__);
    pGVar19 = (__this->fields).DCDPLKDJEIM;
    if (pGVar19 != (GLPEFEEGCPM_o *)0x0) {
      iVar27 = 0;
      while (__this_00 = (pGVar19->fields).MPAIPMANDEO,
            __this_00 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
        if ((__this_00->fields).count <= iVar27) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (pEVar9 != (PlayerData_o *)0x0) {
            iVar5 = PlayerData__IGIHHCEONEM(pEVar9,(MethodInfo *)0x0);
            pJVar10 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
            if (((pJVar10 != (RaidConfig_o *)0x0) &&
                (pJVar21 = (pJVar10->fields)._JMEOCLFDHMM_k__BackingField,
                pJVar21 != (RaidConfig_AEJBILHMFDB_o *)0x0)) &&
               (__this_04 = (pJVar21->fields).NPPJFJBJLLG,
               __this_04 != (System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *)0x0)) {
              if ((__this_04->fields)._size < 1) goto LAB_035759cc;
              iVar27 = 0;
              goto LAB_03575988;
            }
          }
          break;
        }
        pIVar7 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,iVar27,
                            Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__
                           );
        if (pIVar7 != (Il2CppObject *)0x0) {
          pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).ODLKEJCKMPD;
          if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
          bVar4 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                            (pSVar6,*(int32_t *)((long)&pIVar7[2].klass + 4),
                             Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_ContainsKey__
                            );
          if (!bVar4) {
            pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                     (__this->fields).ODLKEJCKMPD;
            iVar5 = *(int32_t *)((long)&pIVar7[2].klass + 4);
            pSVar8 = (System_Collections_Generic_List_object__o *)
                     thunk_FUN_01bda818(System_Collections_Generic_List<KGBIBHEFBHA>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      (pSVar8,Method_System_Collections_Generic_List<KGBIBHEFBHA>__ctor__);
            if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
            System_Collections_Generic_Dictionary<int,_object>__Add
                      (pSVar6,iVar5,(Il2CppObject *)pSVar8,
                       Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_Add__);
          }
          pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).ODLKEJCKMPD;
          if ((pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
             (pSVar8 = (System_Collections_Generic_List_object__o *)
                       System_Collections_Generic_Dictionary<int,_object>__get_Item
                                 (pSVar6,*(int32_t *)((long)&pIVar7[2].klass + 4),
                                  Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_get_Item__
                                 ),
             lVar23 = Method_System_Collections_Generic_List<KGBIBHEFBHA>_Add__,
             pSVar8 == (System_Collections_Generic_List_object__o *)0x0)) break;
          pSVar20 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pSVar20 == (System_Object_array *)0x0) break;
          uVar3 = (pSVar8->fields)._size;
          if (uVar3 < (uint)pSVar20->max_length) {
            (pSVar8->fields)._size = uVar3 + 1;
            pSVar20->m_Items[(int)uVar3] = pIVar7;
            thunk_FUN_01c20e04(pSVar20->m_Items + (int)uVar3,pIVar7);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar8,pIVar7,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
        }
        pGVar19 = (__this->fields).DCDPLKDJEIM;
        iVar27 = iVar27 + 1;
        if (pGVar19 == (GLPEFEEGCPM_o *)0x0) break;
      }
    }
  }
  goto LAB_03575920;
  while (iVar27 = iVar27 + 1, iVar27 < (__this_04->fields)._size) {
LAB_03575988:
    pJVar11 = (RaidConfig_CMLEEJPGHNC_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)__this_04,iVar27,
                         Method_System_Collections_Generic_List<RaidConfig_CMLEEJPGHNC>_get_Item__)
    ;
    if (pJVar11 == (RaidConfig_CMLEEJPGHNC_o *)0x0) goto LAB_03575920;
    if ((pJVar11->fields).NEKMDLBLENC == iVar5) {
      (__this->fields).LLLCBLJMPIH = pJVar11;
      thunk_FUN_01c20e04(&(__this->fields).LLLCBLJMPIH);
      break;
    }
  }
LAB_035759cc:
  if ((__this->fields).LLLCBLJMPIH == (RaidConfig_CMLEEJPGHNC_o *)0x0) {
    return;
  }
  pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).ODLKEJCKMPD;
  if (pSVar6 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    iVar5 = System_Collections_Generic_Dictionary<int,_object>__get_Count
                      (pSVar6,
                       Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_get_Count__
                      );
    if (iVar5 < 1) {
      return;
    }
    pIVar7 = (Il2CppObject *)
             thunk_FUN_01bda818(
                               Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_LPFAKMADDHI_TypeInfo
                               );
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    __this_01 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo);
    IBMLPPNMDCI___ctor(__this_01,(MethodInfo *)0x0);
    source = (__this->fields).ODLKEJCKMPD;
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    keySelector = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->static_fields->
                  __9__24_0;
    if (keySelector == (System_Func_KeyValuePair_int__List_KGBIBHEFBHA____int__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      keySelector = (System_Func_KeyValuePair_int__List_KGBIBHEFBHA____int__o *)
                    thunk_FUN_01bda818(
                                      System_Func<KeyValuePair<int,_List<KGBIBHEFBHA>>,_int>_TypeInfo
                                      );
      System_Func<KeyValuePair<int,_object>,_int>___ctor();
      ppSVar12 = &Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->static_fields->
                  __9__24_0;
      *ppSVar12 = keySelector;
      thunk_FUN_01c20e04(ppSVar12,keySelector);
    }
    pSVar13 = System_Linq_Enumerable__OrderByDescending<KeyValuePair<int,_object>,_int>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TKey__o *)keySelector,
                         Method_System_Linq_Enumerable_OrderByDescending<KeyValuePair<int,_List<KGBIBHEFBHA>>,_int>__
                        );
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (((pEVar9 != (PlayerData_o *)0x0) &&
        (pIVar14 = (Il2CppClass *)PlayerData__APCMGOCHMGC(pEVar9,(MethodInfo *)0x0),
        pIVar7 != (Il2CppObject *)0x0)) &&
       (pIVar7[1].klass = pIVar14, pSVar13 != (System_Linq_IOrderedEnumerable_TSource__o *)0x0)) {
      pSVar22 = pSVar13->klass;
      uVar2._0_1_ = (pSVar22->_2).rank;
      uVar2._1_1_ = (pSVar22->_2).minimumAlignment;
      uVar24 = (ulong)uVar2;
      if (uVar24 != 0) {
        piVar25 = &((pSVar22->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar25 + -2))->interfaceType ==
              (Il2CppClass *)
              System_Collections_Generic_IEnumerable<KeyValuePair<int,_List<KGBIBHEFBHA>>>_TypeInfo)
          {
            pVVar15 = pSVar22->vtable + *piVar25;
            goto LAB_03575b5c;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      pVVar15 = (VirtualInvokeData *)
                FUN_01b81914(pSVar13,
                             System_Collections_Generic_IEnumerable<KeyValuePair<int,_List<KGBIBHEFBHA>>>_TypeInfo
                             ,0);
LAB_03575b5c:
      plVar16 = (long *)(*pVVar15->methodPtr)(pSVar13,pVVar15->method);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppvVar1 = &pIVar7[1].monitor;
      do {
        lVar23 = *plVar16;
        uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar24 != 0) {
          piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar26 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar17 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03575bd4;
            }
            uVar24 = uVar24 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar24 != 0);
        }
        puVar17 = (undefined8 *)FUN_01b81914(plVar16,System_Collections_IEnumerator_TypeInfo,0);
LAB_03575bd4:
        uVar24 = (*(code *)*puVar17)(plVar16,puVar17[1]);
        if ((uVar24 & 1) == 0) {
          if (plVar16 == (long *)0x0) goto LAB_03575dd0;
          lVar23 = *plVar16;
                    /* try { // try from 03575d7c to 03675ea3 has its CatchHandler @ 03575d7c
                       catch() { ... } // from try @ 03575d7c with catch @ 03575d7c
                       catch() { ... } // from try @ 03575eb8 with catch @ 03575d7c
                       catch() { ... } // from try @ 03575f8c with catch @ 03575d7c
                       catch() { ... } // from try @ 03575fd0 with catch @ 03575d7c
                       catch() { ... } // from try @ 03576174 with catch @ 03575d7c
                       catch() { ... } // from try @ 03576180 with catch @ 03575d7c */
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar24 == 0) goto LAB_03575da8;
          piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          goto LAB_03575d90;
        }
        lVar23 = *plVar16;
        uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar24 != 0) {
          piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_KeyValuePair_int__List_KGBIBHEFBHA____c **)
                 (piVar26 + -2) ==
                System_Collections_Generic_IEnumerator<KeyValuePair<int,_List<KGBIBHEFBHA>>>_TypeInfo
               ) {
              puVar17 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03575c38;
            }
            uVar24 = uVar24 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar24 != 0);
        }
        puVar17 = (undefined8 *)
                  FUN_01b81914(plVar16,
                               System_Collections_Generic_IEnumerator<KeyValuePair<int,_List<KGBIBHEFBHA>>>_TypeInfo
                               ,0);
LAB_03575c38:
        (*(code *)*puVar17)(plVar16,puVar17[1]);
        comparison = *ppvVar1;
        if (comparison == (System_Comparison_T__o *)0x0) {
          comparison = (System_Comparison_T__o *)
                       thunk_FUN_01bda818(System_Comparison<KGBIBHEFBHA>_TypeInfo);
          System_Comparison<object>___ctor();
          *ppvVar1 = comparison;
          thunk_FUN_01c20e04(ppvVar1,comparison);
        }
        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__Sort
                  (__this_03,comparison,Method_System_Collections_Generic_List<KGBIBHEFBHA>_Sort__);
        if (__this_01 == (IBMLPPNMDCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_05 = (__this_01->fields).EHBNKDHKJNI;
        if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->_2).cctor_finished ==
            0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo);
        }
        selector = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->static_fields->
                   __9__24_2;
        if (selector == (System_Func_KGBIBHEFBHA__long__o *)0x0) {
          if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->_2).cctor_finished
              == 0) {
            thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo);
          }
          selector = (System_Func_KGBIBHEFBHA__long__o *)
                     thunk_FUN_01bda818(System_Func<KGBIBHEFBHA,_long>_TypeInfo);
          System_Func<object,_long>___ctor();
          ppSVar18 = &Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_<>c_TypeInfo->static_fields
                      ->__9__24_2;
          *ppSVar18 = selector;
          thunk_FUN_01c20e04(ppSVar18,selector);
        }
        values = System_Linq_Enumerable__Select<object,_long>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)__this_03,
                            (System_Func_TSource__TResult__o *)selector,
                            Method_System_Linq_Enumerable_Select<KGBIBHEFBHA,_long>__);
        if (__this_05 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Google_Protobuf_Collections_RepeatedField<long>__AddRange
                  (__this_05,(System_Collections_Generic_IEnumerable_T__o *)values,
                   Method_Google_Protobuf_Collections_RepeatedField<long>_AddRange__);
      } while( true );
    }
  }
  goto LAB_03575920;
  while( true ) {
    uVar24 = uVar24 - 1;
    piVar26 = piVar26 + 4;
    if (uVar24 == 0) break;
LAB_03575d90:
    if (*(System_IDisposable_c **)(piVar26 + -2) == System_IDisposable_TypeInfo) {
      puVar17 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
      goto LAB_03575dc4;
    }
  }
LAB_03575da8:
  puVar17 = (undefined8 *)FUN_01b81914(plVar16,System_IDisposable_TypeInfo,0);
LAB_03575dc4:
  (*(code *)*puVar17)(plVar16,puVar17[1]);
LAB_03575dd0:
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_02 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_LFELBGMCDHD__o *)
                thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_02 != (HCKCBFOGMMJ_o *)0x0) {
    HCKCBFOGMMJ__EFCMPBGIEGJ(__this_02,__this_01,BLMFLPJJMPF,(MethodInfo *)0x0);
    return;
  }
LAB_03575920:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HGLBPOAFPKC(int JDEFJPHCNMM)  [RVA 0x34771F8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$HGLBPOAFPKC @ RVA 0x34771F8

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__HGLBPOAFPKC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,int32_t JDEFJPHCNMM,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this_01;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_02;
  Il2CppObject *pIVar4;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Collections_Generic_List_TSource__o *__this_03;
  int NOBEFHEECKJ;
  RaidConfig_CMLEEJPGHNC_o *pJVar6;
  
  if ((DAT_0456832e & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Keys__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<int>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_IndexOf__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo);
    FUN_01bab630(&StringLiteral_10900/*"RaidLeaguesCellPool"*/);
    DAT_0456832e = 1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if ((__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (__this_01 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)
                  Nekki_SF2_GUI_SimpleScroll__AddItemFromPool
                            (__this_00,false,StringLiteral_10900/*"RaidLeaguesCellPool"*/,(MethodInfo *)0x0),
     __this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)0x0)) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo)) {
      CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA(CMMIJCJOBBF,true,(MethodInfo *)0x0);
      (*(__this_01->klass->vtable)._55_ReInit.methodPtr)
                (__this_01,(__this_01->klass->vtable)._55_ReInit.method);
      (__this_01->fields).PBIDKAAGKLB = __this;
      thunk_FUN_01c20e04(&(__this_01->fields).PBIDKAAGKLB,__this);
      (__this_01->fields).LLLCBLJMPIH = (__this->fields).LLLCBLJMPIH;
      thunk_FUN_01c20e04(&(__this_01->fields).LLLCBLJMPIH);
      __this_02 = (__this->fields).JKBONEFMACI;
      if (__this_02 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
      {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_02,JDEFJPHCNMM,
                            Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                           );
        (*(__this_01->klass->vtable)._52_UpdateView.methodPtr)
                  (__this_01,pIVar4,(__this_01->klass->vtable)._52_UpdateView.method);
        pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                 (__this->fields).OCKAMMNDKCJ;
        if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          bVar2 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                            (pSVar5,JDEFJPHCNMM,
                             Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_ContainsKey__
                            );
          if ((pIVar4 == (Il2CppObject *)0x0) || (!bVar2)) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__OriginateHeight
                      (__this_01,(MethodInfo *)0x0);
            return;
          }
          pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).OCKAMMNDKCJ;
          if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            source = System_Collections_Generic_Dictionary<int,_object>__get_Keys
                               (pSVar5,
                                Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Keys__
                               );
            __this_03 = System_Linq_Enumerable__ToList<int>
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                   Method_System_Linq_Enumerable_ToList<int>__);
            if (__this_03 != (System_Collections_Generic_List_TSource__o *)0x0) {
              iVar3 = System_Collections_Generic_List<int>__IndexOf
                                ((System_Collections_Generic_List_int__o *)__this_03,JDEFJPHCNMM,
                                 Method_System_Collections_Generic_List<int>_IndexOf__);
              pJVar6 = (__this->fields).LLLCBLJMPIH;
              if (pJVar6 != (RaidConfig_CMLEEJPGHNC_o *)0x0) {
                if (*(int *)&pIVar4[2].klass < (pJVar6->fields).AKAGFOOMLFB) {
                  NOBEFHEECKJ = 0;
                }
                else {
                  NOBEFHEECKJ = iVar3 + 1;
                }
                Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__ShowRewardPlate
                          (__this_01,NOBEFHEECKJ,(MethodInfo *)0x0);
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


// ===== public void ShowPosHint(Transform FPANKOCKNJA, string KLEGNFLIAPC)  [RVA 0x3477414]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$ShowPosHint @ RVA 0x3477414

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ShowPosHint
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               UnityEngine_Transform_o *FPANKOCKNJA,System_String_o *KLEGNFLIAPC,MethodInfo *method)

{
  MethodInfo *in_x4;
  
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__LHHLFBBBJLD
            (__this,FPANKOCKNJA,KLEGNFLIAPC,(__this->fields).KHCFBHAOLOH,in_x4);
  return;
}


// ===== public void .ctor()  [RVA 0x347741C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$.ctor @ RVA 0x347741C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456832f & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>__ctor__
                );
                    /* try { // try from 03577498 to 036777ab has its CatchHandler @ 03577498
                       catch() { ... } // from try @ 03577498 with catch @ 03577498
                       catch() { ... } // from try @ 03577910 with catch @ 03577498
                       catch() { ... } // from try @ 03577a5c with catch @ 03577498
                       catch() { ... } // from try @ 03577a8c with catch @ 03577498
                       catch() { ... } // from try @ 03577b00 with catch @ 03577498
                       catch() { ... } // from try @ 03577b08 with catch @ 03577498
                       catch() { ... } // from try @ 03577b60 with catch @ 03577498
                       catch() { ... } // from try @ 03577ba0 with catch @ 03577498
                       catch() { ... } // from try @ 03577c48 with catch @ 03577498 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_TypeInfo);
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_TypeInfo
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_Selectable_TypeInfo);
    DAT_0456832f = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_TypeInfo
                              ,method);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (pSVar1,
             Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>__ctor__);
  (__this->fields).OCKAMMNDKCJ =
       (System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_HKDMLOKOJPH__o *)pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).OCKAMMNDKCJ,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<int,_List<KGBIBHEFBHA>>__ctor__);
  (__this->fields).ODLKEJCKMPD =
       (System_Collections_Generic_Dictionary_int__List_KGBIBHEFBHA___o *)pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).ODLKEJCKMPD,pSVar1);
  __this_00 = (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>__ctor__);
  (__this->fields).JKBONEFMACI = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).JKBONEFMACI,__this_00);
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (pSVar1,
             Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>__ctor__
            );
  (__this->fields).BGMOJHCPOND =
       (System_Collections_Generic_Dictionary_int__List_RaidLeaguesLeaderboard_OIMJFDFDMMM___o *)
       pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).BGMOJHCPOND,pSVar1);
  if ((UnityEngine_UI_Selectable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_UI_Selectable___ctor((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OKOAKPACKFO()  [RVA 0x34775C4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$OKOAKPACKFO @ RVA 0x34775C4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__OKOAKPACKFO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Il2CppObject *__this_00;
  Il2CppObject *pIVar3;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *EDEHNHIHDDH;
  RaidConfig_HKDMLOKOJPH_o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *pSVar4;
  RaidConfig_CMLEEJPGHNC_o *pJVar5;
  int index;
  System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_HKDMLOKOJPH__o *source_00;
  System_Collections_Generic_KeyValuePair_int__object__o SVar6;
  
  if ((DAT_04568330 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_Clear__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__)
    ;
    FUN_01bab630(&System_Func<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>,_bool>_TypeInfo);
    FUN_01bab630(&RaidConfig_HKDMLOKOJPH_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Value__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                );
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_PPKIELLNGKF_EIPOFOIMENL__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_PPKIELLNGKF_TypeInfo);
    DAT_04568330 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).OCKAMMNDKCJ;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__Clear
              (pSVar2,
               Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_Clear__);
    pSVar4 = (__this->fields).JKBONEFMACI;
    if (pSVar4 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
      index = 0;
      do {
        if ((pSVar4->fields)._size <= index) {
          return;
        }
        __this_00 = (Il2CppObject *)
                    thunk_FUN_01bda818(
                                      Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_PPKIELLNGKF_TypeInfo
                                      );
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        pSVar4 = (__this->fields).JKBONEFMACI;
        if (pSVar4 == (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
        break;
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,index,
                            Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                           );
        if (pIVar3 != (Il2CppObject *)0x0) {
          if (__this_00 == (Il2CppObject *)0x0) break;
          *(undefined4 *)&__this_00[1].klass = *(undefined4 *)&pIVar3[2].monitor;
          if (*(int *)&pIVar3[2].klass < 1) {
            __this_01 = (RaidConfig_HKDMLOKOJPH_o *)
                        thunk_FUN_01bda818(RaidConfig_HKDMLOKOJPH_TypeInfo);
            RaidConfig_HKDMLOKOJPH___ctor(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 03577808 to 03677833 has its CatchHandler @ 03577bac */
            pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                     (__this->fields).OCKAMMNDKCJ;
            if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              System_Collections_Generic_Dictionary<int,_object>__Add
                        (pSVar2,index,(Il2CppObject *)__this_01,
                         Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_Add__
                        );
              return;
            }
            break;
          }
          pJVar5 = (__this->fields).LLLCBLJMPIH;
          if (pJVar5 == (RaidConfig_CMLEEJPGHNC_o *)0x0) break;
          source_00 = (pJVar5->fields).MOJCKKMAKOE;
          predicate = (System_Func_TSource__bool__o *)
                      thunk_FUN_01bda818(
                                        System_Func<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>,_bool>_TypeInfo
                                        );
          System_Func<KeyValuePair<int,_object>,_bool>___ctor();
          method_00 = 
          Method_System_Linq_Enumerable_Where<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__;
          source = System_Linq_Enumerable__Where<KeyValuePair<int,_object>>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                              predicate,
                              (MethodInfo_1EB0540 *)
                              Method_System_Linq_Enumerable_Where<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                             );
          EDEHNHIHDDH = System_Linq_Enumerable__ToList<KeyValuePair<int,_object>>
                                  (source,
                                   Method_System_Linq_Enumerable_ToList<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                                  );
          if (EDEHNHIHDDH == (System_Collections_Generic_List_TSource__o *)0x0) break;
          if ((EDEHNHIHDDH->fields)._size != 0) {
            SVar6 = DJNBJHPDKDP__PHPELPFMOII<KeyValuePair<int,_object>>
                              ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                               Method_DJNBJHPDKDP_PHPELPFMOII<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                              );
            bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__LKBALCKCEEJ
                              (__this,(RaidConfig_HKDMLOKOJPH_o *)SVar6.fields.value,method_00);
            if (!bVar1) {
              pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (__this->fields).OCKAMMNDKCJ;
              if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
                    /* try { // try from 035777ac to 036777d3 has its CatchHandler @ 03577bb0 */
              System_Collections_Generic_Dictionary<int,_object>__Add
                        (pSVar2,index,SVar6.fields.value,
                         Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_Add__
                        );
            }
          }
        }
        pSVar4 = (__this->fields).JKBONEFMACI;
        index = index + 1;
      } while (pSVar4 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)
                         0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NKLNDGMMAAH(LFELBGMCDHD CJNHFNHJHPE)  [RVA 0x347784C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$NKLNDGMMAAH @ RVA 0x347784C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__NKLNDGMMAAH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               LFELBGMCDHD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__LCALDCHKNAH(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__OKOAKPACKFO(__this,method_01);
                    /* try { // try from 03577870 to 03677877 has its CatchHandler @ 03577ba4 */
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__NCDOMAGEGCF(__this,method_02);
                    /* try { // try from 0357787c to 03677883 has its CatchHandler @ 03577ba0 */
    if (((__this->fields).JGEPPNPPIKG == false) &&
       (iVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__CELLNGLMJGA(__this,method_03),
       -1 < iVar2)) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__AGPKHOBELPJ(__this,method_04);
                    /* try { // try from 03577894 to 0367789b has its CatchHandler @ 03577b34 */
      (__this->fields).JGEPPNPPIKG = true;
    }
  }
  return;
}


// ===== private void LHHLFBBBJLD(Transform FPANKOCKNJA, string KLEGNFLIAPC, HintBoxAutoKilled BKHPMKPNDGK)  [RVA 0x3475F88]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$LHHLFBBBJLD @ RVA 0x3475F88

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__LHHLFBBBJLD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               UnityEngine_Transform_o *FPANKOCKNJA,System_String_o *KLEGNFLIAPC,
               Nekki_SF2_GUI_HintBoxAutoKilled_o *BKHPMKPNDGK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  UnityEngine_Vector3_o HHPABFGHALF;
  
                    /* try { // try from 03575f88 to 03675f8b has its CatchHandler @ 03575f94 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03575eb0 with catch @ 03575f8c
                       try { // try from 03575f8c to 03675fb7 has its CatchHandler @ 03575d7c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03575f84 with catch @ 03575f90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03575ea4 with catch @ 03575f94
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03575f88 with catch @ 03575f94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03575f80 with catch @ 03575f98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03575f4c with catch @ 03575f9c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03575f48 with catch @ 03575fa0
                        */
  if ((DAT_04568331 & 1) == 0) {
                    /* try { // try from 03575fb8 to 03675fcf has its CatchHandler @ 03576178 */
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03575fd0 to 03676163 has its CatchHandler @ 03575d7c */
    DAT_04568331 = 1;
  }
  if (KLEGNFLIAPC != (System_String_o *)0x0) {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)FPANKOCKNJA,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if (BKHPMKPNDGK != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
        DKIDCBPNMPD = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)BKHPMKPNDGK,(MethodInfo *)0x0);
        __this_01 = (__this->fields).PDHMLFAMNCO;
        if ((__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
           (HOKHHGFLMNA = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           FPANKOCKNJA != (UnityEngine_Transform_o *)0x0)) {
          HHPABFGHALF = UnityEngine_Transform__get_position(FPANKOCKNJA,(MethodInfo *)0x0);
          if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04566664 == '\0') {
            FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
            DAT_04566664 = '\x01';
          }
          if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                                (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,
                                 DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM,-1.0,-1.0,
                                 (MethodInfo *)0x0);
          if (__this_00 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
            Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias(__this_00,KLEGNFLIAPC,(MethodInfo *)0x0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private int CELLNGLMJGA()  [RVA 0x3477A00]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$CELLNGLMJGA @ RVA 0x3477A00

int32_t Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__CELLNGLMJGA
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_00;
  Il2CppObject *pIVar1;
  int index;
  
  if ((DAT_04568332 & 1) == 0) {
                    /* try { // try from 03577a18 to 03677a1f has its CatchHandler @ 03577a70 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                );
                    /* try { // try from 03577a34 to 03677a43 has its CatchHandler @ 03577a74 */
    DAT_04568332 = 1;
  }
  __this_00 = (__this->fields).JKBONEFMACI;
  if (__this_00 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
    index = 0;
    do {
                    /* try { // try from 03577a54 to 03677a5b has its CatchHandler @ 03577b3c */
      if ((__this_00->fields)._size <= index) {
                    /* try { // try from 03577a88 to 03677a8b has its CatchHandler @ 03577b10 */
                    /* try { // try from 03577a8c to 03677abf has its CatchHandler @ 03577498 */
        return -1;
      }
                    /* try { // try from 03577a5c to 03677a87 has its CatchHandler @ 03577498 */
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                         );
      if ((pIVar1 != (Il2CppObject *)0x0) && (*(char *)((long)&pIVar1[2].klass + 4) != '\0')) {
        return index;
      }
                    /* catch() { ... } // from try @ 03577a18 with catch @ 03577a70 */
      __this_00 = (__this->fields).JKBONEFMACI;
                    /* catch() { ... } // from try @ 03577a34 with catch @ 03577a74 */
      index = index + 1;
    } while (__this_00 !=
             (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AGPKHOBELPJ()  [RVA 0x3477A94]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$AGPKHOBELPJ @ RVA 0x3477A94

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__AGPKHOBELPJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t OGPGLGPMEPD;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar2;
  MethodInfo *method_00;
  
  pNVar2 = (__this->fields).PDHMLFAMNCO;
  if (pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView(pNVar2,(MethodInfo *)0x0);
    if (bVar1) {
      OGPGLGPMEPD = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__CELLNGLMJGA
                              (__this,method_00);
      if (OGPGLGPMEPD < 0) {
                    /* try { // try from 03577af8 to 03677afb has its CatchHandler @ 03577b2c */
        return;
      }
                    /* try { // try from 03577ac0 to 03677ac7 has its CatchHandler @ 03577bb4 */
      pNVar2 = (__this->fields).PDHMLFAMNCO;
      if (pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
LAB_03577ae8:
                    /* try { // try from 03577aec to 03677aef has its CatchHandler @ 03577ba8 */
                    /* try { // try from 03577af0 to 03677af7 has its CatchHandler @ 03577b40 */
        Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar2,OGPGLGPMEPD,0.0,8,(MethodInfo *)0x0);
        return;
      }
    }
    else {
                    /* try { // try from 03577ad4 to 03677aeb has its CatchHandler @ 03577c5c */
      pNVar2 = (__this->fields).PDHMLFAMNCO;
      if (pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        OGPGLGPMEPD = 0;
        goto LAB_03577ae8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03577afc to 03677aff has its CatchHandler @ 03577b20 */
  FUN_01bab8c8();
}


// ===== private void NCDOMAGEGCF()  [RVA 0x34778A4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$NCDOMAGEGCF @ RVA 0x34778A4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__NCDOMAGEGCF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_BaseScrollItem_o *DKIDCBPNMPD;
  PBAKFOBIHEG_o *pPVar5;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
                    /* try { // try from 035778a4 to 036778ab has its CatchHandler @ 03577b28 */
                    /* try { // try from 035778b0 to 036778bb has its CatchHandler @ 03577b30 */
  if ((DAT_04568333 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidLeaguesCell>__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_10900/*"RaidLeaguesCellPool"*/);
    DAT_04568333 = 1;
  }
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 035778f4 to 0367790f has its CatchHandler @ 03577b24 */
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    if ((!bVar3) || ((__this->fields).CCEJPHCCIMO != (System_Collections_IEnumerator_o *)0x0)) {
                    /* try { // try from 03577910 to 036779cb has its CatchHandler @ 03577498 */
      return;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ScrollClearData(__this,method_00);
    pUVar4 = (__this->fields).IBEANLBJNMM;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = (__this->fields).PDHMLFAMNCO;
      DKIDCBPNMPD = (Nekki_SF2_GUI_BaseScrollItem_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar4,Method_UnityEngine_GameObject_GetComponent<RaidLeaguesCell>__)
      ;
      if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
                  (__this_00,StringLiteral_10900/*"RaidLeaguesCellPool"*/,DKIDCBPNMPD,(MethodInfo *)0x0);
        pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
        pSVar6 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__NHOJCBHAMIK(__this,method_01);
        if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
          pPVar8 = pPVar5->klass;
          ppSVar1 = &(__this->fields).CCEJPHCCIMO;
          uVar2._0_1_ = (pPVar8->_2).rank;
          uVar2._1_1_ = (pPVar8->_2).minimumAlignment;
          uVar9 = (ulong)uVar2;
          if (uVar9 != 0) {
            piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 035779cc to 036779d3 has its CatchHandler @ 03577b44 */
                pVVar7 = pPVar8->vtable + *piVar10;
                goto LAB_035779d0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,0);
LAB_035779d0:
          pSVar6 = (System_Collections_IEnumerator_o *)
                   (*pVVar7->methodPtr)(pPVar5,pSVar6,1,pVVar7->method);
                    /* try { // try from 035779e8 to 036779f3 has its CatchHandler @ 03577b48 */
          *ppSVar1 = pSVar6;
                    /* try { // try from 035779f8 to 03677a03 has its CatchHandler @ 03577b38 */
          thunk_FUN_01c20e04(ppSVar1,pSVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

