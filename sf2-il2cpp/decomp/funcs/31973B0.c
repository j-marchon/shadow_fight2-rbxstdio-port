// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ButtonRelease @ RVA 0x31973B0

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ButtonRelease
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t OOJKNECICBP;
  int32_t *piVar1;
  OIIEGNHALFL_o *__this_00;
  System_Action_GGFFOJJGHGP__o *pSVar2;
  
  if ((DAT_04566a7f & 1) == 0) {
    FUN_01bab630(&DMMJFKCBHEK_TypeInfo);
    FUN_01bab630(&OIIEGNHALFL_TypeInfo);
    DAT_04566a7f = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (DMMJFKCBHEK_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int32_t *)thunk_FUN_01bda96c(IMMNELPBGIF);
    OOJKNECICBP = *piVar1;
    pSVar2 = (__this->fields).GAIOLDHGLHA;
    __this_00 = (OIIEGNHALFL_o *)thunk_FUN_01bda818(OIIEGNHALFL_TypeInfo);
    OIIEGNHALFL___ctor(__this_00,OOJKNECICBP,(MethodInfo *)0x0);
    if (pSVar2 != (System_Action_GGFFOJJGHGP__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03297464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,__this_00,
                 (pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

