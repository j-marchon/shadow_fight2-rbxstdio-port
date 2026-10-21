// TypeDefIndex 242
// Namespace: 
// [CompilerGenerated]
// private sealed class GNNIOHGGHAF.FMJJKFICHKL : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public GNNIOHGGHAF <>4__this; // 0x20
//   private DownloadingScreen <screen>5__2; // 0x28
//   private float <alive>5__3; // 0x30
//   private float <timer>5__4; // 0x34
//   private WaitForSeconds <delay>5__5; // 0x38

// ===== public void .ctor(int <>1__state)  [RVA 0x3227240]
// GNNIOHGGHAF.FMJJKFICHKL$$.ctor @ RVA 0x3227240

void GNNIOHGGHAF_FMJJKFICHKL___ctor
               (GNNIOHGGHAF_FMJJKFICHKL_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3227A04]
// GNNIOHGGHAF.FMJJKFICHKL$$System.IDisposable.Dispose @ RVA 0x3227A04

void GNNIOHGGHAF_FMJJKFICHKL__System_IDisposable_Dispose
               (GNNIOHGGHAF_FMJJKFICHKL_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3227A08]
// GNNIOHGGHAF.FMJJKFICHKL$$MoveNext @ RVA 0x3227A08

bool GNNIOHGGHAF_FMJJKFICHKL__MoveNext(GNNIOHGGHAF_FMJJKFICHKL_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *pNVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  UnityEngine_WaitForSeconds_o **ppUVar3;
  UniRx_SerialDisposable_o *__this_01;
  Il2CppObject **ppIVar4;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o **ppNVar5;
  GNNIOHGGHAF_o *pGVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_04566f81 & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04566f81 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  pGVar6 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (pGVar6 == (GNNIOHGGHAF_o *)0x0) goto LAB_03327bb8;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pNVar2 = Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_Instance((MethodInfo *)0x0);
    ppNVar5 = &(__this->fields)._screen_5__2;
    *ppNVar5 = pNVar2;
    thunk_FUN_01c20e04(ppNVar5,pNVar2);
    if (((*ppNVar5 == (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)0x0) ||
        (Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_Progress(*ppNVar5,0.0,(MethodInfo *)0x0),
        pGVar6 == (GNNIOHGGHAF_o *)0x0)) ||
       (*ppNVar5 == (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)0x0)) goto LAB_03327bb8;
    Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_TitleAlias
              (*ppNVar5,(pGVar6->fields).FHPNAJENHNG,(MethodInfo *)0x0);
    (__this->fields)._alive_5__3 = 0.0;
    fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._timer_5__4 = fVar7;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(__this_00,0.016666668,(MethodInfo *)0x0);
    ppUVar3 = &(__this->fields)._delay_5__5;
    *ppUVar3 = __this_00;
    thunk_FUN_01c20e04(ppUVar3,__this_00);
  }
  fVar7 = (__this->fields)._alive_5__3;
  if (fVar7 <= (pGVar6->fields).HLJCHNGJMLB) {
    fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._alive_5__3 = fVar7 + (fVar8 - (__this->fields)._timer_5__4);
    fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    pNVar2 = (__this->fields)._screen_5__2;
    (__this->fields)._timer_5__4 = fVar7;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_Progress
                (pNVar2,(__this->fields)._alive_5__3 / (pGVar6->fields).HLJCHNGJMLB,
                 (MethodInfo *)0x0);
      ppIVar4 = &(__this->fields).__2__current;
      *ppIVar4 = (Il2CppObject *)(__this->fields)._delay_5__5;
      thunk_FUN_01c20e04(ppIVar4);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else {
    Nekki_SF2_GUI_Dialogs_DownloadingScreen__Destroy((MethodInfo *)0x0);
    __this_01 = (pGVar6->fields).PIGOLBGJAEA;
    if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable
                (__this_01,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      return false;
    }
  }
LAB_03327bb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3227BBC]
// GNNIOHGGHAF.FMJJKFICHKL$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3227BBC

Il2CppObject *
GNNIOHGGHAF_FMJJKFICHKL__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GNNIOHGGHAF_FMJJKFICHKL_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3227BC4]
// GNNIOHGGHAF.FMJJKFICHKL$$System.Collections.IEnumerator.Reset @ RVA 0x3227BC4

void GNNIOHGGHAF_FMJJKFICHKL__System_Collections_IEnumerator_Reset
               (GNNIOHGGHAF_FMJJKFICHKL_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_GNNIOHGGHAF_FMJJKFICHKL_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3227BFC]
// GNNIOHGGHAF.FMJJKFICHKL$$System.Collections.IEnumerator.get_Current @ RVA 0x3227BFC

Il2CppObject *
GNNIOHGGHAF_FMJJKFICHKL__System_Collections_IEnumerator_get_Current
          (GNNIOHGGHAF_FMJJKFICHKL_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

