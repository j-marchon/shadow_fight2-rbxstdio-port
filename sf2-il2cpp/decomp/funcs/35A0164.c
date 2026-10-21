// Nekki.Utils.RaidBetaLogger$$FKLEGPIEJGA @ RVA 0x35A0164

void Nekki_Utils_RaidBetaLogger__FKLEGPIEJGA
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  
  ppUVar1 = &(__this->fields).DGAAOFBMABD;
  if (*ppUVar1 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,*ppUVar1,(MethodInfo *)0x0);
  }
  *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
  thunk_FUN_01c20e04(ppUVar1,0);
  return;
}

