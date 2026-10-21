// Core.Appsflyer.BanzaiAppsFlyer$$EPKAEDHPBDE @ RVA 0x35C76E8

void Core_Appsflyer_BanzaiAppsFlyer__EPKAEDHPBDE
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  HMEJGGGPIPL_o *pHVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04568f6f & 1) == 0) {
    FUN_01bab630(&StringLiteral_5402);
    auVar2 = FUN_01bab630(&StringLiteral_12367);
    DAT_04568f6f = 1;
  }
  pHVar1 = (__this->fields).KAPMLAAGDAI;
  if (pHVar1 != (HMEJGGGPIPL_o *)0x0) {
    if ((pHVar1->fields).INIMAINJABF != false) {
      return;
    }
    Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(StringLiteral_5402,StringLiteral_12367,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

