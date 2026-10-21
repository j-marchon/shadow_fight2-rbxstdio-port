// Nekki.SF2.Core.Fights.Controls.GameController$$Init @ RVA 0x33A4444

void Nekki_SF2_Core_Fights_Controls_GameController__Init
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool IEKDLJAOKCB,
               bool PLNACNFOEAI,bool HHFCPLHHPKM,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *pNVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)PLNACNFOEAI;
  if ((DAT_04567cdc & 1) == 0) {
                    /* try { // try from 034a4480 to 035a448b has its CatchHandler @ 034a3fe4 */
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                    /* try { // try from 034a448c to 035a4493 has its CatchHandler @ 034a4494 */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
                    /* catch() { ... } // from try @ 034a4300 with catch @ 034a4494
                       catch() { ... } // from try @ 034a43b8 with catch @ 034a4494
                       catch() { ... } // from try @ 034a4408 with catch @ 034a4494
                       catch() { ... } // from try @ 034a448c with catch @ 034a4494 */
    DAT_04567cdc = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    Nekki_SF2_Core_Fights_Controls_GameController__set_IsShowController
              (__this,*(bool *)((long)&pIVar1[2].klass + 1),method_00);
    pNVar2 = (__this->fields)._ActionButtons;
    if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
      Nekki_SF2_Core_Fights_Controls_ActionButtons__ResetMagicButton(pNVar2,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._ActionButtons;
      if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_ActionButtons__ResetRaidChargeButton
                  (pNVar2,(MethodInfo *)0x0);
        Nekki_SF2_Core_Fights_Controls_GameController__Refresh
                  (__this,IEKDLJAOKCB,PLNACNFOEAI,HHFCPLHHPKM,method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

