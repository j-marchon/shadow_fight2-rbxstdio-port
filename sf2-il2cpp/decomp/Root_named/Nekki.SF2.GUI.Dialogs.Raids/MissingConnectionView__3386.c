// TypeDefIndex 3386
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class MissingConnectionView : ChatSFView
// Fields:
//   private LabelButton _reconnectButton; // 0x30
//   private LabelAlias _reconnectingLabel; // 0x38

// ===== public void SetStateNoConnection()  [RVA 0x35423E8]
// Nekki.SF2.GUI.Dialogs.Raids.MissingConnectionView$$SetStateNoConnection @ RVA 0x35423E8

void Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView__SetStateNoConnection
               (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04568b03 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568b03 = 1;
    method = extraout_x1;
  }
  pLVar3 = (__this->fields)._reconnectButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar3 = (__this->fields)._reconnectButton;
    if ((pLVar3 == (LabelButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036424c0;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._reconnectingLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar4 = (__this->fields)._reconnectingLabel;
  if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    return;
  }
LAB_036424c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetStateConnecting()  [RVA 0x35424C4]
// Nekki.SF2.GUI.Dialogs.Raids.MissingConnectionView$$SetStateConnecting @ RVA 0x35424C4

void Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView__SetStateConnecting
               (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04568b04 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568b04 = 1;
    method = extraout_x1;
  }
  pLVar3 = (__this->fields)._reconnectButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar3 = (__this->fields)._reconnectButton;
    if ((pLVar3 == (LabelButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0364259c;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._reconnectingLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar4 = (__this->fields)._reconnectingLabel;
  if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    return;
  }
LAB_0364259c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnReconnectPressed()  [RVA 0x35425A0]
// Nekki.SF2.GUI.Dialogs.Raids.MissingConnectionView$$OnReconnectPressed @ RVA 0x35425A0

void Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView__OnReconnectPressed
               (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar2;
  
  if ((DAT_04568b05 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568b05 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).super.FLLHHEODKPH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).super.FLLHHEODKPH;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OnReconnectPressed(pNVar2,(MethodInfo *)0x0)
      ;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3542624]
// Nekki.SF2.GUI.Dialogs.Raids.MissingConnectionView$$.ctor @ RVA 0x3542624

void Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)__this,(MethodInfo *)0x0);
  return;
}

