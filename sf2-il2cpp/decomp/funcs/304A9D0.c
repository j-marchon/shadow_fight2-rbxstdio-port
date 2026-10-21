// EGMONPGHHDP$$LJAGKBMCPGO @ RVA 0x304A9D0

void EGMONPGHHDP__LJAGKBMCPGO
               (EGMONPGHHDP_o *__this,int32_t AKMBDACONKH,bool FEPLAGOGJNL,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *value;
  int32_t local_34;
  
  if ((DAT_04565e08 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&StringLiteral_16778);
    DAT_04565e08 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
  MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this_00,(MethodInfo *)0x0);
  local_34 = AKMBDACONKH;
  value = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_16778,value,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    NFNBHPOJFNJ__NOJIAJPLOKB(0xb,(MDNLIFLBFNO_o *)__this_00,FEPLAGOGJNL,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

