// GDINNHKFKMB$$EPBENPDCBFE @ RVA 0x3072B3C

bool GDINNHKFKMB__EPBENPDCBFE(GDINNHKFKMB_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *PDEDHIBCEPJ;
  System_String_o *KGLJICLJHEL;
  MethodInfo *method_00;
  
  if ((DAT_04565f8a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&StringLiteral_733);
    DAT_04565f8a = 1;
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = GDINNHKFKMB__ODCFKCPIGJJ(__this,AHEFOIOKDOK,method);
    bVar1 = ((__this->fields).BEGOLMJFLCG ^ bVar1) != 1;
  }
  else {
    PDEDHIBCEPJ = GDINNHKFKMB__ONCFEIGIBGB(__this,AHEFOIOKDOK,method);
    method_00 = (MethodInfo *)0x0;
    bVar1 = System_String__op_Equality
                      (StringLiteral_733,(__this->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
    if (bVar1) {
      if (PDEDHIBCEPJ == (System_Collections_Generic_List_string__o *)0x0) {
LAB_03172c6c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((PDEDHIBCEPJ->fields)._size < 1) {
        bVar1 = false;
        goto LAB_03172c4c;
      }
      method_00 = Method_System_Collections_Generic_List<string>_get_Item__;
      KGLJICLJHEL = (System_String_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)PDEDHIBCEPJ,0,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<string>_get_Item__);
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03172c6c;
      PDEDHIBCEPJ = (AHEFOIOKDOK->fields).MPGOHFNJBLA;
    }
    else {
      if ((__this->fields).HFPDAIABKNH != false) {
        if (PDEDHIBCEPJ == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03172c6c;
        bVar1 = (PDEDHIBCEPJ->fields)._size == 0;
        goto LAB_03172c4c;
      }
      KGLJICLJHEL = (__this->fields).NPFMOEOIEKM;
    }
    bVar1 = GDINNHKFKMB__HBLEFJOCOPK(KGLJICLJHEL,PDEDHIBCEPJ,method_00);
  }
LAB_03172c4c:
  return (bool)(bVar1 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

