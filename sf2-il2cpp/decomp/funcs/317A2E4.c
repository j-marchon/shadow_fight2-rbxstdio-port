// Nekki.SF2.GUI.Dialogs.StrangerDialog$$HFGKEOFLLPC @ RVA 0x317A2E4

void Nekki_SF2_GUI_Dialogs_StrangerDialog__HFGKEOFLLPC
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  SFToggle_o *pSVar3;
  System_Action_object__o *pSVar4;
  undefined4 local_24;
  
  if ((DAT_04566982 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04566982 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    puVar1 = (undefined4 *)thunk_FUN_01bda96c(IMMNELPBGIF);
    switch(*puVar1) {
    case 0:
    case 1:
    case 2:
                    /* WARNING: Could not recover jumptable at 0x0327a388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._13_OnClose.methodPtr)
                (__this,IMMNELPBGIF,(__this->klass->vtable)._13_OnClose.method);
      return;
    case 3:
      pSVar4 = (__this->fields).DNPHBCPFMPB;
      if (pSVar4 != (System_Action_object__o *)0x0) {
        pSVar3 = (__this->fields)._checkBox;
        if (pSVar3 == (SFToggle_o *)0x0) goto LAB_0327a3e4;
        local_24 = 3;
        if ((pSVar3->fields).super.m_IsOn == false) {
          local_24 = 4;
        }
        uVar2 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,uVar2,
                   (pSVar4->fields).super.super.method);
      }
    }
    return;
  }
LAB_0327a3e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

