// TypeDefIndex 1943
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidBuyConsumablesDialog.BCJBIGPLPHN : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public RaidBuyConsumablesDialog <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x32703D8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog.BCJBIGPLPHN$$.ctor @ RVA 0x32703D8

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3270C08]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog.BCJBIGPLPHN$$System.IDisposable.Dispose @ RVA 0x3270C08

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN_o *__this,
               MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3270C0C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog.BCJBIGPLPHN$$MoveNext @ RVA 0x3270C0C

bool Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN__MoveNext
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN_o *__this,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *PLPFOJADDML;
  Il2CppObject **ppIVar3;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this_00;
  undefined1 auVar4 [16];
  undefined4 local_14;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04567226 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    auVar4 = FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
    DAT_04567226 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
    }
    bVar2 = OOBBAGLCFPF__FLMDOPMDKID((__this_00->fields).PAAIEEFEBKK,(MethodInfo *)0x0);
    if (!bVar2) {
      local_14 = 0xffffffff;
      PLPFOJADDML = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_14);
      Nekki_SF2_GUI_SFMonoBehaviour<object>__CallEvent
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_00,1,PLPFOJADDML,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
    }
  }
  else if (iVar1 == 0) {
    ppIVar3 = &(__this->fields).__2__current;
    *ppIVar3 = (Il2CppObject *)0x0;
    (__this->fields).__1__state = -1;
    thunk_FUN_01c20e04(ppIVar3,0);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3270CE4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog.BCJBIGPLPHN$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3270CE4

Il2CppObject *
Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3270CEC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog.BCJBIGPLPHN$$System.Collections.IEnumerator.Reset @ RVA 0x3270CEC

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN_o *__this,
               MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3270D24]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog.BCJBIGPLPHN$$System.Collections.IEnumerator.get_Current @ RVA 0x3270D24

Il2CppObject *
Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BCJBIGPLPHN_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}

