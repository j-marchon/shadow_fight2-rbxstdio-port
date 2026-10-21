// Nekki.SF2.GUI.Shop.PerkProgressBar$$Init @ RVA 0x3118150

void Nekki_SF2_GUI_Shop_PerkProgressBar__Init
               (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerkProgressBar_c *pNVar1;
  
  ProgressBar__Init((ProgressBar_o *)__this,(MethodInfo *)0x0);
  pNVar1 = __this->klass;
  (__this->fields).super.super.JGFKHMMNJBA = 0.0;
  (__this->fields).super.super.FGFINIPCGAL = 0.0;
  (__this->fields).super.super.LBDAPHMEAKC = 1.0;
                    /* WARNING: Could not recover jumptable at 0x03218180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar1->vtable)._4_OLOBIPCHMCC.methodPtr)(__this,(pNVar1->vtable)._4_OLOBIPCHMCC.method);
  return;
}

