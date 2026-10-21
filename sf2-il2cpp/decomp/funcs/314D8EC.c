// Nekki.SF2.GUI.Map.ContentCompleteOrLocked$$.ctor @ RVA 0x314D8EC

void Nekki_SF2_GUI_Map_ContentCompleteOrLocked___ctor
               (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *__this,MethodInfo *method)

{
  DNELIPCHKLK_o *__this_00;
  DNELIPCHKLK_o **ppDVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667db & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    DAT_045667db = 1;
    method = extraout_x1;
  }
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo,method);
  DNELIPCHKLK___ctor(__this_00,(MethodInfo *)0x0);
  ppDVar1 = &(__this->fields).AABIECAIFGA;
  *ppDVar1 = __this_00;
  thunk_FUN_01c20e04(ppDVar1,__this_00);
  (__this->fields).GKKNEFKGMKO = -1;
  Nekki_SF2_GUI_Map_ContentBase___ctor((Nekki_SF2_GUI_Map_ContentBase_o *)__this,(MethodInfo *)0x0);
  return;
}

