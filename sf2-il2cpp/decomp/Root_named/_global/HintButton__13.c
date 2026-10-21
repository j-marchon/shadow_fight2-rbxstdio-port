// TypeDefIndex 13
// Namespace: 
// public class HintButton : SFButton
// Fields:
//   private List<MIBHAJBEMIK> _DefaultHintIDs; // 0x168
//   private CHEKBFHAHDA _Style; // 0x170
//   private bool _IsShortcut; // 0x174
//   private HHNIGLIDHLK _ControlPriority; // 0x178
//   private int _TrackingDeviceID; // 0x17C
//   private Transform _HintsParent; // 0x180
//   private List<HintUI> _Hints; // 0x188
//   private string OHENCPAHBDH; // 0x190
//   private ODLJFAIHELG AKOLAICNIJF; // 0x198
//   private List<FBBNEILNOKK> EKJNLACDGKC; // 0x1A0
//   private bool BBDACLMINDN; // 0x1A8
//   private List<MIBHAJBEMIK> KDGCEFEPJHP; // 0x1B0

// ===== private void BEBGOPNMHON(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x2FF10B8]
// HintButton$$BEBGOPNMHON @ RVA 0x2FF10B8

void HintButton__BEBGOPNMHON
               (HintButton_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04565a6a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>_Contains__,NAIJBCMHBFK);
    DAT_04565a6a = 1;
  }
  if ((__this->fields).super.super.super.m_Interactable != false) {
    __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).EKJNLACDGKC;
    if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_Collections_Generic_List<Int32Enum>__Contains
                      (__this_00,AAJGEHHPMGH,
                       Method_System_Collections_Generic_List<FBBNEILNOKK>_Contains__);
    if ((((bVar2) &&
         (bVar2 = TutorialExtension__MNKFDLHJPAA((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0),
         !bVar2)) &&
        ((iVar1 = (__this->fields)._TrackingDeviceID, iVar1 == -1 || (iVar1 == OPHMGAKOJLP)))) &&
       (((__this->fields).BBDACLMINDN == false &&
        (bVar2 = HintButton__get_IsHintsPressed(__this,method_00), bVar2)))) {
      (__this->fields).BBDACLMINDN = true;
      SFButton__SetStatePressed((SFButton_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== public void set_ControlPriority(HHNIGLIDHLK CJNHFNHJHPE)  [RVA 0x2FF13E0]
// HintButton$$set_ControlPriority @ RVA 0x2FF13E0

void HintButton__set_ControlPriority(HintButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields)._ControlPriority == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._ControlPriority = CJNHFNHJHPE;
  HintButton__DAGDLFPMAIA(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  HintButton__AIJPMKIMPPN(__this,method_00);
  return;
}


// ===== public void .ctor()  [RVA 0x2FF1724]
// HintButton$$.ctor @ RVA 0x2FF1724

void HintButton___ctor(HintButton_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *pSVar1;
  System_Collections_Generic_List_HintUI__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a6b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HintUI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565a6b = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo,method);
  System_Collections_Generic_List<Int32Enum>___ctor
            (pSVar1,Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
  (__this->fields)._DefaultHintIDs = (System_Collections_Generic_List_MIBHAJBEMIK__o *)pSVar1;
  thunk_FUN_01c20e04(&(__this->fields)._DefaultHintIDs,pSVar1);
  (__this->fields)._Style = 1;
  (__this->fields)._TrackingDeviceID = -1;
  __this_00 = (System_Collections_Generic_List_HintUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HintUI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HintUI>__ctor__);
  (__this->fields)._Hints = __this_00;
  thunk_FUN_01c20e04(&(__this->fields)._Hints,__this_00);
  (__this->fields).OHENCPAHBDH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(&(__this->fields).OHENCPAHBDH);
  pSVar1 = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<FBBNEILNOKK>_TypeInfo);
  System_Collections_Generic_List<Int32Enum>___ctor
            (pSVar1,Method_System_Collections_Generic_List<FBBNEILNOKK>__ctor__);
  (__this->fields).EKJNLACDGKC = (System_Collections_Generic_List_FBBNEILNOKK__o *)pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).EKJNLACDGKC,pSVar1);
  pSVar1 = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
  System_Collections_Generic_List<Int32Enum>___ctor
            (pSVar1,Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
  (__this->fields).KDGCEFEPJHP = (System_Collections_Generic_List_MIBHAJBEMIK__o *)pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).KDGCEFEPJHP,pSVar1);
  SFButton___ctor((SFButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private bool HFGJMJJHEAH()  [RVA 0x2FF18AC]
// HintButton$$HFGJMJJHEAH @ RVA 0x2FF18AC

bool HintButton__HFGJMJJHEAH(HintButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HintUI__o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565a6c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    DAT_04565a6c = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._Hints;
  if (__this_00 == (System_Collections_Generic_List_HintUI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_030f1970;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (*(int *)((long)&local_48.fields._current[2].klass + 4) == (__this->fields)._Style);
  iVar2 = 4;
LAB_030f1970:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
  return bVar1 && iVar2 == 4;
}


// ===== private void JCDGMAEDFIF(int BMPJIDHGCBN, string LOAHEPDBFAO, ODLJFAIHELG CGLFKKMBHCN)  [RVA 0x2FF1A14]
// HintButton$$JCDGMAEDFIF @ RVA 0x2FF1A14

void HintButton__JCDGMAEDFIF
               (HintButton_o *__this,int32_t BMPJIDHGCBN,System_String_o *LOAHEPDBFAO,
               int32_t CGLFKKMBHCN,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_MIBHAJBEMIK__o *ILDIDIMINOJ;
  System_Collections_Generic_List_MIBHAJBEMIK__o *LKFALEIFDIO;
  
  if ((DAT_04565a6d & 1) == 0) {
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    DAT_04565a6d = 1;
  }
  iVar1 = (__this->fields)._TrackingDeviceID;
  if ((iVar1 != -1) && (iVar1 == BMPJIDHGCBN)) {
    (__this->fields).OHENCPAHBDH = LOAHEPDBFAO;
    thunk_FUN_01c20e04(&(__this->fields).OHENCPAHBDH,LOAHEPDBFAO);
    (__this->fields).AKOLAICNIJF = CGLFKKMBHCN;
    ILDIDIMINOJ = (__this->fields)._DefaultHintIDs;
    LKFALEIFDIO = (__this->fields).KDGCEFEPJHP;
    if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    HintSchemeUtility__NFLBPOKLKBK(CGLFKKMBHCN,ILDIDIMINOJ,LKFALEIFDIO,(MethodInfo *)0x0);
    bVar2 = HintButton__LMONINNGKAP(__this,method_00);
    if (bVar2) {
      HintButton__NAICHPFNPLE(__this,method_01);
      return;
    }
  }
  return;
}


// ===== public int get_TrackingDeviceID()  [RVA 0x2FF1ED0]
// HintButton$$get_TrackingDeviceID @ RVA 0x2FF1ED0

int32_t HintButton__get_TrackingDeviceID(HintButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._TrackingDeviceID;
}


// ===== private void GMGNDMJDBAL()  [RVA 0x2FF1ED8]
// HintButton$$GMGNDMJDBAL @ RVA 0x2FF1ED8

void HintButton__GMGNDMJDBAL(HintButton_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_HintUI__o *result;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = __this;
  if ((DAT_04565a6e & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<HintUI>__);
    auVar1 = FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Clear__);
    DAT_04565a6e = 1;
  }
  result = (__this->fields)._Hints;
  if (result != (System_Collections_Generic_List_HintUI__o *)0x0) {
    length = (result->fields)._size;
    (result->fields)._size = 0;
    (result->fields)._version = (result->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(result->fields)._items,0,length,(MethodInfo *)0x0);
      result = (__this->fields)._Hints;
    }
    UnityEngine_Component__GetComponentsInChildren<object>
              ((UnityEngine_Component_o *)__this,true,(System_Collections_Generic_List_T__o *)result
               ,Method_UnityEngine_Component_GetComponentsInChildren<HintUI>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
}


// ===== public HHNIGLIDHLK get_ControlPriority()  [RVA 0x2FF1F68]
// HintButton$$get_ControlPriority @ RVA 0x2FF1F68

int32_t HintButton__get_ControlPriority(HintButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._ControlPriority;
}


// ===== public void set_IsShortcut(bool CJNHFNHJHPE)  [RVA 0x2FF1F70]
// HintButton$$set_IsShortcut @ RVA 0x2FF1F70

void HintButton__set_IsShortcut(HintButton_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IsShortcut = CJNHFNHJHPE;
  return;
}


// ===== public List<HintUI> get_Hints()  [RVA 0x2FF1F7C]
// HintButton$$get_Hints @ RVA 0x2FF1F7C

System_Collections_Generic_List_HintUI__o *
HintButton__get_Hints(HintButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._Hints;
}


// ===== private void LDEODGHMPCG(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x2FF1F84]
// HintButton$$LDEODGHMPCG @ RVA 0x2FF1F84

void HintButton__LDEODGHMPCG(HintButton_o *__this,int32_t OHLKNCPBCBL,MethodInfo *method)

{
  if ((DAT_04565a6f & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo,OHLKNCPBCBL);
    FUN_01bab630(&HintCreator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Add__);
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a6f = 1;
  }
  FUN_03f939c0((HintCreator_TypeInfo->_2).cctor_finished);
  return;
}


// ===== public bool get_IsHintsPressed()  [RVA 0x2FF1184]
// HintButton$$get_IsHintsPressed @ RVA 0x2FF1184

bool HintButton__get_IsHintsPressed(HintButton_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
                    /* catch() { ... } // from try @ 030f0ff4 with catch @ 030f1198 */
                    /* catch() { ... } // from try @ 030f1090 with catch @ 030f119c */
  if ((DAT_04565a70 & 1) == 0) {
                    /* catch() { ... } // from try @ 030f108c with catch @ 030f11a0 */
                    /* catch() { ... } // from try @ 030f1088 with catch @ 030f11a4 */
                    /* catch() { ... } // from try @ 030f1038 with catch @ 030f11a8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_MoveNext__);
                    /* try { // try from 030f11c0 to 031f11d7 has its CatchHandler @ 030f1200 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>_GetEnumerator__);
    DAT_04565a70 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 030f11d8 to 031f11eb has its CatchHandler @ 030f0e34 */
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).EKJNLACDGKC;
  if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
                    /* try { // try from 030f11ec to 031f11fb has its CatchHandler @ 030f1200 */
  if ((__this->fields)._IsShortcut == false) {
    System_Collections_Generic_List<Int32Enum>__GetEnumerator
              (&local_58,__this_00,
               Method_System_Collections_Generic_List<FBBNEILNOKK>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                        (&local_40,
                         Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_MoveNext__);
      if (!bVar2) goto LAB_030f1250;
      iVar1 = (int32_t)local_40.fields._current;
      pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
                    /* try { // try from 030f12a4 to 031f12b3 has its CatchHandler @ 030f12b4 */
      if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 030f1224 with catch @ 030f12b4
                       catch() { ... } // from try @ 030f12a4 with catch @ 030f12b4 */
      bVar2 = Nekki_SF2_GUI_Common_MenuControls__IsKeyDown
                        (pNVar3,iVar1,(__this->fields)._TrackingDeviceID,(MethodInfo *)0x0);
                    /* try { // try from 030f12b8 to 031f12bb has its CatchHandler @ 030f12c4 */
    } while (!bVar2);
LAB_030f12bc:
                    /* try { // try from 030f12bc to 031f12c7 has its CatchHandler @ 030f0e34 */
                    /* catch() { ... } // from try @ 030f1204 with catch @ 030f12c4
                       catch() { ... } // from try @ 030f12b8 with catch @ 030f12c4 */
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_Dispose__);
    bVar2 = true;
  }
  else {
                    /* catch() { ... } // from try @ 030f11c0 with catch @ 030f1200
                       catch() { ... } // from try @ 030f11ec with catch @ 030f1200 */
                    /* try { // try from 030f1204 to 031f1207 has its CatchHandler @ 030f12c4 */
                    /* try { // try from 030f1208 to 031f1223 has its CatchHandler @ 030f0e34 */
    System_Collections_Generic_List<Int32Enum>__GetEnumerator
              (&local_58,__this_00,
               Method_System_Collections_Generic_List<FBBNEILNOKK>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
                    /* catch() { ... } // from try @ 030f0f70 with catch @ 030f120c */
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    do {
                    /* try { // try from 030f1224 to 031f123b has its CatchHandler @ 030f12b4 */
      bVar2 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                        (&local_40,
                         Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_MoveNext__);
      if (!bVar2) goto LAB_030f12bc;
      iVar1 = (int32_t)local_40.fields._current;
      pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 030f123c to 031f12a3 has its CatchHandler @ 030f0e34 */
      bVar2 = Nekki_SF2_GUI_Common_MenuControls__IsKeyDown
                        (pNVar3,iVar1,(__this->fields)._TrackingDeviceID,(MethodInfo *)0x0);
    } while (bVar2);
LAB_030f1250:
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_Dispose__);
    bVar2 = false;
  }
  return bVar2;
}


// ===== private void ADOIJKNGHON()  [RVA 0x2FF218C]
// HintButton$$ADOIJKNGHON @ RVA 0x2FF218C

void HintButton__ADOIJKNGHON(HintButton_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a71 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Clear__);
    DAT_04565a71 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
  if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
    (__this_00->fields)._size = 0;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    System_Collections_Generic_List<Int32Enum>__AddRange
              (__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._DefaultHintIDs,
               Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== protected override void Awake()  [RVA 0x2FF21F8]
// HintButton$$Awake @ RVA 0x2FF21F8

void HintButton__Awake(HintButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UnityEngine_Transform_o *pUVar2;
  
  if ((DAT_04565a72 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a72 = 1;
  }
  SFButton__Awake((SFButton_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._EnableClickAnimation = true;
  pUVar2 = (__this->fields)._HintsParent;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._HintsParent = pUVar2;
    thunk_FUN_01c20e04(&(__this->fields)._HintsParent,pUVar2);
    method_00 = extraout_x1_00;
  }
  HintButton__GMGNDMJDBAL(__this,method_00);
  HintButton__ADOIJKNGHON(__this,method_01);
  bVar1 = HintButton__LMONINNGKAP(__this,method_02);
  if (bVar1) {
    HintButton__AIJPMKIMPPN(__this,method_03);
    return;
  }
  return;
}


// ===== public void set_StileStyle(CHEKBFHAHDA CJNHFNHJHPE)  [RVA 0x2FF22C0]
// HintButton$$set_StileStyle @ RVA 0x2FF22C0

void HintButton__set_StileStyle(HintButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._Style == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._Style = CJNHFNHJHPE;
  HintButton__NEHBJIEEKBD(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== protected override void OnDisable()  [RVA 0x2FF2428]
// HintButton$$OnDisable @ RVA 0x2FF2428

void HintButton__OnDisable(HintButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__o *pSVar3;
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  
  if ((DAT_04565a73 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_HintButton_BEBGOPNMHON__);
    FUN_01bab630(&Method_HintButton_GKHAKLDEIJI__);
    FUN_01bab630(&Method_HintButton_JCDGMAEDFIF__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_04565a73 = 1;
  }
  UnityEngine_UI_Selectable__OnDisable((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar2->fields).KIHMKIEFOEI;
    pSVar3 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar3,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar2->fields).GMLEPHMBMPD;
        pSVar3 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (__this_01 != (JPGJLKENNCC_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar3,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
          CJNHFNHJHPE = (System_Action_int__string__ODLJFAIHELG__o *)
                        thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
          System_Action<int,_object,_Int32Enum>___ctor();
          if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          JLEKKANADII__KJHIBNMCKKG(CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string get_TrackingDeviceName()  [RVA 0x2FF25CC]
// HintButton$$get_TrackingDeviceName @ RVA 0x2FF25CC

System_String_o * HintButton__get_TrackingDeviceName(HintButton_o *__this,MethodInfo *method)

{
  return (__this->fields).OHENCPAHBDH;
}


// ===== private void NAICHPFNPLE()  [RVA 0x2FF1C1C]
// HintButton$$NAICHPFNPLE @ RVA 0x2FF1C1C

void HintButton__NAICHPFNPLE(HintButton_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_HintUI__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_T__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_04565a74 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_get_Count__);
    DAT_04565a74 = 1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._Hints;
  if (pSVar2 != (System_Collections_Generic_List_HintUI__o *)0x0) {
    if (0 < (pSVar2->fields)._size) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_70,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
      local_40.fields._index = local_70.fields._index;
      local_40.fields._version = local_70.fields._version;
      local_40.fields._list = local_70.fields._list;
      local_40.fields._current = local_70.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_40,
                                Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__
                               ), bVar1) {
        if ((UnityEngine_Component_o *)local_40.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)local_40.fields._current,
                                 (MethodInfo *)0x0);
        Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_40,Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
      pSVar2 = (__this->fields)._Hints;
      if (pSVar2 == (System_Collections_Generic_List_HintUI__o *)0x0) goto LAB_030f1df4;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
    method_00 = (MethodInfo *)0x0;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this,true,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
    if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_58,__this_00,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      while (bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                               (&local_58,
                                Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                               ), bVar1) {
        HintButton__LDEODGHMPCG(__this,(int32_t)local_58.fields._current,method_00);
      }
      System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                (&local_58,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__)
      ;
      return;
    }
  }
LAB_030f1df4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsShortcut()  [RVA 0x2FF25D4]
// HintButton$$get_IsShortcut @ RVA 0x2FF25D4

bool HintButton__get_IsShortcut(HintButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._IsShortcut;
}


// ===== private void DAGDLFPMAIA()  [RVA 0x2FF1410]
// HintButton$$DAGDLFPMAIA @ RVA 0x2FF1410

void HintButton__DAGDLFPMAIA(HintButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__o *pSVar3;
  System_Enum_o *pSVar4;
  System_Collections_Generic_List_MIBHAJBEMIK__o *pSVar5;
  OCOAGJDCJPL_o *__this_01;
  JPGJLKENNCC_o *__this_02;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_04565a75 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_BNBFMIDBJNC__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_HintButton_BEBGOPNMHON__);
    FUN_01bab630(&Method_HintButton_GKHAKLDEIJI__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
    DAT_04565a75 = 1;
  }
  bVar1 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pSVar5 = (__this->fields).KDGCEFEPJHP;
    if (pSVar5 != (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
      if ((pSVar5->fields)._size < 1) {
        return;
      }
      pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar2->fields).KIHMKIEFOEI;
        pSVar3 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        local_34 = (__this->fields)._ControlPriority;
        pSVar4 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_34);
        if (__this_01 != (OCOAGJDCJPL_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__BNBFMIDBJNC
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar3,pSVar4,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_BNBFMIDBJNC__);
          pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
            __this_02 = (pNVar2->fields).GMLEPHMBMPD;
            pSVar3 = (System_Action_T0__T1__T2__o *)
                     thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
            System_Action<Int32Enum,_int,_Int32Enum>___ctor();
            local_38 = (__this->fields)._ControlPriority;
            pSVar4 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_38);
            if (__this_02 != (JPGJLKENNCC_o *)0x0) {
              FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__BNBFMIDBJNC
                        ((FMKGOOONJKB_T0__T1__T2__o *)__this_02,pSVar3,pSVar4,
                         Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_BNBFMIDBJNC__);
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


// ===== private void AIJPMKIMPPN()  [RVA 0x2FF15B0]
// HintButton$$AIJPMKIMPPN @ RVA 0x2FF15B0

void HintButton__AIJPMKIMPPN(HintButton_o *__this,MethodInfo *method)

{
  int32_t BMPJIDHGCBN;
  bool bVar1;
  System_Action_int__string__ODLJFAIHELG__o *pSVar2;
  UnityEngine_GameObject_o *__this_00;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar3;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  
  if ((DAT_04565a76 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&Method_HintButton_JCDGMAEDFIF__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_04565a76 = 1;
    method = extraout_x1;
  }
  pSVar2 = (System_Action_int__string__ODLJFAIHELG__o *)
           thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo,method);
  System_Action<int,_object,_Int32Enum>___ctor();
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JLEKKANADII__KJHIBNMCKKG(pSVar2,(MethodInfo *)0x0);
  bVar1 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if ((__this->fields)._TrackingDeviceID == -1) {
      return;
    }
    pSVar2 = (System_Action_int__string__ODLJFAIHELG__o *)
             thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    System_Action<int,_object,_Int32Enum>___ctor();
    if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    JLEKKANADII__HFKKKKBAMGE(pSVar2,(MethodInfo *)0x0);
    BMPJIDHGCBN = (__this->fields)._TrackingDeviceID;
    if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar3 = HintSchemeUtility__ABOLJGNNGMC(BMPJIDHGCBN,(MethodInfo *)0x0);
    if (pMVar3 != (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) {
      HintButton__JCDGMAEDFIF
                (__this,(__this->fields)._TrackingDeviceID,(pMVar3->fields).PHPELPFMOII,
                 (pMVar3->fields).DOKHHBGJICA,in_x4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnEnable()  [RVA 0x2FF25DC]
// HintButton$$OnEnable @ RVA 0x2FF25DC

void HintButton__OnEnable(HintButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  UnityEngine_UI_Selectable__OnEnable((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  HintButton__BBIEOKCGDGD(__this,method_00);
  HintButton__FIAHBLBGOEP(__this,method_01);
  HintButton__AIJPMKIMPPN(__this,method_02);
  HintButton__NAICHPFNPLE(__this,method_03);
  return;
}


// ===== private bool LMONINNGKAP()  [RVA 0x2FF1ADC]
// HintButton$$LMONINNGKAP @ RVA 0x2FF1ADC

bool HintButton__LMONINNGKAP(HintButton_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_T__o *__this_00;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_HintUI__o *pSVar5;
  int index;
  
  if ((DAT_04565a77 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_get_Item__);
    DAT_04565a77 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
  if ((__this_00 != (System_Collections_Generic_List_T__o *)0x0) &&
     (pSVar5 = (__this->fields)._Hints, pSVar5 != (System_Collections_Generic_List_HintUI__o *)0x0))
  {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 != (pSVar5->fields)._size) {
      return true;
    }
    if (iVar1 < 1) {
      return false;
    }
    index = 0;
    do {
      iVar3 = System_Collections_Generic_List<Int32Enum>__get_Item
                        (__this_00,index,
                         Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
      pSVar5 = (__this->fields)._Hints;
      if ((pSVar5 == (System_Collections_Generic_List_HintUI__o *)0x0) ||
         (pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,index,
                              Method_System_Collections_Generic_List<HintUI>_get_Item__),
         pIVar4 == (Il2CppObject *)0x0)) break;
      if ((iVar1 + -1 == index) || (iVar3 != *(int *)&pIVar4[2].klass)) {
        return iVar3 != *(int *)&pIVar4[2].klass;
      }
      __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_T__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FIAHBLBGOEP()  [RVA 0x2FF2868]
// HintButton$$FIAHBLBGOEP @ RVA 0x2FF2868

void HintButton__FIAHBLBGOEP(HintButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  System_Enum_o *pSVar4;
  System_Collections_Generic_List_MIBHAJBEMIK__o *pSVar5;
  OCOAGJDCJPL_o *pOVar6;
  JPGJLKENNCC_o *pJVar7;
  int32_t local_48;
  int32_t local_44;
  
  if ((DAT_04565a78 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_HintButton_BEBGOPNMHON__);
    FUN_01bab630(&Method_HintButton_GKHAKLDEIJI__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
    DAT_04565a78 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    pOVar6 = (pNVar2->fields).KIHMKIEFOEI;
    pSVar3 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    if (pOVar6 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)pOVar6,pSVar3,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        pJVar7 = (pNVar2->fields).GMLEPHMBMPD;
        pSVar3 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (pJVar7 != (JPGJLKENNCC_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)pJVar7,pSVar3,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
          bVar1 = UnityEngine_Behaviour__get_enabled
                            ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          __this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pSVar5 = (__this->fields).KDGCEFEPJHP;
            if (pSVar5 != (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
              if ((pSVar5->fields)._size < 1) {
                return;
              }
              pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
              if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                pOVar6 = (pNVar2->fields).KIHMKIEFOEI;
                pSVar3 = (System_Action_T0__T1__T2__o *)
                         thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                local_44 = (__this->fields)._ControlPriority;
                pSVar4 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_44);
                if (pOVar6 != (OCOAGJDCJPL_o *)0x0) {
                  FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                            ((FMKGOOONJKB_T0__T1__T2__o *)pOVar6,pSVar3,pSVar4,
                             Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
                  pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
                  if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    pJVar7 = (pNVar2->fields).GMLEPHMBMPD;
                    pSVar3 = (System_Action_T0__T1__T2__o *)
                             thunk_FUN_01bda818(
                                               System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo
                                               );
                    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    local_48 = (__this->fields)._ControlPriority;
                    pSVar4 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_48);
                    if (pJVar7 != (JPGJLKENNCC_o *)0x0) {
                      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                                ((FMKGOOONJKB_T0__T1__T2__o *)pJVar7,pSVar3,pSVar4,
                                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Update()  [RVA 0x2FF2AA4]
// HintButton$$Update @ RVA 0x2FF2AA4

void HintButton__Update(HintButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_03;
  MethodInfo *method_04;
  
  SFButton__Update((SFButton_o *)__this,(MethodInfo *)0x0);
  bVar1 = HintButton__LMONINNGKAP(__this,method_00);
  method_03 = method_01;
  if (bVar1) {
    HintButton__BBIEOKCGDGD(__this,method_01);
    HintButton__AIJPMKIMPPN(__this,method_02);
    method_03 = extraout_x1;
  }
  bVar1 = HintButton__HFGJMJJHEAH(__this,method_03);
  if (bVar1) {
    HintButton__NEHBJIEEKBD(__this,method_04);
    return;
  }
  return;
}


// ===== private void NEHBJIEEKBD()  [RVA 0x2FF22D8]
// HintButton$$NEHBJIEEKBD @ RVA 0x2FF22D8

void HintButton__NEHBJIEEKBD(HintButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HintUI__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04565a79 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    DAT_04565a79 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._Hints;
  if (__this_00 != (System_Collections_Generic_List_HintUI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
        return;
      }
      if ((Nekki_SF2_GUI_Common_Hints_HintUI_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Common_Hints_HintUI_o *)0x0) break;
      Nekki_SF2_GUI_Common_Hints_HintUI__set_Style
                ((Nekki_SF2_GUI_Common_Hints_HintUI_o *)local_38.fields._current,
                 (__this->fields)._Style,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public List<MIBHAJBEMIK> get_DefaultHintIDs()  [RVA 0x2FF2AF0]
// HintButton$$get_DefaultHintIDs @ RVA 0x2FF2AF0

System_Collections_Generic_List_MIBHAJBEMIK__o *
HintButton__get_DefaultHintIDs(HintButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._DefaultHintIDs;
}


// ===== private void BBIEOKCGDGD()  [RVA 0x2FF2628]
// HintButton$$BBIEOKCGDGD @ RVA 0x2FF2628

void HintButton__BBIEOKCGDGD(HintButton_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  undefined8 uVar6;
  System_Collections_Generic_List_FBBNEILNOKK__o *pSVar7;
  System_Object_array *pSVar8;
  undefined1 auVar9 [16];
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  auVar9._8_8_ = method;
  auVar9._0_8_ = __this;
  if ((DAT_04565a7a & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>_Clear__);
    auVar9 = FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    DAT_04565a7a = 1;
  }
  uVar6 = auVar9._0_8_;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar7 = (__this->fields).EKJNLACDGKC;
  if (pSVar7 != (System_Collections_Generic_List_FBBNEILNOKK__o *)0x0) {
    (pSVar7->fields)._size = 0;
    (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
    pSVar5 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
    uVar6 = 0;
    if (pSVar5 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_78,pSVar5,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                            );
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
            return;
          }
          iVar4 = (int32_t)local_60.fields._current;
          if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = ECNCJPCKOLN__IDEEKLMIOOD(iVar4,(MethodInfo *)0x0);
        } while (!bVar3);
        pSVar5 = (System_Collections_Generic_List_T__o *)(__this->fields).EKJNLACDGKC;
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar4 = ECNCJPCKOLN__IDDDPCFIALP(iVar4,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<FBBNEILNOKK>_Add__;
        if (pSVar5 == (System_Collections_Generic_List_T__o *)0x0) break;
        pSVar8 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pSVar8 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pSVar8->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          *(int32_t *)((long)pSVar8->m_Items + (long)(int)uVar1 * 4) = iVar4;
        }
        else {
          System_Collections_Generic_List<Int32Enum>__AddWithResize
                    (pSVar5,iVar4,
                     *(MethodInfo_26C9F28 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar6,auVar9._8_8_);
}


// ===== public CHEKBFHAHDA get_StileStyle()  [RVA 0x2FF2AF8]
// HintButton$$get_StileStyle @ RVA 0x2FF2AF8

int32_t HintButton__get_StileStyle(HintButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._Style;
}


// ===== public void set_TrackingDeviceID(int CJNHFNHJHPE)  [RVA 0x2FF2B00]
// HintButton$$set_TrackingDeviceID @ RVA 0x2FF2B00

void HintButton__set_TrackingDeviceID(HintButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields)._TrackingDeviceID == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._TrackingDeviceID = CJNHFNHJHPE;
  HintButton__AIJPMKIMPPN(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  HintButton__NAICHPFNPLE(__this,method_00);
  return;
}


// ===== public List<FBBNEILNOKK> get_Controls()  [RVA 0x2FF2B30]
// HintButton$$get_Controls @ RVA 0x2FF2B30

System_Collections_Generic_List_FBBNEILNOKK__o *
HintButton__get_Controls(HintButton_o *__this,MethodInfo *method)

{
  return (__this->fields).EKJNLACDGKC;
}


// ===== public ODLJFAIHELG get_HintScheme()  [RVA 0x2FF2B38]
// HintButton$$get_HintScheme @ RVA 0x2FF2B38

int32_t HintButton__get_HintScheme(HintButton_o *__this,MethodInfo *method)

{
  return (__this->fields).AKOLAICNIJF;
}


// ===== public bool get_IsHintsReleased()  [RVA 0x2FF2B40]
// HintButton$$get_IsHintsReleased @ RVA 0x2FF2B40

bool HintButton__get_IsHintsReleased(HintButton_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_04565a7b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>_GetEnumerator__);
    DAT_04565a7b = 1;
    method = extraout_x1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).EKJNLACDGKC;
  if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  if ((__this->fields)._IsShortcut == false) {
    System_Collections_Generic_List<Int32Enum>__GetEnumerator
              (&local_58,__this_00,
               Method_System_Collections_Generic_List<FBBNEILNOKK>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                        (&local_40,
                         Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_MoveNext__);
      if (!bVar2) goto LAB_030f2c0c;
      iVar1 = (int32_t)local_40.fields._current;
      pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = Nekki_SF2_GUI_Common_MenuControls__IsKeyUp
                        (pNVar3,iVar1,(__this->fields)._TrackingDeviceID,(MethodInfo *)0x0);
    } while (bVar2);
LAB_030f2c78:
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_Dispose__);
    bVar2 = false;
  }
  else {
    System_Collections_Generic_List<Int32Enum>__GetEnumerator
              (&local_58,__this_00,
               Method_System_Collections_Generic_List<FBBNEILNOKK>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                        (&local_40,
                         Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_MoveNext__);
      if (!bVar2) goto LAB_030f2c78;
      iVar1 = (int32_t)local_40.fields._current;
      pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = Nekki_SF2_GUI_Common_MenuControls__IsKeyUp
                        (pNVar3,iVar1,(__this->fields)._TrackingDeviceID,(MethodInfo *)0x0);
    } while (!bVar2);
LAB_030f2c0c:
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_Dispose__);
    bVar2 = true;
  }
  return bVar2;
}


// ===== private void GKHAKLDEIJI(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x2FF2D9C]
// HintButton$$GKHAKLDEIJI @ RVA 0x2FF2D9C

void HintButton__GKHAKLDEIJI
               (HintButton_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04565a7c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>_Contains__,NAIJBCMHBFK);
    DAT_04565a7c = 1;
  }
  if ((__this->fields).super.super.super.m_Interactable != false) {
    __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).EKJNLACDGKC;
    if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_Collections_Generic_List<Int32Enum>__Contains
                      (__this_00,AAJGEHHPMGH,
                       Method_System_Collections_Generic_List<FBBNEILNOKK>_Contains__);
    if ((((bVar2) &&
         (bVar2 = TutorialExtension__MNKFDLHJPAA((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0),
         !bVar2)) &&
        ((iVar1 = (__this->fields)._TrackingDeviceID, iVar1 == -1 || (iVar1 == OPHMGAKOJLP)))) &&
       (((__this->fields).BBDACLMINDN != false &&
        (bVar2 = HintButton__get_IsHintsReleased(__this,method_00), bVar2)))) {
      (__this->fields).BBDACLMINDN = false;
      SFButton__SetStateNormal((SFButton_o *)__this,(MethodInfo *)0x0);
      LJLLAKHOFFF__AKKDDJDBIBD((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

