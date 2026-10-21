// Nekki.SF2.GUI.Dialogs.SimpleDialog$$POMMKJGKPGI @ RVA 0x301EB90

void Nekki_SF2_GUI_Dialogs_SimpleDialog__POMMKJGKPGI
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_object__o *pSVar2;
  undefined4 local_24;
  
  if ((DAT_04565c32 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04565c32 = 1;
  }
  pSVar2 = (__this->fields).DNPHBCPFMPB;
  if (pSVar2 != (System_Action_object__o *)0x0) {
    local_24 = 3;
    if (!CJNHFNHJHPE) {
      local_24 = 4;
    }
    uVar1 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,uVar1,(pSVar2->fields).super.super.method);
  }
  return;
}

