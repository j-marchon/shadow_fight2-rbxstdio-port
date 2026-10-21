// TypeDefIndex 3290
// Namespace: 
// [CompilerGenerated]
// private sealed class JLEKKANADII.HFHJKBCIILG : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public int p_deviceID; // 0x20
//   public string p_deviceName; // 0x28
//   public ODLJFAIHELG p_scheme; // 0x30

// ===== public void .ctor(int <>1__state)  [RVA 0x351D4EC]
// JLEKKANADII.HFHJKBCIILG$$.ctor @ RVA 0x351D4EC

void JLEKKANADII_HFHJKBCIILG___ctor
               (JLEKKANADII_HFHJKBCIILG_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x351DBBC]
// JLEKKANADII.HFHJKBCIILG$$System.IDisposable.Dispose @ RVA 0x351DBBC

void JLEKKANADII_HFHJKBCIILG__System_IDisposable_Dispose
               (JLEKKANADII_HFHJKBCIILG_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x351DBC0]
// JLEKKANADII.HFHJKBCIILG$$MoveNext @ RVA 0x351DBC0

/* WARNING: Type propagation algorithm not settling */

bool JLEKKANADII_HFHJKBCIILG__MoveNext(JLEKKANADII_HFHJKBCIILG_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  Il2CppObject **ppIVar3;
  System_Object_array *args;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *extraout_x1;
  System_Action_int__string__ODLJFAIHELG__o *pSVar6;
  System_String_o *pSVar7;
  int32_t local_28;
  int32_t local_24;
  
  if ((DAT_045689a5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&ODLJFAIHELG_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    FUN_01bab630(&StringLiteral_15487/*"[HintSchemeController]: OnDeviceChanged (device[{0}].Name={1}, HintScheme={2})"*/);
    DAT_045689a5 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo,method);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar2,(MethodInfo *)0x0);
    ppIVar3 = &(__this->fields).__2__current;
    *ppIVar3 = pIVar2;
    thunk_FUN_01c20e04(ppIVar3,pIVar2);
    (__this->fields).__1__state = 1;
    return true;
  }
  (__this->fields).__1__state = -1;
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
  local_24 = (__this->fields).p_deviceID;
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  if (args == (System_Object_array *)0x0) {
LAB_0361de20:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0361de20 to 0371de2b has its CatchHandler @ 0361e04c */
    FUN_01bab8c8();
  }
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (lVar4 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
LAB_0361de14:
                    /* try { // try from 0361de14 to 0371de1b has its CatchHandler @ 0361e038 */
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
    thunk_FUN_01c20e04(args->m_Items,pIVar2);
    pSVar7 = (__this->fields).p_deviceName;
    if ((pSVar7 != (System_String_o *)0x0) &&
       (lVar4 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class), lVar4 == 0))
    goto LAB_0361de14;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar7;
      thunk_FUN_01c20e04(args->m_Items + 1,pSVar7);
      local_28 = (__this->fields).p_scheme;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(ODLJFAIHELG_TypeInfo,&local_28);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar4 == 0))
      goto LAB_0361de14;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar2);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogFormat(StringLiteral_15487/*"[HintSchemeController]: OnDeviceChanged (device[{0}].Name={1}, HintScheme={2})"*/,args,(MethodInfo *)0x0);
        if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar6 = JLEKKANADII_TypeInfo->static_fields->JCDGMAEDFIF;
        if (pSVar6 != (System_Action_int__string__ODLJFAIHELG__o *)0x0) {
                    /* try { // try from 0361ddec to 0371ddf3 has its CatchHandler @ 0361e050 */
          (*(code *)(pSVar6->fields).super.super.invoke_impl)
                    ((pSVar6->fields).super.super.method_code,(__this->fields).p_deviceID,
                     (__this->fields).p_deviceName,(__this->fields).p_scheme,
                     (pSVar6->fields).super.super.method);
          return false;
        }
        goto LAB_0361de20;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x351DE24]
// JLEKKANADII.HFHJKBCIILG$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x351DE24

Il2CppObject *
JLEKKANADII_HFHJKBCIILG__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (JLEKKANADII_HFHJKBCIILG_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x351DE2C]
// JLEKKANADII.HFHJKBCIILG$$System.Collections.IEnumerator.Reset @ RVA 0x351DE2C

void JLEKKANADII_HFHJKBCIILG__System_Collections_IEnumerator_Reset
               (JLEKKANADII_HFHJKBCIILG_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
                    /* try { // try from 0361de40 to 0371de47 has its CatchHandler @ 0361e028 */
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0361de4c to 0371de57 has its CatchHandler @ 0361e030 */
  uVar1 = thunk_FUN_01bb9178(&Method_JLEKKANADII_HFHJKBCIILG_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x351DE64]
// JLEKKANADII.HFHJKBCIILG$$System.Collections.IEnumerator.get_Current @ RVA 0x351DE64

Il2CppObject *
JLEKKANADII_HFHJKBCIILG__System_Collections_IEnumerator_get_Current
          (JLEKKANADII_HFHJKBCIILG_o *__this,MethodInfo *method)

{
                    /* try { // try from 0361de68 to 0371de6f has its CatchHandler @ 0361e01c */
  return (__this->fields).__2__current;
}

