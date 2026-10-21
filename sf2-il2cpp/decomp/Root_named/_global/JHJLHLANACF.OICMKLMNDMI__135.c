// TypeDefIndex 135
// Namespace: 
// [CompilerGenerated]
// private sealed class JHJLHLANACF.OICMKLMNDMI : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public JHJLHLANACF <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x301B6D8]
// JHJLHLANACF.OICMKLMNDMI$$.ctor @ RVA 0x301B6D8

void JHJLHLANACF_OICMKLMNDMI___ctor
               (JHJLHLANACF_OICMKLMNDMI_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x301BBC4]
// JHJLHLANACF.OICMKLMNDMI$$System.IDisposable.Dispose @ RVA 0x301BBC4

void JHJLHLANACF_OICMKLMNDMI__System_IDisposable_Dispose
               (JHJLHLANACF_OICMKLMNDMI_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x301BBC8]
// JHJLHLANACF.OICMKLMNDMI$$MoveNext @ RVA 0x301BBC8

bool JHJLHLANACF_OICMKLMNDMI__MoveNext(JHJLHLANACF_OICMKLMNDMI_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  JHJLHLANACF_o *__this_01;
  MethodInfo *extraout_x1;
  GameUtils_LLBEEBNCOND_o *pMVar2;
  Il2CppObject **ppIVar3;
  float seconds;
  
  if ((DAT_04565c12 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04565c12 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (JHJLHLANACF_o *)0x0) goto LAB_0311bcac;
    JHJLHLANACF__POBKBBAGBJE(__this_01,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar2 = GameUtils_TypeInfo->static_fields->DMMGOHFKKCA;
    if (pMVar2 != (GameUtils_LLBEEBNCOND_o *)0x0) {
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
LAB_0311bcac:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x301BCB0]
// JHJLHLANACF.OICMKLMNDMI$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x301BCB0

Il2CppObject *
JHJLHLANACF_OICMKLMNDMI__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (JHJLHLANACF_OICMKLMNDMI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x301BCB8]
// JHJLHLANACF.OICMKLMNDMI$$System.Collections.IEnumerator.Reset @ RVA 0x301BCB8

void JHJLHLANACF_OICMKLMNDMI__System_Collections_IEnumerator_Reset
               (JHJLHLANACF_OICMKLMNDMI_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_JHJLHLANACF_OICMKLMNDMI_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x301BCF0]
// JHJLHLANACF.OICMKLMNDMI$$System.Collections.IEnumerator.get_Current @ RVA 0x301BCF0

Il2CppObject *
JHJLHLANACF_OICMKLMNDMI__System_Collections_IEnumerator_get_Current
          (JHJLHLANACF_OICMKLMNDMI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

