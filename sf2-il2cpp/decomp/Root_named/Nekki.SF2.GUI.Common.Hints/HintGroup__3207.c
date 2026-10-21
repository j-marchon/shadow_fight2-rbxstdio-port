// TypeDefIndex 3207
// Namespace: Nekki.SF2.GUI.Common.Hints
// [ExecuteInEditMode]
// public class HintGroup : MonoBehaviour
// Fields:
//   private TutorialNode _TutorialNode; // 0x20
//   private Transform _HintsParent; // 0x28
//   private SFButton _Button; // 0x30
//   private LabelAlias _Description; // 0x38
//   private ResolutionImage _ExtraImage; // 0x40
//   private bool _IsAnimationAvailable; // 0x48
//   private bool _IsShortcut; // 0x49
//   private FEEECOADFNH _ID; // 0x4C
//   private bool _RefreshSchemeForSwitch; // 0x50
//   private List<MIBHAJBEMIK> _DefaultHintIDs; // 0x58
//   private UnityEvent _OnHintDown; // 0x60
//   private UnityEvent _OnHintUp; // 0x68
//   private ODLJFAIHELG AKOLAICNIJF; // 0x70
//   private bool ANKLNCJMMHB; // 0x74
//   private bool BBDACLMINDN; // 0x75
//   private List<MIBHAJBEMIK> KDGCEFEPJHP; // 0x78
//   private List<HintUI> DEDJHBCOMCJ; // 0x80

// ===== public void set_IsShortcut(bool CJNHFNHJHPE)  [RVA 0x34FAB14]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$set_IsShortcut @ RVA 0x34FAB14

void Nekki_SF2_GUI_Common_Hints_HintGroup__set_IsShortcut
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IsShortcut = CJNHFNHJHPE;
  return;
}


// ===== public bool get_IsHintsPressed()  [RVA 0x34FAB20]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_IsHintsPressed @ RVA 0x34FAB20

bool Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsHintsPressed
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_T__o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* catch() { ... } // from try @ 035fab08 with catch @ 035fab2c */
                    /* try { // try from 035fab34 to 036fab47 has its CatchHandler @ 035faba8 */
  if ((DAT_0456881d & 1) == 0) {
                    /* catch() { ... } // from try @ 035fa60c with catch @ 035fab48
                       try { // try from 035fab48 to 036fab5f has its CatchHandler @ 035fa4c0 */
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
                    /* try { // try from 035fab60 to 036fab63 has its CatchHandler @ 035fab84 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
                    /* try { // try from 035fab64 to 036fab8b has its CatchHandler @ 035fa4c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    DAT_0456881d = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 035fab60 with catch @ 035fab84 */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
                    /* try { // try from 035fab8c to 036fab93 has its CatchHandler @ 035faba8 */
  local_50.fields._current = (Il2CppObject *)0x0;
  bVar1 = Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsClickable(__this,method);
                    /* try { // try from 035fab94 to 036fab9f has its CatchHandler @ 035fa4c0 */
  if (bVar1) {
    if ((__this->fields).ANKLNCJMMHB == false) {
                    /* try { // try from 035faba0 to 036faba7 has its CatchHandler @ 035faba8 */
      __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
      if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 035fab34 with catch @ 035faba8
                       catch() { ... } // from try @ 035fab8c with catch @ 035faba8
                       catch() { ... } // from try @ 035faba0 with catch @ 035faba8 */
      if ((__this->fields)._IsShortcut != false) {
        System_Collections_Generic_List<Int32Enum>__GetEnumerator
                  (&local_68,__this_00,
                   Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
        local_50.fields._list = local_68.fields._list;
        local_50.fields._current = local_68.fields._current;
        do {
          do {
            bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                              (&local_50,
                               Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                              );
            if (!bVar1) goto LAB_035fad1c;
            iVar2 = (int32_t)local_50.fields._current;
            if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = ECNCJPCKOLN__MJGNIHLBKJJ(iVar2,(MethodInfo *)0x0);
          } while (bVar1);
          pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar2 = ECNCJPCKOLN__IDDDPCFIALP(iVar2,(MethodInfo *)0x0);
          if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = Nekki_SF2_GUI_Common_MenuControls__IsKeyDown(pNVar3,iVar2,(MethodInfo *)0x0);
        } while (bVar1);
LAB_035fac58:
        System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
        goto LAB_035fac6c;
      }
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_68,__this_00,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        do {
          bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                            );
          if (!bVar1) goto LAB_035fac58;
          iVar2 = (int32_t)local_50.fields._current;
          if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = ECNCJPCKOLN__MJGNIHLBKJJ(iVar2,(MethodInfo *)0x0);
        } while (bVar1);
        pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = ECNCJPCKOLN__IDDDPCFIALP(iVar2,(MethodInfo *)0x0);
        if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = Nekki_SF2_GUI_Common_MenuControls__IsKeyDown(pNVar3,iVar2,(MethodInfo *)0x0);
      } while (!bVar1);
LAB_035fad1c:
      System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__)
      ;
    }
    bVar1 = true;
  }
  else {
LAB_035fac6c:
    bVar1 = false;
  }
  return bVar1;
}


