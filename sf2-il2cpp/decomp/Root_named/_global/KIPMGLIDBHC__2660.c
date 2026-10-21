// TypeDefIndex 2660
// Namespace: 
// public class KIPMGLIDBHC : QuestAction
// Fields:

// ===== public void .ctor()  [RVA 0x33BCD1C]
// KIPMGLIDBHC$$.ctor @ RVA 0x33BCD1C

void KIPMGLIDBHC___ctor(KIPMGLIDBHC_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x33BCD24]
// KIPMGLIDBHC$$MAHFCKJGBPP @ RVA 0x33BCD24

void KIPMGLIDBHC__MAHFCKJGBPP(KIPMGLIDBHC_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar2;
  
  if ((DAT_04567db2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567db2 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(pNVar2->klass->vtable)._16_Open.methodPtr)(pNVar2,(pNVar2->klass->vtable)._16_Open.method);
  }
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

