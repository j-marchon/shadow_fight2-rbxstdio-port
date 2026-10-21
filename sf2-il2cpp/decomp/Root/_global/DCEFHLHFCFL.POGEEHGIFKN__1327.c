// TypeDefIndex 1327
// Namespace: 
// [CompilerGenerated]
// private sealed class DCEFHLHFCFL.POGEEHGIFKN : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public DCEFHLHFCFL <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x315D270]
// DCEFHLHFCFL.POGEEHGIFKN$$.ctor @ RVA 0x315D270

void DCEFHLHFCFL_POGEEHGIFKN___ctor
               (DCEFHLHFCFL_POGEEHGIFKN_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x315D2A8]
// DCEFHLHFCFL.POGEEHGIFKN$$System.IDisposable.Dispose @ RVA 0x315D2A8

void DCEFHLHFCFL_POGEEHGIFKN__System_IDisposable_Dispose
               (DCEFHLHFCFL_POGEEHGIFKN_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x315D2AC]
// DCEFHLHFCFL.POGEEHGIFKN$$MoveNext @ RVA 0x315D2AC

bool DCEFHLHFCFL_POGEEHGIFKN__MoveNext(DCEFHLHFCFL_POGEEHGIFKN_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  DCEFHLHFCFL_o *__this_01;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_LLBEEBNCOND_o *pMVar2;
  Il2CppObject **ppIVar3;
  float seconds;
  
  if ((DAT_04566873 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04566873 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (DCEFHLHFCFL_o *)0x0) goto LAB_0325d390;
    DCEFHLHFCFL__POBKBBAGBJE(__this_01,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
    if (pMVar2 != (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) {
      seconds = (pMVar2->fields).OLHCJPEKLLA;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar3,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_0325d390:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x315D394]
// DCEFHLHFCFL.POGEEHGIFKN$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x315D394

Il2CppObject *
DCEFHLHFCFL_POGEEHGIFKN__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (DCEFHLHFCFL_POGEEHGIFKN_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x315D39C]
// DCEFHLHFCFL.POGEEHGIFKN$$System.Collections.IEnumerator.Reset @ RVA 0x315D39C

void DCEFHLHFCFL_POGEEHGIFKN__System_Collections_IEnumerator_Reset
               (DCEFHLHFCFL_POGEEHGIFKN_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_DCEFHLHFCFL_POGEEHGIFKN_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x315D3D4]
// DCEFHLHFCFL.POGEEHGIFKN$$System.Collections.IEnumerator.get_Current @ RVA 0x315D3D4

Il2CppObject *
DCEFHLHFCFL_POGEEHGIFKN__System_Collections_IEnumerator_get_Current
          (DCEFHLHFCFL_POGEEHGIFKN_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

