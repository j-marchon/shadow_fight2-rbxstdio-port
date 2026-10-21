// Nekki.SF2.GUI.ModuleHolder$$NBEJKJDHNIP @ RVA 0x314E5B4

void Nekki_SF2_GUI_ModuleHolder__NBEJKJDHNIP
               (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  if ((DAT_045667ea & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_TypeInfo);
    DAT_045667ea = 1;
  }
  Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields->JIDGIFKNLGJ = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields,__this);
  Nekki_SF2_GUI_ModuleHolder__KPJJLFDBJCN(__this,method_00);
  Nekki_SF2_GUI_ModuleHolder__PLFDCCKIGHJ(__this,method_01);
  Nekki_SF2_GUI_ModuleHolder__KGONKEMBJPH(__this,method_02);
  (*(__this->klass->vtable)._6_MEFBGILCOKN.methodPtr)
            (__this,(__this->klass->vtable)._6_MEFBGILCOKN.method);
  Nekki_SF2_GUI_ModuleHolder__AFNDJEMIDKM(__this,method_03);
  return;
}

