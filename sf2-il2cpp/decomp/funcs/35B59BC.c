// FDJKKAFIEFB$$KBBCBDHBEDK @ RVA 0x35B59BC

float FDJKKAFIEFB__KBBCBDHBEDK(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  ulong uVar1;
  DBNEEHGBCJD_o *pDVar2;
  JBEHJGDKPHL_o *pJVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong local_28;
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04568eb7 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    auVar5 = FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    DAT_04568eb7 = 1;
  }
  pDVar2 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar2 != (DBNEEHGBCJD_o *)0x0) {
    pJVar3 = (pDVar2->fields)._DFMPDPJGPLL_k__BackingField;
    if (pJVar3 == (JBEHJGDKPHL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
    }
    fVar4 = (__this->fields).DEKBMBADCIE;
    local_28 = 0;
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_28,(pJVar3->fields).PFHPMEPMFIB,
               Method_System_Nullable<float>__ctor__);
    if ((local_28 & 0xff) != 0) {
      uVar1 = local_28 >> 0x20;
      local_28 = 0;
      System_Nullable<float>___ctor
                ((System_Nullable_float__o)&local_28,fVar4 * (float)uVar1,
                 Method_System_Nullable<float>__ctor__);
      if ((local_28 & 0xff) != 0) {
        return (float)(local_28 >> 0x20);
      }
    }
  }
  return (__this->fields).DEKBMBADCIE;
}

