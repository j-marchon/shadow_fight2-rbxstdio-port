// TypeDefIndex 1557
// Namespace: 
// [CompilerGenerated]
// private sealed class DialogsManager.JLFCOKLPCGO
// Fields:
//   public BaseDialog dialog; // 0x10

// ===== public void .ctor()  [RVA 0x31AB270]
// DialogsManager.JLFCOKLPCGO$$.ctor @ RVA 0x31AB270

void DialogsManager_JLFCOKLPCGO___ctor(DialogsManager_JLFCOKLPCGO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool OFADDGOGEEO(DialogsManager.NFAHLBCFIPD item)  [RVA 0x31ABF18]
// DialogsManager.JLFCOKLPCGO$$OFADDGOGEEO @ RVA 0x31ABF18

bool DialogsManager_JLFCOKLPCGO__OFADDGOGEEO
               (DialogsManager_JLFCOKLPCGO_o *__this,DialogsManager_NFAHLBCFIPD_o *item,MethodInfo *method
               )

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *y;
  
  if ((DAT_04566b45 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b45 = 1;
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

