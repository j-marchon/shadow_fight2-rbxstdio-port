// Nekki.Utils.RaidBetaLogger$$StartEnableReportButtonRoutine @ RVA 0x35A0E0C

void Nekki_Utils_RaidBetaLogger__StartEnableReportButtonRoutine
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Coroutine_o **ppUVar2;
  
  ppUVar2 = &(__this->fields).LIFNPOJAIBB;
  pUVar1 = *ppUVar2;
  method_00 = (MethodInfo *)0x0;
  if (pUVar1 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar1,(MethodInfo *)0x0);
    method_00 = extraout_x1;
  }
  routine = Nekki_Utils_RaidBetaLogger__OKONIJKLKLK(__this,method_00);
  pUVar1 = UnityEngine_MonoBehaviour__StartCoroutine
                     ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  (__this->fields).LIFNPOJAIBB = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  return;
}

