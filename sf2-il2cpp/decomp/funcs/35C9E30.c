// RaidInfo$$CPMHIEJENLD @ RVA 0x35C9E30

void RaidInfo__CPMHIEJENLD(RaidInfo_o *__this,OHDDKGHEEPA_o *BANHBMINMMP,MethodInfo *method)

{
  int64_t NFBEBOIDJLL;
  System_String_o *str1;
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_04568f90 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2432);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568f90 = 1;
  }
  pSVar1 = StringLiteral_2432;
  if (BANHBMINMMP != (OHDDKGHEEPA_o *)0x0) {
    NFBEBOIDJLL = OHDDKGHEEPA__BKDPJMOCMOI(BANHBMINMMP,(MethodInfo *)0x0);
    str1 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                     (NFBEBOIDJLL,true,true,true,false,false,true,StringLiteral_2086,StringLiteral_1
                      ,true,true,true,true,true,StringLiteral_1,StringLiteral_1,StringLiteral_1,3,
                      (MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._timeLabel;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c9f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

