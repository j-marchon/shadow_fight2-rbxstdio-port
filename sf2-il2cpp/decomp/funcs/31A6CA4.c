// HLPBEPCFOPH$$OFPHPMGMCAL @ RVA 0x31A6CA4

System_String_o * HLPBEPCFOPH__OFPHPMGMCAL(HLPBEPCFOPH_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566b15 & 1) == 0) {
    FUN_01bab630(&StringLiteral_266);
    DAT_04566b15 = 1;
  }
  pSVar1 = System_String__Concat
                     ((__this->fields).DEKCPPOJFEH,StringLiteral_266,(__this->fields).PCNEDMAJMOJ,
                      (MethodInfo *)0x0);
  return pSVar1;
}

