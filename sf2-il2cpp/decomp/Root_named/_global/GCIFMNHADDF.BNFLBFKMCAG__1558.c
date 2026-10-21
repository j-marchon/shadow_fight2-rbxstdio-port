// TypeDefIndex 1558
// Namespace: 
// [CompilerGenerated]
// private sealed class DialogsManager.BNFLBFKMCAG
// Fields:
//   public BaseDialog dialog; // 0x10

// ===== internal bool NHBPEJLCPFK(BaseDialog item)  [RVA 0x31ABF88]
// DialogsManager.BNFLBFKMCAG$$NHBPEJLCPFK @ RVA 0x31ABF88

bool DialogsManager_BNFLBFKMCAG__NHBPEJLCPFK
               (DialogsManager_BNFLBFKMCAG_o *__this,Nekki_SF2_GUI_Dialogs_BaseDialog_o *item,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *y;
  
  if ((DAT_04566b46 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b46 = 1;
  }
  y = (__this->fields).dialog;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  return bVar1;
}


// ===== internal bool PPJAJIDFHCG(DialogsManager.NFAHLBCFIPD item)  [RVA 0x31ABFF4]
// DialogsManager.BNFLBFKMCAG$$PPJAJIDFHCG @ RVA 0x31ABFF4

bool DialogsManager_BNFLBFKMCAG__PPJAJIDFHCG
               (DialogsManager_BNFLBFKMCAG_o *__this,DialogsManager_NFAHLBCFIPD_o *item,MethodInfo *method
               )

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *y;
  
  if ((DAT_04566b47 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b47 = 1;
  }
  if (item != (DialogsManager_NFAHLBCFIPD_o *)0x0) {
    x = (item->fields).BHDFAAMNDNC;
    y = (__this->fields).dialog;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31AB978]
// DialogsManager.BNFLBFKMCAG$$.ctor @ RVA 0x31AB978

void DialogsManager_BNFLBFKMCAG___ctor(DialogsManager_BNFLBFKMCAG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

