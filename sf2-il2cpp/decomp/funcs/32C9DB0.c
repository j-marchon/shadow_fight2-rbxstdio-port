// Nekki.SF2.GUI.Map.LampsPanel$$LKNLOCEJOAN @ RVA 0x32C9DB0

void Nekki_SF2_GUI_Map_LampsPanel__LKNLOCEJOAN
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  undefined4 *puVar1;
  System_Action_int__o *pSVar2;
  
  if ((DAT_0456750e & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_0456750e = 1;
  }
  pSVar2 = (__this->fields).BAIENFNFLAI;
  if ((pSVar2 != (System_Action_int__o *)0x0) && (IMMNELPBGIF != (Il2CppObject *)0x0)) {
    if ((IMMNELPBGIF->klass->_1).element_class == (int_TypeInfo->_1).element_class) {
      puVar1 = (undefined4 *)thunk_FUN_01bda96c();
                    /* WARNING: Could not recover jumptable at 0x033c9e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,*puVar1,
                 (pSVar2->fields).super.super.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