// ===== private void OnDestroy()  [RVA 0x34FAE90]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$OnDestroy @ RVA 0x34FAE90

void Nekki_SF2_GUI_Common_Hints_HintGroup__OnDestroy
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__o *pSVar3;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  
  if ((DAT_0456881e & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintGroup_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintGroup_GKHAKLDEIJI__);
    DAT_0456881e = 1;
  }
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
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsClickable()  [RVA 0x34FAE64]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_IsClickable @ RVA 0x34FAE64

bool Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsClickable
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  undefined1 uVar1;
  UnityEngine_UI_Graphic_o *pUVar2;
  SFButton_o *pSVar3;
  
  pSVar3 = (__this->fields)._Button;
  if ((pSVar3 != (SFButton_o *)0x0) &&
     (pUVar2 = (pSVar3->fields).super.super.m_TargetGraphic,
     pUVar2 != (UnityEngine_UI_Graphic_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x035fae88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(pUVar2->klass->vtable)._24_get_raycastTarget.methodPtr)
                      (pUVar2,(pUVar2->klass->vtable)._24_get_raycastTarget.method);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HPFLNMEJPEF(bool CJNHFNHJHPE)  [RVA 0x34FAFB4]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$HPFLNMEJPEF @ RVA 0x34FAFB4

void Nekki_SF2_GUI_Common_Hints_HintGroup__HPFLNMEJPEF
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *pUVar1;
  SFButton_o *pSVar2;
  
  pSVar2 = (__this->fields)._Button;
  if ((pSVar2 != (SFButton_o *)0x0) &&
     (pUVar1 = (pSVar2->fields).super.super.m_TargetGraphic,
     pUVar1 != (UnityEngine_UI_Graphic_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x035fafdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar1,(ulong)CJNHFNHJHPE,(pUVar1->klass->vtable)._25_set_raycastTarget.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_HintScheme(ODLJFAIHELG CJNHFNHJHPE)  [RVA 0x34FAFE4]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$set_HintScheme @ RVA 0x34FAFE4

void Nekki_SF2_GUI_Common_Hints_HintGroup__set_HintScheme
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  if ((__this->fields).AKOLAICNIJF == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).AKOLAICNIJF = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_Hints_HintGroup__RefreshHintIDs
            (__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public void .ctor()  [RVA 0x34FB078]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$.ctor @ RVA 0x34FB078

void Nekki_SF2_GUI_Common_Hints_HintGroup___ctor
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *pSVar1;
  System_Collections_Generic_List_MIBHAJBEMIK__o **ppSVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  UnityEngine_Events_UnityEvent_o **ppUVar4;
  System_Collections_Generic_List_HintUI__o *__this_00;
  System_Collections_Generic_List_HintUI__o **ppSVar5;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456881f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HintUI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_0456881f = 1;
    method = extraout_x1;
  }
  (__this->fields)._IsAnimationAvailable = true;
  (__this->fields)._ID = 0x2c1;
  pSVar1 = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo,method);
  System_Collections_Generic_List<Int32Enum>___ctor
            (pSVar1,Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
  ppSVar2 = &(__this->fields)._DefaultHintIDs;
  *ppSVar2 = (System_Collections_Generic_List_MIBHAJBEMIK__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._OnHintDown;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._OnHintUp;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pSVar1 = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
  System_Collections_Generic_List<Int32Enum>___ctor
            (pSVar1,Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
  ppSVar2 = &(__this->fields).KDGCEFEPJHP;
  *ppSVar2 = (System_Collections_Generic_List_MIBHAJBEMIK__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_00 = (System_Collections_Generic_List_HintUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HintUI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HintUI>__ctor__);
  ppSVar5 = &(__this->fields).DEDJHBCOMCJ;
  *ppSVar5 = __this_00;
  thunk_FUN_01c20e04(ppSVar5,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void OnClick()  [RVA 0x34FB1E4]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$OnClick @ RVA 0x34FB1E4

void Nekki_SF2_GUI_Common_Hints_HintGroup__OnClick
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  int32_t iVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar5;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MIBHAJBEMIK__o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568820 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
    DAT_04568820 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar6 = (__this->fields)._DefaultHintIDs;
  if (pSVar6 == (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) goto LAB_035fb4cc;
  if ((pSVar6->fields)._size != 0) {
    uVar2 = Nekki_SF2_GUI_Common_Hints_HintGroup__IMIMOLCJELD(__this,method);
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    (__this->fields).ANKLNCJMMHB = true;
    if ((__this->fields)._IsShortcut == false) {
      pNVar5 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      pSVar4 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
      if (pSVar4 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_035fb4cc;
      iVar3 = System_Collections_Generic_List<Int32Enum>__get_Item
                        (pSVar4,0,Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
      if (pNVar5 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) goto LAB_035fb4cc;
      Nekki_SF2_GUI_Common_MenuControls__InvokeHintTouchDown(pNVar5,iVar3,uVar2,(MethodInfo *)0x0);
      pNVar5 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      pSVar4 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
      if (pSVar4 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_035fb4cc;
      iVar3 = System_Collections_Generic_List<Int32Enum>__get_Item
                        (pSVar4,0,Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
      if (pNVar5 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) goto LAB_035fb4cc;
      Nekki_SF2_GUI_Common_MenuControls__InvokeHintTouchUp(pNVar5,iVar3,uVar2,(MethodInfo *)0x0);
    }
    else {
      pSVar4 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
      if (pSVar4 == (System_Collections_Generic_List_T__o *)0x0) {
LAB_035fb4cc:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_78,pSVar4,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                               ), bVar1) {
        iVar3 = (int32_t)local_60.fields._current;
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = ECNCJPCKOLN__MJGNIHLBKJJ(iVar3,(MethodInfo *)0x0);
        if (!bVar1) {
          pNVar5 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if (pNVar5 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_Common_MenuControls__InvokeHintTouchDown
                    (pNVar5,iVar3,uVar2,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__)
      ;
      pSVar4 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
      if (pSVar4 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_035fb4cc;
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_78,pSVar4,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                               ), bVar1) {
        iVar3 = (int32_t)local_60.fields._current;
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = ECNCJPCKOLN__MJGNIHLBKJJ(iVar3,(MethodInfo *)0x0);
        if (!bVar1) {
          pNVar5 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if (pNVar5 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_Common_MenuControls__InvokeHintTouchUp(pNVar5,iVar3,uVar2,(MethodInfo *)0x0)
          ;
        }
      }
      System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__)
      ;
    }
    (__this->fields).ANKLNCJMMHB = false;
  }
  return;
}


// ===== public bool get_IsHintsReleased()  [RVA 0x34FB618]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_IsHintsReleased @ RVA 0x34FB618

bool Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsHintsReleased
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_T__o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04568821 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    DAT_04568821 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  bVar1 = Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsClickable(__this,method);
  if (bVar1) {
    if ((__this->fields).ANKLNCJMMHB == false) {
      __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
      if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((__this->fields)._IsShortcut == false) {
        System_Collections_Generic_List<Int32Enum>__GetEnumerator
                  (&local_68,__this_00,
                   Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
        local_50.fields._list = local_68.fields._list;
        local_50.fields._current = local_68.fields._current;
        do {
          do {
            bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                              (&local_50,
                               Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                              );
            if (!bVar1) goto LAB_035fb750;
            iVar2 = (int32_t)local_50.fields._current;
            if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = ECNCJPCKOLN__MJGNIHLBKJJ(iVar2,(MethodInfo *)0x0);
          } while (bVar1);
          pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar2 = ECNCJPCKOLN__IDDDPCFIALP(iVar2,(MethodInfo *)0x0);
          if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = Nekki_SF2_GUI_Common_MenuControls__IsKeyUp(pNVar3,iVar2,(MethodInfo *)0x0);
        } while (bVar1);
LAB_035fb814:
        System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
        goto LAB_035fb828;
      }
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_68,__this_00,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        do {
          bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                            );
          if (!bVar1) goto LAB_035fb814;
          iVar2 = (int32_t)local_50.fields._current;
          if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = ECNCJPCKOLN__MJGNIHLBKJJ(iVar2,(MethodInfo *)0x0);
        } while (bVar1);
        pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = ECNCJPCKOLN__IDDDPCFIALP(iVar2,(MethodInfo *)0x0);
        if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = Nekki_SF2_GUI_Common_MenuControls__IsKeyUp(pNVar3,iVar2,(MethodInfo *)0x0);
      } while (!bVar1);
LAB_035fb750:
      System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__)
      ;
    }
    bVar1 = true;
  }
  else {
LAB_035fb828:
    bVar1 = false;
  }
  return bVar1;
}


// ===== public void set_ID(FEEECOADFNH CJNHFNHJHPE)  [RVA 0x34FB95C]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$set_ID @ RVA 0x34FB95C

void Nekki_SF2_GUI_Common_Hints_HintGroup__set_ID
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  if ((__this->fields)._ID == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._ID = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_Hints_HintGroup__LNHEPKHHOLB(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public List<HintUI> get_Hints()  [RVA 0x34FBA48]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_Hints @ RVA 0x34FBA48

System_Collections_Generic_List_HintUI__o *
Nekki_SF2_GUI_Common_Hints_HintGroup__get_Hints
          (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  return (__this->fields).DEDJHBCOMCJ;
}


// ===== private void LNHEPKHHOLB()  [RVA 0x34FB974]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$LNHEPKHHOLB @ RVA 0x34FB974

void Nekki_SF2_GUI_Common_Hints_HintGroup__LNHEPKHHOLB
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Object_o *__this_00;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar2;
  System_String_o **ppSVar3;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04568822 & 1) == 0) {
    FUN_01bab630(&FEEECOADFNH_TypeInfo);
    FUN_01bab630(&StringLiteral_7108/*"HintGroup_"*/);
    DAT_04568822 = 1;
  }
  local_38.klass = (System_Enum_c *)FEEECOADFNH_TypeInfo;
  pNVar2 = (__this->fields)._TutorialNode;
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = (__this->fields)._ID;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) {
    ppSVar3 = &(pNVar2->fields)._ID;
    *ppSVar3 = pSVar1;
    thunk_FUN_01c20e04(ppSVar3,pSVar1);
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._TutorialNode;
    if ((pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) &&
       (pSVar1 = System_String__Concat(StringLiteral_7108/*"HintGroup_"*/,(pNVar2->fields)._ID,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Object_o *)0x0)) {
      UnityEngine_Object__set_name(__this_00,pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<MIBHAJBEMIK> get_DefaultHintIDs()  [RVA 0x34FBA50]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_DefaultHintIDs @ RVA 0x34FBA50

System_Collections_Generic_List_MIBHAJBEMIK__o *
Nekki_SF2_GUI_Common_Hints_HintGroup__get_DefaultHintIDs
          (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._DefaultHintIDs;
}


// ===== public bool ContainsAnyHintIDs(List<MIBHAJBEMIK> GLIELCCFAGL)  [RVA 0x34FBA58]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$ContainsAnyHintIDs @ RVA 0x34FBA58

bool Nekki_SF2_GUI_Common_Hints_HintGroup__ContainsAnyHintIDs
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,
               System_Collections_Generic_List_MIBHAJBEMIK__o *GLIELCCFAGL,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *__this_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568823 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    DAT_04568823 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (GLIELCCFAGL == (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<Int32Enum>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_T__o *)GLIELCCFAGL,
             Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_035fbb34;
    }
    __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
    if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_Collections_Generic_List<Int32Enum>__Contains
                      (__this_00,(int32_t)local_48.fields._current,
                       Method_System_Collections_Generic_List<MIBHAJBEMIK>_Contains__);
  } while (!bVar2);
  iVar3 = 4;
LAB_035fbb34:
  System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
  return bVar1 && iVar3 == 4;
}


// ===== public UnityEvent get_OnHintUp()  [RVA 0x34FBBDC]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_OnHintUp @ RVA 0x34FBBDC

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Common_Hints_HintGroup__get_OnHintUp
          (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnHintUp;
}


// ===== public void RebuildHints()  [RVA 0x34FBBE4]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$RebuildHints @ RVA 0x34FBBE4

void Nekki_SF2_GUI_Common_Hints_HintGroup__RebuildHints
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  uint length;
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Collections_Generic_List_HintUI__o *pSVar7;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_T__o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568824 & 1) == 0) {
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
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568824 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pNVar5 = (__this->fields)._Description;
  if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    iVar3 = UnityEngine_Transform__GetSiblingIndex(pUVar6,(MethodInfo *)0x0);
    pNVar8 = (__this->fields)._ExtraImage;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar8 = (__this->fields)._ExtraImage;
                    /* try { // try from 035fbd04 to 036fbe67 has its CatchHandler @ 035fbd04
                       catch() { ... } // from try @ 035fbd04 with catch @ 035fbd04
                       catch() { ... } // from try @ 035fbe70 with catch @ 035fbd04
                       catch() { ... } // from try @ 035fbea4 with catch @ 035fbd04
                       catch() { ... } // from try @ 035fbec8 with catch @ 035fbd04
                       catch() { ... } // from try @ 035fbf08 with catch @ 035fbd04 */
      if ((pNVar8 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_035fbedc;
      iVar4 = UnityEngine_Transform__GetSiblingIndex(pUVar6,(MethodInfo *)0x0);
      bVar1 = iVar4 == 0;
    }
    else {
      bVar1 = false;
    }
    pSVar7 = (__this->fields).DEDJHBCOMCJ;
    if (pSVar7 != (System_Collections_Generic_List_HintUI__o *)0x0) {
      if (0 < (pSVar7->fields)._size) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar7,
                   Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
        local_60.fields._index = local_98.fields._index;
        local_60.fields._version = local_98.fields._version;
        local_60.fields._list = local_98.fields._list;
        local_60.fields._current = local_98.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__
                                 ), bVar2) {
          if ((UnityEngine_Component_o *)local_60.fields._current == (UnityEngine_Component_o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)local_60.fields._current,
                                   (MethodInfo *)0x0);
          Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
        pSVar7 = (__this->fields).DEDJHBCOMCJ;
        if (pSVar7 == (System_Collections_Generic_List_HintUI__o *)0x0) goto LAB_035fbedc;
        length = (pSVar7->fields)._size;
        method_00 = (MethodInfo *)(ulong)length;
        (pSVar7->fields)._size = 0;
        (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
        if (0 < (int)length) {
          System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
        }
      }
      Nekki_SF2_GUI_Common_Hints_HintGroup__HPFLNMEJPEF(__this,true,method_00);
      __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
      if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
        System_Collections_Generic_List<Int32Enum>__GetEnumerator
                  (&local_98,__this_00,
                   Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                                 ), bVar2) {
          Nekki_SF2_GUI_Common_Hints_HintGroup__LDEODGHMPCG
                    (__this,(int32_t)local_80.fields._current,method_00);
        }
        System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
        pNVar5 = (__this->fields)._Description;
        if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          if (iVar3 == 0) {
            UnityEngine_Transform__SetAsFirstSibling(pUVar6,(MethodInfo *)0x0);
          }
          else {
            UnityEngine_Transform__SetAsLastSibling(pUVar6,(MethodInfo *)0x0);
                    /* try { // try from 035fbe68 to 036fbe6f has its CatchHandler @ 035fbeac */
          }
                    /* try { // try from 035fbe70 to 036fbe9f has its CatchHandler @ 035fbd04 */
          pNVar8 = (__this->fields)._ExtraImage;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar2) {
            pNVar8 = (__this->fields)._ExtraImage;
                    /* try { // try from 035fbea0 to 036fbea3 has its CatchHandler @ 035fbea8 */
                    /* try { // try from 035fbea4 to 036fbec3 has its CatchHandler @ 035fbd04 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fbea0 with catch @ 035fbea8
                        */
            if ((pNVar8 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
               (pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
               pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_035fbedc;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fbe68 with catch @ 035fbeac
                        */
            if (bVar1) {
              UnityEngine_Transform__SetAsFirstSibling(pUVar6,(MethodInfo *)0x0);
            }
            else {
              UnityEngine_Transform__SetAsLastSibling(pUVar6,(MethodInfo *)0x0);
            }
          }
                    /* try { // try from 035fbec4 to 036fbec7 has its CatchHandler @ 035fbef0 */
                    /* try { // try from 035fbec8 to 036fbeff has its CatchHandler @ 035fbd04 */
          return;
        }
      }
    }
  }
LAB_035fbedc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsAnimationAvailable()  [RVA 0x34FC1CC]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_IsAnimationAvailable @ RVA 0x34FC1CC

bool Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsAnimationAvailable
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._IsAnimationAvailable;
}


// ===== public ResolutionImage get_ExtraImage()  [RVA 0x34FC1D4]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_ExtraImage @ RVA 0x34FC1D4

Nekki_SF2_GUI_ResolutionImage_o *
Nekki_SF2_GUI_Common_Hints_HintGroup__get_ExtraImage
          (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._ExtraImage;
}


// ===== public FEEECOADFNH get_ID()  [RVA 0x34FC1DC]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_ID @ RVA 0x34FC1DC

int32_t Nekki_SF2_GUI_Common_Hints_HintGroup__get_ID
                  (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._ID;
}


// ===== public bool get_IsTutorialBlockActive()  [RVA 0x34FC1E4]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_IsTutorialBlockActive @ RVA 0x34FC1E4

bool Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsTutorialBlockActive
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = TutorialExtension__MNKFDLHJPAA
                    ((UnityEngine_UI_Selectable_o *)(__this->fields)._Button,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void RefreshHintIDs()  [RVA 0x34FAFFC]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$RefreshHintIDs @ RVA 0x34FAFFC

void Nekki_SF2_GUI_Common_Hints_HintGroup__RefreshHintIDs
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  FUN_03f936a0(DAT_04568825);
  return;
}


// ===== private void LDEODGHMPCG(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x34FBFC4]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$LDEODGHMPCG @ RVA 0x34FBFC4

void Nekki_SF2_GUI_Common_Hints_HintGroup__LDEODGHMPCG
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,int32_t OHLKNCPBCBL,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  Nekki_SF2_GUI_Common_Hints_HintUI_o *__this_00;
  UnityEngine_Object_o *__this_01;
  System_String_o *value;
  UnityEngine_Transform_o *__this_02;
  System_Collections_Generic_List_HintUI__o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_Common_Hints_HintUI_array *pNVar5;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04568826 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&HintCreator_TypeInfo);
                    /* try { // try from 035fc00c to 036fc013 has its CatchHandler @ 035fc07c */
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Add__);
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
                    /* try { // try from 035fc028 to 036fc033 has its CatchHandler @ 035fc070 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568826 = 1;
  }
                    /* try { // try from 035fc034 to 036fc063 has its CatchHandler @ 035fbf20 */
  if ((HintCreator_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HintCreator__LDEODGHMPCG(OHLKNCPBCBL,1,(MethodInfo *)0x0);
                    /* try { // try from 035fc064 to 036fc067 has its CatchHandler @ 035fc078 */
                    /* try { // try from 035fc068 to 036fc06b has its CatchHandler @ 035fc074 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035fc06c to 036fc093 has its CatchHandler @ 035fbf20 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fc028 with catch @ 035fc070
                        */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fc068 with catch @ 035fc074
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fc064 with catch @ 035fc078
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fc00c with catch @ 035fc07c
                        */
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar3) {
    return;
  }
  if (__this_00 != (Nekki_SF2_GUI_Common_Hints_HintUI_o *)0x0) {
                    /* try { // try from 035fc094 to 036fc097 has its CatchHandler @ 035fc0b8 */
    __this_01 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 035fc098 to 036fc0bf has its CatchHandler @ 035fbf20 */
    local_48.klass = (System_Enum_c *)MIBHAJBEMIK_TypeInfo;
                    /* catch() { ... } // from try @ 035fc094 with catch @ 035fc0b8 */
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = OHLKNCPBCBL;
    value = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
                    /* try { // try from 035fc0c0 to 036fc0c7 has its CatchHandler @ 035fc0dc */
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
                    /* try { // try from 035fc0c8 to 036fc0d3 has its CatchHandler @ 035fbf20 */
      UnityEngine_Object__set_name(__this_01,value,(MethodInfo *)0x0);
                    /* try { // try from 035fc0d4 to 036fc0db has its CatchHandler @ 035fc0dc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035fc0c0 with catch @ 035fc0dc
                       catch(type#2 @ 00000000) { ... } // from try @ 035fc0d4 with catch @ 035fc0dc
                        */
      __this_02 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Transform_o *)0x0) {
        method_01 = (MethodInfo *)0x0;
        UnityEngine_Transform__SetParent
                  (__this_02,(__this->fields)._HintsParent,false,(MethodInfo *)0x0);
        bVar3 = Nekki_SF2_GUI_Common_Hints_HintUI__get_IsSeparator(__this_00,(MethodInfo *)0x0);
        if (!bVar3) {
          bVar3 = Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsClickable(__this,method_00);
          if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(ECNCJPCKOLN_TypeInfo);
          }
          bVar4 = ECNCJPCKOLN__IDEEKLMIOOD(OHLKNCPBCBL,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Common_Hints_HintGroup__HPFLNMEJPEF(__this,bVar3 && bVar4,method_01);
        }
        lVar2 = Method_System_Collections_Generic_List<HintUI>_Add__;
        __this_03 = (__this->fields).DEDJHBCOMCJ;
        if (__this_03 != (System_Collections_Generic_List_HintUI__o *)0x0) {
          pNVar5 = (__this_03->fields)._items;
          (__this_03->fields)._version = (__this_03->fields)._version + 1;
          if (pNVar5 != (Nekki_SF2_GUI_Common_Hints_HintUI_array *)0x0) {
            uVar1 = (__this_03->fields)._size;
            if (uVar1 < (uint)pNVar5->max_length) {
              (__this_03->fields)._size = uVar1 + 1;
              pNVar5->m_Items[(int)uVar1] = __this_00;
              thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,__this_00);
              return;
            }
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_03,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GKHAKLDEIJI(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x34FC1F0]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$GKHAKLDEIJI @ RVA 0x34FC1F0

void Nekki_SF2_GUI_Common_Hints_HintGroup__GKHAKLDEIJI
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  SFButton_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  MethodInfo *method_00;
  
  if ((((__this->fields)._IsAnimationAvailable != false) &&
      (((iVar2 = Nekki_SF2_GUI_Common_Hints_HintGroup__IMIMOLCJELD
                           (__this,(MethodInfo *)(ulong)(uint)NAIJBCMHBFK), iVar2 == -1 ||
        (iVar2 == OPHMGAKOJLP)) && ((__this->fields).BBDACLMINDN != false)))) &&
     (bVar1 = Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsHintsReleased(__this,method_00), bVar1)) {
    __this_00 = (__this->fields)._Button;
    (__this->fields).BBDACLMINDN = false;
    if (__this_00 != (SFButton_o *)0x0) {
      SFButton__SetStateNormal(__this_00,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._OnHintUp;
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__Invoke(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public bool get_IsShortcut()  [RVA 0x34FC26C]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_IsShortcut @ RVA 0x34FC26C

bool Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsShortcut
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._IsShortcut;
}


// ===== public bool ContainsHintID(MIBHAJBEMIK OHLKNCPBCBL)  [RVA 0x34FC274]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$ContainsHintID @ RVA 0x34FC274

bool Nekki_SF2_GUI_Common_Hints_HintGroup__ContainsHintID
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,int32_t OHLKNCPBCBL,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_T__o *__this_00;
  
  if ((DAT_04568827 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Contains__);
    DAT_04568827 = 1;
  }
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
  if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
    bVar1 = System_Collections_Generic_List<Int32Enum>__Contains
                      (__this_00,OHLKNCPBCBL,
                       Method_System_Collections_Generic_List<MIBHAJBEMIK>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ADOIJKNGHON()  [RVA 0x34FC2CC]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$ADOIJKNGHON @ RVA 0x34FC2CC

void Nekki_SF2_GUI_Common_Hints_HintGroup__ADOIJKNGHON
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568828 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Clear__);
    DAT_04568828 = 1;
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


// ===== public void set_IsAnimationAvailable(bool CJNHFNHJHPE)  [RVA 0x34FC338]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$set_IsAnimationAvailable @ RVA 0x34FC338

void Nekki_SF2_GUI_Common_Hints_HintGroup__set_IsAnimationAvailable
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IsAnimationAvailable = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_Hints_HintGroup__AIJOGDFDDPB(__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  return;
}


// ===== public UnityEvent get_OnHintDown()  [RVA 0x34FC37C]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_OnHintDown @ RVA 0x34FC37C

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Common_Hints_HintGroup__get_OnHintDown
          (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnHintDown;
}


// ===== private void Awake()  [RVA 0x34FC384]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$Awake @ RVA 0x34FC384

void Nekki_SF2_GUI_Common_Hints_HintGroup__Awake
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__o *pSVar3;
  System_Enum_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_04568829 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintGroup_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintGroup_GKHAKLDEIJI__);
    DAT_04568829 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Common_Hints_HintGroup__GMGNDMJDBAL(__this,method);
  Nekki_SF2_GUI_Common_Hints_HintGroup__ADOIJKNGHON(__this,method_00);
  Nekki_SF2_GUI_Common_Hints_HintGroup__AIJOGDFDDPB(__this,method_01);
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 035fc4ec to 036fc4f3 has its CatchHandler @ 035fc680 */
    return;
  }
  pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar2->fields).KIHMKIEFOEI;
    pSVar3 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    local_34 = 0;
    pSVar4 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_34);
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar3,pSVar4,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
      pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar2->fields).GMLEPHMBMPD;
        pSVar3 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                    /* try { // try from 035fc4a4 to 036fc4ab has its CatchHandler @ 035fc684 */
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    /* try { // try from 035fc4c0 to 036fc4c3 has its CatchHandler @ 035fc660 */
        local_38 = 0;
                    /* try { // try from 035fc4c4 to 036fc4cb has its CatchHandler @ 035fc66c */
        pSVar4 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_38);
        if (__this_01 != (JPGJLKENNCC_o *)0x0) {
                    /* try { // try from 035fc4d8 to 036fc4e3 has its CatchHandler @ 035fc670 */
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar3,pSVar4,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ODLJFAIHELG get_HintScheme()  [RVA 0x34FC588]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_HintScheme @ RVA 0x34FC588

int32_t Nekki_SF2_GUI_Common_Hints_HintGroup__get_HintScheme
                  (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  return (__this->fields).AKOLAICNIJF;
}


// ===== public LabelAlias get_Description()  [RVA 0x34FC590]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_Description @ RVA 0x34FC590

Nekki_SF2_GUI_LabelAlias_o *
Nekki_SF2_GUI_Common_Hints_HintGroup__get_Description
          (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._Description;
}


// ===== private int IMIMOLCJELD()  [RVA 0x34FB570]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$IMIMOLCJELD @ RVA 0x34FB570

int32_t Nekki_SF2_GUI_Common_Hints_HintGroup__IMIMOLCJELD
                  (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Object_o *x;
  
  if ((DAT_0456882a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInParent<HintList>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456882a = 1;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Component__GetComponentInParent<object>
                ((UnityEngine_Component_o *)__this,
                 Method_UnityEngine_Component_GetComponentInParent<HintList>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = *(int32_t *)&x[2].monitor;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


// ===== private void GMGNDMJDBAL()  [RVA 0x34FC4F8]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$GMGNDMJDBAL @ RVA 0x34FC4F8

void Nekki_SF2_GUI_Common_Hints_HintGroup__GMGNDMJDBAL
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_HintUI__o *result;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = __this;
                    /* try { // try from 035fc508 to 036fc50f has its CatchHandler @ 035fc5c8 */
  if ((DAT_0456882b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<HintUI>__);
                    /* try { // try from 035fc524 to 036fc527 has its CatchHandler @ 035fc5bc */
    auVar1 = FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Clear__);
                    /* try { // try from 035fc528 to 036fc52f has its CatchHandler @ 035fc5c0 */
    DAT_0456882b = 1;
  }
  result = (__this->fields).DEDJHBCOMCJ;
  if (result != (System_Collections_Generic_List_HintUI__o *)0x0) {
    length = (result->fields)._size;
    (result->fields)._size = 0;
    (result->fields)._version = (result->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(result->fields)._items,0,length,(MethodInfo *)0x0);
      result = (__this->fields).DEDJHBCOMCJ;
    }
                    /* try { // try from 035fc56c to 036fc58f has its CatchHandler @ 035fc5c4 */
    UnityEngine_Component__GetComponentsInChildren<object>
              ((UnityEngine_Component_o *)__this,true,(System_Collections_Generic_List_T__o *)result
               ,Method_UnityEngine_Component_GetComponentsInChildren<HintUI>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
}


// ===== public bool get_RefreshSchemeForSwitch()  [RVA 0x34FC598]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_RefreshSchemeForSwitch @ RVA 0x34FC598

bool Nekki_SF2_GUI_Common_Hints_HintGroup__get_RefreshSchemeForSwitch
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
                    /* try { // try from 035fc59c to 036fc5a3 has its CatchHandler @ 035fc67c */
  return (__this->fields)._RefreshSchemeForSwitch;
}


// ===== private void AIJOGDFDDPB()  [RVA 0x34FC344]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$AIJOGDFDDPB @ RVA 0x34FC344

void Nekki_SF2_GUI_Common_Hints_HintGroup__AIJOGDFDDPB
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  SFButton_o *pSVar1;
  
  pSVar1 = (__this->fields)._Button;
  (__this->fields).BBDACLMINDN = false;
  if (pSVar1 != (SFButton_o *)0x0) {
    SFButton__SetStateNormal(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._Button;
    if (pSVar1 != (SFButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pSVar1,(__this->fields)._IsAnimationAvailable,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035fc378 to 036fc4a3 has its CatchHandler @ 035fc378
                       catch() { ... } // from try @ 035fc378 with catch @ 035fc378
                       catch() { ... } // from try @ 035fc5b8 with catch @ 035fc378
                       catch() { ... } // from try @ 035fc5ec with catch @ 035fc378
                       catch() { ... } // from try @ 035fc650 with catch @ 035fc378
                       catch() { ... } // from try @ 035fc6a4 with catch @ 035fc378
                       catch() { ... } // from try @ 035fc6d4 with catch @ 035fc378 */
  FUN_01bab8c8();
}


// ===== private void BEBGOPNMHON(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x34FC5A0]
// Nekki.SF2.GUI.Common.Hints.HintGroup$$BEBGOPNMHON @ RVA 0x34FC5A0

void Nekki_SF2_GUI_Common_Hints_HintGroup__BEBGOPNMHON
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  SFButton_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  MethodInfo *method_00;
  
                    /* try { // try from 035fc5ac to 036fc5b7 has its CatchHandler @ 035fc5cc */
                    /* try { // try from 035fc5b8 to 036fc5e7 has its CatchHandler @ 035fc378 */
                    /* catch() { ... } // from try @ 035fc524 with catch @ 035fc5bc */
                    /* catch() { ... } // from try @ 035fc528 with catch @ 035fc5c0 */
                    /* catch() { ... } // from try @ 035fc56c with catch @ 035fc5c4 */
                    /* catch() { ... } // from try @ 035fc508 with catch @ 035fc5c8 */
                    /* catch() { ... } // from try @ 035fc5ac with catch @ 035fc5cc */
  if ((((__this->fields)._IsAnimationAvailable != false) &&
      (((iVar2 = Nekki_SF2_GUI_Common_Hints_HintGroup__IMIMOLCJELD
                           (__this,(MethodInfo *)(ulong)(uint)NAIJBCMHBFK), iVar2 == -1 ||
        (iVar2 == OPHMGAKOJLP)) && ((__this->fields).BBDACLMINDN == false)))) &&
     (bVar1 = Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsHintsPressed(__this,method_00), bVar1)) {
    __this_00 = (__this->fields)._Button;
                    /* try { // try from 035fc5e8 to 036fc5eb has its CatchHandler @ 035fc654 */
    (__this->fields).BBDACLMINDN = true;
                    /* try { // try from 035fc5ec to 036fc627 has its CatchHandler @ 035fc378 */
    if (__this_00 != (SFButton_o *)0x0) {
      SFButton__SetStatePressed(__this_00,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._OnHintDown;
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__Invoke(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

