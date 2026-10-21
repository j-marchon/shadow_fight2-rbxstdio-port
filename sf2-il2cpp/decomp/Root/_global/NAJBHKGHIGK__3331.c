// TypeDefIndex 3331
// Namespace: 
// [Extension]
// public static class NAJBHKGHIGK
// Fields:

// ===== public static void JKGCKABLLKD(UnityEventBase AAJGEHHPMGH, UnityEventCallState ICJLHMDFMKG)  [RVA 0x352C90C]
// NAJBHKGHIGK$$JKGCKABLLKD @ RVA 0x352C90C

void NAJBHKGHIGK__JKGCKABLLKD
               (UnityEngine_Events_UnityEventBase_o *AAJGEHHPMGH,int32_t ICJLHMDFMKG,
               MethodInfo *method)

{
  int32_t iVar1;
  int index;
  
  if (AAJGEHHPMGH != (UnityEngine_Events_UnityEventBase_o *)0x0) {
    iVar1 = UnityEngine_Events_UnityEventBase__GetPersistentEventCount
                      (AAJGEHHPMGH,(MethodInfo *)0x0);
    if (0 < iVar1) {
      index = 0;
      do {
        UnityEngine_Events_UnityEventBase__SetPersistentListenerState
                  (AAJGEHHPMGH,index,ICJLHMDFMKG,(MethodInfo *)0x0);
        index = index + 1;
      } while (iVar1 != index);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

