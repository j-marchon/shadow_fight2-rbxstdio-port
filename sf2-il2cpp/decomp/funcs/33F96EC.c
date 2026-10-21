// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$FGFAPJGPNMA @ RVA 0x33F96EC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__FGFAPJGPNMA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  System_Action_object__o *IELDNEAAPBE;
  LabelButton_o *__this_00;
  
  if ((DAT_04567fa8 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_EMCDMBIKLNE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_17772);
    FUN_01bab630(&StringLiteral_16811);
    FUN_01bab630(&StringLiteral_17301);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567fa8 = 1;
  }
  pNVar2 = JJPNLEPEAFM__JNDPLPKDPCP
                     (StringLiteral_17850,StringLiteral_17772,StringLiteral_16811,
                      StringLiteral_17301,(System_Action_object__o *)0x0,1,0,false,false,
                      StringLiteral_1,true,true,true,true,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
    if (((pNVar2->klass->_2).naturalAligment < bVar1) ||
       ((pNVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    __this_00 = (pNVar2->fields)._btnOK;
    IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (LabelButton_o *)0x0) {
      SFButton__AddEventListener((SFButton_o *)__this_00,2,IELDNEAAPBE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

